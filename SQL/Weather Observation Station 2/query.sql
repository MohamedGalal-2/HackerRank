/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
SELECT FORMAT(Round(Sum(LAT_N), 2), '#.00'), FORMAT(Round(Sum(LONG_W), 2), '#.00')
FROM STATION;
