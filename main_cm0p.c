#include "project.h"

int main(void)
{
    __enable_irq(); 
    mUART_Start();
    for(;;)
    {
        mUART_PutString("Hello world\n");
        CyDelay(2000);
    }
}

