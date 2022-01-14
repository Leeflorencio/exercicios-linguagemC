#include<stdio.h> 
#include<stdlib.h>
#include<conio.h>
main ()
{
  int opcao=0;
  float A, B, R;
 
  while (opcao!=5)
  {
         system("cls");
         printf("\n1-adicao");  
         printf("\n2-subtracao");   
         printf("\n3-multiplicacao");  
         printf("\n4-divisao");   
         printf("\n5-sair");
         printf("\n\n-Escolha uma opcao :");
         scanf("%d",&opcao);
  
         switch(opcao)
        {
             case 1:
             {     
                   printf("\nDigite o primeiro numero: ");
                   scanf("%f",&A);
                   printf("\nDigite o segundo numero: ");
                   scanf("%f",&B);    
                   R=A + B;    
                   printf ("\n\nO resultado e=%0.2f",R);
                   getch();   
                   break;  
             }          
            case 2:
            {          
                   printf("\nDigite o primeiro numero: ");
                   scanf("%f",&A);
                   printf("\nDigite o segundo numero: ");
                   scanf("%f",&B);    
                   R=A - B;    
                   printf ("\n\nO resultado e=%0.2f",R);
                   getch(); 
                   break;       
             }    
 
           case 3:
             {       
                   printf("\nDigite o primeiro numero: ");
                   scanf("%f",&A);
                   printf("\nDigite o segundo numero: ");
                   scanf("%f",&B);    
                   R=A * B;    
                   printf ("\n\nO resultado e=%0.2f",R);
                   getch();       
                   break;          
             }       
           case 4:
           {          
                   printf("\nDigite o primeiro numero: ");
                   scanf("%f",&A);
                   printf("\nDigite o segundo numero: ");
                   scanf("%f",&B);    
                   R=A / B;    
                   printf ("\n\nO resultado e=%0.2f",R);
                   getch();              
                   break;          
            }            
           default: 
                   printf("\nEsta operacao nao existe");
        } 
   }  
   system ("PAUSE");                          
}
