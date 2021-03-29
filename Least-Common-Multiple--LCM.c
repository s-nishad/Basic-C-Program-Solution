#include<stdio.h>

int main()
{
    long long int n1,n2,gcd,num1,num2,lcm,rem;
    
    scanf("%lld %lld",&num1,&num2);
    n1 = num1;
    n2 = num2;

    while(n2!=0)
    {
        rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    lcm = (num1*num2)/gcd;
    printf("LCM is: %lld\n",lcm);
    
    return 0;
}
