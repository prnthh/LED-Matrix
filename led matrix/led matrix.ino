String msg="lights will guide you home     ";
int i=0;
int flag=0;
byte copy[]={B0000000};
//int copyAr[]=new int[1];
String apostro="' ";

long mainArray[]={
  000000000000000,
  000000000000000,
  000000000000000,
  000000000000000,
  000000000000000,
};
byte space[7]={
  B0,
  B0,
  B0,
  B0,
  B0,
  B0,
  B0};
byte A[7]={
  B01100,
  B10010,
  B11110,
  B10010,
  B10010};
byte B[7]={
  B11100,
  B10010,
  B11100,
  B10010,
  B11100};
byte C[7]={
  B01110,
  B10000,
  B10000,
  B10000,
  B01110};
byte D[7]={
  B11100,
  B10010,
  B10010,
  B10010,
  B11100};
byte E[7]={
  B11110,
  B10000,
  B11100,
  B10000,
  B11110};
byte F[7]={
  B11110,
  B10000,
  B11100,
  B10000,
  B10000};
byte G[7]={
  B11110,
  B10000,
  B10110,
  B10010,
  B11110};
byte H[7]={
  B10010,
  B10010,
  B11110,
  B10010,
  B10010};
byte I[7]={    //6
  B1110,
  B0100,
  B0100,
  B0100,
  B1110};
byte J[7]={    //6
  B111110,
  B001000,
  B001000,
  B001000,
  B110000};
byte K[7]={     //6
  B100100,
  B101000,
  B110000,
  B101000,
  B100100};
byte L[7]={
  B1000,
  B1000,
  B1000,
  B1000,
  B1110};
byte M[7]={      //6
  B100010,
  B110110,
  B101010,
  B100010,
  B100010};
byte N[7]={         //8
  B1000010,
  B1100010,
  B1010010,
  B1001010,
  B1000110};
byte O[7]={
  B11110,
  B10010,
  B10010,
  B10010,
  B11110};
byte P[7]={
  B11100,
  B10010,
  B11100,
  B10000,
  B10000};
byte Q[7]={       //6
  B111100,
  B100100,
  B100100,
  B100100,
  B011010};
byte R[7]={
  B11100,
  B10010,
  B11100,
  B10100,
  B10010};
byte S[7]={
  B11110,
  B10000,
  B11110,
  B00010,
  B11110};
byte T[7]={      //6
  B111110,
  B001000,
  B001000,
  B001000,
  B001000};
byte U[7]={
  B10010,
  B10010,
  B10010,
  B10010,
  B11110};
byte V[7]={       //6
  B100010,
  B100010,
  B100010,
  B010100,
  B001000};
byte W[7]={       //6
  B100010,
  B100010,
  B101010,
  B101010,
  B010100};
byte X[7]={       //6
  B100010,
  B010100,
  B001000,
  B010100,
  B100010};
byte Y[7]={       //6
  B100010,
  B010100,
  B001000,
  B001000,
  B001000};
byte Z[7]={       //6
  B111110,
  B000100,
  B001000,
  B010000,
  B111110};
byte zero[7]={
  B01100,
  B10010,
  B10010,
  B10010,
  B01100};
byte one[7]={
  B0100,
  B1100,
  B0100,
  B0100,
  B1110};
byte two[7]={
  B01100,
  B10010,
  B00010,
  B00100,
  B111110};
byte three[7]={
  B11100,
  B00010,
  B01110,
  B00010,
  B11100};
byte four[7]={       //6
  B010000,
  B100100,
  B111110,
  B000100,
  B000100};
byte five[7]={
  B11110,
  B10000,
  B01100,
  B00010,
  B11100};
byte six[7]={
  B01110,
  B10000,
  B11100,
  B10010,
  B01100};
byte seven[7]={
  B111110,
  B000010,
  B000100,
  B001000,
  B010000};
byte eight[7]={
  B01100,
  B10010,
  B01100,
  B10010,
  B01100};
byte nine[7]={
  B01100,
  B10010,
  B01110,
  B00010,
  B00010};
byte greaterThan[7]={
  B0000,
  B1000,
  B0100,
  B0010,
  B0100,
  B1000,
  B0000};
byte lesserThan[7]={
  B0000,
  B0010,
  B0100,
  B1000,
  B0100,
  B0010,
  B0000};
