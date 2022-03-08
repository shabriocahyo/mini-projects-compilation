<?php

$x = readline('Masukan Tinggi Segitiga : ');

for($h = 1; $h <= $x + 1; $h++){
    echo " ";
}

echo "*\n";

for($i = 1; $i <= $x; $i++){
    for($j = $x; $j >= $i; $j--){
        echo " ";
    }
    
    for($l = 1; $l <= 1; $l++){
        echo "*";
    }
    
    for($k = 1; $k <= $i; $k++){
        echo " ";
    }
    
    for($m = 2; $m <= $i; $m++){
        echo " ";
    }  
    echo "*";
       echo "\n";
}
    
for($o = 1; $o <= $x + 2; $o++){
    echo "* ";
}
