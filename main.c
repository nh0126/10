#include <stdio.h>
#include <string.h>

void main(int argc, char *argv[])
{	FILE* fp;
	char str[100];
	int i;
	
	//1. OPEN FILE
	fp = fopen("sample.txt","w");
	
	//2. WRITE FILE
	for(i=0;i<3;i++)
	{
	    //2-1. PRINT "input a word"]
	    printf("input a word: ");
	    //2-2. SCANF A STRING
	    scanf("%s", str);
	    //2-3. fprintf()
	    fprintf(fp, "%s\n", str);
	}
	//3. CLOSE FILE
	fclose(fp); 
	
	system("PAUSE");	
  	return 0;
}
