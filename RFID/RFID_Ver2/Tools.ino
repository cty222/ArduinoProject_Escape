void showCardNum(uchar *serNum)
{
    Serial.println("The card's number is : ");
    Serial.print("0x");
    Serial.print(serNum[0],HEX);
    Serial.print(" , ");
    Serial.print("0x");
    Serial.print(serNum[1],HEX);
    Serial.print(" , ");
    Serial.print("0x");
    Serial.print(serNum[2],HEX);
    Serial.print(" , ");
    Serial.print("0x");
    Serial.print(serNum[3],HEX);
    Serial.print(" , ");
    Serial.print("0x");
    Serial.print(serNum[4],HEX);
    Serial.println(",");
}

void checkAns()
{
  boolean ans0=true;
  boolean ans1=true;
  int i = 0;
  for(i=0;i<6;i++) 
  {
#if 1   
    Serial.print(i);
    Serial.print(": ");
    Serial.print(locker0Flag[i]);
    Serial.print(", ");
#endif
    ans0 &=  locker0Flag[i];
    ans1 &=  locker1Flag[i];
  }
  Serial.println();
  digitalWrite(Locker0, HIGH); 
  if(ans0)
  {
    digitalWrite(Locker0, LOW); 
    delay(3000);
  }
  digitalWrite(Locker1, HIGH); 
  if(ans1)
  {
    digitalWrite(Locker1, LOW);
    delay(3000);
  }
}


uchar CardNumA0[][5] = {
  0x9D , 0x34 , 0x41 , 0xA , 0xE2,
  0x8C , 0x5E , 0x44 , 0x35 , 0xA3 ,
  0x8C , 0xFB , 0x18 , 0x35 , 0x5A , 
  0x8C , 0x91 , 0xCE , 0x35 , 0xE6 ,
  0x8C , 0x76 , 0x80 , 0x35 , 0x4F,
};

uchar CardNumA1[][5] = {
  0x55 , 0xD8 , 0xC6 , 0xDC , 0x97,
  0x7C , 0xED , 0xB , 0x35 , 0xAF,
  0x8C , 0xE6 , 0x75 , 0x35 , 0x2A,
  0x8C , 0xDC , 0xA1 , 0x35 , 0xC4,
  0x8C , 0x5E , 0x3C , 0x35 , 0xDB,
};

uchar CardNumA2[][5] = {
  0x5D , 0x37 , 0x5A , 0xA , 0x3A,
  0x8C , 0x4A , 0x12 , 0x35 , 0xE1,
  0x9C , 0x18 , 0xFF , 0x35 , 0x4E,
  0x7C , 0x99 , 0xD , 0x35 , 0xDD,
  0x8C , 0x91 , 0x5B , 0x35 , 0x73,
};
uchar CardNumA3[][5] = {
  0xD , 0x20 , 0x5C , 0xA , 0x7B,
  0x8C , 0x78 , 0x9 , 0x35 , 0xC8,
  0x8C , 0x8F , 0x6B , 0x35 , 0x5D,
  0x7C , 0xC4 , 0x63 , 0x35 , 0xEE,
  0x9C , 0x5 , 0x2C , 0x35 , 0x80,
};

uchar CardNumA4[][5] = {
  0xDD , 0x85 , 0x73 , 0xA , 0x21,
  0x8C , 0xEC , 0xAD , 0x35 , 0xF8,
  0x7C , 0xD9 , 0xEB , 0x35 , 0x7B,
  0x8C , 0xA1 , 0xDB , 0x35 , 0xC3,
  0x8C , 0x90 , 0xA3 , 0x35 , 0x8A,
};

uchar CardNumA5[][5] = {
  0xD5 , 0x7 , 0xC9 , 0xDC , 0xC7,
  0x8C , 0xC2 , 0x2E , 0x35 , 0x55,
  0x8C , 0x71 , 0x56 , 0x35 , 0x9E,
  0x7C , 0xFD , 0x73 , 0x35 , 0xC7,
  0x7C , 0xDA , 0xF , 0x35 , 0x9C,
};
uchar CardNumA6[][5] = {
  0x95 , 0xA0 , 0xC7 , 0xDC , 0x2E,
  0x8C , 0x7A , 0x7C , 0x35 , 0xBF,
  0x8C , 0x62 , 0x9D , 0x35 , 0x46,
  0x8C , 0x47 , 0x3 , 0x35 , 0xFD,
  0x8C , 0x59 , 0x8F , 0x35 , 0x6F,
};

uchar CardNumA7[][5] = {
  0xE5 , 0x4E , 0x5F , 0x22 , 0xD6,
  0x9C , 0x2 , 0x54 , 0x35 , 0xFF,
  0x8C , 0x57 , 0x22 , 0x35 , 0xCC,
  0x8C , 0x9F , 0xD6 , 0x35 , 0xF0,
  0x9C , 0x12 , 0x59 , 0x35 , 0xE2,
};
uchar CardNumA8[][5] = {
  0x75 , 0xA6 , 0x5C , 0x22 , 0xAD,
  0x8C , 0x75 , 0xFB , 0x35 , 0x37,
  0x8C , 0x97 , 0xAD , 0x35 , 0x83,
  0x9C , 0x21 , 0x2 , 0x35 , 0x8A,
  0x8C , 0xB9 , 0x9 , 0x35 , 0x9,
};

