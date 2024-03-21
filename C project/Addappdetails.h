void Addappdetails(struct about A,FILE *fptr3)
{
	            fprintf(fptr3,"Application Name:%s\n\n\nApp is developed by:%s\n\n\nLanching Date:%s\n\n\nDeveloper's Contact:%s\n\n\nDeveloper's Email:%s\n\n",A.app_name,A.app_dev,A.launch_date,A.dev_contact,A.dev_email);
	printf("\nApp details Entered Successfully\n");
	fclose(fptr3);
}

