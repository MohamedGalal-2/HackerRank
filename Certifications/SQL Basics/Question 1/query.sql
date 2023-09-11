/*
Enter your query below.
Please append a semicolon ";" at the end of the query
*/
SELECT student_information.roll_number, student_information.name
FROM student_information,faculty_information
WHERE student_information.advisor = faculty_information.employee_ID
AND (faculty_information.gender = 'M' AND faculty_information.salary >15000) OR (faculty_information.gender = 'F' AND faculty_information.salary > 20000);
