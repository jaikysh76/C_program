#include<stdio.h>
int main()
{
	float fahrn,celcius;
	int lower,upper,step;
	lower=0;
	upper=300;
	step=20;
	fahrn=lower;
	while(fahrn<=upper)
	{
		celcius=(5.0/9.0)*(fahrn-32.0);
		printf("%3.0f \t %6.1f\n",fahrn,celcius);
		fahrn=fahrn+step;
	}
}
