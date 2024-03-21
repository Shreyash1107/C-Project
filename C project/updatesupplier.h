void updatesupplier(struct supplier S, int supp_Id, FILE*fptr1)
{
	FILE *TEMPFile;
	TEMPFile=fopen("C:\\C project\\C project\\Project Files\\updatesupplier.txt","w+");
	int flag=0;
	while(fscanf(fptr1,"%d %s %s %s %s",&S.supplier_id,&S.supplier_name,&S.temp1.city,&S.temp1.mob_no,&S.temp1.email)!=EOF)
	{
		if(supp_Id==S.supplier_id)
		{
			flag=1;
			//Displaying current information of supplier which you want to update
			printf("\nSupplier details which you want to update:\n");
			printf("\n%d %s %s %s %s\n",S.supplier_id,S.supplier_name,S.temp1.city,S.temp1.mob_no,S.temp1.email);
			//Entering updated information for that supplier
			printf("\nEnter the updated Supplier details:\n");
			scanf("%d %s %s %s %s",&S.supplier_id,&S.supplier_name,&S.temp1.city,&S.temp1.mob_no,&S.temp1.email);
			//Adding this updated information to the temporary file
			fprintf(TEMPFile,"\n%d %s %s %s %s\n",S.supplier_id,S.supplier_name,S.temp1.city,S.temp1.mob_no,S.temp1.email);
		}
		else
		{
			//Writing updated data to temporary files as it is if not found
			fprintf(TEMPFile,"\n%d %s %s %s %s\n",S.supplier_id,S.supplier_name,S.temp1.city,S.temp1.mob_no,S.temp1.email);
		}
		
	}
	fclose(fptr1);
	fclose(TEMPFile);
	
	    if(flag!=1)
	    {
	    	printf("\nSupplier with %d Id not found:\n",supp_Id);
		}
		else
		{
			//open the original Supplier file and replace the supplier details which you want to update with supplier details stored in temprary file
			fptr1=fopen("C:\\C project\\C project\\Project Files\\Suppliermenu.txt","w");
			TEMPFile=fopen("C:\\C project\\C project\\Project Files\\updatesupplier.txt","r");
			int CH;  //temporary variable used to store the details read from temporary file when copying contents to orginal file fptr1
			while((CH=fgetc(TEMPFile))!=EOF)
			//The details which we read from tempfile using fgetc are assigned to ch, which is temporary variable used 
		   //fgetc will read details from tempfile
			
			{
				fputc(CH,fptr1);
				//putc function will simply update customer details entered by user
			}
			fclose(fptr1);
			fclose(TEMPFile);
		}
}
