int bu=12;
  int led1=8;
  int led2=7;
  int led3=4;
  int cc=0;

void setup()
{
  pinMode(bu, INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  
  
}

void loop()
{
  if( digitalRead (bu)==HIGH);
  {
cc=cc+1;
  if(cc==1)
{
  digitalWrite(led1,HIGH);
}
    else if (cc==2)
    {
      digitalWrite(led2,HIGH);
    }
      else if (cc==3)
    {
      digitalWrite(led3,HIGH);
      }
    else if (cc==4)
    {
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led2,LOW);cc=0;
      
      }
    delay(250);
  }
}