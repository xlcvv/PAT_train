#include<stdio.h>
int main()
{
	int Pa, Pb, PaByreferee = 0, PbByreferee =  0, referee[3];
	scanf("%d %d", &Pa, &Pb);
	scanf("%d %d %d", &referee[0], &referee[1], &referee[2]);
	for( int i = 0; i < 3; i ++ )
		if(referee[i] == 0) // 评委投票计数 
			PaByreferee += 1;
		else
			PbByreferee += 1;
	if(Pa > Pb && PaByreferee > 0 )
		printf("The winner is a: %d + %d", Pa, PaByreferee);
	else
		printf("The winner is b: %d + %d", Pb, PbByreferee);
	
	return 0;

}
