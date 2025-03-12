SELECT a.name 
FROM employee a
JOIN employee b ON a.id = b.managerId
GROUP BY a.id, a.name
HAVING COUNT(b.id) >= 5;
