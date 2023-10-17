#include<bits/stdc++.h>
using namespace std;
void findclosetozerosumpair(int arr[],int n){
    if(n<2){
        cout<<"Array should contain at least two elements."<<endl;
        return;
    }
    sort(arr,arr+n);
    int l=0;
    int r=n-1;
    int min=INT_MAX;
    int ninleft,ninright,minsum;
    while(l<r){
        int sum=arr[l]+arr[r];
        if(abs(sum)<abs(minsum)){
            minsum=sum;
            ninleft=l;
            ninright=r;
        }
        if(sum<0){
            l++;

        }else{
            r--;
        }
    }
    cout<<"CLOSE TO ZERO SUM PAIR:"<<arr[ninleft]<<"and"<<arr[ninright]<<endl;

}
int main()
{
    int arr[]={1,60,+10,70,-80,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    findclosetozerosumpair(arr,n);
    return 0;
}