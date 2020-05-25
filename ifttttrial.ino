#PhotoResistor is a mockup value used to control the publish function.
int PhotoResistor = 500;
void setup() {

}

void loop() {

#Mockup value ranges for light levels depending on the value of PhotoResistor.
#<600 = dark
#600-1000 = medium_light
#1000< = bright
if (PhotoResistor<600){
    #ligh_level is published once and PhotoResistor is set to 700 so that it would not publish again.
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
