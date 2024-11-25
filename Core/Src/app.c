/*
 * app.c
 *
 *  Created on: Nov 19, 2024
 *      Author: blueb
 */
#include "app.h"
#include "uart.h"

extern UART_HandleTypeDef huart2;

void app(){
	// uart 장치 초기화
	initUart(&huart2);
	printf("Multiplication Table\n");
	char ch = 0;
	// 키 입력
	while(1){
		ch = getUart();
#if 1
		if((ch>='2') && (ch<='9')){
			uint8_t dan = ch - '0';
			printf("------%d------\n", dan);
			for(int i=1; i<10; i++) printf("%d*%d=%d\n", dan, i, dan*i);
			printf("\n");
		}
#else
		if(ch!=0)printf("%c", ch);
		ch=0;
#endif
	}

}

