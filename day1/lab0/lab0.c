#include <stdio.h>

double sqrt(double);
int main(){
	int x = 255;
	double root = sqrt(x);
	char bang = '!';
	printf("The square root of %d = %f %c%c\n", x, root, bang, bang);
	printf("the square root of %05d = %.3f = %10.4f\n", x, root,root);
	int xx[2]= {3,5};
	printf("xx: %d, %d\n", xx[0], xx[1]);
	char hello1[6]= {'h','e','l','l','o','\0'};
	char empty_string1[1] = {'\0'};
	printf("hello1: %s\n", hello1);
	printf("%s: [%s]\n", "empty string", empty_string1);

	char hello2[6]="hello";
	char empty_string2[1]="";
	printf("hello2: %s\n", hello2);
	printf("another empty string: <%s>\n\n", empty_string2);
	
}
