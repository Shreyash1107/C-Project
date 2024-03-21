void updatecustomer(struct customer C, int custId, FILE* fptr)
{
	FILE *tempfile;
	tempfile=fopen("C:\\C project\\C project\\Project Files\\updatecustomer.txt","w+");
	int flag=0;
	while(fscanf(fptr,"%d %s %s %s %s",&C.cust_id,&C.cust_name,&C.city,&C.mob_no,&C.email)!=EOF)
	{
		if(custId==C.cust_id)
		{
			flag=1;
			     //Displaying current information of customer which you want to update
			printf("\nCurrent Customer Details which further you want to update:\n");
			printf("%d %s %s %s %s",C.cust_id,C.cust_name,C.city,C.mob_no,C.email);
			   //Entering updated information for that customer
			printf("\nEnter the updated customer id,name,city,mobile number and email:\n");
			scanf(" %d %s %s %s %s",&C.cust_id,&C.cust_name,&C.city,&C.mob_no,&C.email); 
			printf("\n");
			     //Adding this updated information to the temporary file
			fprintf(tempfile,"\n%d %s %s %s %s\n",C.cust_id,C.cust_name,C.city,C.mob_no,C.email);
			
			printf("\nCustomer details has been updated");
		}
		else
		{
			     //Writing updated data to temporary files as it is if not found
			fprintf(tempfile,"\n%d %s %s %s %s\n",C.cust_id,C.cust_name,C.city,C.mob_no,C.email);
		}
	}
	fclose(fptr);
	fclose(tempfile);
	
	if(flag!=1)
	{
		printf("\nCustomer with %d ID not found:\n",custId);
	}
	else
	{
		//open the original Customer file and replace the customer details which you want to update with customer details stored in temprary file
		fptr=fopen("C:\\C project\\C project\\Project Files\\Customermenu.txt","w+");
		tempfile=fopen("C:\\C project\\C project\\Project Files\\updatecustomer.txt","r+");
		int ch;  //temporary variable used to store the details read from temporary file when copying contents to orginal file fptr
		while((ch=fgetc(tempfile))!=EOF)
		   //The details which we read from tempfile using fgetc are assigned to ch, which is temporary variable used 
		   //fgetc will read details from tempfile
		{
			fputc(ch,fptr);
		  //putc function will simply update customer details entered by user
		}
		fclose(fptr);
		fclose(tempfile);
		
	}
}
