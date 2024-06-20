სანამ დასტარტავ ფაილს მანამდე ბაზის კონფიგურაცია დაგჭირდება:

**database** სახელი: chatonce

**tables**:
  1) users
  2) phoneBook

**sql schemas**:
  1) for user **Table**:
     
CREATE TABLE users (
    id  INT  IDENTITY (1, 1) primary key,
    userName VARCHAR (255),
    email   VARCHAR (255),
    country  VARCHAR (255),
    gender   VARCHAR (255),
    password VARCHAR (255),
  );
  
  2) for phoneBook **Table**:

CREATE TABLE phoneBook (
     id          INT  IDENTITY (1, 1) primary key,
     name       VARCHAR (255),
     phoneNumber BIGINT,
     country     VARCHAR (255),
     address   VARCHAR (255),
     user_id    INT,
);

 
