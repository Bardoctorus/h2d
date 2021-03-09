#include <stdio.h>
#include <math.h>
#include <string.h>
#include <utils.h>
#define ARRAY_SIZE  20
int main()
{
    char input[ARRAY_SIZE];
    long long decimal = 0, base = 1;
    int i = 0,  length;

    int temp = 0b11111111;
    printf("test: %d\n\n", temp);
    temp << 0b00000011;
    printf("test: %d\n\n", temp);

    while(1)
    {

    printf("Enter hexadecimal number: ");
    fflush(stdin);
    fgets(input,ARRAY_SIZE,stdin);
    if(strcmp(input, "q") == 0)
    //quit if q
    if(input[0] == 'q')
    {
        printf("\n________\n\nQuitting\n________\n\n");
        return 0;
    }
    //game quizz thing if g
    if(input[0] == 'g')
    {
	    //start game mode    


	    printf("\n\n________\ngame mode\n________\n\n");
    }

    printf("Decimal equivalent %d\n\n", hex2Dec(input));
    }

    return 0;

}
