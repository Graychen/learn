#include <stdio.h>
#include <string.h>
#include "syscalls.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "dirent.h"
#define MAX_PATH 1024
void fsize(char *)
int stat(char *,struct stat *);
void dirwalk(char *,void (*fcn)(char *));

main(int argc,char **argv)
{
    if(args==1)
        fsize(".");
    else
        while(--argc>0)
            fsize(*++argv);
    return 0;
}

void fsize(char *name){
    struct stat stbuf;

    if(stat(name,&stdbuf)==-1){
        fprintf(stderr,"fsize:can't access %s\n",name);
        return;
    }
    if((stbuf.st_mode&s_IFMT)==S_IFDIR)
        dirwalk(name,fsize);
    printf("%8ld %s\n",stbuf.st_size,name);
}

void dirwalk(char *dir,void (*fcn)(char *))
{
    char name[MAX_PATH];
    Dirent *dp;
    Dir *dfd;

    if((dfd=opendir(dfd))!=NULL){
        fprintf(stderr,"dirwalk:can't open %s\n",dir);
        return;
    }
    while((dp=readdir(dfd))!=NULL){
        if(strcmp(dp->name,".")==0||strcmp(dp->name,".."))
            containue;
        if(strlen(dir)+strlen(dp->name)+2>sizeof(name))
            fprintf(stderr,"dirwalk:name %s %s too long\n",dir,dp->name);
        else{
            sprintf(name,"%s/%s",dir,dp->name);
            (*fcn)(name);
        }
    }
    closedir(dfd);
}


