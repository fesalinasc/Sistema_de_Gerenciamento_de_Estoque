# 📦 Inventory Management System in C

This project implements an Inventory Management System developed in the C programming language, using two-dimensional arrays to control the quantity of products across multiple branches.

The system operates via an interactive menu on the terminal, allowing users to register inventory, update values, and perform various statistical queries.

---

## 🎯 Project Objective

* Manage the inventory of **up to 10 branches**
* Control **up to 15 products**
* Perform **queries and analyses** on the stored data
* Apply fundamental concepts of:

* Matrices

* Functions

* Control structures

* Data input and output in C

---

## 🖥️ Functionalities

### 🔹 Initial Registration

* Definition of the number of branches and products
* Insertion of the quantity of each product in each branch

### 🔹 Inventory Update

* Manual change of the inventory of a specific product in a branch
* Validation of entries (no negative values)

### 🔹 Available Queries

* 📊 Total inventory of each product
* 🏬 Total inventory of each branch
* 📈 Product with **highest and lowest inventory**
* 🏢 Branch with **most and least stock**
* 📉 Average stock per branch
* 📦 Average stock per product

---

## 📂 Project Structure

```
📦 stock-management-c
├── main.c # Source code with all the system logic
└── README.md # Project documentation
```

---

## ⚙️ Constants Used

```c
#define mbranches 10
#define mproducts 15
```

* `mbranches` → maximum number of branches
* `mproducts` → maximum number of products

---

## 🚀 How to Compile and Run

### 1️⃣ Compile the Program

```bash
gcc main.c -o stock

```

### 2️⃣ Run

```bash
./stock
```

---

## 🧭 Main Menu

Upon starting the program, the user has access to the menu:

```
1 - Initial Registration
2 - Stock Update
3 - Queries
4 - Exit Program
```

---

## 🧠 Main System Functions

* `insertData()` – registers the initial stock
* `updateStock()` – updates product values
* `queries()` – statistical query menu
* `totalStockByProduct()` – sums stock by product
* `totalStockByBranch()` – sums stock by branch
* `productHighestLowestStock()` – identifies product extremes
* `branchHighestLowestStock()` – identifies branch extremes
* `averageStockByBranch()` – calculates average per branch
* `averageStockByProduct()` – calculates average per product

---

## ⚠️ Important Notes

* The system uses:

``c
system("cls");
system("pause");

``


👉 **Windows Compatible**

👉 On Linux/macOS, replace with:

``c
system("clear");

``

* The program does not use files; data is stored **only in memory** during execution.

---

## 🧪 Example of Use

* Registration of 3 branches and 5 products
* Update of the stock of Product 2 in Branch 1
* Query of the product with the highest stock
* Calculation of the average stock per branch

---

## 👨‍💻 Author

**Felipe Salinas Caodaglio**
