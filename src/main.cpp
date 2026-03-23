#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

#define IR_PIN      3
#define BUTTON_PIN  9
#define LED_PIN     8

IRsend irsend(IR_PIN);

// tvs ir codes

void sendSamsung() {
  irsend.sendSAMSUNG(0xE0E040BF); delay(50);
  irsend.sendSAMSUNG(0xE0E040BF); delay(50);
  irsend.sendSAMSUNG(0xE0E019E6); delay(50);
  irsend.sendSAMSUNG(0xE0E0F00F); delay(50);
}

void sendLG() {
  irsend.sendNEC(0x20DF10EF, 32); delay(50);
  irsend.sendNEC(0x20DF10EF, 32); delay(50);
  irsend.sendNEC(0x20DFF807, 32); delay(50);
  irsend.sendNEC(0x20DF40BF, 32); delay(50);
}

void sendSony() {
  for (int i = 0; i < 3; i++) { irsend.sendSony(0xA8C, 12); delay(30); }
  for (int i = 0; i < 3; i++) { irsend.sendSony(0xA8C, 15); delay(30); }
  for (int i = 0; i < 3; i++) { irsend.sendSony(0x740C, 20); delay(30); }
  for (int i = 0; i < 3; i++) { irsend.sendSony(0x290C, 15); delay(30); }
}

void sendPhilips() {
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendRC6(0x800F040C, 32); delay(100);
  irsend.sendRC6(0x800F040C, 32); delay(100);
}

void sendPanasonic() {
  irsend.sendPanasonic(0x4004, 0x100BCBD); delay(100);
  irsend.sendPanasonic(0x4004, 0x100BCBD); delay(100);
  irsend.sendPanasonic(0x4004, 0x1000E0E); delay(100);
}

void sendSharp() {
  irsend.sendNEC(0xAA5540BF, 32); delay(100);
  irsend.sendNEC(0xAA5540BF, 32); delay(100);
  irsend.sendNEC(0xAA55C03F, 32); delay(100);
}

void sendToshiba() {
  irsend.sendNEC(0x02FD48B7, 32); delay(100);
  irsend.sendNEC(0x02FD48B7, 32); delay(100);
  irsend.sendNEC(0x02FDB847, 32); delay(100);
}

void sendHitachi() {
  irsend.sendNEC(0xD0F040BF, 32); delay(100);
  irsend.sendNEC(0xD0F040BF, 32); delay(100);
}

void sendHisense() {
  irsend.sendNEC(0x40BF40BF, 32); delay(100);
  irsend.sendNEC(0x40BF40BF, 32); delay(100);
  irsend.sendNEC(0x40BF00FF, 32); delay(100);
}

void sendTCL() {
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendNEC(0x01FE48B7, 32); delay(100);
  irsend.sendNEC(0x01FE48B7, 32); delay(100);
}

void sendVizio() {
  irsend.sendNEC(0xE1F8A659, 32); delay(100);
  irsend.sendNEC(0xE1F8A659, 32); delay(100);
}

void sendJVC() {
  irsend.sendJVC(0xC5E8, 16, false); delay(50);
  irsend.sendJVC(0xC5E8, 16, true);  delay(50);
  irsend.sendJVC(0xC5E8, 16, true);  delay(50);
}

void sendMitsubishi() {
  irsend.sendNEC(0x44BB40BF, 32); delay(100);
  irsend.sendNEC(0x44BB40BF, 32); delay(100);
}

void sendVestel() {
  irsend.sendNEC(0x57E300FF, 32); delay(100);
  irsend.sendNEC(0x57E300FF, 32); delay(100);
}

void sendBeko() {
  irsend.sendNEC(0x5EA1F00F, 32); delay(100);
  irsend.sendNEC(0x5EA1F00F, 32); delay(100);
}

void sendHaier() {
  irsend.sendNEC(0x19E640BF, 32); delay(100);
  irsend.sendNEC(0x19E640BF, 32); delay(100);
  irsend.sendNEC(0x19E6807F, 32); delay(100);
}

void sendInsignia() {
  irsend.sendNEC(0x807F40BF, 32); delay(100);
  irsend.sendNEC(0x807F40BF, 32); delay(100);
  irsend.sendNEC(0x10EF40BF, 32); delay(100);
}

