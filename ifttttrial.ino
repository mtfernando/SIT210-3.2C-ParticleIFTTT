int PhotoResistor = 500;
void setup() {

}

void loop() {
if (PhotoResistor<600){
    Particle.publish("light_level","dark",PRIVATE);
    PhotoResistor = 700;
}
else if(PhotoResistor<1000){
    Particle.publish("light_level", "medium_light", PRIVATE)
}
else{
    Particle.publish("light_level" "bright", PRIVATE)
}
    
}
