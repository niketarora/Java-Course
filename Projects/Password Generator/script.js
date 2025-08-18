const passwordBox = document.getElementById("password");
const copyBtn = document.getElementById("btn");
const lenght = 12;

const upperCase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const lowerCase = "abcdefghijklmnopqrstuvwxyz";
const number = "0123456789";
const symbol = "@#$%^&*()_+~}{[]<>/|-=";

const allchar = upperCase + lowerCase + number + symbol;

function createPassword(){
    let password = "";
    password += upperCase[Math.floor(Math.random() * upperCase.length)];
    password += lowerCase[Math.floor(Math.random() * lowerCase.length)];
    password += number[Math.floor(Math.random() * number.length)];
    password += symbol[Math.floor(Math.random() * symbol.length)];

    while(lenght > password.length){
        password += allchar[Math.floor(Math.random() * allchar.length)];
    }
    passwordBox.value = password;
}

function copyPassword(){
    navigator.clipboard.writeText(passwordBox.value)
    .then(() => alert("Password copied!"))
    .catch(err => console.error("Copy failed:", err));
}