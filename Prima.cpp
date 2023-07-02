Bot.send("Welcome to Search Movie ! Please enter your favourite movie in Bot Search Bar to get complete details");
async function respond(inputText) {
    
    if(inputText=="Detail")
    Bot.send("Welcome to Search Movie ! Please enter your favourite movie in Bot Search Bar to get complete details");
    else
    fetchMovieDetails(inputText);
 
}
 
async function fetchMovieDetails(movieName) {
 
    var botResponse;
    
    var result = await CampK12.fetch("GET", "https://www.omdbapi.com/?apikey=36dd83c1&t=" + movieName);
 
    console.log(result);
 
    if (result.Response == "True")
 
        botResponse = "Movie :" + result.Title + " | Release on : " + result.Released + "| Directed by : " + result.Director + "| Actors : " + result.Actors + "| Story :" + result.Plot + "|IMDB Rating :" + result.imdbRating+" To Know more about Search Movie Bot . Please Type 'Detail' in message window ";
    else
 
        botResponse = "No Movie found with name " + movieName + " Try Again with new name .";
    Bot.send(botResponse);
 
}
