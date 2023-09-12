/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
SELECT CI.NAME 
FROM CITY CI, COUNTRY CO
WHERE CI.COUNTRYCODE = CO.CODE AND CONTINENT = 'Africa';
