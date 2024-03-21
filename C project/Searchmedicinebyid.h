void searchmedidetails(struct medicine M,int medi_id,FILE*fptr2)
{
	int flag=0;
	while(fscanf(fptr2,"%d %s %d %s %s %s %s %s %s",&M.id,&M.medi_name,&M.rack,&M.cabin,&M.pur_date,&M.exp_date,&M.manu_date,&M.comp_name,&M.supp_name)!=EOF)
	{
		if(medi_id==M.id)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("\nMedicine Found\n");
		printf("%d %s %d %s %s %s %s %s %s",M.id,M.medi_name,M.rack,M.cabin,M.pur_date,M.exp_date,M.manu_date,M.comp_name,M.supp_name);
	}
	else
	{
		printf("\nMedicine not found\n");
	}
}
