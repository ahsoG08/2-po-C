#include <stdio.h>

int main() {
    int demand_level;  // Уровень спроса (1-100)
    float distance_km; // Длина маршрута (км)
    int duration_min;  // Длительность маршрута (мин)
    float base_fare, surge_multiplier, commission, total_cost;

    printf("Введите уровень спроса (1-100): ");
    scanf("%d", &demand_level);
    printf("Введите длину маршрута (км): ");
    scanf("%f", &distance_km);
    printf("Введите длительность маршрута (мин): ");
    scanf("%d", &duration_min);

    // Расчет коэффициента спроса (1.0-3.0)
    surge_multiplier = 1.0 + demand_level / 50.0;
    if (surge_multiplier > 3.0) surge_multiplier = 3.0;

    // Расчет комиссии сервиса (29-69 руб)
    commission = 29 + demand_level * 0.4;
    if (commission > 69) commission = 69;

    // Расчет базовой стоимости (11 руб/км + 0.25 руб/мин)
    base_fare = 11 * distance_km + 0.25 * duration_min;

    // Итоговая стоимость
    total_cost = base_fare * surge_multiplier + commission;

    printf("\nДетализация стоимости поездки:\n");
    printf("Базовая стоимость: %.2f руб\n", base_fare);
    printf("Коэффициент спроса: %.2f\n", surge_multiplier);
    printf("Комиссия сервиса: %.2f руб\n", commission);
    printf("Итоговая стоимость: %.2f руб\n", total_cost);

    return 0;
}
