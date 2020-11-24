#include <stdio.h>


int mmc(int a,int b);
int main(){
 int n, x, n1, d1, n2, d2,numerador, mmcr, denominador;
 char o;

 scanf("%d\n",&n);
 for(x = 0; x < n; x++){
  scanf("%d / %d %c %d / %d",&n1,&d1,&o,&n2,&d2);
  if(o == '/'){
   numerador = d1*n2;
   denominador = n1*d2;
   mmcr = mmc(denominador,numerador);
   printf("%d/%d = %d/%d\n",denominador,numerador,denominador/mmcr,numerador/mmcr);
  }
  else{
   numerador = d1*d2;
   if(o == '+')
   denominador = n1*(numerador/d1) + n2*(numerador/d2);
   else if(o == '-')
   denominador = n1*(numerador/d1) - n2*(numerador/d2);
   else if(o == '*')
   denominador = n1*n2;
   mmcr = mmc(denominador,numerador);
   if(mmcr < 0) mmcr = -1*mmcr;
   printf("%d/%d = %d/%d\n",denominador,numerador,denominador/mmcr,numerador/mmcr);
  }
 }
 return 0;
}

int mmc(int a,int b)
{
 if(b == 0)
  return a;
 else
  return mmc(b,a%b);
}
