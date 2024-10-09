// week05-3.c UV10222 Decode the Man Man
#include <stdio.h>
#include <ctype.h> // Step04: tolower(c)
#include <string.h> // Step05: strchr(s, c) not used here!
int main()
{
	// Step03: keyboard keys
	char s[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;
	// Step01: Input
	while( scanf("%c", &c) == 1 ){
		c = tolower(c); // Step04: tolower(c)
		if(c==' ' || c=='\n') printf("%c", c); // Step02: Output
		else{
			for(int i=0; s[i]!=0; i++){
				if(s[i]==c) printf("%c", s[i-2]);
			} // Step05: find c in s
		}
	}
}