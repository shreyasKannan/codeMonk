#include <stdio.h>
#include <string.h>

#define	MAX_STRLEN	30

int strRev(char *srcStr, int maxLen) {
	char tmp;
	int i=0, j=0, halfLen = maxLen/2;
	for (i=0, j=maxLen-1; i<halfLen, j>=halfLen; i++, j--) {
		tmp = srcStr[j];
		srcStr[j] = srcStr[i];
		srcStr[i] = tmp;
	}
return 0;	
}

int main(void)
{
	int numTestCases=0, i=0;
	char srcStr[MAX_STRLEN]= {0}; 
	fscanf(stdin, "%d", &numTestCases);
	for (i=0; i<numTestCases; i++)
	{
		fscanf(stdin, "%s", srcStr);
		strRev(srcStr, strlen(srcStr));
		printf("%s\n", srcStr);
	}
	// printf("Hello World!\n");
    
    return 0;
}

