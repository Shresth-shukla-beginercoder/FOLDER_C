# include<stdio.h>
int main(){
    
int ch;
printf(" enter letter : ");
scanf("%c",&ch);
if (ch >= 'a' && ch <= 'z')
{
    printf("lower case");

}else if (ch >= 'A' && ch <= 'Z')
{
    printf(" upper case");
}else{
    printf("wrong letter");
}



return 0;

}