SELECT p.product_id,
       CASE WHEN pp.new_price IS NULL THEN 10 ELSE pp.new_price END AS price
FROM (SELECT DISTINCT product_id FROM Products) p
LEFT JOIN (
    SELECT product_id, new_price
    FROM Products
    WHERE (product_id, change_date) IN (
        SELECT product_id, MAX(change_date)
        FROM Products
        WHERE change_date <= '2019-08-16'
        GROUP BY product_id
    )
) pp ON p.product_id = pp.product_id;