void sendSanyoTV() {
  irsend.sendNEC(0x1CE340BF, 32); delay(100);
  irsend.sendNEC(0x1CE340BF, 32); delay(100);
  irsend.sendNEC(0x4CB340BF, 32); delay(100);
}

void sendFunai() {
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FF807F, 32); delay(100);
}

void sendMagnavox() {
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
}

void sendEmerson() {
  irsend.sendNEC(0x01FE40BF, 32); delay(100);
  irsend.sendNEC(0x01FE40BF, 32); delay(100);
  irsend.sendNEC(0x01FE807F, 32); delay(100);
}

void sendGrundig() {
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
  irsend.sendRC6(0x800F040C, 32); delay(100);
}

void sendXiaomi() {
  irsend.sendNEC(0x04FB40BF, 32); delay(100);
  irsend.sendNEC(0x04FB40BF, 32); delay(100);
  irsend.sendNEC(0x04FB807F, 32); delay(100);
}

void sendSkyworth() {
  irsend.sendNEC(0xDF2040BF, 32); delay(100);
  irsend.sendNEC(0xDF2040BF, 32); delay(100);
  irsend.sendNEC(0xDF20C03F, 32); delay(100);
}

void sendAOC() {
  irsend.sendNEC(0x8E7140BF, 32); delay(100);
  irsend.sendNEC(0x8E7140BF, 32); delay(100);
  irsend.sendNEC(0x8E71C03F, 32); delay(100);
}

// projectors thingy starts from here

void sendBenQ() {
  irsend.sendNEC(0xD5200000, 32); delay(100);
  irsend.sendNEC(0xD5208877, 32); delay(100);
  irsend.sendNEC(0xD520F00F, 32); delay(100);
  irsend.sendNEC(0xD520807F, 32); delay(100);
}

void sendEpson() {
  irsend.sendNEC(0x61A8F00F, 32); delay(100);
  irsend.sendNEC(0x61A8F00F, 32); delay(100);
  irsend.sendNEC(0x00FF40BF, 32); delay(100);
  irsend.sendNEC(0x61A840BF, 32); delay(100);
}

void sendOptoma() {
  irsend.sendNEC(0xBC43CE31, 32); delay(100);
  irsend.sendNEC(0xBC43CE31, 32); delay(100);
  irsend.sendNEC(0xBC43807F, 32); delay(100);
  irsend.sendNEC(0xBC430AF5, 32); delay(100);
}

void sendViewSonic() {
  irsend.sendNEC(0x8877A25D, 32); delay(100);
  irsend.sendNEC(0x8877A25D, 32); delay(100);
  irsend.sendNEC(0x8877629D, 32); delay(100);
}

void sendAcer() {
  irsend.sendNEC(0x78871308, 32); delay(100);
  irsend.sendNEC(0xEF10629D, 32); delay(100);
  irsend.sendNEC(0xEF10C03F, 32); delay(100);
  irsend.sendNEC(0xEF10E01F, 32); delay(100);
}

void sendInfocus() {
  irsend.sendNEC(0xB24DC03F, 32); delay(100);
  irsend.sendNEC(0xB24DC03F, 32); delay(100);
  irsend.sendNEC(0xB24D40BF, 32); delay(100);
}

void sendNECProjector() {
  irsend.sendNEC(0x7F8040BF, 32); delay(100);
  irsend.sendNEC(0x7F8040BF, 32); delay(100);
  irsend.sendNEC(0x7F80C03F, 32); delay(100);
  irsend.sendNEC(0x7F80807F, 32); delay(100);
}

void sendPanasonicProjector() {
  irsend.sendPanasonic(0x4004, 0x100AEBB); delay(100);
  irsend.sendPanasonic(0x4004, 0x100AEBB); delay(100);
  irsend.sendPanasonic(0x4004, 0x1004E4F); delay(100);
}

void sendSonyProjector() {
  for (int i = 0; i < 3; i++) { irsend.sendSony(0x290C, 15); delay(30); }
  for (int i = 0; i < 3; i++) { irsend.sendSony(0xA90, 15); delay(30); }
  for (int i = 0; i < 3; i++) { irsend.sendSony(0x2D90, 20); delay(30); }
}

