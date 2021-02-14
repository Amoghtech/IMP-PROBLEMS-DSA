bool sumpartition(int N, int arr[],int index,int sum){
    if(sum==0)
    return true;
    
    
    if(index>=N ){
        return false;
    }
    
    if(arr[index]<=sum){
        if(sumpartition(N,arr,index+1,sum-arr[index]))
               return  true;
    }
    
    
    return sumpartition(N,arr,index+1,sum);
}

    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
        sum+=arr[i];
        
        if(sum%2!=0)
        return false;
        
            sum/=2;
        return sumpartition(N,arr,0,sum);
        
    }