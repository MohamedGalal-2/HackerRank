/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
SELECT DISTINCT City
FROM Station
WHERE (City LIKE 'A%' OR City LIKE 'E%' OR City LIKE 'I%' 
OR City LIKE 'O%' OR City LIKE 'U%')
AND 
(City LIKE '%A' OR City LIKE '%E' OR City LIKE '%I' 
OR City LIKE '%O' OR City LIKE '%U');