void sendCasio() {
  irsend.sendNEC(0x5EA1F00F, 32); delay(100);
  irsend.sendNEC(0x5EA1F00F, 32); delay(100);
  irsend.sendNEC(0x5EA1807F, 32); delay(100);
}

void sendSanyo() {
  irsend.sendNEC(0x4CB3F00F, 32); delay(100);
  irsend.sendNEC(0x4CB3F00F, 32); delay(100);
  irsend.sendNEC(0x4CB340BF, 32); delay(100);
  irsend.sendNEC(0x0CF39060, 32); delay(100);
}

void sendMitsubishiProjector() {
  irsend.sendNEC(0x44BB40BF, 32); delay(100);
  irsend.sendNEC(0x44BB40BF, 32); delay(100);
  irsend.sendNEC(0x44BB807F, 32); delay(100);
  irsend.sendNEC(0x44BBC03F, 32); delay(100);
}

void sendHitachiProjector() {
  irsend.sendNEC(0xD0F040BF, 32); delay(100);
  irsend.sendNEC(0xD0F040BF, 32); delay(100);
  irsend.sendNEC(0xD0F0C03F, 32); delay(100);
}

void sendDell() {
  irsend.sendNEC(0x05FA40BF, 32); delay(100);
  irsend.sendNEC(0x05FA40BF, 32); delay(100);
  irsend.sendNEC(0x05FAC03F, 32); delay(100); 
  irsend.sendNEC(0x05FA807F, 32); delay(100); 
}

void sendRicoh() {
  irsend.sendNEC(0xF708F00F, 32); delay(100);
  irsend.sendNEC(0xF708F00F, 32); delay(100);
  irsend.sendNEC(0xF70840BF, 32); delay(100);
}

void sendVivitek() {
  irsend.sendNEC(0xE916F00F, 32); delay(100);
  irsend.sendNEC(0xE916F00F, 32); delay(100);
  irsend.sendNEC(0xE91640BF, 32); delay(100);
}

void sendLGProjector() {
  irsend.sendNEC(0x20DF10EF, 32); delay(100);
  irsend.sendNEC(0x20DF10EF, 32); delay(100);
  irsend.sendNEC(0x20DFF807, 32); delay(100);
}

void sendXGIMI() {
  irsend.sendNEC(0xFF00F00F, 32); delay(100);
  irsend.sendNEC(0xFF00F00F, 32); delay(100);
  irsend.sendNEC(0xFF0040BF, 32); delay(100);
}

void sendJmGo() {
  irsend.sendNEC(0xFB04F00F, 32); delay(100);
  irsend.sendNEC(0xFB04F00F, 32); delay(100);
  irsend.sendNEC(0xFB0440BF, 32); delay(100);
}

void sendAnkerNebula() {
  irsend.sendNEC(0xEF1040BF, 32); delay(100);
  irsend.sendNEC(0xEF1040BF, 32); delay(100);
  irsend.sendNEC(0xEF10807F, 32); delay(100);
}

void sendBarco() {
  irsend.sendNEC(0x8F7040BF, 32); delay(100);
  irsend.sendNEC(0x8F7040BF, 32); delay(100);
  irsend.sendNEC(0x8F70C03F, 32); delay(100);
}

void sendChristie() {
  irsend.sendNEC(0xC738F00F, 32); delay(100);
  irsend.sendNEC(0xC738F00F, 32); delay(100);
  irsend.sendNEC(0xC73840BF, 32); delay(100);
}

void sendCanon() {
  irsend.sendNEC(0x0CF3906F, 32); delay(100); 
  irsend.sendNEC(0x0CF3906F, 32); delay(100);
  irsend.sendNEC(0x0CF340BF, 32); delay(100); 
  irsend.sendNEC(0x0CF3C03F, 32); delay(100); 
}

void sendSMART() {
  irsend.sendNEC(0xF30CF00F, 32); delay(100);
  irsend.sendNEC(0xF30CF00F, 32); delay(100);
  irsend.sendNEC(0xF30C40BF, 32); delay(100); 
  irsend.sendNEC(0xF30C807F, 32); delay(100); 
}

void sendPromethean() {
  irsend.sendNEC(0xAB5440BF, 32); delay(100);
  irsend.sendNEC(0xAB5440BF, 32); delay(100);
  irsend.sendNEC(0xAB54C03F, 32); delay(100); 
}

