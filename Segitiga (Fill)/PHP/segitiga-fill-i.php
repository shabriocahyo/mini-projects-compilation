<?php

$x = readline("Masukan Tinggi Segitiga: ");
for($i = 1; $i <= $x; $i++){
    for($j = $x; $j >= $i; $j--){
        echo " ";
    }
    
    for($l = 2; $l <= $i; $l++){
       echo "*";
    }
    
    for($k = 1; $k <= $i; $k++){
            echo "*";
        }
    echo "\n";
}
