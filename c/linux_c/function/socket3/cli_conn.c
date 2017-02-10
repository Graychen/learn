#include <stdio.h>
#include <stddef.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <errno.h>
#include <stddef.h>
#include <unistd.h>


#define CLI_PATH "/var/tmp/"

int cli_conn(const char *name)
{
    int fd,len,err,rval;
    struct sockaddr_un un;

    if((fd = socket(AF_UNIX,SOCK_STREAM,0))<0)
        return(-1);

    memset(&un,0,sizeof(un));
    un.sun_family = AF_UNIX;
    sprintf(un.sun_path,"%s%05d",CLI_PATH,getpid());
    len = offsetof(struct sockaddr_un, sun_path) + strlen(un.sun_path);

    unlink(un.sun_path);
    if(bind(fd,(struct sockaddr *)&un,len)<0){
        rval = -2;
        goto errout;
    }

    memset(&un,0,sizeof(un));
    un.sun_family = AF_UNIX;
    strcpy(un.sun_path,name);
    len = offsetof(struct sockaddr_un,sun_path)+strlen(name);
    if(connect(fd,(struct sockaddr *)&un,len)<0){
        rval = -4;
        goto errout;
    }
    return(fd);

errout:
    err = errno;
    close(fd);
    errno = err;
    return(rval);
}
