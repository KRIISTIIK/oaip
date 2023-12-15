
#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int temp;
    printf(
        "\nВведите температуру в Москве летом (градусы): ");
    scanf_s("%d", &temp);

    if (temp > 35) {
        printf("жарко");
    }
    if (temp < 10) {
        printf("морозно");
    }
    if ((temp < 35) && (temp > 20)) {
        printf("тепло");
    }
    if ((temp > 10) && (temp < 20)) {
        printf("холодно");
    }


    int cost;
    printf(
        "\nвведите стоимость проезда в метро ");
    scanf_s("%d", &cost);

    if (cost > 150) {
        printf("очень дорого");
    }
    if (cost < 30) {
        printf("дёшево");
    }
    if ((cost < 150) && (cost > 100)) {
        printf("дорого");
    }
    if ((cost > 30) && (cost < 100)) {
        printf("норм");
    }


    int sped;
    printf("\nвведите текущую скорость автомобиля (в км/ч): ");
    scanf_s("%d", &sped);

    if (sped < 10) {
        printf("очень медленно");
    }
    if (sped > 230) {
        printf("очень быстро");
    }
    if ((sped < 230) && (sped > 150)) {
        printf("быстро");
    }
    if ((sped < 150) && (sped > 40)) {
        printf("норм");
    }
    if ((sped > 10) && (sped < 40)) {
        printf("медленно");
    }




}