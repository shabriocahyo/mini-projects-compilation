<?php

$x = readline("Masukan Tinggi Pohon : ");
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
        
    if($i==$x){
        for($m = 0; $m < 3; $m++){
            for($o = 1; $o < $i; $o++){
            echo " ";
            }
            
            for($n = 0; $n <= 0; $n++){
            echo "===";
            }
        echo "\n";
        }
    }
}
