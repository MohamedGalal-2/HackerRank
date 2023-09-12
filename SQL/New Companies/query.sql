/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
SELECT Co.company_code, Co.founder, COUNT(DISTINCT LM.lead_manager_code), 
COUNT(DISTINCT SM.senior_manager_code), COUNT(DISTINCT M.manager_code), 
COUNT(DISTINCT E.employee_code)
FROM Company Co, Lead_Manager LM, Senior_Manager SM, Manager M, Employee E
WHERE Co.company_code = LM.company_code AND LM.company_code = SM.company_code
AND SM.company_code = M.company_code AND M.company_code = E.company_code
GROUP BY Co.company_code, Co.founder
ORDER BY Co.company_code ASC;
