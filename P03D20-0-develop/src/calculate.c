#include <stdio.h>
#include <stdlib.h>

#include "graph.h"
#include "math.h"

int calc_values(char *polish_formula, double x_min, double x_max, t_data *values, int values_count) {
    int result = 0;
    double delta = x_max - x_min;
//    values = malloc(sizeof(struct data) * values_count);

    int i = 0;
    values[i].x = x_min;
    values[i].y = sin(values[i].x);
//    printf("%4d = X:%lf Y:%lf %lf\n", i, values[i].x, values[i].y, x_max);
    for (i = 1; i < values_count; i++) {
        values[i].x = x_min + delta * i / (values_count - 1);
        values[i].y = sin(values[i].x);
//        printf("%4d = X:%lf Y:%lf %lf\n", i, values[i].x, values[i].y, x_max);
    }

    return result;
}
