#include <stdio.h>
#include <stdlib.h>

struct aluno {
    int v_nmat;
    float v_nota[3];
    float v_media;
};

int main() {
    struct aluno felipe;
    
    felipe.v_nmat = 120;
    felipe.v_nota[0] = 8.5;
    felipe.v_nota[1] = 7.2;
    felipe.v_nota[2] = 5.4;
    felipe.v_media = (felipe.v_nota[0] + felipe.v_nota[1] + felipe.v_nota[2]) / 3.0;
    
  printf("matricula: %d \n", felipe.v_nmat);
  printf("media: %2f \n", felipe.v_media);

  system("pause");
  return(0);


}