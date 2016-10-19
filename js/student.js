var robot = {
    name:'Robot',
    height:1.6,
    run:function(){
        console.log(this.name+'is running....');
    }
}

var xiaoming = {
    name:'小米'
}

xiaoming.__proto__ = robot;`
