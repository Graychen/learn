'use strict';
//0
var zero = function(f){
    return function(x){
        return x;
    }
}
//1
var one = function(f){
    return function(x){
        return f(x);
    }
}

//add
function add(n,m){
    return function(f){
        return function(x){
            return m(f)(n(f)(x));
        }
    }
}
