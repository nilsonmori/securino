void InvKeySchedule(byte chave[][4], int rodada){  
  
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      chave[i][j] = keyCopia[i][j];
    }
  }
      
  for(int i=1; i<=rodada; i++)
  {
      KeySchedule(chave, i);
  }

  
  /*
  
  if(rodada==0){
    setOriginalKey(chave);
  }else{
    getOriginalKey(chave);  
  }
  
  int roundInv = 10-rodada;
  if(rodada<10){
      for(int i=1;i<=roundInv;i++){
      KeySchedule(chave, i);  
    }
  }
}



byte originalKey[4][4];

void setOriginalKey(byte chave[][4]){
 for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      originalKey[i][j] = chave[i][j];
    }
  }
}

void getOriginalKey(byte chave[][4]){
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      chave[i][j] = originalKey[i][j];
    }
  }
*/
}