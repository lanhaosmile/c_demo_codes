#include "TEA.h"


//TEA密钥
unsigned char TEA_key[16]=
{ 
    0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,
    0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10
};

//数据缓冲区
unsigned char TX_buffer[32]="THELLOWORLDHELLOWORLDHELLOWORLD";
unsigned char RX_buffer[32]="RHELLOWORLDHELLOWORLDHELLOWORLD";

void main(){
	//将要发送的数据加密
	btea_encrypt(TX_buffer, TEA_key);
	printf("TX After Encrypt: %s\r\n", TX_buffer);
	
	//收到的数据解密
	btea_encrypt(RX_buffer, TEA_key);
	printf("RX After Encrypt: %s\r\n", RX_buffer);	
	btea_decrpyt(RX_buffer, TEA_key);
	printf("RX After Decrypt: %s\r\n", RX_buffer);

}