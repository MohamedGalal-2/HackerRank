
/*
    Enter your query below and follow these instructions:
    1. Please append a semicolon ";" at the end of the query
    2. The AS keyword causes errors, so follow this convention: "Select t.Field From table1 t" instead of "select t.Field From table1 AS t"
*/
SELECT student_information.roll_number, student_information.name
FROM student_information, examination_marks 
WHERE student_information.roll_number = examination_marks.roll_number
AND (examination_marks.subject_one + examination_marks.subject_two + examination_marks.subject_three) < 100;      
