#include "Customer.h"
#include "Addcustomer.h"
#include "Showcustomer.h"
#include "Searchcustomerbyid.h"
#include "Searchcustomerbyname.h"
#include "updatecustomer.h"
void customer(struct customer C,FILE *fptr)
{
	int choice;
	do{
		fptr=fopen("C:\\C project\\C project\\Project Files\\Customermenu.txt","a+");
		printf("\n1.Add customer details:\n");
		printf("\n2.Display customer details:\n");
		printf("\n3.Search Customer by id:\n");
		printf("\n4.Search Customer by name:\n");
		printf("\n5.Update Customer:\n");
		printf("\n6.Exit\n");
		printf("\nEnter the choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("\nEnter the customer id,customer name,city,mobile number,email:\n");
     		scanf("%d %s %s %s %s",&C.cust_id,&C.cust_name,&C.city,&C.mob_no,&C.email);
     		Addcustomer(C,fptr);
     		break;
     		case 2:
     			showcustomer(C,fptr);
     			break;
				 case 3:
     					int custid;
     					printf("\nEnter the customer id:\n");
     					scanf("%d",&custid);
     					searchcustomerbyID(C,custid,fptr);
     					break;
     					case 4:
     						char custname[100];
     						printf("\nEnter the customer name:\n");
     						scanf("%s",&custname);
     						searchcustomerbyname(C,custname,fptr);
     						break;
     						case 5:
     							 int custId;
                                 printf("Enter the customer ID you want to update: ");
                                 scanf("%d", &custId);
                                 updatecustomer(C,custId,fptr);
                                 break;
                                 case 6:
     			                printf("\nExit\n");
     			                break;
     			                   default:
     				               printf("\nInvalid choice\n");
     				               break;
     		
		}
	}while(choice<=6);
}
