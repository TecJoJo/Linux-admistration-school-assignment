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
        printf("%.2lf inches is %.2lf cm.", number, result);
    }
    else
    {
        result = cmToInches(number);
        printf("%.2lf cm is %.2lf inches.", number, result);
    }

    return 0;
}
