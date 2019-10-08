//Create Objext
let person = {
    name: 'Said',
    age: 25,
    school: "UTA"
};

console.log(person);

//Access elements in 2 ways. Dot notation and Bracket notation

//Dot Notation
person.name = 'Omer';

console.log(person);

//Bracket Notation
person['age'] = 27;

console.log(person);

//Testing functions with paramaters
function test(num1, num2){
    let num3 = num1 + num2;
    console.log("The value of " + num1 + " + " + num2 + " is: " + num3);
}

//logging test() outputs
test();

test(1);

test(1,2);