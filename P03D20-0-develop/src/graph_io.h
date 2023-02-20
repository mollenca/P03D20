#ifndef GRAPH_IO_H
#define GRAPH_IO_H

#include "graph.h"

void clear_screen();

void input(char *formula);

void output(t_data *values, int cvalues_count);
void output_error();
void pd();

#endif
