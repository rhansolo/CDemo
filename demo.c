#include <stdio.h>
#include <string.h>

int main(){
  char s[] = "wassup peeps";
  char ch = 'p';
  /*strchr - returns pointer to eh first occurrence of the chracter c in the string str or Null if the character isn't found */
  char* s1 = strchr(s,ch);
  /*strstr - returns a pointer to the first occurence in haystack of any of the entire sequence of character specified in needle, or a null pointer if the sequence is not present in haystack*/
  char* s2 = strstr(s,"peeps");
  char* s3 = strstr(s,"p");
  printf("Original: %s\n", s);
  printf("strchr p in s produces: %s\n",s1);
  printf("strstr peeps in s produces: %s\n",s2);
  printf("strstr p in s producces: %s\n",s3);
  return 0;
}
