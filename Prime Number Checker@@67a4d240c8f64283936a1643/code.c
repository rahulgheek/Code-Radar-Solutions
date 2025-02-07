int isPrime(int n){
    int flag = 0;
    if(n<=1){
        return flag;
    }
    for(int i = 2;i<n;i++){
        if(n%i==0){
            flag = 0;
        }
    }
    return flag;
}