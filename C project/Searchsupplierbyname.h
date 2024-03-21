void Searchsupplierbyname(struct supplier S,char supp_name[],FILE *fptr1)
{
	int flag=0;
	while(fscanf(fptr1,"%d %s %s %s %s",&S.supplier_id,&S.supplier_name,&S.temp1.mob_no,&S.temp1.city,&S.temp1.email)!=EOF)
	{
		if(strcmp(supp_name,S.supplier_name)==0)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("\nSupplier found\n");
		printf("\n%d %s %s %s %s\n",S.supplier_id,S.supplier_name,S.temp1.mob_no,S.temp1.city,S.temp1.email);
	}
	else
	{
		printf("\nSupplier not found\n");
	}
}
