#include <stdio.h>
int main()
{
    float data;
    printf("Enter a float point number: ");
    scanf("%f", &data);

    printf("The integer part is: %d\n", (int)data);
    printf("The float part is: %.2f\n", data - (int)data);
    return 0;
}
