function make_pow(n){
    return function(x){
        return Math.pow(x,n);
    }
}

var pow2 = make_pow(2);
var pow3 = make_pow(3);

pow2(5);
pow3(7);
