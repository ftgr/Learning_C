#include <stdio.h>

int main()
{
    double temperatureInCelsius;
    double temperatureInFahrenheit;
    printf("Welcome to the temperature converter!\n");
    printf("Please enter a temperature in degrees Celsius ");
    scanf("%lf", &temperatureInCelsius);
    temperatureInFahrenheit = (temperatureInCelsius * 1.8) + 32;
    printf("The temperature in degress Fahrenheit is: %.2lf\n", temperatureInFahrenheit);
    return 0;
}