#include <stdio.h>
#include <stdlib.h>
int suma(int numero1,int numero2);
int resta (int numero1,int numero2);
int multiplicacion (int numero1,int numero2);
int dividir(int numero1,int numero2);


int main()
{
    int num1,num2,sumar,restar,producto,division,factor;

    printf("ingrese un numero:\n");
    scanf("%d",&num1);
    printf("ingrese un numero:\n");
    scanf("%d",&num2);
    sumar=suma(num1,num2);
    printf("el resultado es:%d\n",sumar);

    system("pause");
    system("cls");

    printf("ingrese un numero:\n");
    scanf("%d",&num1);
    printf("ingrese un numero:\n");
    scanf("%d",&num2);
    restar=resta(num1,num2);
    printf("el resultado es:%d\n",restar);

    system("pause");
    system("cls");

     printf("ingrese un numero:\n");
    scanf("%d",&num1);
    printf("ingrese un numero:\n");
    scanf("%d",&num2);
    producto= multiplicacion(num1,num2);
    printf("el resultado es:%d\n",producto);

    system("pause");
    system("cls");

    printf("ingrese un numero:\n");
    scanf("%d",&num1);
    printf("ingrese un numero:\n");
    scanf("%d",&num2);
    division= dividir(num1,num2);
    printf("el resultado es:%d\n",division);

    system("pause");

    return 0;
}
int suma(int numero1,int numero2)
{
    return numero1 + numero2;
}
int resta (int numero1,int numero2)
{
    return numero1 - numero2;

}
int multiplicacion (int numero1,int numero2)
{
    return numero1 * numero2;
}
int dividir(int numero1,int numero2)
{
    if(numero2 <= 0)
    {
        printf("\nError.NO puede haber un divisor en 0.Reintente\n");
    }
    else
    {
      return numero1 / numero2;
    }


}

