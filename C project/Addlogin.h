void addlogin(struct login L,FILE*lgn)
{
	fprintf(lgn,"\n%s %s\n",L.usename,L.password);
	printf("\nAccount Created Successfully\n");
	fclose(lgn);
}
