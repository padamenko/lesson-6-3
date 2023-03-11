#include <stdio.h>
#include <string.h>

main()
{
	//task number 1
	printf("Enter first string: ");
	char str[100];
	gets(str);
	
	printf("second char: %c", str[1]);
	printf("\n\n");
	//task number 2
	printf("Enter second string: ");
	char str2[100];
	gets(str2);
	
	int q=strlen(str2);
	char buf=str2[0];
	str2[0]=str2[q-1];
	str2[q-1]=buf;
	printf("char changed: ");
	puts(str2);
	printf("\n\n");
	//task number 3
	printf("Enter third string: ");
	char str3[100];
	gets(str3);
	int deln;
	printf("enter the number of the character to be deleted: ");
	scanf("%i", &deln);
	
	for(int i=deln-1; i<strlen(str3); i++)
	{
		str3[i]=str3[i+1];
	}
	printf("char removed: ");
	puts(str3);
}
