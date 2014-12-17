#include <stdio.h>
int radius, area;
main(){
	printf("Enter Radius (i.e.):\n");
	scanf("%d", &radius);
	area = (int) (3.14159 * radius * radius);
	printf("\n\nArea = %d\n", area);
	printf("yo, this shit ain't right.\n");
	double area2;
	area2 = (3.1415 * radius * radius);
	printf("now with different ways: area2: %d\n", (int) area2);
	return 0;
}
