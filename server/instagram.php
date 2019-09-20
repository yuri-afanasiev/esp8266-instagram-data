<?php   
 $url = htmlspecialchars($_GET['url']);
 $json_string = file_get_contents($url. '?__a=1');
 $json = json_decode($json_string, true); 

 $video_view_count = $json['graphql']['user']['edge_owner_to_timeline_media']['edges']['0']['node']['video_view_count'];  
 $video_views = $json ['graphql']['shortcode_media']['video_view_count'];  
 $username = $json['graphql']['user']['username']; 
 $follows = $json['graphql']['user']['edge_followed_by']['count']; 
 $followed_by = $json['graphql']['user']['edge_follow']['count'];  
 $media = $json ['graphql']['user']['edge_owner_to_timeline_media']['count']; 
 $nodes = $json['graphql']['user']['edge_owner_to_timeline_media']['edges']['0']['node']['edge_liked_by']['count'];  
 $media_preview_like = $json['graphql']['shortcode_media']['edge_media_preview_like']['count'];   

$json_data = array ( 'username'=>$username,'follows'=>$follows,'followed_by'=>$followed_by,'media'=>$media,'nodes'=>$nodes,'media_preview_like'=>$media_preview_like,'video_views'=>$video_views,'video_viewcount'=>$video_view_count);
echo json_encode($json_data); 
?>