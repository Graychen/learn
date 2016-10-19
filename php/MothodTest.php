<?php
class MethodTest{
    public function __call($name,$arguments){
        echo "Calling ojbect method '$name'"
            . implode(',',$arguments). "\n";
    }

    public static function __callStatic($name,$arguments){
        echo "Calling static method '$name'"
            .implode(',',$arguments);
    }
}

$obj = new MethodTest;
$obj->runTest('in object context');

MethodTest::runTest('in static context');
?>
