const url = "https://api.openweathermap.org/data/2.5/weather?units=metric&q=";
const apiKey = "567073307fe27db5c499abdb95cbb2cb";

let searchbar = document.querySelector(".search-bar input");
let searchbtn = document.querySelector(".search-icon");
let weatherIcon = document.querySelector(".main-image");


async function checkWeather(cityName) {
    const response = await fetch(`${url}${cityName}&appid=${apiKey}`);
    let data = await response.json();
    console.log(data);

    document.querySelector(".city").innerHTML = data.name;
    document.querySelector(".temp").innerHTML = Math.round(data.main.temp) + `°c`;
    document.querySelector(".wind-km").innerHTML = data.wind.speed + ` Km/h`;
    document.querySelector(".percentage").innerHTML = data.main.humidity + `%`;

    if(data.weather[0].main == "Clouds"){
        weatherIcon.src = "images/clouds.png"
    }
    else if(data.weather[0].main == "Clear"){
        weatherIcon.src = "images/clear.png"
    }
    else if(data.weather[0].main == "Rain"){
        weatherIcon.src = "images/rain.png"
    }
    else if(data.weather[0].main == "Drizzle"){
        weatherIcon.src = "images/drizzle.png"
    }
    else if(data.weather[0].main == "Mist"){
        weatherIcon.src = "images/mist.png"
    }
}

searchbtn.addEventListener("click", () => {
    checkWeather(searchbar.value);
});
