#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int canAfford(int *amtList, int budget, int maxSize)
{
	int i=0, j=0, numFrens=maxSize/sizeof(int);
	int lastAmt=amtList[i];
	int totAmt=0;

	while(1)
	{
		i++;
		if (i>numFrens)
			break;		
		if (amtList[i]-lastAmt == 1 || lastAmt-amtList[i] == 1 || 
			lastAmt-amtList[i] == lastAmt || amtList[i]-lastAmt == lastAmt)
		{
			if (!j) {
			totAmt+=lastAmt;
			j++;
			}
			totAmt += amtList[i];
		}
		lastAmt=amtList[i];
	}


	if (!totAmt || totAmt>budget)
		return -1;
return 0;
}

int main (void)
{
	int numTestCases=0;
        fscanf(stdin, "%d", &numTestCases);

	while(numTestCases--){
	int numFrens=0, budget=0;
	fscanf(stdin, "%d %d", &numFrens, &budget);
	int toAlloc = numFrens*sizeof(int);
	int *amtToSpend = (int*)malloc(toAlloc);
	int i=0;
	for(i=0; i<numFrens; i++) {
		fscanf(stdin, "%d", (amtToSpend+i));

	}

	for(i=0; i<numFrens; i++) {
		printf("[%d]", amtToSpend[i]);

	}
	printf("\r\n");
	
	if (canAfford(amtToSpend, budget, toAlloc) == 0)
		printf("YES\r\n");
	else
		printf("NO\r\n");

	}	
	
    return 0;
}
