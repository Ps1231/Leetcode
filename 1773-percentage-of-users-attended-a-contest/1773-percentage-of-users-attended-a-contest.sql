# Write your MySQL query statement below
select c.contest_id , round(count(distinct c.user_id)*100/(select count(user_id)from Users),2) as percentage
from Users u
join Register c
on c.user_id=u.user_id
group by c.contest_id
order by percentage desc,contest_id asc
