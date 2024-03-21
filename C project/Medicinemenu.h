#include "Medicine.h"
#include "Addmedicinedetails.h"
#include "showmedicinedetails.h"
#include "Searchmedicinebyid.h"
#include "Searchmedicinebyname.h"
#include "updatemedicinedetails.h"
void Medicine(struct medicine M,FILE*fptr2)
{
	int choice;
	do
	{
		fptr2=fopen("C:\\C project\\C project\\Project Files\\Medicinemenu.txt","a+");
		printf("\n1.Add Medicine details:\n");
		printf("\n2.Show medicine details:\n");
		printf("\n3.Search Medicine by id:\n");
		printf("\n4.Search Medicine by name:\n");
		printf("\n5.Update medicine stock:\n");
		printf("\n6.Exit\n");
		printf("\nEnter your choice:\n");
		scanf("%d",&choice);
		
		   switch(choice)
		   {
		   	case 1:
		   		printf("\nEnter the id,medicine name,rack,cabin,purchased date,expiry date,manufacturing date,company name and Supplier name:\n");
		   		scanf("%d %s %d %s %s %s %s %s %s",&M.id,&M.medi_name,&M.rack,&M.cabin,&M.pur_date,&M.exp_date,&M.manu_date,&M.comp_name,&M.supp_name);
		   		medi_entry(M,fptr2);
		   		break;
		   		case 2:
		   			showmedidetails(M,fptr2);
		   			break;
		   			case 3:
		   				int medi_id;
		   				printf("\nEnter the medicine id:\n");
		   				scanf("%d",&medi_id);
		   				searchmedidetails(M,medi_id,fptr2);
		   				break;
		   				case 4:
		   					_flushall();
		   					char mediname[50];
		   					printf("\nEnter the medicine Name:\n");
		   					gets(mediname);
		   					_flushall();
		   					searchmedibyname(M,mediname,fptr2);
		   					break;
		   					case 5:
		   						int mediID;
		   						printf("\nEnter the medicine ID which you want to update:\n");
		   						scanf("%d",&mediID);
		   						updatemedicine(M,mediID,fptr2);
		   						break;
		   						case 6:
		   							printf("\nExit\n");
		   							break;
		   							default:
		   								printf("\nInvalid Choice given by use\n");
		   								break;
		   		
		   }
	}while(choice<=6);
}
