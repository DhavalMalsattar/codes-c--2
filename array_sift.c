#include<stdio.h>
int main(){
    int a[10],c=0;
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int t=a[0],j=0,k;
    scanf("%d",&k);
    int b[k];
    for(int i=0;i<k;i++){
        b[i]=a[10-k+i];

    }
    // do{
    //     if(j<k){
    //         a[j]=a[10-k+j];
    //         j=10-k+j;
    //     }else{
    //         a[j]=a[j-k];
    //         j=j-k;
    //     }
    //     c++;
    // }while(c!=5);
    for(int i=10-1;i>=k;i--){
        a[i]=a[i-k];
    }
    for(int i=0;i<k;i++){
        a[i]=b[i];
    }
     
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }

    return 0;
}