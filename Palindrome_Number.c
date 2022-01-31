// C Programe to check palindrome number

#include <stdio.h>

int main() {
    int n, r, sum = 0, temp;
    n = 121;  // check n is palindrome or not
    temp = n;

    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("Palindrome Number");
    }
    else {
        printf("Not Plaindrome");
    }
    return 0;
    
    
}