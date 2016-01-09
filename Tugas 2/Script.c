#include <stdio.h>
#include <conio.h>
#include <math.h>
void akr_kdrt(int a, int b, int c){
float x1,x2;
int D;
    D=(b*b)-(4*a*c);
    if (a==0) printf ("Bukan Persamaan Akar Kuadrat\n");
    else if (D==0) {
        x1= -b/(2*a);
        x1=x2;
        printf("D = %d\n",D);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
        }
    else if(D>0){
                x1=(-b+(sqrt(D)))/(2*a);
                x2=(-b-(sqrt(D)))/(2*a);
                printf("D = %d\n",D);
                printf("x1 = %.2f\n", x1);
                printf("x2 = %.2f", x2);
                }
    else if(D<0)  printf ("Akar Imajiner\n");
}
int main()
{
int a,b,c;
    printf("Masukkan nilai a : \n");scanf("%d",&a);
    printf("Masukkan nilai b : \n");scanf("%d",&b);
    printf("Masukkan nilai c : \n");scanf("%d",&c);
    akr_kdrt(a,b,c);
return 0;
}
