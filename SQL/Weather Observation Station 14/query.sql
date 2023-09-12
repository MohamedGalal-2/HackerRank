/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
SELECT FORMAT(ROUND(MAX(LAT_N),4),'#.0000')
FROM STATION
WHERE LAT_N < 137.2345;
