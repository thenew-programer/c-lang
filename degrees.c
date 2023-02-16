#include <stdio.h>
#include <ctype.h>

int main()
{
    char type;
    float degree;
    float new_degree;
    printf("\nIs the degrees is in (F) or in (C)?: ");
    scanf("%c", &type);

    printf("\nEnter how many degrees: ");
    scanf("%f", &degree);
    
    type = toupper(type);
    if (type == 'C')
    {
       new_degree = (degree  * 9 ) / 5 + 32;
       printf("%.2f degrees in Celsius are %.2f degrees in fehrenheit!\n", degree, new_degree);
    }
    else if (type == 'F')
    {
       new_degree = ((degree - 32) * 5) / 9;
       printf("%.2f degrees in Fehrenheit are %.2f degrees in Cilsuis\n", degree, new_degree);
    }
    else
    {
        printf("Please enter a valid type of temperature!!\n");
    }
}
