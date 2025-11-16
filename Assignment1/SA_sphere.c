// surface area of Sphere (4pi r^2

#include <stdio.h>
const float pi = 3.14;

char SA_sphere(float r){
    float SA = 4 * pi * r * r;
    printf("The surface area of sphere with radius %.2f is %.2f\n", r, SA);
    return 0;
}

int main(){
    float radius = 5.0;
    SA_sphere(radius);
    return 0;
}