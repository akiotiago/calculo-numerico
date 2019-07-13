#include <curses.h>
#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <stdlib.h>

float f1(float x)
{
 float res;
 res = pow(x,3) - 9*x + 3; //função do método da bissecção
 return res;
}
float f2(float x)
{
 float res;
 res = pow(x,2)+log(x); //função do método de newton-raphson
 return res;
}
float f3(float x)
{
 float res;
 res = (2.0*x)+(1.0/x); //derivada usada no método de newton-raphson
 return res;
}

int main()    //Menu do Programa
{
 int op;
 do
 {
  system("clear||cls");
  printf (" A analise numerica e computacional e uma area da Matematica na qual se");
  printf ("\n encontram varios e diversificados metodos que se constituem em");
  printf ("\n ferramentas para se determinar,  exata ou aproximadamente, solucoes");
  printf ("\n numericas de problemas modelados matematicamente. Em um campo de aplicacao");
  printf ("\n mais amplo, a busca de solucoes aproximadas tem sido muito importante na");
  printf ("\n resolucao destes problemas quando nao existe a possibilidade de resolve-los");
  printf ("\n por tecnicas exatas. Neste trabalho fez-se a revisao de alguns metodos");
  printf ("\n numericos computacionais usuais, os quais foram implementados utilizando");
  printf ("\n como recurso computacional a linguagem de programacao C++.");
  printf ("\n A programacao foi gerenciada por um 'menu' que oferece ao usuario");
  printf ("\n a opção de escolher o metodo desejado, o aplicativo computacional");
  printf ("\n deste, seu algoritmo e uma breve revisao de sua teoria, visando possibilitar");
  printf ("\n uma melhor compreensao e utilização das tecnicas utilizadas.");
  printf ("\n Elaborou-se esta ferramenta computacional relativa a metodologia utilizada.");
  printf ("\n");
  printf ("\n Trabalho feito pelos academicos: Akio Tiago Chiuji       RA: 105550");
  printf ("\n Curso: Engenharia Eletrica com enfase em eletronica");
  printf ("\n Turma: N30 		  		   Terceiro Semestre");
  printf ("\n Segundo Ano		  		              2008/1");
  printf ("\n \n                    Disciplina: Calculo Numerico");
  printf ("\n \n Pressione a tecla 'Enter' para continuar");
  getchar();
  system("clear||cls");
  printf (" Metodo da Bisseccao:");
  printf ("\n \n É um dos mais simples métodos de resolução, se f(x) e uma funcao continua");
  printf ("\n no intervalo [a,b] e f(a).f(b)<0. Dividindo o intervalo [a,b] ao meio,");
  printf ("\n obtem-se x1=(a+b)/2, havendo, dois subintervalos, [a,x1] e [x1,b], a serem");
  printf ("\n considerados. Se f(x1)=0, entao, epsilon=x1; caso contrario, a raiz estara");
  printf ("\n no subintervalo onde a funcao tem sinais opostos nos pontos extremos, ou");
  printf ("\n seja, f(a).f(x1)<0, entao, epsilonE=(a,x1); senao f(a).f(b)>0 e");
  printf ("\n  epsilonE=(x1,b);");
  printf ("\n \n O processo se repete ate que se otenha uma aproximacao para a raiz exata");
  printf ("\n epsilon1 com a tolerancia E desejada.");
  printf ("\n \n Pressione a tecla 'Enter' para continuar");
  getchar();
  system("clear||cls");
  printf ("\n Metodo de Newton-Raphson:");
  printf ("\n \n Em Analise numerica, o Metodo de Newton-Raphson tem o objetivo de");
  printf ("\n estimar as raízes de uma função. Para isso, toma-se um ponto qualquer da");
  printf ("\n função, calcula-se a equação da tangente (derivada) da função nesse ponto,");
  printf ("\n calcula-se o intercepto da tangente ao eixo das abcissas, calcula-se o");
  printf ("\n valor da função nesse ponto, e repete-se o processo, que deve tender a uma");
  printf ("\n das raízes da função rapidamente, ou não tender a nada, deixando isso");
  printf ("\n claro logo. Em notação matemática isso se escreveria assim:");
  printf ("\n \n (x{n+1}) = xn - {[f(x_n)]/[f '(x_n)]}");
  printf ("\n \n onde n indica a n-ésima iteração do algoritmo e f'(xn)");
  printf ("\n é a derivada da função f em xn.");
  printf ("\n \n Para que se obtenha sucesso na iteração deve-se primeiramente delimitar um");
  printf ("\n intervalo, a fim de escolher um chute inicial adequado, para que a");
  printf ("\n convergência de 'xn' seja propícia. Para tanto existem apenas quatro");
  printf ("\n condições a serem satisfeitas:");
  printf ("\n -O intervalo delimitado deve conter a raiz de y=f(x);");
  printf ("\n -A função y=f(x) deve ser diferenciável em todo o intervalo;");
  printf ("\n -A primeira derivada no intervalo não deve trocar de sinal;");
  printf ("\n -A segunda derivada no intervalo não deve trocar de sinal;");
  printf ("\n\n Pressione a tecla 'Enter' para continuar");
  getchar();
  system("clear||cls");
  printf (" Observacoes:");
  printf ("\n \n A funcao utilizada pelo metodo da Bisseccao e (x^3)-(9*x)-(3), caso deseje");
  printf ("\n altera-la, favor alterar a decima primeira linha do codigo do programa.");
  printf ("\n \n \n \n A funcao utilizado pelo metodo de Newton-Raphson e (X^2)+ln(x), caso deseje");
  printf ("\n altera-la, favor alterar a decima setima linha do codigo do programa, tambem");
  printf ("\n e necessario alterar a derivada da funcao que se encontra na vigesima terceira");
  printf ("\n linha do codigo do programa.");
  printf ("\n\n Pressione 'Enter' para continuar");
  getchar();
  system("clear||cls");
  printf ("\n  Metodos de resolucao:\n\n\n   1 - Bisseccao\n   2 - Newton-Raphson\n   3 - Sair\n\n");
  printf ("\n Selecione a opcao desejada e pressione a tecla 'Enter': ");
  scanf("%d", &op);
  switch(op)
  {
   case 1:
    void bissecao();
    {
    int maxit,iter,op;
    float a,b,Xn,tol,fa,fb,fxn,modulo,fxba;
    maxit = 0;
    system("clear||cls");
    printf (" Metodo da Bisseccao:");
    printf ("\n \n Digite um Limite Inicial: ");
    scanf ("%f",&a);
    printf ("\n Digite um Limite Final: ");
    scanf ("%f",&b);
    printf ("\n Digite o Valor da Tolerancia: ");
    scanf ("%f",&tol);
    printf ("\n Numero Maximo de Iteracoes: ");
    scanf ("%d",&maxit);
    iter = 0;
    op = 1;
    do
    {
     system("clear||cls");
     fa = f1(a);
     fb = f1(b);
     Xn  = (a + b)/2;
     fxn = f1(Xn);
     fxba= fa*fb;
     modulo = (b - a)/2;
     iter += 1;

     if (maxit > 0)
     if (iter == maxit)
       op = 2;
     if (modulo < 0) //fabs(modulo)
      modulo = modulo * (-1);
     if (modulo < tol)
      op = 3;
     printf (" Metodo da Bisseccao:");
     printf ("\n \n Iteracao= %d",iter);
     printf ("\n\n a= %f",a); printf ("       F(a)= %f",fa);
     printf ("\n b= %f",b); printf ("       F(b)= %f",fb);
     printf ("\n Xn= %f",Xn); printf ("      F(Xn)= %f",fxn);
     printf ("\n \n |Xn - (Xn - 1)|= %f",modulo);
     printf ("\n \n F(Xa).F(Xb)= %f",fxba);

     if (op == 1)
     {
      if (fa*fxn<0)
       printf ("\n\n O valor de B sera substituido!");
      else
       printf ("\n\n O valor de A sera substituido!");
     }
     if (op == 1) {
      if (fa*fxn < 0)
       b = Xn;
      else 
       a = Xn;
       getchar();
     }
    }
    while(op == 1);
     printf ("\n\n Portanto, a raiz de X= %f",Xn);
     printf (" foi encontrada na %d.a iteracao,",iter);
     printf ("\n com |Xn - (Xn - 1)|= %f menor ou igual a tolerancia %f!",modulo,tol);
    getchar();
   }
   break;
   case 2:
    void newton_rapson();
    {
    int n, nmax, stop;
    float Xn,e,x,xn1,x0,modulo;
    system("clear||cls");
    stop = 0;
    n    = 0;
    printf (" Metodo de Newton-Raphson:");
    printf ("\n \n Digite o Chute Inicial: ");
    scanf ("%f",&Xn);
    printf ("\n Digite a Tolerancia: ");
    scanf ("%f",&e);
    printf ("\n Digite o Numero Maximo de Iteracoes: ");
    scanf ("%d",&nmax);
    x    = 0;
    while (stop == 0)
    {
     x0 = Xn;
     system("clear||cls");

     n = n + 1;
     printf (" Metodo de Newton-Raphson:");
     printf ("\n\n %d.a Iteracao - X%d",n,n);
     printf ("\n Xn = %f",Xn);
     xn1  = Xn;

     x   = f2(xn1)/f3(xn1);
     Xn  = xn1 - x;
     modulo = fabs(Xn-x0);
 
     if ((n>nmax) || (fabs(Xn-x0)<e))
      stop = 1;

     printf ("\n (X[n-1]) - ((F(Xn)/F'(Xn))= %f",Xn);
     printf ("\n |Xn - (Xn - 1)|= %f",modulo);
     getchar();
     printf ("\n\n Portanto, a raiz de X= %f",Xn);
     printf (" foi encontrada na %d.a iteracao,",n);
     printf ("\n com |Xn - (Xn - 1)|= %f menor ou igual a tolerancia %f!",modulo,e);
    }
    getchar();
   }//fim funcao NEWTON_RAPSON

   break;
  }
 }while (op != 3);//while op
 system("clear||cls");
 printf (" Sair do programa?");
 printf ("\n \n Pressione a tecla 'Enter' para sair do programa!");
 getchar();
}//void main  //Fim do Menu
