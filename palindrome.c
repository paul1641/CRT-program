#include<stdio.h>
int main()
{
int n, s = 0, r, p;
    printf("Enter an integer: ");
    scanf("%d", &n);
    p = n;

    // reversed integer is stored in reversedN
    while (n != 0) {
        r = n % 10;
        s = s * 10 + r;
        n /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (p == s)
        printf("%d is a palindrome.", p);
    else
        printf("%d is not a palindrome.", p);

    return 0;
}
