#include <stdio.h>
#include <math.h>

struct QuadraticEquation {
    double a, b, c;
};

void findRoots(struct QuadraticEquation eqn) {
    double discriminant = eqn.b * eqn.b - 4 * eqn.a * eqn.c;

    if (discriminant > 0) {
        double root1 = (-eqn.b + sqrt(discriminant)) / (2 * eqn.a);
        double root2 = (-eqn.b - sqrt(discriminant)) / (2 * eqn.a);
        printf("Two distinct real roots: %.2lf and %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        double root = -eqn.b / (2 * eqn.a);
        printf("Two equal real roots: %.2lf and %.2lf\n", root, root);
    } else {
        double realPart = -eqn.b / (2 * eqn.a);
        double imaginaryPart = sqrt(-discriminant) / (2 * eqn.a);
        printf("Complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

int main() {
    struct QuadraticEquation eqn;

    printf("Enter coefficients (a, b, c) of the quadratic equation: ");
    scanf("%lf %lf %lf", &eqn.a, &eqn.b, &eqn.c);

    findRoots(eqn);

    return 0;
}
