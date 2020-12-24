#include<iostream>
using namespace std;

int main()
{
	//char name[20];
	char buff[100];
	//int coins;
	FILE *fp;
	fp = fopen("coins.txt", "r");
	fscanf(fp, "%s", buff);
	printf(buff);
	fclose(fp);
	printf("Enter the name : ");
	


}
