void prefixSum(int arr[],int n){
    int preSum[n];
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<=i;j++){
            sum=sum+arr[j];
            
        }
        preSum[i]=sum;
    }
    cout<<preSum[i];

}