typedef int Length;
Length len,maxlen;
Length *lengths[];

typedef char* String;
String p,lineptr[MAXLINES],alloc(int);
int strcmp(String,String);
p=(String) malloc(100);
