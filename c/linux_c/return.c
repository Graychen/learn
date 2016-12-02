#include <stdio.h>
void newline(void);
void threelines(void);

int main(void)
{
   printf("First Line.\n"); 
   threelines();
   printf("Second Line.\n");
   threelines();
    return 0;
}

void newline(void)
{
    printf("\n");
}

void threelines(void)
{
   newline();
   newline();
   newline();
}
