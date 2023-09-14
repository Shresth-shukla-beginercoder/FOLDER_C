# include<stdio.h>
# include<string.h>

void salting(char pass[]);

int main(){

    char passU[100];
    scanf("%s", passU);
    salting(passU);


}void salting(char pass[]){
char salt[] = "82288";
char passN[200];

strcpy(passN,pass);// passU is copy ib passN
strcat(passN,salt);// passN + salt"82288"
puts(passN);
}