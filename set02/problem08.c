#include <stdio.h>

typedef struct _triangle {
    float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main() {
    Triangle t;

    // Input
    t = input_triangle();

    // Calculate area
    find_area(&t);

    // Output
    output(t);

    return 0;
}

Triangle input_triangle() {
    Triangle t;
    
    printf("Enter the base of the triangle: ");
    scanf("%f", &t.base);

    printf("Enter the altitude of the triangle: ");
    scanf("%f", &t.altitude);

    return t;
}

void find_area(Triangle *t) {
    t->area = 0.5 * (t->base) * (t->altitude);
}

void output(Triangle t) {
    printf("Triangle with base %.2f and altitude %.2f has an area of %.2f\n", t.base, t.altitude, t.area);
}
