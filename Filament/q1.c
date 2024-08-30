#include <stdio.h>
#include <string.h>
int main(){
    char name[20];
    int length = 0, palindrome = 0;

    printf("Enter string : ");
    scanf("%s", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }

    for (int i = 0; i < length / 2; i++)
    {
        if (name[i] != name[length - i - 1])
        {
            palindrome = 1;
            break;
        }
    }

    if (palindrome == 0)
    {
        printf("The given string is Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}