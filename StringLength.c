#include <stdio.h>
void main() {
    char str[1000];
    int i;

	printf("Rhythm Garg, 2100290120141\n");
	
	printf("Enter the string: ");
	scanf("%[^\n]s", &str);

    for (i = 0; str[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
}