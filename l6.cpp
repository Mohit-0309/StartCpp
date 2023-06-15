//reverse integer program
#include <iostream>
int reverse(int x){
    long k=x;
    long sum=0,d=0;
    if(k<0)
    {
        k=k*(-1);
        printf("%d",k);
    }
    if(x<(pow(-2,31)) || x>(pow(2,31)-1))
    {
        return 0;
    }
    while(k!=0)
    {
        d=k%10;
        sum=(sum*10)+d;
        k=k/10;
    }
    if(sum>(pow(2,31)-1))
    {
        return 0;
    }
    
    if(x>0)
    {
        return sum;
    }
    else
    {
        return sum*(-1);
    }
    
}
