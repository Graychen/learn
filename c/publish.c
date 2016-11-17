#include <stdio.h>
#include <stdlib.h>


#define MAPS 1000;
#define NUMBER '0';

int getop(char []);
void push(double);
double pop(void);

main(){
    int type;
    double op2;
    char s[MAXOP];

    while((type=getop(s))!=EOF){
        switch (type){
        case NUMBER;
            push(atof(s));
            break;
        }
            
    }
}




