#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 100
#define TRUE 1
typedef struct Infor{
	char name[10];
	int age;
}Infor;

typedef struct company{
	int num;
	Infor *human;
}Company;

void inputString(Company **pInfor);

