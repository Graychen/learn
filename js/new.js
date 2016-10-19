var Student = {
    name:'Robot',
    height:1.2,
    run:function(){
        console.log(this.name+'is runing');
    }
}

function createStudent(name){
    var s = Object.create(Student);
    s.name = name;
    return s;
}

var xiaoming = createStudent('小米');
xiaoming.run();
xiaoming.__proto__ === Student;
