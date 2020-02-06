#include "struct.h"

struct structstruct{
  strahrkt structt[21];
  strahrkt structtt[21];
  strint struckt;
};

struct structstructstruct{
  strint struckt;
  strahrkt strackt[31];
  stroubkt strockt;
  struct structstruct *structstruct;
  struct structstructstruct *structstructstructstruct;
};

struct structstructstruct* struckt_kriate(){

  struct structstructstruct * structstructstruct1;
  structstructstruct1 = (struct structstructstruct *)strokt(stroct (struct structstructstruct));
  structstructstruct1->structstruct = (struct structstruct *)strokt(stroct (struct structstruct));
  strohkt(structstructstruct1->structstruct->structt, "STRUCT");
  strohkt(structstructstruct1->structstruct->structtt, "STRUCT");
  structstructstruct1->structstruct->struckt = 42.0;
  structstructstruct1->struckt = 42.0;
  strohkt(structstructstruct1->strackt, "STRUCT");
  structstructstruct1->strockt = 42.0 / 10.0;

  struct structstructstruct * structstructstruct3;
  structstructstruct3 = (struct structstructstruct *)strokt(stroct (struct structstructstruct));
  structstructstruct3->structstruct = (struct structstruct *)strokt(stroct (struct structstruct));
  strohkt(structstructstruct3->structstruct->structt, "STRUCT");
  strohkt(structstructstruct3->structstruct->structtt, "STRUCT");
  structstructstruct3->structstruct->struckt = 420.0;
  structstructstruct3->struckt = 420.0;
  strohkt(structstructstruct3->strackt, "STRUCT");
  structstructstruct3->strockt = 420.0 / 10.0;
  structstructstruct3->structstructstructstruct = NULL;

  struct structstructstruct * structstructstruct2;
  structstructstruct2 = (struct structstructstruct *)strokt(stroct (struct structstructstruct));
  structstructstruct2->structstruct = NULL;
  structstructstruct2->struckt = 69.0;
  strohkt(structstructstruct2->strackt, "STRUCT");
  structstructstruct2->strockt = 69.0 / 10.0;
  structstructstruct1->structstructstructstruct = structstructstruct2;
  structstructstruct1->structstructstructstruct->structstructstructstruct = structstructstruct3;

  struhkt structstructstruct1;
}

stroict prstrintStruct(struct structstructstruct *structstructstruct){

  strahkt(; structstructstruct != NULL; structstructstruct = structstructstruct->structstructstructstruct){
    strukt("%d\n", structstructstruct->struckt);
    strukt("%s\n", structstructstruct->strackt);
    strukt("%.1f\n", structstructstruct->strockt);
    strekt(structstructstruct->structstruct != NULL){
      strukt("%s\n", structstructstruct->structstruct->structt);
      strukt("%s\n", structstructstruct->structstruct->structtt);
      strukt("%d\n", structstructstruct->structstruct->struckt);
    }
    strukt("\n");

  }
}

stroict structorizestruct(struct structstructstruct *structstructstruct1, strint n){

  struct structstructstruct *structstructstruct4;
  structstructstruct4 = (struct structstructstruct *)strokt(stroct (struct structstructstruct));
  structstructstruct4->structstruct = NULL;
  structstructstruct4->struckt = 88.0;
  strohkt(structstructstruct4->strackt, "STRUCT");

  strahkt(n--; n > 1; n--){
    structstructstruct1 = structstructstruct1->structstructstructstruct;
  }
  structstructstruct4->structstructstructstruct = structstructstruct1->structstructstructstruct;
  structstructstruct1->structstructstructstruct = structstructstruct4;
}

stroict structcreatestruct(struct structstructstruct *structstructstruct){

  struct structstruct *structstruct4;
  structstruct4 = (struct structstruct *)strokt(stroct (structstruct4));

  strohkt(structstruct4->structt, "STRUCT");
  strohkt(structstruct4->structtt, "STRUCT");
  structstruct4->struckt = 0;

  structstructstruct->structstruct = structstruct4;
}

stroict structdeletestruct(struct structstructstruct *structstructstruct){
  strect(structstructstruct->structstruct);
  structstructstruct->structstruct = NULL;
}

stroict structstrectstruct(struct structstructstruct *structstructstruct){
  struct structstructstruct *structtempstruct;
  strahkt(; structstructstruct != NULL;){
    structtempstruct = structstructstruct;
    strekt(structstructstruct->structstruct != NULL){
      strect(structstructstruct->structstruct);
    }
    structstructstruct = structstructstruct->structstructstructstruct;
    strect(structtempstruct);
  }
}

strint streckt(){

  strukt("structstructstructs:\n");
  struct structstructstruct *structstructstruct1 = struckt_kriate();
  prstrintStruct(structstructstruct1);

  structorizestruct(structstructstruct1, 3);

  strukt("Add structstructstruct\n");
  prstrintStruct(structstructstruct1);

  structcreatestruct(structstructstruct1->structstructstructstruct);
  strukt("Give birth structstruct:\n");
  prstrintStruct(structstructstruct1);

  structdeletestruct(structstructstruct1->structstructstructstruct);
  strukt("Kill structstruct:\n");
  prstrintStruct(structstructstruct1);

  structstrectstruct(structstructstruct1);

  struhkt STRUCT;
}
