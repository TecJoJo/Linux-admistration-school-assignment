#include "conversion.h"

const double inchToCmRatio = 2.54;

double cmToInches(double cm)
{
    return cm / inchToCmRatio;
}

double inchesToCm(double inch)
{
    return inch * inchToCmRatio;
}