uchar CardNumA9[][5] = {
  0x15 , 0x6C , 0xCC , 0xDC , 0x69,
  0x8C , 0xA9 , 0x2A , 0x35 , 0x3A,
  0x8C , 0x78 , 0xCD , 0x35 , 0xC,
  0x7C , 0xCC , 0x29 , 0x35 , 0xAC,
  0x8C , 0x99 , 0xA7 , 0x35 , 0x87,
};
uchar CardNumA10[][5] = {
  0x75 , 0xCA , 0xC6 , 0xDC , 0xA5,
  0x8C , 0xDD , 0x9 , 0x35 , 0x6D,
  0x9C , 0x6 , 0x1C , 0x35 , 0xB3,
  0x9C , 0xC , 0xCC , 0x35 , 0x69,
  0x8C , 0xAE , 0x7D , 0x35 , 0x6A,
};

uchar CardNumA11[][5] = {
  0xC5 , 0x5D , 0xC3 , 0xDC , 0x87,
  0x8C , 0x83 , 0x2F , 0x35 , 0x15,
  0x8C , 0x66 , 0x7B , 0x35 , 0xA4,
  0x8C , 0x43 , 0xBD , 0x35 , 0x47,
  0x8C , 0x4E , 0x28 , 0x35 , 0xDF,
};

uchar CardNumA12[][5] = {
  0x7C , 0xDF , 0x7A , 0x35 , 0xEC,
  0x8C , 0xED , 0xEE , 0x35 , 0xBA,
  0x8C , 0xDA , 0xBC , 0x35 , 0xDF,
  0x8C , 0x71 , 0xC7 , 0x35 , 0xF,
};

void checkID(uchar csPin)
{
  int i=0;
  switch(csPin)
  {
    case CS0_PIN:
      for(i=0;i<sizeof(CardNumA0)/5;i++)
      {
            if(!strncmp((char *)serNum,(char *)&CardNumA0[i][0],5))
            {
              locker0Flag[0]=true;
            }
      }
      for(i=0;i<sizeof(CardNumA6)/5;i++)
      {
            if(!strncmp((char *)serNum,(char *)&CardNumA6[i][0],5))
            {
              locker1Flag[0]=true;
            }
      }
      break;
    case CS1_PIN:
       for(i=0;i<sizeof(CardNumA1)/5;i++)
      {
            if(!strncmp((char *)serNum,(char *)&CardNumA1[i][0],5))
            {
              locker0Flag[1]=true;
            }
      }
      for(i=0;i<sizeof(CardNumA7)/5;i++)
      {
            if(!strncmp((char *)serNum,(char *)&CardNumA7[i][0],5))
            {
              locker1Flag[1]=true;
            }
      }
      break;
    case CS2_PIN:
      for(i=0;i<sizeof(CardNumA2)/5;i++)
      {
            if(!strncmp((char *)serNum,(char *)&CardNumA2[i][0],5))
            {
              locker0Flag[2]=true;
            }
      }
      for(i=0;i<sizeof(CardNumA8)/5;i++)
      {
            if(!strncmp((char *)serNum,(char *)&CardNumA8[i][0],5))
            {
              locker1Flag[2]=true;
            }
      }
      break;
    case CS3_PIN:
      for(i=0;i<sizeof(CardNumA3)/5;i++)
      {
            if(!strncmp((char *)serNum,(char *)&CardNumA3[i][0],5))
            {
              locker0Flag[3]=true;
            }
      }
      for(i=0;i<sizeof(CardNumA9)/5;i++)
      {
            if(!strncmp((char *)serNum,(char *)&CardNumA9[i][0],5))
            {
              locker1Flag[3]=true;
            }
      }
      break;
      case CS4_PIN:
       for(i=0;i<sizeof(CardNumA4)/5;i++)
      {
            if(!strncmp((char *)serNum,(char *)&CardNumA4[i][0],5))
            {
              locker0Flag[4]=true;
            }
      }
      for(i=0;i<sizeof(CardNumA10)/5;i++)
      {
            if(!strncmp((char *)serNum,(char *)&CardNumA10[i][0],5))
            {
              locker1Flag[4]=true;
            }
      }
      break;
      case CS5_PIN:
      for(i=0;i<sizeof(CardNumA5)/5;i++)
      {
            if(!strncmp((char *)serNum,(char *)&CardNumA5[i][0],5))
            {
              locker0Flag[5]=true;
            }
      }
      for(i=0;i<sizeof(CardNumA11)/5;i++)
      {
            if(!strncmp((char *)serNum,(char *)&CardNumA11[i][0],5))
            {
              locker1Flag[5]=true;
            }
      }
      break;
  }
}
