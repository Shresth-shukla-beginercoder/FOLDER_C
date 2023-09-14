# include<stdio.h>
#include<string.h>

int vowels(char str[] );

int main (){
char star[] = "AAKRITISHRESTHSHUKLA";
printf("number of vowels are :%d\n", vowels(star));
printf("total consonants are :%d\n", strlen(star)-vowels(star));

    return 0 ;
}
int vowels(char str[]){
int count = 0;

for(int i =0 ; str[i] !='\0';i++ ){

    if(str[i] == 'a'|| str[i] =='e'|| str[i] == 'i'|| 
    str[i] == 'o'||
    str[i] == 'u'){
       
        
        count++;

    } else if (str[i] == 'A'|| str[i] =='E'|| str[i] == 'I'|| 
    str[i] == 'O'||
    str[i] == 'U')
        {   count++; }
}

return count;

}