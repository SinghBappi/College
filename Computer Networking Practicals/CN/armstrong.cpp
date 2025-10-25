#include<stdio.h>
#include<math.h>
int main()
{
	int number ,originalNumber,remainder ,result =0,numDigits=0;
	printf("Enter an Integer:");
	scanf("%d",&number);
	originalNumber = number;
	while (originalNumber !=0)
	{
		originalNumber /= 10;
		numDigits++;
	}
	originalNumber = number;
	while (originalNumber !=0)
	{
		remainder = originalNumber%10;
		result+= pow(remainder ,numDigits);
		originalNumber /=10;
	}
	if ((int)result == number)
	{
		printf("%d is an armstrong number./n",number);
	}
	else
	{
		printf("%d is not an armstrong number./n",number);
	}
	return 0;
}
