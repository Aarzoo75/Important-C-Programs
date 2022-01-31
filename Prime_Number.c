// Prime number programe in C

#include <stdio.h>

int main() {
    int n, i, m = 0, flag = 0;
    n = 121;  // Number to check prime
    m = n/2;

    for ( i = 2; i < m; i++)
    {
        if (n % i == 0)
        {
            printf("Number is not prime");
            flag = 1;
            break;
        }
        
    }
    if (flag == 0)
    {
        printf("Number is Prime");
    }
    return 0;
    
    
}