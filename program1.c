// Write a program in 'C' language to deduce error envolved in a polynomial equation.
#include <stdio.h>
#include <math.h>
int main()
{
    float abs_err, rel_err, p_rel_err, t_val, a_val;
    printf("\n INPUT TRUE VALUE:");
    scanf("%f", &t_val);
    printf(" INPUT APPROXIMATE VALUE:");
    scanf("%f", &a_val);
    abs_err = fabs(t_val - a_val);
    rel_err = abs_err / t_val;
    p_rel_err = rel_err * 100;
    printf("\nABSOLUTE ERROR = % f", abs_err);
    printf("\nRELATIVE ERROR = % f", rel_err);
    printf("\nPERCENTAGE RELATIVE ERROR = % f", p_rel_err);
}
