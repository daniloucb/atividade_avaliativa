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

    if(a + b > c)
    {
        if(a == b && a == c ) {
            printf("triângulo equilátero");
        } else if (b == c)
        {
            printf("triângulo isóceles");
        } else 
        {
            printf("triângulo escaleno");
        }
    }
    
};

void checarTrianguloNovamente()
{
    int a = 10, b = 8, c = 6;
    int biggest;

    if(a + b > c)
    {
        if(a > b && a > c)
        {
            if(a * a == ((b * b) + (c * c)))
            {
                printf("triângulo retângulo 90 graus");
            }
        }
        else if(b > c)
        {
            if(b * b == ((a * a) + (c * c)))
            {
                printf("triângulo retângulo 90 graus");
            }
        }
        else
        {
            if(c * c == ((b * b) + (a * a)))
            {
                printf("triângulo retângulo 90 graus");
            }
        }

        
    }
};

void pontosEixo()
{
    int x1 = 5, x2 = 3, y1 = 2, y2 = 7;
    float distancia;

    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * y2 - y1);
    printf("distancia: %.4f", distancia);
}

void eixo()
{
    int x, y;
    scanf("%d", x);
    scanf("%d", y);

    if(x == 0 && y == 0)
    {
        printf("origem");
    }
    else {
        if(x > 0)
        {
            if(y > 0)
            {
                printf("Q1");
            }
            else
            {
                printf("Q4");
            }
        }
        else
        {
            if(y > 0)
            {
                printf("Q2");
            }
            else
            {
                printf("Q3");
            }
        }
    }

    
}

// struct Stats {
//     char state[2];
//     int cityCode, amountVehicles, amountCarAccident;
// };

// void estatisticasCidade()
// {
//     int i = 0, j;
//     struct Stats stats[3];
//     int statsLength = sizeof(stats) / sizeof(stats[0]);
//     struct Stats biggest;
//     struct Stats lowest;

//     while(i < 2)
//     {
//         // printf("Digite o código da cidade: ");
//         // scanf("%d", &stats[i].cityCode);
//         // printf("Digite a sigla do estado: ");
//         // scanf("%s", &stats[i].state);
//         // printf("Digite a quantidade de veículos de passeio: ");
//         // scanf("%d", &stats[i].amountVehicles);
//         printf("Digite a quantidade de acidentes de transito: ");
//         scanf("%d", &stats[i].amountCarAccident);

//         if(biggest)
//         {
//             if(biggest.amountCarAccident > stats[i].amountCarAccident)
//             {
//                 lowest = stats[i];
//             }
//             else {
//                 biggest = stats[i];
//             }

//             printf("maior %d", biggest.amountCarAccident);
//             printf("menor %d", lowest.amountCarAccident);
//         }

//         biggest = stats[i];
//         lowest = stats[i];


        
//             // printf("maior índice: %d cidade: %d estado: %s \n", biggest.amountCarAccident, biggest.cityCode, biggest.state);
//             // printf("menor índice: %d cidade: %d estado: %s \n", lowest.amountCarAccident, lowest.cityCode, lowest.state);

//         i++;
//     }

    
    
// }

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
    case '4':
        checarTrianguloNovamente();
        break;
    case '5':
        pontosEixo();
        break;
    case '6':
        eixo();
        break;
    case 'a':
        // estatisticasCidade();
        break;
    default:
        break;
    }
    return 0;
}