byte forwardSlash[7]={
  B000010,
  B000010,
  B000100,
  B001000,
  B010000,
  B100000,
  B100000};
byte backwardSlash[7]={
  B100000,
  B100000,
  B010000,
  B001000,
  B000100,
  B000010,
  B000010};
byte comma[7]={
  B000,
  B000,
  B000,
  B000,
  B010,
  B010,
  B100};
byte questionMark[7]={
  B01110,
  B10001,
  B00001,
  B00010,
  B00100,
  B00000,
  B00100};
byte fullStop[7]={
  B0,
  B0,
  B0,
  B0,
  B0,
  B0,
  B1};
byte apostrophe[7]={
  B010,
  B010,
  B100,
  B000,
  B000,
  B000,
  B000};
byte openingQuotation[7]={
  B10100,
  B10100,
  B01010,
  B00000,
  B00000,
  B00000,
  B00000};
byte closingQuotation[7]={
  B01010,
  B01010,
  B10100,
  B00000,
  B00000,
  B00000,
  B00000};
byte exclamation[7]={
  B10,
  B10,
  B10,
  B10,
  B10,
  B00,
  B10};
byte colon[7]={
  B000,
  B110,
  B110,
  B000,
  B110,
  B110,
  B000};
byte semicolon[7]={
  B000,
  B110,
  B110,
  B000,
  B110,
  B110,
  B010};
byte openingCurvedBracket[7]={
  B010,
  B100,
  B100,
  B100,
  B100,
  B100,
  B010};
byte  closingCurvedBracket[7]={
  B100,
  B010,
  B010,
  B010,
  B010,
  B010,
  B100};
byte openingSquareBracket[7]={
  B110,
  B100,
  B100,
  B100,
  B100,
  B100,
  B110};
byte closingSquareBracket[7]={
  B110,
  B010,
  B010,
  B010,
  B010,
  B010,
  B110};
byte equals[7]={
  B00000,
  B00000,
  B11110,
  B00000,
  B11110,
  B00000,
  B00000};
byte plus[7]={
  B000000,
  B001000,
  B001000,
  B111110,
  B001000,
  B001000,
  B000000};
byte hyphen[7]={
  B0000,
  B0000,
  B0000,
  B1110,
  B0000,
  B0000,
  B0000};
byte underscore[7]={
  B000000,
  B000000,
  B000000,
  B000000,
  B000000,
  B000000,
  B111110};
byte star[7]={
  B0100,
  B1110,
  B0100,
  B1010,
  B0000,
  B0000,
  B0000};
byte symbolAnd[7]={
  B0110000,
  B1001000,
  B1001010,
  B0110100,
  B0111000,
  B1011000,
  B1100110};
byte raisedTo[7]={
  B0100,
  B1010,
  B1010,
  B0000,
  B0000,
  B0000,
  B0000};
byte percentage[7]={
  B11100010,
  B10100100,
  B11101000,
  B00010000,
  B00101110,
  B01001010,
  B10001110};
byte similarTo[7]={
  B000000,
  B000000,
  B010010,
  B101010,
  B100100,
  B000000,
  B000000};
/*byte hashTag1[7]={
  B00000000,
  B00000100,
  B00111111,
  B00010010,
  B11111111,
  B01001000,
  B00000000};
byte hashTag2[7]={
  B000,
  B100,
  B110,
  B000,
  B000,
  B000,
  B000};
*/
byte hashTag[7]={
  B00101000,
  B00101000,
  B11111110,
  B00101000,
  B11111110,
  B00101000,
  B00101000};
const int columnPins[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13};
const int rowPins[] = {A4,A3,A2,A1,A0};

void setup()
{
  for(int i=0;i<14;i++)
  {
    pinMode(rowPins[i],OUTPUT);
    pinMode(columnPins[i],OUTPUT);
    digitalWrite(columnPins[i],HIGH);
  }
}

