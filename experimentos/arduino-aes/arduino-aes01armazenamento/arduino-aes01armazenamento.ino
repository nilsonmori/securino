#include <Crypto.h>
CryptoAES ZAES;

void setup() {
}


byte data[16] ={0x6a,0x84,0x86,0x7c,0xd7,0x7e,0x12,0xad,0x07,0xea,0x1b,0xe8,0x95,0xc5,0x3f,0xa3};
byte key[16]  = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
byte out[16];

void loop() {
  ZAES.Initialize(key,key);
  ZAES.Encrypt(data,16,out,1);
  ZAES.Decrypt(out,16,out,1);
}
