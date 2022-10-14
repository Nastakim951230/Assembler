#include<stdio.h>
#include <time.h>

int Summ(int a, int b)
{
	int c;
	__asm
	{
		mov eax, a
		add eax, b
		mov c, eax

	}

	return c;
	//return a + b;
}
int Razn(int a, int b)
{
	int c;
	__asm
	{
		mov eax, a
		SUB eax, b
		mov c, eax

	}
	return c;
	/*return a - b;*/
}
int Ymn(int a, int b)
{

	int c;
	__asm
	{
		mov eax, a
		mov ebx, b
		mul ebx
		mov c, eax

	}
	return c;
	/*return a * b;*/
}
int Delen(int a, int b)
{
	int c;
	__asm
	{
		mov eax, a
		mov edx,0
		mov ebx, b
		div ebx
		mov c, eax

	}
	
	return c;
	/*return a / b;*/
}




int Ost(int a, int b)
{
	return a % b;
}

int SravnDva(int a, int b)
{
	int s;
	__asm
	{
		mov eax, a
		mov ebx, b
		cmp eax, ebx
		JE a1
		JB a2
		JA a3
	a1:mov s,0
	a2:mov s, b
	a3:mov s, a
	}
	/*if (a = b)
	{
		return 0;
	}
	else if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}*/

}

int SravnTri(int a, int b, int c)
{
	if ((a = b) && (b = c))
	{
		return 0;
	}
	else if (a = b)
	{
		if (b > c)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
	else if (a = c)
	{
		if (c > b)
		{
			return c;
		}
		else
		{
			return b;
		}
	}
	else if (b = c)
	{
		if (a > b)
		{
			return a;
		}
		else
		{
			return b;
		}
	}
	else if (a > b)
	{
		if (a > c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else if (b > c)
	{
		if (a > b)
		{
			return a;
		}
		else
		{
			return b;
		}
	}
	else if (a > b)
	{
		if (a > c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
}

int swap(int a, int b)
{
	int c;
	__asm
	{
		mov eax, a
		mov ebx, b

		mov ecx, eax
		mov eax, ebx
		mov ebx, ecx

		mov a, eax
		mov b, ebx

	}
	return a, b;

	/*int c = a;
	a = b;
	b = c;*/

}

main()
{
	//int a = 5, b = 7, c;
	int s;
	__asm
	{
		mov eax, a
		mov ebx, b
		cmp eax, ebx
		JE a1
		JB a2
		JA a3

	a1: mov s, 0
		a2 : mov s, b
		a3 : mov s, a
	}
	printf("%d", s);
	
	/*int p = 10;
	for (size_t i = 0; i < 1000000; i++)
	{
		int a = swap(1,2);

		if (i + 1 == p)
		{
			
			printf("%d\n", clock());
			p = p * 10;
		}
	}*/
	return 0;
}