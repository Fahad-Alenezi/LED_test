#include "mbed.h"



DigitalIn mypin(D8);

DigitalOut LED(D9);

// Blinking rate in milliseconds







int main()

{



    if (mypin.is_connected()) {

        printf("mypin is connected and initialized! \n\r");





    }

    // Initialise the digital pin LED1 as an output

mypin.mode(PullUp);

    while (1) {

        LED=1;

        if(mypin.read()==0)

        {

            LED=0;

    printf("LED IS OFF : %d \n\r", LED.read());
    printf("LDR : %d \n\r", mypin.read());
    

          ThisThread::sleep_for(250);

        }
        else {

            LED = 1;
             printf("LED IS OFF : %d \n\r", LED.read());
             printf("LDR : %d \n\r", mypin.read());


        }

    }

}