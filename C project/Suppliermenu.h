#include "Supplier.h"
#include "AddSupplier.h"
#include "Showsupplier.h"
#include "Searchsupplierbyid.h"
#include "Searchsupplierbyname.h"
#include "updatesupplier.h"
void Supplier(struct supplier S,FILE*fptr1)
{
	int choice;
	do
	{
		fptr1=fopen("C:\\C project\\C project\\Project Files\\Suppliermenu.txt","a+");
		printf("\n1.Add Supplier details:\n");
		printf("\n2.Display Supplier details:\n");
		printf("\n3.Search Supplier by id:\n");
		printf("\n4.Search Supplier by name:\n");
		printf("\n5.Update Supplier details:\n");
		printf("\n6.Exit\n");
		printf("\nEnter your choice:\n");
		scanf("%d",&choice);
		   
		   switch(choice)
		   {
		   	case 1:
		   		printf("\nEnter the supplier id,name,contact,city and email:\n");
		   		scanf("%d %s %s %s %s",&S.supplier_id,&S.supplier_name,&S.temp1.mob_no,&S.temp1.city,&S.temp1.email);
		   		AddSupplier(S,fptr1);
		   		break;
		   		case 2:
		   			showsupplier(S,fptr1);
		   			break;
		   			case 3:
		   				int supp_id;
		   				printf("\nEnter the suppier id:\n");
		   				scanf("%d",&supp_id);
		   				SearchsupplierbyID(S,supp_id,fptr1);
		   				break;
		   				case 4:
		   					_flushall();
		   					char supp_name[50];
		   					printf("\nEnter the supplier name:\n");
		   					gets(supp_name);
		   					_flushall();
		   					Searchsupplierbyname(S,supp_name,fptr1);
		   					break;
		   					case 5:
		   						int supp_Id;
		   						printf("\nEnter the supplier id you want to update:\n");
		   						scanf("%d",&supp_Id);
		   						updatesupplier(S,supp_Id,fptr1);
		   						break;
		   		case 6:
		   			printf("\nExit\n");
		   			break;
		   			default:
		   				printf("\nInvalid input by user:\n");
		   				break;
		   }
	}while(choice<=6);
}
