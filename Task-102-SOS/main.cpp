// You need this to use the Module Support Board
#include "uop_msb.h"
using namespace uop_msb;

#define WAIT_TIME_MS 500 
DigitalOut greenLED(TRAF_GRN1_PIN);
Buzzer buzz;
Buttons buttons;

void S();
void SS();
void O();
void letter_space();
// TIP: (I suggest you read this!)
//
// Press the black reset button to restart the code (and stop the sound)
// Otherwise, the noise can be "distracting" :)

int main()
{
    //Wait for the BLUE button to be pressed (otherwise this becomes super annoying!)
    while (buttons.BlueButton == 0);
    
    //Repeat everything "forever" (until the power is removed or the chip is reset)
    while(true){
        SS();
        letter_space();
        O();
        letter_space();
        SS();
        letter_space();
        letter_space();
    }
    
    
    
    
    while (true)
    {
        //On for 500ms
        greenLED = 1;
        buzz.playTone("c");
        wait_us(1000 * 150);  //500ms


        //Off for 500ms
        greenLED = 0;
        buzz.rest();
        wait_us(1000 * 150);  //500ms

     //On for 500ms
        greenLED = 1;
        buzz.playTone("c");
        wait_us(1000 * 150);  //500ms

     //Off for 500ms
        greenLED = 0;
        buzz.rest ();
        wait_us(1000 * 150);  //500ms

 //On for 500ms
        greenLED = 1;
        buzz.playTone("c");
        wait_us(1000* 150);  //500ms

//Off for 500ms  
        greenLED = 0;
        buzz.rest ();
        wait_us(1000* 450);  //500ms

        //On for 500ms
        greenLED = 1;
        buzz.playTone("c");
        wait_us(1000 * 450);  //500ms


        //Off for 500ms  
        greenLED = 0;
        buzz.rest ();
        wait_us(1000 * 150);  //500ms


        //On for 500ms
        greenLED = 1;
        buzz.playTone("c");
        wait_us(1000 * 450);  //500ms



     //Off for 500ms  
        greenLED = 0;
        buzz.rest();
        wait_us(1000 * 150);  //500ms

         //On for 500ms
        greenLED = 1;
        buzz.playTone("c");
        wait_us(1000 * 450);  //500ms

        //Off for 500ms  
        greenLED = 0;
        buzz.rest();
        wait_us(1000 * 450);  //500ms

        //on for 500ms
         greenLED = 1;
        buzz.playTone("c");
        wait_us(1000 * 150);  //500ms


        //off for 500ms
         greenLED = 0;
        buzz.rest();
        wait_us(1000 * 150);  //500ms

         //on for 500ms
         greenLED = 1;
        buzz.playTone("c");
        wait_us(1000 * 150); // 500ms 

        //off for 500ms
         greenLED = 0;
        buzz.rest();
        wait_us(1000 * 150);  //500ms

        //on for 500ms
         greenLED = 1;
        buzz.playTone("c");
        wait_us(1000 * 150); // 500ms


        //Pause
        buzz.rest();
        wait_us(WAIT_TIME_MS * 1000);

    }
}

void S(){
 //On for 500ms
        greenLED = 1;
        buzz.playTone("c");
        wait_us(1000 * 150);  //500ms


        //Off for 500ms
        greenLED = 0;
        buzz.rest();
        wait_us(1000 * 150);  //500ms

     //On for 500ms
        greenLED = 1;
        buzz.playTone("c");
        wait_us(1000 * 150);  //500ms

     //Off for 500ms
        greenLED = 0;
        buzz.rest ();
        wait_us(1000 * 150);  //500ms

 //On for 500ms
        greenLED = 1;
        buzz.playTone("c");
        wait_us(1000* 150);  //500ms
}
void SS(){
    for(int i =0 ; i<3 ; i++){
         //On for 500ms
        greenLED = 1;
        buzz.playTone("c");
        wait_us(1000 * 150);  //500ms

        if(i<2){
        //Off for 500ms
        greenLED = 0;
        buzz.rest();
        wait_us(1000 * 150);  //500ms
        }
 
    }
}
void O(){
 //On for 500ms
        greenLED = 1;
        buzz.playTone("c");
        wait_us(1000 * 450);  //500ms


        //Off for 500ms  
        greenLED = 0;
        buzz.rest ();
        wait_us(1000 * 150);  //500ms


        //On for 500ms
        greenLED = 1;
        buzz.playTone("c");
        wait_us(1000 * 450);  //500ms



     //Off for 500ms  
        greenLED = 0;
        buzz.rest();
        wait_us(1000 * 150);  //500ms

         //On for 500ms
        greenLED = 1;
        buzz.playTone("c");
        wait_us(1000 * 450);  //500ms
}

void letter_space(){
         //Off for 500ms  
        greenLED = 0;
        buzz.rest();
        wait_us(1000 * 450);  //500ms
}