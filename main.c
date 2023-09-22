#include <stdio.h>
#include <math.h>

void funcao()
{
    float x, result;
    scanf("%f", &x);
    
    result = (float)((5 * x) + 3) / sqrt(x*x - 16);
    printf("%.2f", result); 
};

void altura()
{
    int years = 0;
    float heightZe = 1.10, heightChico = 1.50;

    printf("quantos anos levam para ze alcancar a altura de chico?\n");

    while(heightZe < heightChico)
    {
        heightZe += 0.03;
        heightChico += 0.02;
        years++;
    }

    printf("%d", years);
}

void checarTriangulo()
{
    int a = 1, b = 1, c = 1;

    if(a == b && a == c ) {
        printf("triângulo equilátero");
    } else if (b == c)
    {
        printf("triângulo isóceles");
    } else 
    {
        printf("triângulo escaleno");
    }
};

// escaleno = lados diferentes
// isóceles = dois lados iguais
// equilátero = todos os lados iguais 

int main()
{
    printf("Escolha uma opção entre 1 e 10\n");

    switch (getchar())
    {
    case '1':
        funcao();
        break;
    case '2':
        altura();
        break;
    case '3':
        checarTriangulo();
        break;
    default:
        break;
    }
    return 0;
}