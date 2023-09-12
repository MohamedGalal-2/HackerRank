/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
SELECT MAX(salary * months) , count(salary * months)
FROM Employee
WHERE (salary * months) =
(SELECT MAX(salary * months) FROM Employee);
