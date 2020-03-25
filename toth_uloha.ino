int repro = 11; 
int stupnica[] = {262,294,330,349,392,440,494,523};  // pole stupnice 
int dobaNoty = 500;  	// doba trvania tónu stupnice 
int pocetNot=9; 	 	// počet nôt piesne 
 
// pole frekvencií tónov melódie piesne  
int piesen[] ={ 294, 494, 494, 494, 494, 494, 523, 494, 440, 440,                  
              	440, 440, 440, 440, 494, 392, 392,   0, 294, 494, 
                494, 494, 494, 494, 523, 494, 440, 440, 440, 440, 
                440, 440, 494, 392, 392,   0, 523, 523, 587, 523, 
                494, 523, 494, 392, 294, 494, 494, 494, 494, 494, 
                523, 494, 440, 440, 440, 440, 440, 440, 494, 392, 
                392,   0, 523, 523, 587, 523, 494, 523, 494, 392, 
                294, 494, 494, 494, 494, 494, 523, 494, 440, 440, 
                440, 440, 440, 440, 494, 392, 392,     0 };  
// pole dĺžky tónov melódie piesne    
int dobaNot[]={ 250, 250, 250, 250, 250, 250, 250, 250, 250, 250,                 
               	250, 250, 250, 250, 500, 1000, 500, 500, 250, 250,  
                250, 250, 250, 250, 250, 250, 250, 250, 250, 250,                  
               	250, 250, 500, 1000,500, 500, 500, 500, 750, 250, 
                250, 250, 500, 1000, 250, 250, 250, 250, 250, 250, 
                250, 250, 250, 250, 250, 250, 250, 250, 500, 1000, 
                500, 500, 500, 500, 750, 250, 250, 250, 500, 1000, 
                250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 
                250, 250, 250, 250, 500, 1000,500, 500  }; 
 
void setup() 
{ 
  pinMode(repro, OUTPUT); 
}  
void loop() 
{ 
  for(int i=0; i<8; i++)  	// cyklus hrania stupnice nahor  
  {  	 	 	 	 	//( do, re, mi, fa, sol, la, si do ) 
    tone(repro,stupnica[i]); // štart generovania tónu     delay(dobaNoty); 
    noTone(repro);  	// stop generovania  tónu 
  } 
  delay(2000);  	 	 	// oddeľovacia pauza 
       for(int i=7; i>=0; i--)  // cyklus hrania stunice nadol  
  {  	 	 	 	 	//( do, si, la, sol, fa, mi, re, do )     tone(repro,stupnica[i]);     delay(dobaNoty);     noTone(repro); 
  } 
  delay(2000); 
 
  for(int i=0; i<pocetNot; i++)  	// cyklus prehrania piesne 
  { 
    tone(repro,piesen[i]);     delay(dobaNot[i]);     noTone(repro); 
  } 
  delay(2000);  	 	// oddeľovacia pauza 
} 
