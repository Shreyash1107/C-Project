#include<stdio.h>
#include<string.h>
#include "Loginmenu.h"
#include "Customermenu.h"
#include "Medicinemenu.h"
#include "Suppliermenu.h"
#include "Aboutmenu.h"
struct login L;
struct customer C;
struct medicine M;
struct supplier S;
struct about A;
int main()
{
	FILE *lgn;
	lgn=fopen("C:\\C project\\C project\\Project Files\\Loginmenu.txt","a");
	FILE *fptr;
	FILE *fptr2;
	FILE *fptr1;
	FILE *fptr3;
	
	    int ch;
	 do{
		fptr=fopen("C:\\C project\\C project\\Project Files\\Customermenu.txt","a");
		fptr2=fopen("C:\\C project\\C project\\Project Files\\Medicinemenu.txt","a");
		fptr1=fopen("C:\\C project\\C project\\Project Files\\Suppliermenu.txt","a");
		fptr3=fopen("C:\\C project\\C project\\Project Files\\about.txt","a");
     	printf("\n1.CUSTOMER MENU:\n");
     	printf("\n2.MEDICINE MENU:\n");
     	printf("\n3.SUPPLIER MENU:\n");
     	printf("\n4.BILLING MENU:\n");
     	printf("\n5.ABOUT MENU:\n");
     	printf("\n6.Exit\n");
     	      printf("\n\t\t\t\t****WELCOME****\n");
     	printf("\nEnter the choice:\n");
     	scanf("%d",&ch);
     	
     	switch(ch){
     		case 1:
     			{
     				customer(C,fptr);
				 }
     	        break;
     	        case 2:
     	        	{
     	        		Medicine(M,fptr2);
					 }
					 break;
     	        case 3:
     	        	{
     	        		Supplier(S,fptr1);
					 }
					 break;
					 case 5:
					 	{
					 		About(A,fptr3);
						 }
						 break;
                    case 6:
                    	printf("\nExit\n");
                        break;
     			            default:
     				            printf("\nWrong options selected\n");
     				            break;
     	}
	 }while(ch<=6);
	 fclose(fptr);
	 fclose(fptr2);
	 fclose(fptr1);
	 fclose(fptr3);
	 
	          printf("\n\t\t\t\t****THANK YOU****\n");
	 
	 return 0;
	
}
