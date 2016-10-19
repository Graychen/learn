#include <stdio.h>
void main(){
    int fahr,celsius;//华氏温度，摄氏温度
    int lower,upper,step;

    lower = 0; //温度表的下限
    upper = 300;//温度表的上限
    step  = 20; //步长

    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr-32)/9;
        printf("%d\t%d\n",fahr,celsius);
        fahr = fahr+step;
    }
}
