//palindrome number program
#include <iostream>
bool isPalindrome(int x){
    if(x>=-2^31 && x<=2^31-1)
    {
        int n=x;
        long int sum=0;
        while(n!=0)
        {
            int d=n%10;
            sum=sum*10+d;
            n=n/10;
        }
        if(x<0)
        {
            return false;
        }
        if(sum==x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
