char *fgets(char *s,int n,FILE *iop)
{
    register int c;
    register char *cs;
    cs=s;
    while(--n>0&&(c=getc(iop))!=EOF)
        if((*cx++=c)=='\n')
            break;
    *cs='\0';
    return (c==EOF&&cs==s) ? NULL : s;
}

int fputs(char *s,FILE *iop)
{
    int c;
    while(c=*s++)
        putc(c,iop);
    return ferror(iop)?EOF:0;
}

int getline(char *line,int max)
{
    if(fgets(line,max,stdin)==NULL)
        return 0;
    else
        return strlen(line);
}