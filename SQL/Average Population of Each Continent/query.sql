/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
SELECT co.continent, AVG(ci.population)
FROM COUNTRY co, CITY ci
WHERE ci.countrycode = co.code
GROUP BY co.continent;
