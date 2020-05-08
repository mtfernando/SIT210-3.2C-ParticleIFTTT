int PhotoResistor = 500;
void setup() {

}

void loop() {
if (PhotoResistor<600){
    Particle.publish("light_level","dark",PRIVATE);
    PhotoResistor = 700;
}
}
