#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n]; 
    for(int i=0;i<n;i++){
        arr[0][i]=1;
    }
    int tm;
    cin>>tm;
    for(int i=0;i<n;i++){
        cin>>arr[1][i];
    }
    for(int i=2;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i-2 || j>n-i+1){
                arr[i][j]=-1;
            }
            else{
                if(i==2 && j==0){
                    arr[i][j]=((arr[i-1][j])*(arr[i-1][j])-tm*(arr[i-1][j+1]))/arr[i-2][j];
                }
                else{
                    arr[i][j]=((arr[i-1][j])*(arr[i-1][j])-(arr[i-1][j-1])*(arr[i-1][j+1]))/arr[i-2][j];
                }
                
            }
        }
    }
    int s;
    int t;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
            t=arr[i][j];
            s=7;
            if (t<=0)
            {
                s=s-1;
            }
            
            while(fabs(t)>0){
                t=t/10;
                s--;
            }
            for(int k=0;k<=s;k++){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    int dif,pdif=arr[0][0]-arr[0][1],flag=0,j,i;
    for(i=0;i<n;i++){
        for(j=(i==0)?1:0;j<n-1;j++){
            dif=arr[i][j]-arr[i][j+1];
            while((pdif-dif)==0){
                j++;
                if((arr[i][j]-arr[i][j+1])!=0){
                    arr[i][j+1]=arr[i][j];
                    j++;
                    flag=1;
                    break;
                }
            }
            pdif=dif;
        }
        if(flag){
            break;
        }
    }
    for(int k=0;k<(n-j);k++){

    }


    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
            t=arr[i][j];
            s=7;
            if (t<=0)
            {
                s=s-1;
            }
            
            while(fabs(t)>0){
                t=t/10;
                s--;
            }
            for(int k=0;k<=s;k++){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    

    return 0;
}