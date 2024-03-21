void showappdetails(struct about A, FILE *fptr3)
{
	while(fscanf(fptr3,"%s %s %s %s %s",&A.app_name,&A.app_dev,&A.launch_date,&A.dev_contact,&A.dev_email)!=EOF)
	{
		printf("\n%s %s %s %s %s\n",A.app_name,A.app_dev,A.launch_date,A.dev_contact,A.dev_email);
	}
	fclose(fptr3);
}
