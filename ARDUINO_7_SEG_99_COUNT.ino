int flag;
int ledray[]={2,3,4,5,6,7,8,9,10,11,12,13,A0,A1};
int seg2ry[]={9,10,11,12,13,A0,A1};
int seg1ry[]={2,3,4,5,6,7,8};
int delayt = 150;
void setup() 
{
  for(int i ; i<=13 ; i++)
  {
    pinMode(ledray[i],OUTPUT);
  }
  digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 digitalWrite(13,LOW);
 digitalWrite(14,LOW);
 digitalWrite(15,HIGH);
 flag = 0;
}

void loop() 
{


 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 delay(delayt);
 
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 delay(delayt);

 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(8,LOW);
 delay(delayt);

 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(8,LOW);
 delay(delayt);

 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 delay(delayt);

 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 delay(delayt);

  digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 delay(delayt);

  digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 delay(delayt);

  digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 delay(delayt);

  digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 delay(delayt);

 if(flag == 0)
 {
  flag++;
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,HIGH);
 digitalWrite(13,HIGH);
 digitalWrite(A0,HIGH);
 digitalWrite(A1,HIGH);
 loop();
 }
 else if (flag==1)
 {
  flag++;
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(12,LOW);
 digitalWrite(13,LOW);
 digitalWrite(A0,HIGH);
 digitalWrite(A1,LOW);
 loop();
 }
  else if (flag==2)
 {
  flag++;
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 digitalWrite(13,HIGH);
 digitalWrite(A0,HIGH);
 digitalWrite(A1,LOW);
 loop();
 }
 else if (flag==3)
 {
  flag++;
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,HIGH);
 digitalWrite(13,HIGH);
 digitalWrite(A0,LOW);
 digitalWrite(A1,LOW);
 loop();
 } 
  else if (flag==4)
 {
  flag++;
 digitalWrite(9,LOW);
 digitalWrite(10,HIGH);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 digitalWrite(13,HIGH);
 digitalWrite(A0,LOW);
 digitalWrite(A1,LOW);
 loop();
 }
   else if (flag==5)
 {
  flag++;
 digitalWrite(9,LOW);
 digitalWrite(10,HIGH);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 digitalWrite(13,LOW);
 digitalWrite(A0,LOW);
 digitalWrite(A1,LOW);
 loop();
 }
    else if (flag==6)
 {
  flag++;
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,HIGH);
 digitalWrite(13,HIGH);
 digitalWrite(A0,HIGH);
 digitalWrite(A1,HIGH);
 loop();
 }
    else if (flag==7)
 {
  flag++;
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 digitalWrite(13,LOW);
 digitalWrite(A0,LOW);
 digitalWrite(A1,LOW);
 loop();
 }
   else if (flag==8)
 {
  flag++;
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 digitalWrite(13,HIGH);
 digitalWrite(A0,LOW);
 digitalWrite(A1,LOW);
 loop();
 }
 if(flag==9)
 {
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 digitalWrite(13,LOW);
 digitalWrite(14,LOW);
 digitalWrite(15,HIGH);
 flag = 0;
 loop();
 }


 

 }
