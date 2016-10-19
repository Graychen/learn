'use strict';

function create_count(initial){
    var x = initial || 0;
    return {
        inc:function(){
            x += 1;
            return x;
        }
    }
}

var c1 = create_count();
c1.inc();
c1.inc();
c1.inc();

var c2 = create_count(10);
c2.inc();
c2.inc();
c2.inc();
