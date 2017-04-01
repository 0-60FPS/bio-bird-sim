int A = 0; //vars for parent selection
int B = 0;
int C = 0;
int D = 0;

int a1 = 0;
int b1 = 0;
int a2 = 0;
int b2 = 0;
int a3 = 0;
int b3 = 0;

int oA1 = 0; //vars for offspring a f1
int oA2 = 0;
int oA3 = 0;
int oA4 = 0;
int oA5 = 0;
int oA6 = 0;
int oA7 = 0;
int oA8 = 0;
int oA9 = 0;

int oB1 = 0; //vars for offspring b f1
int oB2 = 0;
int oB3 = 0;
int oB4 = 0;
int oB5 = 0;
int oB6 = 0;
int oB7 = 0;
int oB8 = 0;
int oB9 = 0;

int p1a = 0; //variables for printing p1 generation
int p2a = 0;
int p3a = 0;
int p4a = 0;


int input = 0;

int p = 0; //placeholding vars to keep program from looping crazily
int p2 = 0;

String allele_a = "aa"; //possible alleles for p1 generation                           
String allele_b = "AA";
String allele_c = "Aa";



//------------------

void setup() {
  
  setupy ();

}

//-------------------

void loop() {

 if( Serial.available() ) {
  if(p < 1) {
  
  p5statement ();
   
 }

  assignParentCoords ();  
  
  printPCs ();
  
  print_p1_Alleles ();

  offspring1_ab ();

  f1_psquare ();
 
}

}

//---------------------------

void p5statement () {

   input = Serial.read();
   Serial.println();         
   Serial.print("Input Received: ");
   Serial.println(input);
   Serial.println();
   p++;
  
}

void setupy () {

  Serial.begin(9600);
  randomSeed(analogRead(0));
  
}

void printPCs () {

  Serial.println("Parents, Gen 1; 1-4"); //prints selected parents

  Serial.println();
  
  Serial.println(A);
  Serial.println(B);
  Serial.println(C);
  Serial.println(D);

  Serial.println();
  
}

void assignParentCoords () { //selects random parents

  A = random(1, 21);
  B = random(1, 21);
  C = random(1, 21);
  D = random(1, 21);

  Serial.println();

}

void print_p1_Alleles () { //prints alleles for p1 generation

  Serial.println("Genotypes (A-D)");

  if(p <= 4 && A == 3 || A == 4 || A == 5 ||
  A == 7 || A == 8 || A == 9 || A == 10 ||
  A == 11 || A == 12 || A == 13 || A == 14 ||
  A == 15 || A == 16 || A == 17 || A == 18 ||
  A == 19 || A == 20) {
  
  Serial.println();
  Serial.println(allele_a);

  a1 = 1;
    
  }

  if(p <= 4 && A == 1) {

  Serial.println();
  Serial.println(allele_b);

  a2 = 2;
    
  }

  if(p <= 4 && A == 2 || A == 6){

  Serial.println();
  Serial.println(allele_c);

  a3 = 3;
    
  }

  if(p <= 4 && B == 3 || B == 4 || B == 5 ||
  B == 7 || B == 8 || B == 9 || B == 10 ||
  B == 11 || B == 12 || B == 13 || B == 14 ||
  B == 15 || B == 16 || B == 17 || B == 18 ||
  B == 19 || B == 20) {
  
  Serial.println(allele_a);

  b1 = 1;
    
  }

  if(p <= 4 && B == 1) {

  Serial.println(allele_b);

  b2 = 2;
    
  }

  if(p <= 4 && B == 2 || B == 6){

  Serial.println(allele_c);

  b3 = 3;
    
  }


}

void offspring1_ab () {

  if(a1 == 1 && b1 == 1) {

  oA1 = random(5);
    
  }

  if(a1 == 1 && b2 == 2) {

  oA2 = random(5);
    
  }

  if(a1 == 1 && b3 == 3) {

  oA3 = random(5);

  }

  if(a2 == 2 && b1 == 1) {

  oA4 = random(5);
    
  }
  if(a2 == 2 && b2 == 2) {

  oA5 = random(5);
    
  }

  if(a2 == 2 && b3 == 3) {

  oA6 = random(5);
    
  }

  if(a3 == 3 && b1 == 1) {

  oA7 = random(5);
    
  }

  if(a3 == 3 && b2 == 2) {

  oA8 = random(5);
    
  }

  if(a3 == 3 && b3 == 3){

  oA9 = random(5);
    
  }

}

void f1_psquare () {

  if(oA1 <= 5 && oA1 > 0){

  Serial.println();
  Serial.println(allele_a);
    
  }





  
}









