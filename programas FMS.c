#include <stdio.h>
#include <stdlib.h>
//matriz principal
int matriz[18][18]=
/*0*/{{0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
/*1*/{0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0},
/*2*/{0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0},
/*3*/{0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0},
/*4*/{0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0},
/*5*/{0,0,0,0,0,0,1,0,0,0,0,0,1,1,0,0,0,0},
/*6*/{0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0},
/*7*/{0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0},
/*8*/{0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0},
/*9*/{0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0},
/*10*/{0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0},
/*11*/{0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0},
/*12*/{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1},
/*13*/{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1},
/*14*/{0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
/*15*/{0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0},
/*16*/{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1},
/*17*/{0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

int main(void) {
  //matrices de escenas y escenarios
char escenas[18][100]=
  /*0*/{{"----"},
    /*1*/{"1-Esperar a tu amiga de la infancia"},
    /*2*/{"2-Irte directamente a la universidad"},
    /*3*/{"3-esperar a que llegue el bus"},
    /*4*/{"4-Decirle buenos dias y reirte disimuladamente de ella"},
    /*5*/{"5-Avisarle que esta un poco despeinada"},
    /*6*/{"6-Acomodarle el cabello"},
    /*7*/{"7-Llamarla por su nombre y decirle buenos dias"},
    /*8*/{"8-Preguntarle que le sucede"},
    /*9*/{"9-Ignorarla"},
    /*10*/{"10-Agradecer y buscar un lugar"},
    /*11*/{"11-Preguntarle su nombre"},
    /*12*/{"12-Seguir tu curso"},
    /*13*/{"13-Irte a la uni"},
    /*14*/{"14-Mejor volverte a tu casa"},
    /*15*/{"15-Correr tras de ella"},
    /*16*/{"16-quedarte callado todo el trayecto"},
    /*17*/{"17-quedarte dormido"}};
char esenarios[18][200]=
  {{"Hoy te has levantado para ir a la universidad Estando afuera de tu casa"},
  {"Te has quedado  esperando. TU amiga acaba de llegar y siempre has estado enamorada de ella pero tu mismo sabes que nunca te haracaso. Ella llega un poco despeinada... "},
  {"Te fuiste a la uni caminado y ves pasar a la presidenta de la clase. La notasun poco rara... "},
  {"Haz decidido esperar el bus. El bus ha llegado y requires cambio para subir. Te tardas demasiado el senor se impacienta y una dulce estudiante te ofrece el cambio... "},
  {"Apesar de reirte disimuldamente de tu amiga de la infiancia. Ella se ha dado cuenta y te ha preguntado porque tanta risilla.. "},
  {"Le has avisado que esta un poco despeinada y rapidamente se trata de acomodar el pelo...."},
   {"Alacomodarle el pelo se ha sonrojado un poco..."},
      {"Le has llamado por su nombre y le has dicho buenos dias. Lastimosamente no te escucho, ella sigue con su camino..."},
      {"le has intentado preguntar que le sucedia. No te hizo caso..."},
      {"La has ignorado..."},
      {"Le has agradecido aquella jovencita. Te das cuenta que el unico lugar disponible es a su lado"},
      {"Le haz preguntado sunombre y ella se ha quedado pasmada. como si tuviera algo que decir pero no contesta nada..."},
  {"No has dicho nada y solo continuaste viendo tu celular hasta llegar a la uni"},
  {"Haz llegado a la uni que decides hacer..."},
  {"volviste a casa... y se volvio otro dia... "},
  {"Corriste tras la presidenta de la clase y te ha mirado raro... "},
  {"te has quedado callado todo el trayecto"},
  {"uy te levantaste en otro lugar distino... que quieres hac---er---....\ncontinuara"}};

  int es,i=0, estados[50],r=0,estad=0;
   int estado_actual=0;
do{
    
    if(estado_actual!=5 || estado_actual!=14){
    estados[r]=estado_actual;
    r++;
    }
   
    if(i==0){
       printf("%s\n \n",esenarios[i]);
    }
    
    for(int j=0;j<18;j++){
      if(matriz[i][j]>0){
        printf(" %s\n",escenas[j]);
    } 

  } 
    
    estad=estados[r];
   printf("\n");
   printf("\n================================ \n");
    printf("\nA continuacion que desea hacer? \n");
    scanf(" %d",&estado_actual);
     printf("\n================================ \n");
     printf("\n");
    if(estado_actual<0 || estado_actual>18){
      printf("Opcion invalida, error, vuelve a intentarlo\n");
    }
    
    for(int u=0;u<=r;u++){
    if(estados[u]==estado_actual){
      printf("Ya elegiste esta opcion........\n \n");
      i=estad;
    }
    else{
      i=estado_actual;
    }
    }
    
      printf("%s\n \n",esenarios[i]);
    if(estado_actual==17){
      printf("hasta la proximaaaaaaaa\n");
      break;
    }
  }while(i<18);
  return 0;
}