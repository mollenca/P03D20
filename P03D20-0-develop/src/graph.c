#include "graph.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "calculate.h"
#include "graph_io.h"
#include "polish.h"

int main() {
    int result;
    t_data *values;

    char *polish_formula;
    //char *formula = NULL;
    char *formula = "15/(7-(1+1))*3-(2+(1+1))*15/(7-(200+1))3-(2+(1+1))(15/(7-(1+1))*3-(2+(1+1))+15/(7-(1+1))*3-(2+(1+1)))";

    //input(&formula);
    result = process_formula(formula, &polish_formula);

    if (!result) {
        values = malloc(sizeof(struct data) * POINTS);
        result = calc_values(polish_formula, X_MIN, X_MAX, values, POINTS);
    };

    if (!result) {
        output(values, POINTS);
    }

    if (result) output_error();

    if (values != NULL) free(values);
}
