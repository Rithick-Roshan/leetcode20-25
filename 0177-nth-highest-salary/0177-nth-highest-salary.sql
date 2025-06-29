CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  declare value int;
  set value = N - 1;
  RETURN (
        select distinct salary 
        from Employee
        order by salary desc
        limit 1 offset value
  );
END