#include "Login.h"
void login(struct login L,FILE*lgn)
{
	fprintf(lgn,"\n%s %s\n",L.usename,L.password);
	printf("\nUser id and Password has been saved sucessfully\n");
	fclose(lgn);
}