void sendNexTouch() {
  irsend.sendNEC(0x40BF40BF, 32); delay(100); 
  irsend.sendNEC(0x40BF40BF, 32); delay(100);
  irsend.sendNEC(0x807F40BF, 32); delay(100);
  irsend.sendNEC(0x807F40BF, 32); delay(100);
  irsend.sendRC5(irsend.encodeRC5(0x0, 0xC), 12); delay(100);
}

void sendNewline() {
  irsend.sendNEC(0x1F6040BF, 32); delay(100);
  irsend.sendNEC(0x1F6040BF, 32); delay(100);
  irsend.sendNEC(0x1F60C03F, 32); delay(100);
}

void sendViewSonicBoard() {
  irsend.sendNEC(0x8877A25D, 32); delay(100);
  irsend.sendNEC(0x8877A25D, 32); delay(100);
  irsend.sendNEC(0x8877807F, 32); delay(100);
}

void sendBenQBoard() {
  irsend.sendNEC(0xD52040BF, 32); delay(100);
  irsend.sendNEC(0xD52040BF, 32); delay(100);
  irsend.sendNEC(0xD520C03F, 32); delay(100);
}

void sendClevertouch() {
  irsend.sendNEC(0x38C740BF, 32); delay(100);
  irsend.sendNEC(0x38C740BF, 32); delay(100);
  irsend.sendNEC(0x38C7C03F, 32); delay(100);
}

void sendMaxhub() {
  irsend.sendNEC(0x6E9140BF, 32); delay(100);
  irsend.sendNEC(0x6E9140BF, 32); delay(100);
  irsend.sendNEC(0x6E91807F, 32); delay(100);
}

void sendHikvision() {
  irsend.sendNEC(0x45BA40BF, 32); delay(100);
  irsend.sendNEC(0x45BA40BF, 32); delay(100);
  irsend.sendNEC(0x45BAC03F, 32); delay(100);
}

