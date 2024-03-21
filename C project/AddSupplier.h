void AddSupplier(supplier S, FILE*fptr1)
{
	fprintf(fptr1,"\n%d %s %s %s %s\n",S.supplier_id,S.supplier_name,S.temp1.mob_no,S.temp1.city,S.temp1.email);
	printf("\nCustomer Entered Successfully:\n");
	fclose(fptr1);
}
