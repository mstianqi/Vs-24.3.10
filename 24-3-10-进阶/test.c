#include <stdio.h>

//枚举
//enum day
//{
//	Mon,
//	Tues,
//	Wen,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//int main()
//{
//	enum day d = Fri;
//	return 0;
//}

//联合体
union un
{
	int a;
	char c;
};
int main()
{
	union un u;
	printf("%p\n", &u);
	printf("%p\n", &u.a);
	printf("%p\n", &u.c);
	return;
}