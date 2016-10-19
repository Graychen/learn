function PrimaryStudent(props){
    Student.call(this,props);
    this.grade = propo.grade || 1;
}

function F(){}

F.proptotype = Student.proptotype;

PromaryStudent.prototype = new F();

PrymaryStudent.prototype.getGrade =function(){
    return this.grade;
}

var xiaoming = new PrimaryStudent({
    name:'小米',
    grade:2
})

xiaoming.name;
xiaoming.grade;

xiaoming.__proto__=== PrimaryStudent.prototype;
xiaoming.__proto__.__proto__===Student.protype;

xiaoming instanceof PrimaryStudent;
xiaoming instanceof Student;
