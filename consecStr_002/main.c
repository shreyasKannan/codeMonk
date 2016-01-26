#include <stdio.h>
#include <string.h>

#define MAX_STRLEN	30

int sanitizeStr(char *str, int maxLen) 
{
	char *cpy=str;
	do {
		if (*str == 0)
			break;
		if (*str != *cpy) {
			cpy++;
			*cpy = *str;
		}
		str++;

	}while(1);
	cpy++;
	*cpy = 0;
return 0;
}


int main()
{
	int numTestCases=0, i=0;
        char srcStr[MAX_STRLEN]= {0};
        fscanf(stdin, "%d", &numTestCases);

	for (i=0; i<numTestCases; i++) 
	{
		fscanf(stdin, "%s", srcStr);
		sanitizeStr(srcStr, strlen(srcStr));
		printf("%s\n", srcStr);
	}
    return 0;
}
