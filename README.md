# Esp8266 Instagram Data  
 
##  Настройка
 
             instagram_data.server(адрес сервера,путь к файлу);
    Например instagram_data.server("192.168.1.170","/instagram/instagram.php");
   

## Возвращает информацию про аккаунт 

    instagram_data.account("адрес аккаунта");
    
    Например  https://www.instagram.com/cisco/
              instagram_data.account("https://www.instagram.com/cisco/"); 

        Возвращаемая информация
  
       instagram_data.username       Имя пользователя (String)
       instagram_data.follows        Подписки (int)
       instagram_data.followed_by    Подписчиков (int)           
	   instagram_data.media          Media публикаций (int)
       instagram_data.nodes          Количество лайков под последней записью (int)
       instagram_data.video_views    Количество просмотров на видео под последней записью (int)
  
 ## Возвращает информацию о лайках и просмотрах записи       
   
  instagram_data.account("адрес записи");

   Например https://www.instagram.com/p/BdZYcpSh3k6/
            instagram_data.account("https://www.instagram.com/p/BdZYcpSh3k6/");
  
        Возвращаемая информация
  
    instagram_data.media_preview_like   Информация о лайках к записи (int)
	instagram_data.video_view_count     Количество просмотров на видео под  записью (int)


 
