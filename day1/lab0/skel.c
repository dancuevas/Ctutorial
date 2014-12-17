#include <stdio.h>  // to access printf, scanf

// Prototype for square root routine
//
double sqrt(double);

int main() {
  // To use printf (print formatted), you provide a format string
  // and a list of values.  The format string can contain literal
  // characters to print and format codes (with %) to indicate how
  // to print the values.
  //  
  // Use the %d format code to print an integer; use %f for a
  // floating- point or double precision number; use %c for a
  // single character.  An integer after the % specifies the width
  // of the output.
  // 
  int x = 255;
  double root = (double) sqrt(x);
  char bang = '!';
  printf("The square root of %d = %f %c%c\n", x, root, bang, bang);

  // Refinements to the format codes: You can specify the width w
  // of the field to print using %wd or %wf.  For leading 0's, use
  // %0d or %0wd.  For floats, you can specify the number d of
  // decimal places to print using %w.df or %.df.
  //
  printf("The square root of %05d = %.3f = %10.4f\n", x, root, root);

  
  // You can't print out an array of numbers all at once.
  //
  int xx[2] = {3, 5};	// Declare and initialize array xx
  printf("xx: %d, %d\n", xx[0], xx[1]);

  // In C, a string is an array of characters with one extra
  // character '\0' (the null character), at the end of the
  // string. You can print a character array as a string using the
  // printf format code %s.  You can also print a string constant using %s.
  //
  char hello1[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
  char empty_string1[1] = {'\0'};
  printf("hello1: %s\n", hello1);
  printf("%s: [%s]\n", "empty string", empty_string1);
  printf("\n");
  
  // You can initialize a character array using a string constant,
  // which makes life easy.
  //
  char hello2[6] = "hello";
  char empty_string2[1] = "";
  printf("hello2: %s\n", hello2);
  printf("Another empty string: <%s>\n\n", empty_string2);

  // We can use scanf (formatted scan) to read from the keyboard. 
  // Like printf, scanf takes a format string. Unlike printf,
  // instead of providing a list of variables to read into, you
  // provide a list of >addresses< into which to read.  For
  // variables of basic types like int, double, or char, you
  // insert an ampersand before the variable.  We'll study the
  // ampersand more later, but basically it says to get the
  // address of the thing following it.
  //
  int y;
  printf("Enter an fairly small integer >= 0 (and then return): ");
  scanf("%d", &y);
  printf("We read in %d\n\n", y);
  
  // sscanf is like scanf but instead of reading from the
  // keyboard, it reads from a string.  Unused input is ignored.
  //
  sscanf("25 argle bargle", "%d", &y);
  printf("Using sscanf, we read in %d\n\n", y);
  
  // Values of type int must be less than or equal to (2^31)-1 =
  // 2147483647.  Values of type long int (long integer) can be
  // greater than (2^31)-1. To read/print a long integer, use
  // format code %ld.
  //
  long int z;
  printf("Now enter an integer >= 2147483648: ");
  scanf("%ld", &z);
  printf("The square root of %ld = %.10f\n", z, sqrt(z));

  // If we read a value too large to be stored as an integer, we'll
  // store the wrong value, possibly as a negative number.
  //
  printf("Please enter the same integer (this time we'll read it as an int): ");
  scanf("%d", &y);
  printf("We read in %d; its square root is %f\n", y, sqrt(y));
  if (y < 0) {
    printf("\"nan\" means Not A Number (= sqrt of negative number)\n");
  }

  return 0;
}

