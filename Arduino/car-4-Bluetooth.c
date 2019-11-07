char Incoming_value = 0;

void setup() {
    
  pinMode(3, OUTPUT); // Front Left motor
  pinMode(4, OUTPUT); // Front Left motor
  pinMode(5, OUTPUT); // Front Right motor
  pinMode(6, OUTPUT); //Front Right motor
  Serial.begin(9600);   
}

void loop() {
 if(Serial.available() > 0)  
 {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n"); 
    //left    
    if(Incoming_value == '1') 
    {            
        Serial.println("  1  ");
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
    }
    else if(Incoming_value == '2')
    {   
        Serial.println("  2  ");    
        digitalWrite(4, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(5, HIGH);
    }
    //Right
    else if(Incoming_value == '3') 
    {    
        Serial.println("  3  ");   
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(5, HIGH);
        delay(200);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
    }      
   else if(Incoming_value == '4')
   {       
        Serial.println("  4  ");
        digitalWrite(4, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        delay(200);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
    }       
}                            
}
