// Ripped directly from https://aticleworld.com/c-program-to-convert-hexadecimal-to-decimal/
#include <stdio.h>
#include <math.h>
#include <string.h>
#define ARRAY_SIZE  20
int main()
{
    char hex[ARRAY_SIZE];
    long long decimal = 0, base = 1;
    int i = 0,  length;

    while(1)
    {

    /* Get hexadecimal value from user */
    printf("Enter hexadecimal number: ");
    fflush(stdin);
    fgets(hex,ARRAY_SIZE,stdin);
    //quit if q
    if(hex[0] == 'q')
    {
        printf("\n________\n\nQuitting\n________\n\n");
        return 0;
    }
    //game quizz thing if g
    if(hex[0] == 'g')
    {
	    //start game mode
	    printf("\n\n________\ngame mode\n________\n\n");
    }


    

    //continue ripped code
    length = strlen(hex);
    for(i = length--; i >= 0; i--)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f')
        {
            decimal += (hex[i] - 87) * base;
            base *= 16;
        }
    }
    printf("\nHexadecimal number = %s", hex);
    printf("Decimal number = %lld\n", decimal);

    
    }

    return 0;

}
