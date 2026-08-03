#include <stdio.h>

//struct car {
    char *engine_type;
    int horsepower, eng_capacity, tank_cap;
    float mileage;
};

//int main() {
    struct car car1, car2;
    car1.engine_type="petrol";
    car2.engine_type="diesel";
    printf("%s\n", car1.engine_type);
    printf("%s\n", car2.engine_type);
    return 0;
}

typedef struct car {
    char *engine_type;
    int horsepower, eng_capacity, tank_cap;
    float mileage;
}car;

int main() {
    car car1, car2;
    car1.engine_type="petrol";
    car2.engine_type="diesel";
    printf("%s\n", car1.engine_type);
    printf("%s\n", car2.engine_type);
    return 0;
}