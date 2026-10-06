# Student Grades Tracker & Performance Analyzer 🎓

A C++ console application designed to manage student academic records. The system utilizes Object-Oriented Programming (OOP) concepts, C++ Standard Template Library (STL) containers, and sorting algorithms to organize subjects by grades and generate detailed performance reports.

---

## 🔑 Key Features
- **Student Profile Management:** Accepts full student names with space support using `getline()`.
- **Subject & Grade Recording:** Dynamically stores subject names alongside their numerical grades using `std::vector`.
- **Automatic Data Sorting:** Sorts recorded subjects from highest to lowest score.
- **Performance Summary:** Calculates total average grade and identifies the student's **Best Subject** and **Worst Subject**.

---

## 🛠️ Concepts & Algorithms Used
- **Object-Oriented Programming (OOP):** Encapsulation using `Student` class and `struct SubjectRecord`.
- **Data Structures (STL):** `std::vector` for dynamic data storage.
- **Sorting Algorithm:** Custom binary predicate sorting using `std::sort()`.
- **Linear Search & Aggregation:** Iterative computation for average score and boundary checking (`front()` and `back()`).

---

## 💻 Compilation & Execution

```bash
# Compile using GCC
g++ ssssss.cpp -o GradeBook.exe

# Run the executable (Windows)
.\GradeBook.exe
