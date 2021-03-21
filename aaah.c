#include <string.h>
#include <stdio.h>
int main(){
	char INPUT1[1001];
	char INPUT2[1001];
	scanf("%s", &INPUT1);
	scanf("%s", &INPUT2);
	if (strlen(INPUT1) >= strlen(INPUT2)){
		printf("go");
	}
	else{
		printf("no");
	}
}