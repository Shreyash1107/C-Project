void Addcustomer(customer C, FILE*fptr)
{
	fprintf(fptr,"\n%d %s %s %s %s\n",C.cust_id,C.cust_name,C.city,C.mob_no,C.email);
	printf("\nCustomer Entered Successfully:\n");
	fclose(fptr);
}
