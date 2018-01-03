#include <ArduinoJson.h> 
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <InstagramEsp8266.h>

const char* ssid = "";// ssid wifi
const char* password = ""; //   

instagram instagram_data;
void setup() {
   Serial.begin(115200);  
    WiFi.mode(WIFI_STA);  
    WiFi.begin(ssid, password);  
    while (WiFi.status() != WL_CONNECTED) {
           delay(500);
           Serial.print(".");
          }  
 instagram_data.server("192.168.1.170","/instagram/instagram.php");
 instagram_data.account("https://www.instagram.com/cisco/"); 

        
      Serial.println("username"); 
      Serial.println(instagram_data.username);//
      
      Serial.println("follows"); 
      Serial.println(instagram_data.follows);// Подписки

      Serial.println("followed_by"); 
      Serial.println(instagram_data.followed_by);//подписчиков 

      Serial.println("media"); 
      Serial.println(instagram_data.media);//media публикаций 

      Serial.println("nodes"); 
      Serial.println(instagram_data.nodes);//последняя запись likes 

      Serial.println("video_views"); 
      Serial.println(instagram_data.video_views);//количество просмотров на видео 

      instagram_data.account("https://www.instagram.com/p/BdZYcpSh3k6/");
 
      Serial.println("media_preview_like"); 
      Serial.println(instagram_data.media_preview_like);// 

      Serial.println("video_view_count"); 
      Serial.println(instagram_data.video_view_count);// 

 
      
 
}
void loop() {
   
}


 

