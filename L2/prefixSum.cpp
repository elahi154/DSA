#include<iostream>
using namespace std;

// void prefixSum(int arr[],int n){
//     int preSum[n];
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=0;j<=i;j++){
//             sum=sum+arr[j];
            
//         }
//         preSum[i]=sum;
//     }
//     for(int i = 0;i<n;i++){
//         cout<<preSum[i]<<endl;
//     }

// }

void prefixSum(int arr[], int n){
    int preSum[n];
    preSum[0]=arr[0];
    for(int i=1; i<n;i++){
        preSum[i]=preSum[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<preSum[i]<<endl;
    }
}

int main(){
    int arr[] = {10,20,30,40,50};
    int n = 5;
    prefixSum(arr,n);
}