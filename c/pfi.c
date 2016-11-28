typedef int (*PFI)(char *,char *);
union u_tag{
    int ival;
    float fval;
    char *sval;
} u;

if(utype==INT)
    printf("%d\n",u.ival);
if(utype==FLOAT)
    printf("%f\n",u.fval);
if(utype==STRING)
    printf("%s\n",u.sval);
else
    printf("bad type %d in utype\n",utype);

    struct {
        char *name;
        int flags;
        int utype;
        union{
            int ival;
            float fval;
            char *sval;
        } u;
    } symtab [NSYM];
