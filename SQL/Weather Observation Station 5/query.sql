/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
SELECT TOP(1) CITY, MAX(LEN(CITY)) 
FROM STATION 
GROUP BY CITY
ORDER BY LEN(CITY);

SELECT TOP(1) CITY, MAX(LEN(CITY)) 
FROM STATION 
GROUP BY CITY
ORDER BY LEN(CITY) DESC;
