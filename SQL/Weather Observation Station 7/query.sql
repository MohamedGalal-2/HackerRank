/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
SELECT DISTINCT CITY
FROM Station
WHERE CITY LIKE '%A' OR CITY LIKE '%E' OR CITY LIKE '%I' 
OR CITY LIKE '%O' OR CITY LIKE '%U';
