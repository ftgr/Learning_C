#include <stdio.h>

int main()
{
    double temperatureInCelsius;
    double temperatureInFahrenheit;
    printf("Welcome to the temperature converter!\n");
    printf("Please enter a temperature in degrees Farenheit ");
    scanf("%lf", &temperatureInFahrenheit);
    temperatureInCelsius = (temperatureInFahrenheit -32) / 1.8;
    printf("The temperature in degress Celsius is: %.2lf\n", temperatureInCelsius);
    return 0;
}