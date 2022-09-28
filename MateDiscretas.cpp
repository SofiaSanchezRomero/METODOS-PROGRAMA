#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
float funcion1(float);
float funcion2(float);
float funcion3(float);
float funcion4(float);
float derivfuncion1(float);
float derivfuncion2(float);
float derivfuncion3(float);
float derivfuncion4(float);

int main()
{
    int i = 0, metodo, funcion, nIterac;
    float a, b, fa, fb, p, fp, acc, Er, Er1, toleEr, Fa;
    char repetir,resp;
    do
    {
   printf("Que metodo te gustaria utilizar? \n");
   printf("Metodo de Biseccion: 1\n");
   printf("Metodo de Newton:    2\n");
   scanf("%d", &metodo);
   system("cls");
   if(metodo == 1)
   {
       do
       {
           printf("\nMetodo de Biseccion.\n");
           printf("Que funcion te gustaria emplear?\n");
           printf("f(x) = x^2*cos(x)-2x           : 1\n");
           printf("f(x) =(((6-2)/x^2)exp^x+2)/4+1 : 2\n");
           printf("f(x) = x^3-3sen(x^2)+1         : 3\n");
           printf("f(x) = x^3+6x^2+9.4x+2.5       : 4\n");
           scanf("%d", &funcion);

           switch(funcion)
           {
           case 1:
            printf("\nIngrese los intervalos");
            printf("\nIntervalo a) ");
            scanf("%f",&a);
            printf("\nIntervalo b) ");
               scanf("%f",&b);
printf("Maximo de iteraciones? ");
               scanf("%d", &nIterac);
               printf("Tolerancia en el Error Relativo? ");
               scanf("%f", &toleEr);
               do
               {
                   fa = funcion1(a);
                   fb = funcion1(b);
                   p = (a+b)/2;
                   fp = funcion1(p);
                   Er1 = (p-acc)/p;
                   Er = fabs(Er1);
                   acc = p;
                   printf("a:%.6f  b:%.6f  f(a):%.6f  f(b):%.6f  p:%.6f  f(p):%.6f  Er:%.6f",a,b,fa,fb,p,fp,Er);
                   printf("\n\n");
                   if(fa*fp<0)
                       b = p;
                   else
                       a = p;
                   i++;
               }while(i <= nIterac || Er > toleEr);
               printf("\n\nRaiz obtenida: %.6f", fp);
               printf("\nNumero de iteraciones: %d", i-1);
               printf("\nEl error relativo es menor a la tolerancia: %.6f < %.6f", Er, toleEr);
               break;

           case 2:
            printf("\nIngrese los intervalos");
            printf("\nIntervalo a) ");
            scanf("%f",&a);
            printf("\nIntervalo b) ");
               scanf("%f",&b);
               printf("Maximo de iteraciones? ");
               scanf("%d", &nIterac);
               printf("Tolerancia en el Error Relativo? ");
               scanf("%f", &toleEr);
               do
               {
                   fa = funcion2(a);
                   fb = funcion2(b);
                   p = (a+b)/2;
                   fp = funcion2(p);
                   Er1 = (p-acc)/p;
                   Er = fabs(Er1);
                   acc = p;
                   printf("a:%.6f  b:%.6f  f(a):%.6f  f(b):%.6f  p:%.6f  f(p):%.6f  Er:%.6f",a,b,fa,fb,p,fp,Er);
                   printf("\n\n");
                   if(fa*fp<0)
                       b = p;
                   else
                       a = p;
                   i++;
               }while(i <= nIterac || Er > toleEr);
               printf("\n\nRaiz obtenida: %.6f", fp);
               printf("\nNumero de iteraciones: %d", i-1);
               printf("\nEl error relativo es menor a la tolerancia: %.6f < %.6f", Er, toleEr);
               break;

           case 3:
            printf("\nIngrese los intervalos");
            printf("\nIntervalo a) ");
            scanf("%f",&a);
            printf("\nIntervalo b) ");
               scanf("%f",&b);
               printf("Maximo de iteraciones? ");
               scanf("%d", &nIterac);
               printf("Tolerancia en el Error Relativo? ");
               scanf("%f", &toleEr);
               do
               {
                   fa = funcion3(a);
                   fb = funcion3(b);
                   p = (a+b)/2;
                   fp = funcion3(p);
                   Er1 = (p-acc)/p;
                   Er = fabs(Er1);
                   acc = p;
                   printf("a:%.6f  b:%.6f  f(a):%.6f  f(b):%.6f  p:%.6f  f(p):%.6f  Er:%.6f",a,b,fa,fb,p,fp,Er);
                   printf("\n\n");
                   if(fa*fp<0)
                       b = p;
                   else
                       a = p;
                   i++;
               }while(i <= nIterac || Er > toleEr);
               printf("\n\nRaiz obtenida: %.6f", fp);
               printf("\nNumero de iteraciones: %d", i-1);
               printf("\nEl error relativo es menor a la tolerancia: %.6f < %.6f", Er, toleEr);
               break;

           case 4:
            printf("\nIngrese los intervalos");
            printf("\nIntervalo a) ");
            scanf("%f",&a);
            printf("\nIntervalo b) ");
               scanf("%f",&b);
               printf("Maximo de iteraciones? ");
               scanf("%d", &nIterac);
               printf("Tolerancia en el Error Relativo? ");
               scanf("%f", &toleEr);
               do
               {
                   fa = funcion4(a);
                   fb = funcion4(b);
                   p = (a+b)/2;
                   fp = funcion4(p);
                   Er1 = (p-acc)/p;
                   Er = fabs(Er1);
                   acc = p;
                   printf("a:%.6f  b:%.6f  f(a):%.6f  f(b):%.6f  p:%.6f  f(p):%.6f  Er:%.6f",a,b,fa,fb,p,fp,Er);
                   printf("\n\n");
                   if(fa*fp<0)
                       b = p;
                   else
                       a = p;
                   i++;
               }while(i <= nIterac || Er > toleEr);
               printf("\n\nRaiz obtenida: %.6f", fp);
               printf("\nNumero de iteraciones: %d", i-1);
               printf("\nEl error relativo es menor a la tolerancia: %.6f < %.6f", Er, toleEr);
               break;

           default:
               printf("Opcion inexistente");
               break;
           }
printf("\n\nSi desea ingresar otra funcion SI--->[S], NO-->[N]\n");
fflush(stdin);
scanf("%c",&resp);
system("cls");
       }
       while(resp == 's' || resp == 'S');
   }
    else if(metodo == 2)
    {
    char res;
    do
    {
        printf("\nMetodo de Newton.\n");
        printf("Que funcion te gustaria emplear?\n");
        printf("f(x) = x^2*cos(x)-2x           : 1\n");
        printf("f(x) =(((6-2)/x^2)exp^x+2)/4+1 : 2\n");
        printf("f(x) = x^3-3sen(x^2)+1         : 3\n");
        printf("f(x) = x^3+6x^2+9.4x+2.5       : 4\n");
        scanf("%d", &funcion);
        system("cls");
        switch(funcion){
            case 1:
            printf("Ingrese el punto aproximado a la raiz: ");
            scanf("%f",&a);
                printf("Maximo de iteraciones? ");
                scanf("%d", &nIterac);
                printf("Tolerancia en el Error Relativo? ");
                scanf("%f", &toleEr);
                do{
               fa = funcion1(a);
               Fa = derivfuncion1(a);
               Er1 = (a-acc)/a;
               Er = fabs(Er1);
               acc = a;
               printf("a:%.10f  f(a):%.10f  f'(a):%.10f  Er:%.10f",a,fa,Fa,Er);
               printf("\n\n");
               a = a-(fa/Fa);
                }while(Er > toleEr);
                printf("\n\nRaiz obtenida: %.10f",acc);
           printf("\nNumero de iteraciones: %d", i-1);
                break;

            case 2:
            printf("Ingrese el punto aproximado a la raiz: ");
            scanf("%f",&a);
                printf("Maximo de iteraciones? ");
                scanf("%d", &nIterac);
                printf("Tolerancia en el Error Relativo? ");
                scanf("%f", &toleEr);
                do{
              fa = funcion2(a);
              Fa = derivfuncion2(a);
              Er1 = (a-acc)/a;
              Er = fabs(Er1);
              acc = a;
              printf("a:%.10f  f(a):%.10f  f'(a):%.10f  Er:%.10f",a,fa,Fa,Er);
              printf("\n\n");
              a = a-(fa/Fa);
               i++;
                }while(i <= nIterac);
            printf("\n\nRaiz obtenida: %.10f", acc);
           printf("\nNumero de iteraciones: %d", i-1);
                break;

            case 3:
            printf("Ingrese el punto aproximado a la raiz: ");
            scanf("%f",&a);
                printf("Maximo de iteraciones? ");
                scanf("%d", &nIterac);
                printf("Tolerancia en el Error Relativo? ");
                scanf("%f", &toleEr);
                do{
              fa = funcion3(a);
              Fa = derivfuncion3(a);
              Er1 = (a-acc)/a;
              Er = fabs(Er1);
              acc = a;
              printf("a:%.10f  f(a):%.10f  f'(a):%.10f  Er:%.10f",a,fa,Fa,Er);
              printf("\n\n");
              a = a-(fa/Fa);
              i++;
                }while(i <= nIterac);
                printf("\n\nRaiz obtenida: %.10f", acc);
           printf("\nNumero de iteraciones: %d", i-1);
                break;
               
                case 4:
            printf("Ingrese el punto aproximado a la raiz: ");
            scanf("%f",&a);
                printf("Maximo de iteraciones? ");
                scanf("%d", &nIterac);
                printf("Tolerancia en el Error Relativo? ");
                scanf("%f", &toleEr);
                do{
              fa = funcion4(a);
              Fa = derivfuncion4(a);
              Er1 = (a-acc)/a;
              Er = fabs(Er1);
              acc = a;
              printf("a:%.10f  f(a):%.10f  f'(a):%.10f  Er:%.10f",a,fa,Fa,Er);
              printf("\n\n");
              a = a-(fa/Fa);
              i++;
                }while(i <= nIterac);
                printf("\n\nRaiz obtenida: %.10f",acc);
           printf("\nNumero de iteraciones: %d", i-1);
                break;
               
                default:
                printf("Opcion inexistente");
                break;
            }
            printf("\n\nSi desea ingresar otra funcion SI-->[S], NO-->[N]\n");
            fflush(stdin);
            scanf("%c",&resp);
            system("cls");
        }while(resp == 's'||resp == 'S');
    }
    else
    printf("\nOpcion inexistente\n");
    printf("Desea intentar con otros metodos SI-->[S], NO--->[N]\n");
fflush(stdin);
scanf("%c",&resp);
system("cls");
}while(resp == 'S' || resp == 's');
printf("Elavorado por : \n Soto Velazquez Claudio\nSanchez Romero Sofia\n Sampedro Cuevas Ivan Antonio\n Bautista Alba Ricardo\n");
}
float funcion1(float mTemp)
{
    float m, fm;
    m = mTemp;
    fm = pow(m,2)* cos(m) - 2*m;
    return fm;
}

