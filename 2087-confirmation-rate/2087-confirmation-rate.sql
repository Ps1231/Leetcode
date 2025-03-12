# Write your MySQL query statement below
select a.user_id, round(avg(case when c.action="confirmed" then 1 else 0 end ),2) 
as confirmation_rate
from Signups a 
left join Confirmations as c 
on a.user_id=c.user_id 
group by user_id;