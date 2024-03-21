void showmedidetails(struct medicine M, FILE*fptr2)
{
	while(fscanf(fptr2,"%d %s %d %s %s %s %s %s %s",&M.id,&M.medi_name,&M.rack,&M.cabin,&M.pur_date,&M.exp_date,&M.manu_date,&M.comp_name,&M.supp_name)!=EOF)
	{
		printf("\n%d %s %d %s %s %s %s %s %s\n",M.id,M.medi_name,M.rack,M.cabin,M.pur_date,M.exp_date,M.manu_date,M.comp_name,M.supp_name);
	}
	fclose(fptr2);
}

