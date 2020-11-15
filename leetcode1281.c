int subtractProductAndSum(int n){
    int lastDigit=n%10;
    int product=lastDigit;
    int sum=lastDigit;
    n/=10;
    while(n!=0){
        lastDigit=n%10;
        product*=lastDigit;
        sum+=lastDigit;
        n/=10;
    }
    return product-sum;
}