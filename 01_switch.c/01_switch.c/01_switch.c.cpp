#include <iostream>

int main()
{
	int week;
	printf("请输入星期数：");
	scanf_s("%d", &week);
	switch (week) 
	{
		case 1:
		    printf("跑步");
		    break;
	    case 2:
		    printf("游泳");
		    break;
		case 3:
			printf("慢走");
			break;
		case 4:
			printf("动感电车");
			break;
		case 5:
			printf("拳击");
			break;
		case 6:
			printf("爬山");
			break;
		case 7:
			printf("好好吃一顿");
			break;
		default:
			printf("没有这个星期");
			break;
	}
		return 0;
}