void show(byte*image, int len)
{
  
  for(int pix=len-1;pix>=0;pix--)
  {
    unsigned long start = millis();
    while(start + 100 > millis())
    {
    for(int row=0;row<5;row++)
    {
      digitalWrite(rowPins[row],HIGH);
      for(int column=0;column<14;column++)
      {
        boolean pixel=bitRead(mainArray[row],column);
        if(pixel==1)
        digitalWrite(columnPins[column],LOW);
        delayMicroseconds(300);
        digitalWrite(columnPins[column],HIGH);
      }
      digitalWrite(rowPins[row],LOW);
    }
    }  
  
  for(int rw=0;rw<5;rw++)
  {
    mainArray[rw]<<=1;
    /*for(int clm=1,sh=6;clm<7;clm++,sh--)
    {
      boolean pixelToWrite=bitRead(mainArray[rw],clm);
      bitWrite(mainArray[rw],sh,pixelToWrite);
    }*/
  }
  for(int rw=0;rw<5;rw++)
  {
    boolean pixelToWrite=bitRead(image[rw],pix);
    //copyAr[0]=mainArray[rw];
    //copy[0]=mainArray[rw];
    bitWrite(mainArray[rw],0,pixelToWrite);
    //mainArray[rw]+=copy[0];
    
  }
  }
}
void loop()
{
  for(int i=0;i<msg.length();i++)
  //while(i<msg.length)
  {
    char letter=msg.charAt(i);
    if(letter==' ')
    show(space,2);
    else if(letter=='a')
    show(A,5);
    else if(letter=='b')
    show(B,5);
    else if(letter=='c')
    show(C,5);
    else if(letter=='d')
    show(D,5);
    else if(letter=='e')
    show(E,5);
    else if(letter=='f')
    show(F,5);
    else if(letter=='g')
    show(G,5);
    else if(letter=='h')
    show(H,5);
    else if(letter=='i')
    show(I,4);
    else if(letter=='j')
    show(J,6);
    else if(letter=='k')
    show(K,6);
    else if(letter=='l')
    show(L,4);
    else if(letter=='m')
    show(M,6);
    else if(letter=='n')
    show(N,7);
    else if(letter=='o')
    show(O,5);
    else if(letter=='p')
    show(P,5);
    else if(letter=='q')
    show(Q,6);
    else if(letter=='r')
    show(R,5);
    else if(letter=='s')
    show(S,6);
    else if(letter=='t')
    show(T,6);
    else if(letter=='u')
    show(U,5);
    else if(letter=='v')
    show(V,6);
    else if(letter=='w')
    show(W,6);
    else if(letter=='x')
    show(X,6);
    else if(letter=='y')
    show(Y,6);
    else if(letter=='z')
    show(Z,6);
    else if(letter=='0')
    show(zero,5);
    else if(letter=='1')
    show(one,4);
    else if(letter=='2')
    show(two,5);
    else if(letter=='3')
    show(three,5);
    else if(letter=='4')
    show(four,6);
    else if(letter=='5')
    show(five,5);
    else if(letter=='6')
    show(six,5);
    else if(letter=='7')
    show(seven,6);
    else if(letter=='8')
    show(eight,5);
    else if(letter=='9')
    show(nine,5);
    else if(letter=='>')
    show(greaterThan,4);
    else if(letter=='<')
    show(lesserThan,4);
    else if(letter=='/')
    show(forwardSlash,6);

    else if(letter==',')
    show(comma,3);
    else if(letter=='?')
    show(questionMark,5);
    else if(letter=='.')
    show(fullStop,1);
    else if(letter==(apostro.charAt(0)))
    show(apostrophe,3);
    else if(letter=='"')
    {
      if(flag==0)
      {show(openingQuotation,5);flag=1;}
      else
      {show(closingQuotation,5);flag=0;}
    }
    else if(letter=='!')
    show(exclamation,2);
    else if(letter==':')
    show(colon,3);
    else if(letter==';')
    show(semicolon,3);
    else if(letter=='(')
    show(openingCurvedBracket,3);
    else if(letter==')')
    show(closingCurvedBracket,3);
    else if(letter=='[')
    show(openingSquareBracket,3);
    else if(letter==']')
    show(closingSquareBracket,3);
    else if(letter=='=')
    show(equals,5);
    else if(letter=='+')
    show(plus,6);
    else if(letter=='-')
    show(hyphen,4);
    else if(letter=='_')
    show(underscore,5);
    else if(letter=='*')
    show(star,4);
    else if(letter=='&')
    show(symbolAnd,7);
    else if(letter=='^')
    show(raisedTo,4);
    else if(letter=='%')
    show(percentage,8);
    else if(letter=='~')
    show(similarTo,6);
    else if(letter=='#')
    show(hashTag,8);
    //{
    //show(hashTag1,8);
    //show(hashTag2,3);}
  }
  for(int i=0;i<14;i++)
  show(space,1);
}
