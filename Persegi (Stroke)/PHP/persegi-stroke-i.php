<?php

$x = readline("Masukan Lebar Persegi: ");
    
for($j = 0; $j <= $x; $j++){
    echo "* ";
}
echo "\n";

for($i = 0; $i <= ($x-2); $i++){
    echo "* ";
    for($j = 0; $j <= ($x-2); $j++){
        echo "  ";
    }
    echo "*\n";
}

for($k = 0; $k <= $x; $k++){
    echo "* ";
}
