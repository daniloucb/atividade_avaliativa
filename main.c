#include <stdio.h>
#include <math.h>

void funcao()
{
    float x, result;
    scanf("%f", &x);
    
    result = (float)((5 * x) + 3) / sqrt(x*x - 16);
    printf("%.2f", result); 
};

int main()
{
    printf("Escolha uma opção entre 1 e 10\n");

    switch (getchar())
    {
    case '1':
        funcao();
        break;
    
    default:
        break;
    }
    return 0;
}