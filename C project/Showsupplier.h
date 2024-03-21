void showsupplier(struct supplier S,FILE *fptr1)
{
	while(fscanf(fptr1,"%d %s %s %s %s",&S.supplier_id,&S.supplier_name,&S.temp1.mob_no,&S.temp1.city,&S.temp1.email)!=EOF)
	{
		printf("\n%d %s %s %s %s\n",S.supplier_id, S.supplier_name, S.temp1.mob_no, S.temp1.city, S.temp1.email);
		
	}
}
