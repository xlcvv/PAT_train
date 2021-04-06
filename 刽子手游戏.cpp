#include<stdio.h>
#include<string.h>

char s[100], s2[100];
int wrong, left, chance, win, lose, rnd;
int guess(char s2i){
	
	wrong = 1;
	for( int j = 0; j < strlen(s); j++ ){
		if( s2i == s[j] ){
			left --;
			s[j] = ' ';
			wrong = 0;
		}
	}
	if( !left )
		win = 1;
	if( wrong )
		-- chance;
	if( !chance )
		lose = 1;
}

int main()
{
	while( scanf("%d%s%s", &rnd, s, s2) == 3 && rnd != -1 ){
		win = lose = 0;				//重置 
		chance = 7;					//七次机会 
		left = strlen(s);
		for( int i = 0; i < strlen(s2); i++ ){ 
			guess( s2[i] );
			if( win || lose )
				break;
		}
		if( win )
			printf("you win");
		else if( lose )
			printf("you lose");
		else
			printf("you chickened out");
	}
	return 0;
}
