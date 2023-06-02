#include <stdio.h>
float findValueAt(float x)
{
    return x * x * x;
}
int main()
{
    float a, b, h, sum = 0;
    int n;
    printf("Enter the value of a and b: ");
    scanf("%f%f", &a, &b);
    printf("Enter the no. of interval: ");
    scanf("%d", &n);
    h = (b - a) / n;
    sum = findValueAt(a) + findValueAt(b);
    for (float i = a + h; i < b; i += h)
        sum += 2 * findValueAt(i);
    sum = (h * sum) / 2;
    printf("Value of the integral = %f ", sum);
}