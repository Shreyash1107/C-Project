void SearchsupplierbyID(struct supplier S, int supp_id,FILE *fptr1)
{
	int flag=0;
	while(fscanf(fptr1,"%d %s %s %s %s",&S.supplier_id,&S.supplier_name,&S.temp1.mob_no, &S.temp1.city,&S.temp1.email)!=EOF)
	{
		if(S.supplier_id==supp_id)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==1)
	{
		printf("\nSupplier found\n");
		printf("\n%d %s %s %s %s",S.supplier_id,S.supplier_name,S.temp1.mob_no,S.temp1.city,S.temp1.email);
	}
	else
	{
		printf("\nSupplier not found\n");
	}
}
