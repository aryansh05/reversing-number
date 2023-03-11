//Code for Reversing a number given by user
#include<stdio.h>


int main()
{
    int a,b=0,c;
    printf("Enter a number: ");
    scanf("%d",&a);
    // using while loop 
    while(a != 0)
    {
        c = a % 10;//takes the remainder and the further move it to nect line 
        b = b * 10 + c;//muliply by 10 gives the number
        a /= 10;//Terminates the loop because the number becomes zero with continous divsion
    }
// printing the reversed number
    printf("The reversed number is: %d",b);

    return 0; 
}
