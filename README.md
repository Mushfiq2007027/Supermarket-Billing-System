# 🛒 Supermarket Management System in C++

## 📌 Project Overview
This **Supermarket Management System** is a C++-based console application designed to simulate and manage a simple supermarket’s operations using **file handling** and **Object-Oriented Programming (OOP)** concepts. The system allows two primary user roles: **Administrator** and **Buyer**. It supports CRUD operations on products, maintains persistent data via text files, and features a functional billing system with product discounts.

---

## 🚀 Key Features

### 🔐 Admin Panel
- Password-protected login  
- Add new products to the inventory  
- Edit existing product details (name, price, discount)  
- Delete products from the database  
- View product list  

### 🛍️ Buyer Panel
- View product catalog  
- Generate bills by selecting multiple products  
- Automatically apply product discounts  
- Display total payable amount  
- Print itemized receipt  

---

## 💾 Data Storage
- Product data is stored persistently in a text file named `database.txt`  
- Each line in the file represents:  
  `ProductCode ProductName Price Discount`  
- Products are auto-loaded and manipulated through file I/O operations (`ifstream`, `ofstream`, `fstream`)  

---

## 👨‍💻 Technologies Used
- **Language**: C++  
- **Concepts**: File Handling, Object-Oriented Programming (OOP), Basic Data Structures  
- **Compiler**: Any standard C++ compiler (e.g., g++, Code::Blocks, Dev-C++, Visual Studio)  

---

## 🔄 Object-Oriented Programming Concepts Applied

This project demonstrates all four pillars of **OOP in C++**:

### 1. Encapsulation
- Data members and functions are encapsulated inside classes (`Product`, `Admin`, `Buyer`)  
- Access control is maintained using public and private scopes  

### 2. Abstraction
- Users interact with clean and understandable interfaces  
- Internals like file operations and billing logic are hidden behind function calls  

### 3. Inheritance
- While not extensively used in the current version, the class design can support inheritance (e.g., `Admin` and `Buyer` could inherit from a `User` class in the future)  

### 4. Polymorphism
- Potential for function overloading and runtime polymorphism to be integrated in future versions  
- Helps in managing different types of user actions more efficiently  

---

## 📁 File Structure

📦 SupermarketManagementSystem/ ├── main.cpp # Core application logic ├── database.txt # Persistent product database └── README.md # Project documentation


---

## 📌 Sample Product Entry (from database.txt)

1 Rice 80 2 2 Bread 50 1


Each entry represents:
- `ProductCode`: Unique identifier  
- `ProductName`: Name of the item  
- `Price`: Price in local currency  
- `Discount`: Percentage discount on the product  

---

## 🔧 Possible Future Enhancements
- Add product stock/quantity tracking  
- Introduce user authentication and registration system  
- Implement category-based product filtering  
- Store data using structured databases like SQLite or MySQL  
- Add GUI using Qt or a web-based frontend  

---

## 📚 Conclusion

This project is an excellent demonstration of core C++ programming principles, practical use of OOP, and real-world application development using file handling.
