ALTER TABLE student
DROP PRIMARY KEY;

-- OR

ALTER TABLE student
DROP PRIMARY KEY, 
ADD PRIMARY KEY (name);