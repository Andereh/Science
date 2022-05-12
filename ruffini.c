#include <stdio.h>

typedef enum {false, true} bool;
typedef struct {
        int base     [10];
        int restos   [10];
        int minuendo [10];
    } Poly;

int raices [10];
int raices_len = 0;

void rellenar_con_linea(int n);
void rellenar(int n);
void imprimir_datos(Poly poly, int len);
void imprimir_raiz(int raiz);


int main()
{
    int base_len;
    int i, j;
    Poly poly;

    printf("\nIntroduce el numero de terminos: ");
    scanf("%d", &base_len);
    printf("\n");


    for (i = 0; i < base_len; i++)   // Obtencion de datos 
    {
        printf("    Termino #%d: ", i+1);
        scanf("%d", &poly.base[i]);
        fflush(stdin);
    }


    printf("\nResolucion del ejercicio: \n\n");


    poly.restos[0] = poly.base[0]; // Parte de computo
    imprimir_datos(poly, base_len);


    printf("\n\nRaices: ");
    for (i = 0; i < raices_len; i++) imprimir_raiz(raices[i]);


    getchar();
    return 0;
}


void rellenar_con_linea(int n)
{
    if      (n>=1000) printf(" | ");
    else if (n>=100) printf("  | ");
    else if (n>=10) printf("   | ");
    else if (n>=0) printf("    | ");

    if      (n<=-1000) printf("| ");
    else if (n<=-100) printf(" | ");
    else if (n<=-10) printf("  | ");
    else if (n< 0)  printf("   | ");
    printf("%d", n);
}


void rellenar(int n)
{
    if      (n>=1000) printf("  ");
    else if (n>=100) printf("   ");
    else if (n>=10) printf("    ");
    else if (n>=0) printf("     ");

    if      (n<=-1000) printf(" ");
    else if (n<=-100) printf("  ");
    else if (n<=-10) printf("   ");
    else if (n< 0)  printf("    ");
    printf("%d", n);
}


void imprimir_datos(Poly poly, int len)
{
    short int i, j;
    short int cocientes [] = {1,-1,2,-2,3,-3,4,-4,5,-5,6,-6,7,-7,8,-8,9,-9};
    bool is_fist_time = true;

    for (j = 0; j <= 18; j++)
    {
        if (len < 1) break;
        int cociente = cocientes[j];


        for (i = 0; i < len; i++)
        {
            poly.minuendo[i] = poly.restos[i] * cociente;
            poly.restos[i+1] = poly.base[i+1] + poly.minuendo[i];
        }

        if (poly.restos[len-1] == 0)
        {
            raices[raices_len] = cociente;
            raices_len++;


            if (is_fist_time)
            {
                rellenar_con_linea(poly.base[0]);
                for (i = 1; i < len; i++) rellenar(poly.base[i]); 
                is_fist_time = false;
            }

            printf("\n"); 

            if (cociente < 0) printf(" %d |  ", cociente);
            else printf("  %d |  ", cociente);

            for (i = 0; i < len-1; i++) rellenar(poly.minuendo[i]); 
            printf("\n---");
            for (i = 0; i < len; i++) printf("------");
            printf("\n");

            rellenar_con_linea(poly.restos[0]);
            for (i = 1; i < len; i++) rellenar(poly.restos[i]); 


            for (i = 1; i < len; i++) poly.base[i] = poly.restos[i]; // ahora los restos pasan a ser la nueva base y se repite el proceso

            j = 0;
            len -= 1;
        } 
    }
    if (j == 18) printf("\nNoup, ese polinomio no se puede factorizar\nPor eso sus raices deberian estar incompletas");
}

void imprimir_raiz(int raiz)
{
    if (raiz < 0) printf("(x+%d)", -1 * raiz);
    else printf("(x%d)", -1 * raiz);
}
