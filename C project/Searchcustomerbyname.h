void searchcustomerbyname(struct customer C,char custname[],FILE *fptr)
{
	int flag=0;
	while(fscanf(fptr,"%d %s %s %s %s",&C.cust_id,&C.cust_name,&C.city,&C.mob_no,&C.email)!=EOF)
	{
		if(strcmp(C.cust_name,custname)==0)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("\nCustomer Found\n");
		printf("\n%d %s %s %s %s\n",C.cust_id, C.cust_name, C.city, C.mob_no, C.email);
	}
	else
	{
		printf("\nCustomer not found\n");
	}
}
