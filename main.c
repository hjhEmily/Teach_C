#include "company.h"

int main(int argc, char *argv[])
{
	Company *company = (Company*)calloc(1, sizeof(Company));

	inputString(&company);

	return 0;
}



