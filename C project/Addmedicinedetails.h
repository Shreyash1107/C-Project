void medi_entry(struct medicine M,FILE*fptr2)
{
	fprintf(fptr2,"\n%d %s %d %s %s %s %s %s %s\n",M.id,M.medi_name,M.rack,M.cabin,M.pur_date,M.exp_date,M.manu_date,M.comp_name,M.supp_name);
	printf("\nMedicine Details Added Sucessfully:\n");
	fclose(fptr2);
}
