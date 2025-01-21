#include<stdio.h>
int main(){
	FILE *file;
	file=fopen("wascii.cpp","r");
	//new file is created in the c-practice named-wascii.
	int value;
	fscanf(file,"%d",&value);
	printf("Number = %d",value);
	printf("\n");
	fscanf(file,"%d",&value);
	printf("Number = %d",value);
	printf("\n");
	fscanf(file,"%d",&value);
	printf("Number = %d",value);
	printf("\n");
fclose(file);
file=fopen("wascii.cpp","a");//"w" is for writing in the file and it deletes all prervious data."a" is for append, and it edits afetr the saved data
	fputc('C',file);
	fputc('A',file);
	fputc('T',file);
fclose(file);
//FILE *File;
//File=fopen("Concatenation of user string and my string.cpp","r");
//char read;
//read=fgetc(File);
//while(File!=EOF);                 
//{
//printf("%c",File);
//read=fgetc(File);
//}
//printf("\n");

	
	
	return 0;
}
