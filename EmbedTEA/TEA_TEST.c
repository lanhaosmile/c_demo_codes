#include "TEA.h"


//TEA��Կ
unsigned char TEA_key[16]=
{ 
    0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,
    0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10
};

//���ݻ�����
unsigned char TX_buffer[32]="THELLOWORLDHELLOWORLDHELLOWORLD";
unsigned char RX_buffer[32]="RHELLOWORLDHELLOWORLDHELLOWORLD";

void main(){
	//��Ҫ���͵����ݼ���
	btea_encrypt(TX_buffer, TEA_key);
	printf("TX After Encrypt: %s\r\n", TX_buffer);
	
	//�յ������ݽ���
	btea_encrypt(RX_buffer, TEA_key);
	printf("RX After Encrypt: %s\r\n", RX_buffer);	
	btea_decrpyt(RX_buffer, TEA_key);
	printf("RX After Decrypt: %s\r\n", RX_buffer);

}