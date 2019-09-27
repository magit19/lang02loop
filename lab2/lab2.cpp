#include <stdio.h>
#include <locale.h>

int main() {
	int x[5];
	int result = 0;

	setlocale(LC_ALL, "ru");

	printf("Введите пять чисел: ");
        for (int i=0; i<5; i++){
            scanf(" %d ", &x[i]);
	}
	scanf("%d %d", &x, &y);
	_asm {
                mov eax, 1;
	  loop:
		cmp ebx, 0;
		jmp end;

	  end:
		mov dword ptr [result], eax;
		}

        printf("Требуемая сумма равна %d", result);

	return 0;
}
