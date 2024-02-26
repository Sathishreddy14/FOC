#include <stdio.h>
int main() 
{
  int num, reversed = 0, remainder, originalnum;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalnum = num;
    
    while (num != 0)
	 {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (originalnum == reversed)
        printf("%d is a palindrome.", originalnum);
    else
        printf("%d is not a palindrome.", originalnum);

    return 0;
}
