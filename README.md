# Employee Management System (EMS)

## Overview

The **Employee Management System (EMS)** is a full-stack web application designed to manage employee records efficiently. It allows administrators and HR personnel to perform CRUD operations on employees, departments, and roles, while employees can view and update their profiles.

This project follows a **Spring Framework (backend)** + **React (frontend)** architecture, making it modular, scalable, and user-friendly.

---

## Features

### Employee Management

* Add, update, delete, and view employee records
* Assign employees to departments and roles
* Employee profile page for self-service updates

### 🏢 Department & Role Management

* Manage company departments
* Create, update, and delete roles
* Associate roles with employees

### Authentication & Authorization

* Login and signup system
* Role-based access control (Admin, HR, Employee)

### Dashboard

* Overview of total employees, departments, and roles
* Quick access to recent changes and statistics

### Search & Filter

* Search employees by name, department, or role
* Sort and filter data for easier navigation

---

## Project Architecture

### Frontend (React)

* **React + Vite/CRA** for fast development
* **Axios** for API calls
* **React Router** for navigation
* **TailwindCSS / Material UI** for styling

### ⚙️ Backend (Spring Framework)

* **Spring Core & MVC** for request handling
* **Spring Data JPA** for database operations
* **Spring Security** for authentication & authorization
* **RESTful API** exposing endpoints for frontend

### Database

* **MySQL ** (configurable)
* Tables: Employees, Departments, Roles, Users

---

## Folder Structure

```
Employee-Management-System/
├── backend/
│   ├── src/main/java/com/ems/
│   │   ├── config/         # Security & app configuration
│   │   ├── controller/     # REST controllers
│   │   ├── dto/            # Data Transfer Objects
│   │   ├── entity/         # JPA entities (Employee, Department, Role)
│   │   ├── repository/     # JPA repositories
│   │   ├── service/        # Business logic
│   │   └── exception/      # Custom exceptions
│   └── src/main/resources/
│       └── application.yml # DB + security configuration
│
├── frontend/
│   ├── src/
│   │   ├── components/     # Reusable components
│   │   ├── pages/          # Page components (Dashboard, Employee List)
│   │   ├── services/       # Axios API calls
│   │   └── App.js          # Main app entry
│   └── package.json
```

---

## API Endpoints (Sample)

| Method | Endpoint              | Description         |
| ------ | --------------------- | ------------------- |
| GET    | `/api/employees`      | Get all employees   |
| POST   | `/api/employees`      | Add new employee    |
| PUT    | `/api/employees/{id}` | Update employee     |
| DELETE | `/api/employees/{id}` | Delete employee     |
| GET    | `/api/departments`    | Get all departments |
| POST   | `/api/auth/login`     | User login          |

---

## Installation & Setup

### Backend Setup

```bash
cd backend
./mvnw clean install
./mvnw spring-boot:run
```

Backend will start on `http://localhost:8080`

### Frontend Setup

```bash
cd frontend
npm install
npm run dev
```

Frontend will start on `http://localhost:5173`

---

## Future Enhancements

* Add payroll management module
* Email notifications for employees
* Export employee data to Excel/PDF
* Unit and integration test coverage
* Dockerize backend & frontend for deployment

---

## License

This project is licensed under the MIT License.
