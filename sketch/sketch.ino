int A = 0; //vars for parent selection
int B = 0;
int C = 0;
int D = 0;

int p1a = 0;
int p2a = 0;
int p3a = 0;
int p4a = 0;

int input = 0;

int p = 0;
int p2 = 0;

String allele_a = "aa";                               
String allele_b = "AA";
String allele_c = "Aa";

//------------------

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));



}

//-------------------

void loop() {

 if( Serial.available() ) {
  if(p < 5) {
  
   input = Serial.read();         
   Serial.print("Received: ");
   Serial.println(input);

   assignParentCoords ();  
   printPCs ();

   p++;
 }

  print_p1_Alleles ();
 
}

}

//---------------------------

void printPCs () {

  Serial.println("Parents, Gen 1; 1-4"); //prints selected parents
  Serial.println(A);
  Serial.println(B);
  Serial.println(C);
  Serial.println(D);
  
}

void assignParentCoords () { //selects random parents

  A = random(1, 21);
  B = random(1, 21);
  C = random(1, 21);
  D = random(1, 21);

}

void print_p1_Alleles () {

  if(p <= 4 && A == 3 || A == 4 || A == 5 ||
  A == 7 || A == 8 || A == 9 || A == 10 ||
  A == 11 || A == 12 || A == 13 || A == 14 ||
  A == 15 || A == 16 || A == 17 || A == 18 ||
  A == 19 || A == 20) {
  
  Serial.println();
  Serial.println(allele_a);
    
  }

  if(p <= 4 && A == 1) {

  Serial.println();
  Serial.println(allele_b);
    
  }

  if(p <= 4 && A == 2 || A == 6){

  Serial.println();
  Serial.println(allele_c);
    
  }

  if(p <= 4 && B == 3 || B == 4 || B == 5 ||
  B == 7 || B == 8 || B == 9 || B == 10 ||
  B == 11 || B == 12 || B == 13 || B == 14 ||
  B == 15 || B == 16 || B == 17 || B == 18 ||
  B == 19 || B == 20) {
  
  Serial.println();
  Serial.println(allele_a);
    
  }

  if(p <= 4 && B == 1) {

  Serial.println();
  Serial.println(allele_b);
    
  }

  if(p <= 4 && B == 2 || B == 6){

  Serial.println();
  Serial.println(allele_c);
    
  }

if(p <= 4 && C == 3 || C == 4 || C == 5 ||
  C == 7 || C == 8 || C == 9 || C == 10 ||
  C == 11 || C == 12 || C == 13 || C == 14 ||
  C == 15 || C == 16 || C == 17 || C == 18 ||
  C == 19 || C == 20) {
  
  Serial.println();
  Serial.println(allele_a);
    
  }

  if(p <= 4 && C == 1) {

  Serial.println();
  Serial.println(allele_b);
    
  }

  if(p <= 4 && C == 2 || C == 6){

  Serial.println();
  Serial.println(allele_c);
    
  }

if(p <= 4 && D == 3 || D == 4 || D == 5 ||
  D == 7 || D == 8 || D == 9 || D == 10 ||
  D == 11 || D == 12 || D == 13 || D == 14 ||
  D == 15 || D == 16 || D == 17 || D == 18 ||
  D == 19 || D == 20) {
  
  Serial.println();
  Serial.println(allele_a);
    
  }

  if(p <= 4 && D == 1) {

  Serial.println();
  Serial.println(allele_b);
    
  }

  if(p <= 4 && D == 2 || D == 6){

  Serial.println();
  Serial.println(allele_c);
    
  }


  
}

