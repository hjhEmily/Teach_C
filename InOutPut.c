#include "company.h"

void inputString(Company **pInfor)
{
	char buffer[BUFSIZE];
	int *index=&((*pInfor)->num), i=0;
	Infor *members=(*pInfor)->human;

	members=(Infor*)calloc(100, sizeof(Infor));

	while(TRUE)
	{
		printf("Do you want to input datas continuely? (EXIT) - ");
		scanf("%s", buffer);
		fflush(stdin);
		if(strcmp(buffer, "EXIT"))
		{
			printf("Please input people informations that is a pair of name and age - \n");
			scanf("%s %d", (members+(*index))->name, &(members+(*index))->age);
			fflush(stdin);
			(*index)++;
		}
		else
		{
			for(i; i<(*index); i++)
				printf("====  Person%d = ( name : %s , age : %d )\n", i+1, (members+i)->name, (members+i)->age);
				
			return;
		}
	}
		
}


