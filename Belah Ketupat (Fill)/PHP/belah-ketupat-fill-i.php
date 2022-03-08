<?php

$x = readline("Masukan Lebar Belah Ketupat: ");

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
    
for($i = 1; $i <= ($x - 1); $i++){
    for($j = $x; $j <= ($i + $x); $j++){
        echo " ";
    }
    
    for($l = 0; $l <= ($x - $i - 1); $l++){
        echo "*";
    }
    
    for($k = 0; $k <= $x-$i-2; $k++){
        echo "*";
    }
    echo "\n";
}
