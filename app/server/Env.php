<?php
/** 
    *@Environment variable load file
*/
class Env {

    public function __construct($init = false) {
        $env = fopen("./app/env/.env", "r");
         
        while (!feof($env)) {
           $result = fgets($env);
           $key_value_pair = explode("=", trim($result));
           $key = $key_value_pair[0];
           $value = $key_value_pair[1];
           $this->$key = $value;
        }
        fclose($env);
    }
    
}
?>