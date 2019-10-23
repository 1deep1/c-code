#include <stdio.h>
#include <string.h>

int main() {
    char S[100001];
	int len;
	scanf("%s", S);
	len = strlen(S);
	for (int i = 0; i < len; i++) {
		if(S[i] != S[len - 1 - i]) {
			if(S[i] == S[len - 2 - i]) {
				printf("%d", len-i);
				break;
			}
			if(S[i+1] == S[len - 1 - i]) {
				printf("%d", i);
				break;
			}
				
		}
	}
	return 0;
}