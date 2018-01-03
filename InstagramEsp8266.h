#include <ArduinoJson.h> 
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
  

class instagram {


private: 
	 String host_instagram;
	 String url_instagram;
	const int httpPort = 80;
	
	 
public: 
	String line, username;
	int follows, followed_by, media, nodes, media_preview_like, video_views,video_view_count;
	WiFiClient client_instagram;

	 void server(String host, String url) {
		 host_instagram = host;
		 url_instagram = url;
	 }

	 void account(String id) {
		 String url = url_instagram;
		 url += "/?url=";
		 url += id;

		 if (client_instagram.connect(host_instagram.c_str(), httpPort)) {
			 client_instagram.print(String("GET ") + url + " HTTP/1.1\r\n" +
				 "Host: " + host_instagram + "\r\n" +
				 "Connection: close\r\n\r\n");
			
		 }
		 delay(2000);
		 while (client_instagram.available()) {
			 
			 line = client_instagram.readStringUntil('\r');
			 DynamicJsonBuffer  jsonBuffer;
			 JsonObject& root = jsonBuffer.parseObject(line);
			 follows = root["follows"];// Подписки
			 followed_by = root["followed_by"];// подписчиков
			 media = root["media"];// media публикаций
			 nodes = root["nodes"];// последняя запись likes
			 media_preview_like = root["media_preview_like"];// запись likes
			 String usernamee = root["username"];
			 video_views = root["video_views"];
			 video_view_count= root["video_viewcount"];//только просмотры записи
		     username = usernamee;
		 }
	 }

	
	
	 
};

 
