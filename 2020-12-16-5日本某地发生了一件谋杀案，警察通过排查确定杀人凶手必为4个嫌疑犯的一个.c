//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词 :
//A说:不是我。假设a为凶手，即说假话则为0
//B说 : 是C。 0
//c说:是D。  0
//D说:C在胡说 1
//已知3个人说了真话，1个人说的是假话。--》突破点3真1假则为凶手
//
#include<stdio.h>
int main()
{
	char killer;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer =='d') + (killer != 'd')==3)
			printf("The killer is %c\n",killer);
	}
	return 0;
}