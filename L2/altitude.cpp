#include<iostream>
using namespace std;

void higestAltitude (int arr[], int n){
    int h_alt[n+1];
    h_alt[0]=0;
    int alt =INT_MIN;
    for(int i=1; i<=n;i++){
        h_alt[i]=arr[i-1]+h_alt[i-1];
    }
    for(int i=0; i<n;i++){
       if(h_alt[i]>alt){
        alt=h_alt[i];
       }

    }
    cout<<alt<<endl;

}

int main(){
    int arr[]={-5,4,2,-7,6};
    int n=5;
    higestAltitude(arr,n);
}