#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int num, cont = 0;
	printf("Digite um número inteiro e positivo:\n");
	scanf("%d", &num);
	do{
		if(num % 2 == 0){
			num = num/2;
			cont++;
			printf("%d, ", num);
		}else{
			num = num * 3 + 1;
			cont++;
			printf("%d, ", num);
		}
	}while(num != 1);
	printf("foi preciso %d passos para o final", cont);
	getch();
}