// skiddy's job job sahur
void sendAll() {
  Serial.println("SkidBGone is the best TvBGone firmware bro. Starting..."); delay(50);

  Serial.println("Skiddy is turning off TVs... Every TV is cooked lol."); 

  Serial.println("[1/24] Samsung");       sendSamsung();           delay(300);
  Serial.println("[2/24] LG");            sendLG();                delay(300);
  Serial.println("[3/24] Sony TV");       sendSony();              delay(300);
  Serial.println("[4/24] Philips");       sendPhilips();           delay(300);
  Serial.println("[5/24] Panasonic TV");  sendPanasonic();         delay(300);
  Serial.println("[6/24] Sharp");         sendSharp();             delay(300);
  Serial.println("[7/24] Toshiba");       sendToshiba();           delay(300);
  Serial.println("[8/24] Hitachi TV");    sendHitachi();           delay(300);
  Serial.println("[9/24] Hisense");       sendHisense();           delay(300);
  Serial.println("[10/24] TCL");          sendTCL();               delay(300);
  Serial.println("[11/24] Vizio");        sendVizio();             delay(300);
  Serial.println("[12/24] JVC TV");       sendJVC();               delay(300);
  Serial.println("[13/24] Mitsubishi TV");sendMitsubishi();        delay(300);
  Serial.println("[14/24] Vestel/Beko");  sendVestel(); sendBeko();delay(300);
  Serial.println("[15/24] Haier");        sendHaier();             delay(300);
  Serial.println("[16/24] Insignia");     sendInsignia();          delay(300);
  Serial.println("[17/24] Sanyo TV");     sendSanyoTV();           delay(300);
  Serial.println("[18/24] Funai");        sendFunai();             delay(300);
  Serial.println("[19/24] Magnavox");     sendMagnavox();          delay(300);
  Serial.println("[20/24] Emerson");      sendEmerson();           delay(300);
  Serial.println("[21/24] Grundig");      sendGrundig();           delay(300);
  Serial.println("[22/24] Xiaomi");       sendXiaomi();            delay(300);
  Serial.println("[23/24] Skyworth");     sendSkyworth();          delay(300);
  Serial.println("[24/24] AOC");          sendAOC();               delay(300);

  Serial.println("Wtf projector are turned off, why? Skiddy turned it off bro.");

  Serial.println("[1/20] BenQ");          sendBenQ();              delay(300);
  Serial.println("[2/20] Epson");         sendEpson();             delay(300);
  Serial.println("[3/20] Optoma");        sendOptoma();            delay(300);
  Serial.println("[4/20] ViewSonic");     sendViewSonic();         delay(300);
  Serial.println("[5/20] Acer");          sendAcer();              delay(300);
  Serial.println("[6/20] Infocus");       sendInfocus();           delay(300);
  Serial.println("[7/20] NEC Projector"); sendNECProjector();      delay(300);
  Serial.println("[8/20] Panasonic PJ");  sendPanasonicProjector();delay(300);
  Serial.println("[9/20] Sony VPL");      sendSonyProjector();     delay(300);
  Serial.println("[10/20] Casio");        sendCasio();             delay(300);
  Serial.println("[11/20] Sanyo PJ");     sendSanyo();             delay(300);
  Serial.println("[12/20] Mitsubishi PJ");sendMitsubishiProjector();delay(300);
  Serial.println("[13/20] Hitachi PJ");   sendHitachiProjector();  delay(300);
  Serial.println("[14/20] Dell");         sendDell();              delay(300);
  Serial.println("[15/20] Ricoh");        sendRicoh();             delay(300);
  Serial.println("[16/20] Vivitek");      sendVivitek();           delay(300);
  Serial.println("[17/20] LG Minibeam");  sendLGProjector();       delay(300);
  Serial.println("[18/20] XGIMI");        sendXGIMI();             delay(300);
  Serial.println("[19/20] JmGo");         sendJmGo();              delay(300);
  Serial.println("[20/20] Anker Nebula"); sendAnkerNebula();       delay(300);

  Serial.println("Smart desks are turning off, why? Only this skid knows.");

  Serial.println("[1/12] Barco");         sendBarco();             delay(300);
  Serial.println("[2/12] Christie");      sendChristie();          delay(300);
  Serial.println("[3/12] Canon PJ");      sendCanon();             delay(300);
  Serial.println("[4/12] SMART Board");   sendSMART();             delay(300);
  Serial.println("[5/12] Promethean");    sendPromethean();        delay(300);
  Serial.println("[6/12] NexTouch");      sendNexTouch();          delay(300);
  Serial.println("[7/12] Newline");       sendNewline();           delay(300);
  Serial.println("[8/12] ViewSonic IFP"); sendViewSonicBoard();    delay(300);
  Serial.println("[9/12] BenQ Board");    sendBenQBoard();         delay(300);
  Serial.println("[10/12] Clevertouch");  sendClevertouch();       delay(300);
  Serial.println("[11/12] Maxhub");       sendMaxhub();            delay(300);
  Serial.println("[12/12] Hikvision");    sendHikvision();         delay(300);

  Serial.println("Skiddy done it's job. Press BOOT to restart SkidBGone FW.");
}

void setup() {
  Serial.begin(115200);
  irsend.begin();
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);

  Serial.println("");
  Serial.println("   _____ __   _     ______  ______               ");
  Serial.println("  / ___// /__(_)___/ / __ )/ ____/___  ____  ___ ");
  Serial.println("  \\__ \\/ //_/ / __  / __  / / __/ __ \\/ __ \\/ _ \\");
  Serial.println(" ___/ / ,< / / /_/ / /_/ / /_/ / /_/ / / / /  __/");
  Serial.println("/____/_/|_/_/\\__,_/_____/\\____/\\____/_/ /_/\\___/ ");
  Serial.println("");
  Serial.println("        ( o  o )  < Skiddy can't wait to turn off everything. >");
  Serial.println("         (  v  )");
  Serial.println("        /|     |\\");
  Serial.println("        _|_____|_");
  Serial.println("");
  Serial.println("  Skid are you ready? Yeah im ready bradar. Press BOOT to start.");
  Serial.println("");
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    delay(50);
    if (digitalRead(BUTTON_PIN) == LOW) {
      digitalWrite(LED_PIN, LOW);
      sendAll();
      digitalWrite(LED_PIN, HIGH);
      while (digitalRead(BUTTON_PIN) == LOW);
    }
  }
}