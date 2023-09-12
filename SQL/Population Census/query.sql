/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
SELECT SUM(CI.POPULATION)
FROM CITY CI, COUNTRY CO
WHERE CI.COUNTRYCODE = CO.CODE AND CONTINENT = 'Asia';
