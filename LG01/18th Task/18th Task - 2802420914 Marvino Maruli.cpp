#include <stdio.h>

void display(float c, float k, float f){
    printf("Suhu Celcius    : %.2f\n", c);
    printf("Suhu Fahrenheit : %.2f\n", f);
    printf("Suhu Kelvin     : %.2f\n", k);
}

float konversiFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

float konversiKelvin(float c) {
    return c + 273.15;
}

int main() {
    float celsius;
    printf("Masukkan Suhu dalam Celsius : ");
    scanf("%f", &celsius);

    float fahrenheit = konversiFahrenheit(celsius);
    float kelvin = konversiKelvin(celsius);

    display(celsius, fahrenheit, kelvin);

    return 0;
}
