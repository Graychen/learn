#include <stdio.h>

#define LEN8

int a[LEN]={5,2,4,7,1,3,2,6};

void merge(int start,int mid,int end){

}

void sort(int start,int end){
    int mid;
    if(start<end){
        mid=(start+end)/2;
        printf("sort(%d-%d,%d-%d) %d %d %d %d %d %d %d %d\n");
        sort(start,mid);
        sort(mid+1,end);
        merge(start,mid,end);
        printf("merge(%d-%d,%d-%d) %d %d %d %d %d %d %d %d\n",start,mid,mid+1,end,a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
        
    }
}
int main(void){
    sort(0,LEN-1);
    return 0;
}
