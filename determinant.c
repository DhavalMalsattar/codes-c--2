#include<stdio.h>
int *p;
int gn;
int det(int a[*p][*p],int id[*p],int n){
    //printf("$$$$$$$$$$$$$\n");

    if(n==1){
        for(int i=0;i<gn;i++){
            if(id[i]==1){
                //printf("$%d\n",a[0][i]);
                return a[0][i];
            }
        }
    }
    int sum=0;
    int s=1;
    for(int i=gn-1;i>=0;i--){
        if(id[i]==1){
            id[i]=0;
            sum=sum+s*a[n-1][i]*det(a,id,n-1);
            //printf("\n$%d$\n",sum);
            id[i]=1;
            s=s*-1;
        }
    }
    return sum;
}
int main(){

    int n;
    
    scanf("%d",&n);
    gn=n;
    p=&n;
    int a[n][n];
    int id[n];
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
            id[i]=1;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    printf("%d",det(a,id,n));



    return 0;
}