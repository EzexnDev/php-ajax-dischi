<?php

$call = curl_init();

$fp = fopen('response3.js', 'w');

curl_setopt($call, CURLOPT_URL, 'https://flynn.boolean.careers/exercises/api/array/music');
curl_setopt($call, CURLOPT_FILE, $fp);
curl_setopt($call, CURLOPT_HEADER, 0);

curl_setopt($call, CURLOPT_VERBOSE, 0);
$array = [];
$array = json_decode(curl_exec($call));

curl_close($call);

$giulia = file_get_contents('response3.js');

$decoded_response = json_decode($giulia, true);

$encoded_response = json_encode($decoded_response);

// print_r($decoded_response['response'][0]);

include 'header.php';

// print_r($decoded_response['response']);
echo '<div class="cds-container container">';
for ($i = 0; $i < count($decoded_response['response']); ++$i) {
    echo '<div class="cd">
            <img src='.$decoded_response['response'][$i]['poster'].' alt="">
            <h3>'.$decoded_response['response'][$i]['genre'].'</h3>
            <span class="author">'.$decoded_response['response'][$i]['author'].'</span>
            <span class="year">'.$decoded_response['response'][$i]['year'].'</span>
        </div>';
}
echo '</div>';
