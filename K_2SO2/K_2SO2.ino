#include <MotorContrl.h>

int aPhase[2] = {6, 5}; //MotorA wird an PWM angeschlossen
int aEnable=7;

int bPhase[2]= {4, 3}; //MotorB wird an PWM angeschlossen
int bEnable=2;

int bt_input;

int lastPhaseA=0;
int lastPhaseB=0;

int lastSpeedA=0;
int lastSpeedB=0;

boolean steht=true;

Motor MOTOR_R(aEnable, aPhase[0], aPhase[1]);
Motor MOTOR_L(bEnable, bPhase[0], bPhase[1]);

void setup()
{
  //Bluetooth Intialiessieren
  Serial1.begin(9600);
  Serial1.println("Hey");
}
  
 
void loop()
{
  bt_input=Serial1.read();
  Serial1.read();
  if(bt_input == 'Help')
  {
    Serial1.println("Ich wurde erkannt");
  }
  if(bt_input == '1')
  {
     MOTOR_R.Fahren(1);
     MOTOR_L.Fahren(1);
     lastPhaseA = 1;
     lastPhaseB = 1;
     lastSpeedA = MOTOR_R.Give_Speed();
     lastSpeedB = MOTOR_L.Give_Speed();
     Serial1.println("Fahre los");
     steht = false;
  }
    if(bt_input == '0')
    {
     MOTOR_R.Fahren(0);
         MOTOR_L.Fahren(0);
         lastPhaseA = 1;
         lastPhaseB = 1;
              lastSpeedA = 0;
              lastSpeedB = 0;
              steht = true;
              Serial1.println("Bleibe stehen");
            }
    
}

