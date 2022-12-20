#include "conversion.h"
#include "stdio.h"

int main()
{
    double number;
    int isFromInchToCm; // 1 represents from Inch to Cm, 2 represents from CM to inch
    double result;

    printf("Press \"1\" to convert inch to cm, Press \"2\" to convert cm to inch\n");
    scanf("%d", &isFromInchToCm);
    printf("Enter amount you want to convert(only numbers)\n");
    scanf("%lf", &number);

    if (isFromInchToCm == 1)
    {
        result = inchesToCm(number);
        printf("%.2lf inches is %.2lf cm.\n", number, result);
    }
    else if (isFromInchToCm == 2)
    {
        result = cmToInches(number);
        printf("%.2lf cm is %.2lf inches.\n", number, result);
    }
    else
    {
        printf("invalid input, please press either \"1\" or \"2\".\n ");
    }

    return 0;
}
