#include "Aboutapp.h"
#include "Addappdetails.h"
#include "showappdetails.h"
void About(struct about A,FILE *fptr3)
{
	int choice;
	do
	{
		fptr3=fopen("C:\\C project\\C project\\Project Files\\about.txt","a+");
		printf("\n1.Add App details:\n");
		printf("\n2.View App Details:\n");
		printf("\n3.Exit\n");
		printf("\nEnter your choice:\n");
		scanf("%d",&choice);
		     
		     switch(choice)
		     {
			    case 1:
			    	_flushall();
				    printf("\nEnter the Application Name, Application is developed by, Relased date, Developer Contact, Developer email:\n");
					gets(A.app_name);
					_flushall();
					gets(A.app_dev);
					_flushall();
					gets(A.launch_date);
					_flushall();
					gets(A.dev_contact);
					_flushall();
					gets(A.dev_email);
					_flushall();
					Addappdetails(A,fptr3);	
		     		break;
		     		case 2:
		     			showappdetails(A,fptr3);
		     			break;
		     		case 3:
		     			printf("\nExit\n");
		     			break;
		     			default:
		     				printf("\nInvalid Choice\n");
		     				break;
			 }
	}while(choice<=3);
}
