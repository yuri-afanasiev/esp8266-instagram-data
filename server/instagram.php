<?php   
 $url = htmlspecialchars($_GET['url']);
 $json_string = file_get_contents($url. '?__a=1');//https://habrahabr.ru/post/302150/#comment_9634172
 $json = json_decode($json_string, true); 

 $video_view_count = $json['graphql']['shortcode_media']['video_view_count'];  
 $video_views = $json['user']['media']['nodes']['0']['video_views'];
 $username = $json['user']['username']; 
 $follows = $json['user']['follows']['count']; 
 $followed_by = $json['user']['followed_by']['count'];  
 $media = $json['user']['media']['count']; 
 $nodes = $json['user']['media']['nodes']['0']['likes']['count']; 
 $media_preview_like = $json['graphql']['shortcode_media']['edge_media_preview_like']['count'];   

$json_data = array ( 'username'=>$username,'follows'=>$follows,'followed_by'=>$followed_by,'media'=>$media,'nodes'=>$nodes,'media_preview_like'=>$media_preview_like,'video_views'=>$video_views,'video_viewcount'=>$video_view_count);
echo json_encode($json_data); 
?>