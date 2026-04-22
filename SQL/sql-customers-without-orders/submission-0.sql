-- Write your query below
SELECT NAME FROM CUSTOMERS left join orders on customers.id= orders.customer_id
where orders.customer_id is null
