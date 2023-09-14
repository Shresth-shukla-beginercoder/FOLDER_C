# include<stdio.h>
# include<string.h>
/* 0 -> string equal
poitive -> fname > sname 
negative -> fname < sname 
*/
int main(){
char fname[] ="bunny bhaiya";
char sname[] = "bubu deol";
  printf("value is :%d",strcmp(fname,sname));

return 0 ;

}