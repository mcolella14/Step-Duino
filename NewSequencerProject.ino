void setup() {
  

  pinMode(A5, INPUT);     // Declares analog pin modes
  pinMode(A4, INPUT);
  pinMode(A0, OUTPUT);
  
  pinMode(1, INPUT);      // Declares digital pin modes for switches
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  
}
//---------------------------------------------------------------------------------------------
// DECLARING VARIABLES
//---------------------------------------------------------------------------------------------

 double a = 100;      //declares variables for pitch values
 double b = 300;
 double c = 300;
 double d = 300;
 double e = 500;
 double f = 600;
 double g = 300;
 double h = 150;

 int toneLength;       // this will be used later for the sequencing loop

 double sequence[] = {a, b, c, d, e, f, g, h}; // The array that represents the pitches in the sequence

//---------------------------------------------------------------------------------------------
// MAIN LOOP
//---------------------------------------------------------------------------------------------
  
void loop() {
  //setPitch(); 
  playSequence();
}




//---------------------------------------------------------------------------------------------
// METHODS
//---------------------------------------------------------------------------------------------

void setPitch(){
   // These if statements will allow you to change the pitch for a specific
  // note in the sequence, which is represented by the array of doubles called sequence.
  // if the switch for the first note in the sequence is flipped, then that pitch plays
  // and you can change it and store it in the variable for that pitch in the array.
  

  if (/*digitalRead(1) == HIGH*/ 1 == 1){
    
    for (int i = 0; /*digitalRead(1) == HIGH*/1 == 1; i = 0){
    
      a = analogRead(A5);
      tone(A0, noteMap(a));
      
      }
  }

  if (digitalRead(2) == HIGH){
    
    for (int i = 0; digitalRead(2) == HIGH; i = 0){
    
      b = analogRead(A5);
      tone(A0, noteMap(b));
      
      }
  }

  if (digitalRead(3) == HIGH){
    
    for (int i = 0; digitalRead(3) == HIGH; i = 0){
    
      c = analogRead(A5);
      tone(A0, noteMap(c));
      
      }
  }
  if (digitalRead(4) == HIGH){
    
    for (int i = 0; digitalRead(4) == HIGH; i = 0){
    
      d = analogRead(A5);
      tone(A0, noteMap(d));
      
      }
  }
  if (digitalRead(5) == HIGH){
    
    for (int i = 0; digitalRead(5) == HIGH; i = 0){
    
      e = analogRead(A5);
      tone(A0, noteMap(e));
      
      }
  }
  if (digitalRead(6) == HIGH){
    
    for (int i = 0; digitalRead(6) == HIGH; i = 0){
    
      f = analogRead(A5);
      tone(A0, noteMap(f));
      
      }
  }
  if (digitalRead(7) == HIGH){
    
    for (int i = 0; digitalRead(7) == HIGH; i = 0){
    
      g = analogRead(A5);
      tone(A0, noteMap(g));
      
      }
  }
  if (digitalRead(8) == HIGH){
    
    for (int i = 0; digitalRead(8) == HIGH; i = 0){
    
      h = analogRead(A5);
      tone(A0, noteMap(h));
      
        }
     }
      sequence[0] = a;
      sequence[1] = b;
      sequence[2] = c;
      sequence[3] = d;
      sequence[4] = e;
      sequence[5] = f;
      sequence[6] = g;
      sequence[7] = h;
   
}

void playSequence(){
  

    // This is the actual sequencing for loop; it will run through the notes in the array
    // and play each one in order. The tempo will be controlled by pin A4

    for (int i = 0; i < 8; i++){
    
    toneLength = 150;                             //analogRead(A4);
    
    tone(A0, sequence[i]);
    delay(toneLength);
  }
}


double noteMap(double note){

  //This method maps the Analog Read values to the frquencies of a chromatic scale from C4 to C5
  
  if(note < 0.42){
    return 261.63;
  }

  if(note >= 0.42 && note < 0.83){
    return 277.18;
  }
  if(note >= 0.83 && note < 1.25){
    return 293.66;
  }
  if(note >= 1.25 && note < 1.66){
    return 311.13;
  }
  if(note >= 1.25 && note < 1.66){
    return 329.63;
  }
  if(note >= 1.66 && note < 2.08){
    return 349.23;
  }
  if(note >= 2.08 && note < 2.50){
    return 369.99;
  }
  if(note >= 2.50 && note < 2.92){
    return 392.00;
  }
  if(note >= 2.92 && note < 3.33){
    return 415.30;
  }
  if(note >= 3.33 && note < 3.75){
    return 440.00;
  }
  if(note >= 3.75 && note < 4.16){
    return 466.16;
  }
   if(note >= 4.16 && note < 4.58){
    return 493.88;
  }
   if(note >= 4.58){
    return 523.25;
  }
} 
