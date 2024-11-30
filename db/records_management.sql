DROP DATABASE IF EXISTS records_management;
CREATE DATABASE records_management;

USE records_management;

CREATE TABLE Users (
    user_id INT PRIMARY KEY AUTO_INCREMENT,
    first_name VARCHAR(100) NOT NULL,
    last_name VARCHAR(100) NOT NULL,
    date_of_birth DATE NOT NULL,
    email VARCHAR(100) UNIQUE NOT NULL, -- Added length and corrected syntax
    profile_picture LONGBLOB, -- Suitable for storing images
    password VARCHAR(100) NOT NULL,
    role ENUM('student', 'faculty', 'admin') NOT NULL, -- Removed VARCHAR since ENUM is sufficient
    date_created DATETIME DEFAULT CURRENT_TIMESTAMP -- Added DEFAULT keyword
);

CREATE TABLE Students (
    student_id INT PRIMARY KEY AUTO_INCREMENT, -- Use AUTO_INCREMENT to make this a primary key
    user_id INT UNIQUE, -- Link to Users table if needed
    major ENUM('Business Administration', 'Computer Science', 'Mechanical Engineering') NOT NULL,
    enrollment_date DATE NOT NULL,
    FOREIGN KEY (user_id) REFERENCES Users(user_id) ON DELETE CASCADE
);

CREATE TABLE Faculty (
    faculty_id INT PRIMARY KEY AUTO_INCREMENT, -- Use AUTO_INCREMENT to make this a primary key
    user_id INT UNIQUE, -- Link to Users table if needed
    department ENUM('Computer Science and Information Systems', 'Business Administration', 'Engineering') NOT NULL,
    date_of_appointment DATE DEFAULT CURRENT_TIMESTAMP, -- Added DEFAULT keyword
    salary INT,
    FOREIGN KEY (user_id) REFERENCES Users(user_id) ON DELETE CASCADE
);

CREATE TABLE Courses (
    course_id INT PRIMARY KEY AUTO_INCREMENT, -- Added AUTO_INCREMENT for unique course IDs
    course_name VARCHAR(100) NOT NULL,
    credits DECIMAL(2,1) CHECK (credits IN (0.5, 1)), -- Changed ENUM to DECIMAL with CHECK for numeric values
    semester ENUM('SEM1', 'SEM2') NOT NULL,
    description TEXT -- Changed VARCHAR to TEXT for longer descriptions if needed
);

CREATE TABLE Enrollment (
    enrollment_id INT PRIMARY KEY AUTO_INCREMENT,
    student_id INT,
    course_id INT,
    semester ENUM('SEM1', 'SEM2') NOT NULL, -- Specified ENUM type and NOT NULL
    grade CHAR(1) CHECK (grade IN ('A', 'B', 'C', 'D', 'E', 'F')), -- Used CHECK for valid grades
    enrollment_date DATE NOT NULL,
    FOREIGN KEY (student_id) REFERENCES Students(student_id) ON DELETE CASCADE,
    FOREIGN KEY (course_id) REFERENCES Courses(course_id) ON DELETE CASCADE
);

CREATE TABLE FacultyCourses (
    faculty_course_id INT PRIMARY KEY AUTO_INCREMENT,
    faculty_id INT,
    course_id INT,
    semester ENUM('SEM1', 'SEM2') NOT NULL, -- Specified ENUM type and NOT NULL
    FOREIGN KEY (faculty_id) REFERENCES Faculty(faculty_id) ON DELETE CASCADE,
    FOREIGN KEY (course_id) REFERENCES Courses(course_id) ON DELETE CASCADE
);

CREATE TABLE Transcripts (
    transcript_id INT PRIMARY KEY AUTO_INCREMENT, -- Added AUTO_INCREMENT for unique transcript IDs
    student_id INT,
    course_id INT,
    semester ENUM('SEM1', 'SEM2') NOT NULL, -- Specified ENUM type
    final_grade CHAR(1) CHECK (final_grade IN ('A', 'B', 'C', 'D', 'E', 'F')), -- Used CHECK for valid grades
    date_issued DATE DEFAULT CURRENT_TIMESTAMP, -- Added DEFAULT for timestamp
    FOREIGN KEY (student_id) REFERENCES Students(student_id),
    FOREIGN KEY (course_id) REFERENCES Courses(course_id)
);
