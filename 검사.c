#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person{
	char *name;
	int age;
}Infor;

typedef struct peopel{
	int num;
	Infor *human;
}start_p;

void inputString(start_p **pInfor);
 
void main()
{
	start_p *personInfor=(start_p*)calloc(1,sizeof(start_p));
	(personInfor->human)=(Infor*)calloc(100,sizeof(Infor));
	inputString(&personInfor);
}
 
void inputString(start_p **pInfor)
{
	char answer[5];
	char exit[5]="exit";
	int i=0;
	int a;
	char buf[10];

	while(1)
	{
		printf("입력하시겠습니까?\n");
		scanf("%s",&answer);
		a=strcmp(answer,exit);
		fflush(stdin);
			if(!(a==0))
			{
				printf("이름과 나이를 입력해주세요.\n");
				scanf("%s     %d",buf,&((*pInfor)->human+(*pInfor)->num)->age);
				((*pInfor)->human+(*pInfor)->num)->name=(char*)malloc(strlen(buf)+1);
				strcpy(((*pInfor)->human+(*pInfor)->num)->name,buf);
				printf("입력하신 사람%d   이름:%s   나이:%d 정보가 저장되었습니다.\n",(*pInfor)->num,((*pInfor)->human+(*pInfor)->num)->name,((*pInfor)->human+(*pInfor)->num)->age);
				(*pInfor)->num++;
				fflush(stdin);
			}
			else
			{
				printf("프로그램을 종료합니다.\n");
				printf("입력된 정보들을 출력합니다.\n");
				for(i=0; i<(*pInfor)->num; i++)
				{
					printf("사람%d     이름:%s     나이:%d\n",i,((*pInfor)->human+i)->name,((*pInfor)->human+i)->age);
				}
				return;
			}
	}
}
