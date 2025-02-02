function greet(name) {
    let hello = "Hello, ";
    return function() {
        return hello + name;
    };
}

let greeting = greet("Sujan");
console.log(greeting());  // Output: Hello, Sujan

let x = 10;
console.log(typeof x);  // Output: number
x = "ten";
console.log(typeof x);  // Output: string
