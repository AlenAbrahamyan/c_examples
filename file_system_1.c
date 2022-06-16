#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void file_licq(FILE* file)
{
 srand(time(0));
 fprintf(file,"%d",rand()%900+100);
 fclose(file);
}
int file_read(FILE* file)
{
 int tiv;
 fscanf(file,"%d",&tiv);
 fclose(file);
 return tiv;
}
int hashvark(int tiv)
{
 return (tiv % 10)*100 + tiv/10; 
}
void artacum(FILE *file,int etiv)
{ 
 fprintf(file,"\ntiv@ havasar e\n%d\n\n",hashvark(etiv));
 fclose(file);
}
int main(void)
{
 FILE* fp;
 fp = fopen("baza.txt","w");
 file_licq(fp);
 fp = fopen("baza.txt","r");
 int eranishtiv=file_read(fp); 
 fp = fopen("baza.txt","a");
 artacum(fp,eranishtiv);
 return 0;
}
//////
