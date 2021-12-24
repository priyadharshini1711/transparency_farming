int soil = A4;
int methane = A2;
int co = A0;
int soil_op;
int co_op;
int methane_op;

void setup() {
    Serial.begin(9600);
    Serial.println("Reading From the Sensor ...");
    delay(2000);
}

void loop() {
    soil_op = analogRead(soil);
    co_op = analogRead(co);
    methane_op = analogRead(methane);
    //output_value = map(output_value,550,0,0,100);
    if (soil_op <= 600)
        Serial.println("HIGH AMOUNT OF PESTICIDES IDENTIFIED ");
    else
        Serial.println("THE AMOUNT OF PESTICIDES IS PERFECT");
    Serial.println("Mositure : ");
    Serial.println("Carbon : ");
    Serial.println("Sulphur : ");
    Serial.println(soil_op);
    Serial.println(co_op);
    Serial.println(methane_op);
    delay(1000);
}