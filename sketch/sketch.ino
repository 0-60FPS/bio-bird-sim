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

  if(p == 1 && A >= 3 && A != 6 && A >= 7 && A <= 20 && p2 <= 3) {

  Serial.println("-");
  Serial.println(allele_a);

  p2++;
    
  }
  
}

