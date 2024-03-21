void updatemedicine(struct medicine M, int mediid, FILE*fptr2)
{
	FILE *file;
	file=fopen("C:\\C project\\C project\\Project Files\\mediupdate.txt","w+");
	int f=0;
		while(fscanf(fptr2,"%d %s %d %s %s %s %s %s %s",&M.id,&M.medi_name,&M.rack,&M.cabin,&M.pur_date,&M.exp_date,&M.manu_date,&M.comp_name,&M.supp_name)!=EOF)
		{
			if(mediid==M.id)
			{
				f=1;
				printf("\nCurrent Medicine details which you want to update\n");
				printf("\n%d %s %d %s %s %s %s %s %s\n",M.id,M.medi_name,M.rack,M.cabin,M.pur_date,M.exp_date,M.manu_date,M.comp_name,M.supp_name);
				 
				  printf("\nEnter the updated medicinne id,name,rack no,cabin,purshased date,expiry date,manufacturing date,Company name and Supplier name\n");
				  scanf("%d %s %d %s %s %s %s %s %s",&M.id,&M.medi_name,&M.rack,&M.cabin,&M.pur_date,&M.exp_date,&M.manu_date,&M.comp_name,&M.supp_name);
				  
				fprintf(file,"\n%d %s %d %s %s %s %s %s %s\n",M.id,M.medi_name,M.rack,M.cabin,M.pur_date,M.exp_date,M.manu_date,M.comp_name,M.supp_name);
				
				  printf("\nMedicine details has been updated\n");
			}
			else
			{
				fprintf(file,"\n%d %s %d %s %s %s %s %s %s\n",M.id,M.medi_name,M.rack,M.cabin,M.pur_date,M.exp_date,M.manu_date,M.comp_name,M.supp_name);
			}
		}
		fclose(file);
		fclose(fptr2);
		
		   if(f!=1)
		   {
		   	printf("\nMedicine with %d id not found\n",mediid);
		   }
		   else
		   {
		   	fptr2=fopen("C:\\C project\\C project\\Project Files\\Medicinemenu.txt","w+");
		   	file=fopen("C:\\C project\\C project\\Project Files\\mediupdate.txt","r+");
		   	
		   	    int temp;
		   	    while((temp=fgetc(file))!=EOF)
		   	    {
		   	    	fputc(temp,fptr2);
				   }
				   fclose(fptr2);
				   fclose(file);
		   }
		   
}
