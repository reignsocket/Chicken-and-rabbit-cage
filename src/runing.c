
#include<stdio.h>
void main()
{
	int nCases, i, nFeet;//nCases represents the number of groups in which test data is entered, and nFeet represents the number of feet entered.
	scanf("%d", &nCases);
	for(i = 0; i < nCases; i++){
		scanf("%d", &nFeet);
		if(nFeet %2 != 0) //If there are odd numbers, the input is incorrect.
			printf("0 0\n");
		else if (nFeet%4 != 0) //To minimize the number of animals, make the animal as close as possible to 4 feet.If you have the largest number of animals, make the animals have 2 feet as much as possible.
			printf("%d %d\n", nFeet / 4 + 1, nFeet / 2);
		else printf("%d %d\n", nFeet / 4, nFeet / 2);
	}
}
