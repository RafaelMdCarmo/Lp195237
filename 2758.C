#include <stdio.h>

int main()
{
    float n1, n2;
    double n3, n4;
    
    scanf("%f %f %lf %lf", &n1, &n2, &n3, &n4);
    
    printf("A = %f, B = %f\nC = %lf, D = %lf\n", n1, n2, n3, n4);
    printf("A = %0.1f, B = %0.1f\nC = %0.1lf, D = %0.1lf\n", n1, n2, n3, n4);
    printf("A = %0.2f, B = %0.2f\nC = %0.2lf, D = %0.2lf\n", n1, n2, n3, n4);
    printf("A = %0.3f, B = %0.3f\nC = %0.3lf, D = %0.3lf\n", n1, n2, n3, n4);
    printf("A = %0.3E, B = %0.3E\nC = %0.3E, D = %0.3E\n", n1, n2, n3, n4);
    printf("A = %0.0f, B = %0.0f\nC = %0.0lf, D = %0.0lf\n", n1, n2, n3, n4);


    return 0;
}                       
