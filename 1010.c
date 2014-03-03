#include <stdio.h>
#include <stdlib.h>

int main()
{
	double price,pay;
	double remain;
	printf("请输入价格：\n");
	scanf("%lf",&price);
	printf("支付金额：\n");
	scanf("%lf",&pay);
	remain = pay - price;
	printf("%.2lf\n",remain);
	return 0;
}

