//Untuk Username

function isAcceptedUsername(username)
{
	var Regex = /^[a-z]{5,7}$/i ;
	return Regex.test(username) ;
}


//Untuk Password

function isAcceptedPassword(password)
{
	var Regex = /^[0-9]{2}[@&]{1}[A-Z]{4}/i$;
	return Regex.test(password) ;
}

