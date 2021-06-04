#include <iostream>
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

using namespace std;



bool isPrime(int num){
    int sqroot = (int)sqrt((double)num);
    for( int i=2; i<=sqroot; i++){
        if(num%2==0){
            return false;
        }
    }
    return true;
}

void primeGenerator(int num) {
    printf("prime generator until: %d\n", num);
    int count = 0;
    for(int i = 2; i <= num; i++){
        if(isPrime(i)){
            count++;
            printf("%4d : %6d\n",count,i);
        }
    }
    printf("\n\ntotal number of primes Until %d prime is %d\n",num,count);
}

int main()
{
    cout << "Upto from what you want to find prime Number: ";
    int useInp;
    scanf("%d",&useInp);
    primeGenerator(useInp);
    return 0;
}

