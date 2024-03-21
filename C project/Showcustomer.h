void showcustomer(struct customer C, FILE*fptr)
{
	while(fscanf(fptr,"%d %s %s %s %s",&C.cust_id,&C.cust_name,&C.city,&C.mob_no,&C.email)!=EOF)
	{
			printf("\n%d %s %s %s %s\n",C.cust_id, C.cust_name, C.city, C.mob_no, C.email);
	}
	

	fclose(fptr);
}
