console.log("Writing First JS code");
console.log("Phod denge");
// Variable in JS: container to store data values
fullname = "Ablu dablu chablu";
console.log(fullname);
//Variables types: string, number, boolean, null, undefined
var city = "Delhi"; //string
var pin = 110092; //number
var isPrimary = true; //boolean
var isSecondary = false; //boolean
var isSchool = null; //null
var isCollege; //undefined
console.log(city, pin, isPrimary, isSecondary, isSchool, isCollege);
console.log(typeof city);
console.log(typeof pin);
console.log(typeof isPrimary);
console.log(typeof isSecondary);
console.log(typeof isSchool);
console.log(typeof isCollege);
// it is dynamic typing language(does not require to define variable type)
// rules same as python
// cannot start with number or special character except _ and $
// cannot use reserved keywords
// case sensitive   
// var is no longer used as they can be redeclared.
// let and const are used now
// let can be updated but not redeclared
// const cannot be updated or redeclared
const pi = 3.14;
console.log(pi);
//Blocks in JS are defined by {} and are local to that block
// Data types: primitive and non-primitive
// Primitive: string,bigint, number, boolean, null, undefined, symbol
// Non-primitive: object, array, function
// Object: key-value pairs