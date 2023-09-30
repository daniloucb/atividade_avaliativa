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
    double a, b, c;
    int status = 1;

   while(status)
    {
        printf("valor a:");
        scanf("%lf", &a);
        printf("valor b:");
        scanf("%lf", &b);
        printf("valor c:");
        scanf("%lf", &c);

        if(!(a + b > c && a + c > b && b + c > a))
        {
            printf("isso não é um triângulo! \n");
            printf("por favor, digite os lados novamente. \n");
        }
        else
            status = 0;
    }

    if(a + b > c)
    {
        if(a == b && a == c ) {
            printf("triângulo equilátero\n");
        } else if (a == b || b == c || a == c)
        {
            printf("triângulo isóceles\n");
        } else 
        {
            printf("triângulo escaleno\n");
        }
    }
    
};

void checarTrianguloNovamente()
{
    double a, b, c, max, min;
    int status = 1;


    printf("digite os valores de cada lado de um triângulo \n");
    while(status)
    {
        printf("valor a:");
        scanf("%lf", &a);
        printf("valor b:");
        scanf("%lf", &b);
        printf("valor c:");
        scanf("%lf", &c);

        if(!(a + b > c && a + c > b && b + c > a))
        {
            printf("isso não é um triângulo! \n");
            printf("por favor, digite os lados novamente. \n");
        }
        else
            status = 0;
    }


    if(a > b && a > c)
    {
        // triangulo retangulo
        if(a * a == ((b * b) + (c * c)))
        {
            printf("triângulo retângulo 90 graus\n");
        }

        // triangulo obtusangulo
        if((a*a > c*c + b*b))
        {
            printf("triângulo Obtusângulo com mais de 90 graus\n");
        }

        // triangulo acutangulo
        if((a*a < c*c + b*b))
        {
            printf("triângulo Acutângulo com menos de 90 graus\n");
        }
    }
    else if(b > c && b > a)
    {
        // triangulo retangulo
        if(b * b == ((a * a) + (c * c)))
        {
            printf("triângulo retângulo 90 graus\n");
        }

        // triangulo obtusangulo
        if((b*b > c*c + a*a))
        {
            printf("triângulo Obtusângulo com mais de 90 graus\n");
        }

        // triangulo acutangulo
        if((b*b < c*c + a*a))
        {
            printf("triângulo Acutângulo com menos de 90 graus\n");
        }
    }
    else
    {
        // triangulo retangulo
        if(c * c == ((b * b) + (a * a)))
        {
            printf("triângulo Retângulo 90 graus\n");
        }

        // triangulo obtusangulo
        if((c*c > a*a + b*b))
        {
            printf("triângulo Obtusângulo com mais de 90 graus\n");
        }

        // triangulo acutangulo
        if((c*c < a*a + b*b))
        {
            printf("triângulo Acutângulo com menos de 90 graus\n");
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
    float x, y;

    printf("eixo x: ");
    scanf("%f", &x);
    printf("eixo y: ");
    scanf("%f", &y);

    if(x == 0 && y == 0)
        printf("origem\n");
    else if(x == 0)
        printf("eixo X\n");
    else if(y == 0)
        printf("eixo Y\n");
    else if(x > 0)
    {
        if(y > 0)
            printf("Q1\n");
        else
            printf("Q4\n");
    }
    else if(x < 0)
    {
        if(y > 0)
            printf("Q2\n");
        else
            printf("Q3\n");
    }
};

void mediaAlunos()
{
    int i = 1, amountAlunos = 2;
    double nota1, nota2, nota3, mediaPonderada, notaTotalTurma, mediaTurma;

    while(i <= amountAlunos)
    {
        printf("aluno %d: \n", i);

        printf("digite a nota 1: ");
        scanf("%lf", &nota1);
        printf("digite a nota 2: ");
        scanf("%lf", &nota2);
        printf("digite a nota 3: ");
        scanf("%lf", &nota3);

        mediaPonderada = ( nota1*2 + nota2*4 + nota3*3 ) / 9;
        printf("%.2lf \n", mediaPonderada);
        if(mediaPonderada >= 7)
            printf("ALUNO APROVADO!");
        else
            printf("ALUNO REPROVADO!");
        notaTotalTurma += mediaPonderada;
        i++;
    }

    mediaTurma = notaTotalTurma / amountAlunos;
    printf("média da turma: %.2lf\n", mediaTurma);
};

void research()
{
    int i = 1, j = 0, amountPeople, amountChild, totalChild = 0;
    float salary, avarageSalary, avarageChild, peopleWithlimitedSalary, totalSalary = 0, biggestSalary = 0;
    printf("responda ao seguinte pesquisa: \n");

    do 
    {
        printf("pessoa %d\n", i);
        printf("digite seu salário: ");
        scanf("%f", &salary);
        if(salary < 0)
        {
            i--;
            break;
        } 
        else if(salary <= 100)
        {
            j++;
            peopleWithlimitedSalary = (j * 100) / i;
        }

        if(salary > biggestSalary)
            biggestSalary = salary;
        
        printf("quantos filhos? ");
        scanf("%d", &amountChild);
        totalChild += amountChild;

        totalSalary += salary;
        i++;
    }
    while(salary > 0);

    avarageSalary = totalSalary / i;
    avarageChild = totalChild / i;
    printf("média salário da população: %.2f\n", avarageSalary);
    printf("média de filhos da população: %.2f\n", avarageChild);
    printf("maior salário: %f\n", biggestSalary);
    printf("percentual de pessoas com salário até R$ 100,00: %.2f\n", peopleWithlimitedSalary);
};

void presidentialVote()
{
    printf("eleições 2023\n");
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulo = 0, branco = 0, vote = 1;


    while(vote)
    {
        printf("voto: ");
        scanf("%d", &vote);

        switch(vote)
        {
            case 0:
                break;
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
            case 5:
                nulo++;
                break;
            case 6:
                branco++;
                break;
            default:
                printf("valor não é válido.");
                break;
        }
    }
    
    printf("votos candidato 1: %d\n", c1);
    printf("votos candidato 2: %d\n", c2);
    printf("votos candidato 3: %d\n", c3);
    printf("votos candidato 4: %d\n", c4);
    printf("votos em nulo: %d\n", nulo);
    printf("votos em branco: %d\n", branco);
};

void estatisticasCidade()
{
    int i = 0, j;
    char state[2];
    int cityCode, amountVehicles, amountVehiclesTotal = 0, rsCities = 0;
    int amountCarAccidentRS = 0, amountCarAccident;
    float avarageVehicles;

    while(i < 2)
    {
        printf("Digite o código da cidade: ");
        scanf("%d", &cityCode);
        printf("Digite a sigla do estado: ");
        scanf("%s", &state);
        printf("Digite a quantidade de veículos de passeio: ");
        scanf("%d", &amountVehicles);
        printf("Digite a quantidade de acidentes de transito: ");
        scanf("%d", &amountCarAccident);

        if(state == "rs" || state == "RS")
        {
            amountCarAccidentRS += amountCarAccident;
            rsCities++;
        }

        amountVehiclesTotal += amountVehicles;
        avarageVehicles = (float)amountVehiclesTotal / i;

        printf("média de veículos nas cidade brasileiras: %.2f", avarageVehicles);
        printf("média acidentes rio grande do sul: %.2f", amountCarAccidentRS / rsCities);

        i++;
    }
};

int main()
{
    printf("Escolha uma opção entre 0 e 9\n");

    switch (getchar())
    {
    case '0':
        funcao();
        break;
    case '1':
        altura();
        break;
    case '2':
        checarTriangulo();
        break;
    case '3':
        checarTrianguloNovamente();
        break;
    case '4':
        pontosEixo();
        break;
    case '5':
        eixo();
        break;
    case '6':
        mediaAlunos();
        break;
    case '7':
        research();
        break;
    case '8':
        presidentialVote();
        break;
    case '9':
        estatisticasCidade();
        break;
    default:
        break;
    }
    return 0;
}