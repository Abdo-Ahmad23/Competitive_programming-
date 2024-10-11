<?php
    function isPrime($a) {
    $ans = 0;
    for ($i = 2; $i * $i <= $a; $i++) {
        while ($a % $i == 0) {
            $a /= $i;
            $ans++;
        }
    }
    if ($a > 1) {
        $ans++;
    }
    return $ans;
}
    
    
    
    
    
    fscanf(STDIN,"%d",$t);
    for($test=0;$test<$t;$test++)
    {
        fscanf(STDIN,"%d%d%d",$a,$b,$k);
        if($k==1){
        if($a==$b) echo "NO"."\n";
        else if($a%$b==0||$b%$a==0) echo "YES"."\n";
         else echo "NO"."\n";
        continue;
        
    }
    if ($k > isPrime($a) + isPrime($b)) {
        echo "NO"."\n";
        continue;
    }
    echo "YES"."\n";
    continue;
       
        
        
    }
    
    
?>