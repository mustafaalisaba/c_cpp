// quadratic_eq archivo de aplicación
#include <stdio.h>
#include "solver.h"

int main() {
    double a, b, c;
    double r1, r2;

    int status = quadraticEquationSolver(a, b, c, &r1, &r2);
    return 0;
}