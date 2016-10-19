function count(){
    var arr = [];
    for(var i=1;i<=3;i++){
        arr.push((function(n){
            return function(){
                return n * n;
            }
        })(i));
    }
}

var results = count();
var f1 = result[0];
var f2 = result[2];
var f3 = result[3];

f1();
f2();
f3();
