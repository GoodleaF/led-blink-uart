/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    UART_Start();
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    int txdata[20];
    int d = 0;
    
    for(;;)//기대하는 것은 칩을 켠 후 각 led를 순차적으로 켜고 순차적으로 끈 후 칩을 끄는 것을 반복하는 것 
    {
        if(d == 0){//칩을 켠 상태
        txdata[0] = 0xB3;//칩을 켜기 위한 코드. 
        txdata[1] = 0x19;
        txdata[2] = 0x24;
        txdata[3] = 0x37;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
        
        if(d == 1){//led를 켜기 시작한다 그것을 위해 txdata[2]와 [3]을 0xFF, 0xFC로 한다.
        txdata[0] = 0xB3;
        txdata[1] = 0x50;
        txdata[2] = 0xFF;
        txdata[3] = 0xFC;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
        
        if(d == 2){
        txdata[0] = 0xB3;
        txdata[1] = 0x51;
        txdata[2] = 0xFF;
        txdata[3] = 0xFC;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
        
        if(d == 3){
        txdata[0] = 0xB3;
        txdata[1] = 0x52;
        txdata[2] = 0xFF;
        txdata[3] = 0xFC;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
        
        if(d == 4){
        txdata[0] = 0xB3;
        txdata[1] = 0x53;
        txdata[2] = 0xFF;
        txdata[3] = 0xFC;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
        
        if(d == 5){
        txdata[0] = 0xB3;
        txdata[1] = 0x54;
        txdata[2] = 0xFF;
        txdata[3] = 0xFC;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
        
        if(d == 6){
        txdata[0] = 0xB3;
        txdata[1] = 0x55;
        txdata[2] = 0xFF;
        txdata[3] = 0xFC;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
        
        if(d == 7){
        txdata[0] = 0xB3;
        txdata[1] = 0x56;
        txdata[2] = 0xFF;
        txdata[3] = 0xFC;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
        
        if(d == 8){
        txdata[0] = 0xB3;
        txdata[1] = 0x57;
        txdata[2] = 0xFF;
        txdata[3] = 0xFC;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        
        d++;
        }
        
        if(d == 9){//led를 끄기 시작한다 그것을 위해 txdata[2]와 [3]을 0x00으로 한다.
        txdata[0] = 0xB3;
        txdata[1] = 0x50;
        txdata[2] = 0x00;
        txdata[3] = 0x00;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
        
        if(d == 10){
        txdata[0] = 0xB3;
        txdata[1] = 0x51;
        txdata[2] = 0x00;
        txdata[3] = 0x00;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
        
        if(d == 11){
        txdata[0] = 0xB3;
        txdata[1] = 0x52;
        txdata[2] = 0x00;
        txdata[3] = 0x00;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
        
        if(d == 12){
        txdata[0] = 0xB3;
        txdata[1] = 0x53;
        txdata[2] = 0x00;
        txdata[3] = 0x00;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
        
        if(d == 13){
        txdata[0] = 0xB3;
        txdata[1] = 0x54;
        txdata[2] = 0x00;
        txdata[3] = 0x00;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
        
        if(d == 14){
        txdata[0] = 0xB3;
        txdata[1] = 0x55;
        txdata[2] = 0x00;
        txdata[3] = 0x00;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
        
        if(d == 15){
        txdata[0] = 0xB3;
        txdata[1] = 0x56;
        txdata[2] = 0x00;
        txdata[3] = 0x00;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
        
        if(d == 16){
        txdata[0] = 0xB3;
        txdata[1] = 0x57;
        txdata[2] = 0x00;
        txdata[3] = 0x00;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        
        d++;
        }
        
        if(d == 17){//칩을 끈 상태
        txdata[0] = 0xB3;
        txdata[1] = 0x19;
        txdata[2] = 0x00;
        txdata[3] = 0x00;
        
        UART_SpiUartWriteTxData(txdata[0]);
        UART_SpiUartWriteTxData(txdata[1]);
        UART_SpiUartWriteTxData(txdata[2]);
        UART_SpiUartWriteTxData(txdata[3]);
        UART_SpiUartWriteTxData(txdata[0]^txdata[1]^txdata[2]^txdata[3]);
        d++;
        }
    }
}

/* [] END OF FILE */
