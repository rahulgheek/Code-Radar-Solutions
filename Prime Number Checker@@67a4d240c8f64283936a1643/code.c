int isPrime(int n){
    int flag = 1;
    if(n<=1){
        return 0;
    }
    for(int i = 2;i<n;i++){
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    return flag;
}