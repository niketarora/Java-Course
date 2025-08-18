let userScore = 0;
let compScore = 0; 

const choices = document.querySelectorAll(".choice");
const msg = document.querySelector("#msg");

const userScorePara = document.querySelector("#user-score");
const compScorePara = document.querySelector("#comp-score");

// Computer Choice
const genCompChoice = () => {
    const option = ["rock", "paper", "scissors"];
    const randIdx = Math.floor(Math.random()*3);
    return option[randIdx];
}

// My choice
choices.forEach((choice) => {
    choice.addEventListener("click", () => {
        const userChoice = choice.getAttribute("id");
        playGame(userChoice);
    });
});

//annoucing the winner
const showWinner = (userWin) => {
    if(userWin) {
        userScorePara.innerHTML = ++userScore;
        console.log("You Win!");
        msg.innerHTML = "You Win!"
        msg.style.backgroundColor = "green";
    }
    else{
        compScorePara.innerHTML = ++compScore;
        console.log("You Lose!");
        msg.innerHTML = "You Lose!"
        msg.style.backgroundColor = "red";
    }
}

// Finding the winner
const playGame = (userChoice) => {
    const compChoice = genCompChoice();
    console.log(`User Choice = ${userChoice}`);
    console.log(`Computer Choice = ${compChoice}`);

    if(userChoice === compChoice){
        console.log("Game was draw");
        msg.innerHTML = "Game was Draw";
        msg.style.backgroundColor = "black";
    }
    else {
        let userWin = true;
        if (userChoice === "rock") {
            //scissors, paper
            userWin = compChoice === "paper" ? false : true;
        } else if (userChoice === "paper") {
            //rock, scissors
            userWin = compChoice === "scissors" ? false : true;
        } else {
            //rock, paper
            userWin = compChoice === "rock" ? false : true;
        }
        showWinner(userWin);
    }
}