float derivfuncion1(float mTemp)
{
    float m, fm;
    m = mTemp;
    fm = (2*m)*cos(m)-pow(m,2)*sin(m)-2;
    return fm;
}

float funcion2(float mTemp)
{
    float m, fm;
    m = mTemp;
    fm = (6-(2/pow(m,2)))*((exp(2+m))/4)+1;
    return fm;
}

float derivfuncion2(float mTemp)
{
    float m, fm;
    float e = exp(m+2);
    m = mTemp;
    fm = ((3*pow(m,3)-m+2)*exp(m+2))/(2*pow(m,3));
    return fm;
}

float funcion3(float mTemp)
{
    float m, fm;
    m = mTemp;
    fm = pow(m,3)-3*sin(pow(m,2))+1;
    return fm;
}

float derivfuncion3(float mTemp)
{
    float m, fm;
    m = mTemp;
    fm = 3*pow(m,2)-(6*m)*cos(pow(m,2));
    return fm;
}

float funcion4(float mTemp)
{
    float m, fm;
    m = mTemp;
    fm = pow(m,3)+6*pow(m,2)+9.4*m+2.5;
    return fm;
}
float derivfuncion4(float mTemp)
{
    float m, fm;
    m = mTemp;
    fm = 3*pow(m,2)*(12*m)+(47/5);
    return fm;
}
