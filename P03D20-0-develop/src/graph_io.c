#include <stdio.h>

#include "graph.h"

void clear_screen(){};

void input(char *formula) {
    clear_screen();
    printf("Введите формулу : ");
    scanf("%s", formula);
}

void output(t_data *values, int values_count) {
//    printf("void output(, values_count: %d)\n", values_count);

    for (int i = 0; i < values_count; i++) {
        printf("out %d  X:%3.6lf, Y:%1.6lf\n", i, values[i].x, values[i].y);
    }
}
void output_error() { printf("n/a\n"); }

void pd() { printf("##debug\n"); }
