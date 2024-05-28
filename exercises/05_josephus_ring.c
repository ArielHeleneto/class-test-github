#include <stdio.h>

/**
 * 给定100个人站成一圈，从第1个人开始依次报数。
 * 每数到3的人将会被淘汰，然后继续从下一个人开始报数。
 * 这个过程会一直持续，直到所有的人都被淘汰。
 * 请编写一个C语言程序来模拟这个过程，并且输出每一个被淘汰人的编号。
 * 要求：输出每一个被淘汰人的编号，每淘汰一个人输出一行，格式为："%d out \n"(每输出一次换行)
*/

#define ALL_NUM    	100 
#define COUNT_NUM	3
#define OUT_NUM		3

/* people id array such as (1,2,3,4,5,6) */
int people[ALL_NUM];

int main(void)
{
	int left;	/* 剩余人数 */
	int pos;	/* 当前报数位置 */
	int step;	/* 当前报数 */

	//TODO
	
	

	return 0;
}