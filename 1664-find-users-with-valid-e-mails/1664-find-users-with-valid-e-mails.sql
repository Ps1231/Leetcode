# Write your MySQL query statement below
select user_id, name ,  mail from Users where mail REGEXP '^[A-Za-z][a-zA-Z0-9._-]*@leetcode\\.com$';