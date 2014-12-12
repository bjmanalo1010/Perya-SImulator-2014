#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include <time.h>

char process();

int main(){
char bet;

printf("Where would you like to bet\n");
scanf("%c",&bet);

char win = process();


if( win == bet ){
	printf("Congratulations!\n");
}
	else printf("Too Bad\n");

}

char process(){
	srand(time(NULL));
	int random = rand() %6;
	switch (random){
		case 0: printf("The winning Letter is A!\n"); return 'A';  break;
		case 1: printf("The winning Letter is B!\n"); return 'B'; break;
		case 2: printf("The winning Letter is C!\n"); return 'C'; break;
		case 3: printf("The winning Letter is D!\n"); return 'D'; break;
		case 4: printf("The winning Letter is E!\n"); return 'E';break;
		case 5: printf("The winning Letter is F!\n"); return 'F'; break;
	
	}

}

