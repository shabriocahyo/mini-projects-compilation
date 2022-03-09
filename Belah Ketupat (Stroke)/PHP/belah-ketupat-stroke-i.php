<?php

$x = readline("Masukan Lebar Belah Ketupat: ");

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
 
    echo "*\n";
}

echo "*";

for($v = 0; $v <= $x*2; $v++){
    echo " ";
    }

echo "*\n";

for($p = 0; $p <= $x-1; $p++){
    for($q = 0; $q <= $p; $q++){
        echo " ";
    }

    echo "*";

    for($s = $x-1; $s >= $p; $s--){
        echo " ";
    }

    for($t = $x-2; $t >= $p; $t--){
        echo " ";
    }  
 
    echo "*\n";
}

for($u = 1; $u <= $x+1; $u++){
    echo " ";
}

echo "*";
