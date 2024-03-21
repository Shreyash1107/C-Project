void searchcustomerbyID(struct customer C,int custid,FILE*fptr)
{
	int flag=0;
	while(fscanf(fptr,"%d %s %s %s %s",&C.cust_id,&C.cust_name,&C.city,&C.mob_no,&C.email)!=EOF)
	{
		if(C.cust_id==custid)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nCustomer found:\n");
		printf("\n%d %s %s %s %s\n",C.cust_id, C.cust_name, C.city, C.mob_no, C.email);
	}
	else
	{
		printf("\nCustomer not found:\n");
	}
	
}
