#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype> 

int main() {
    std::unordered_map<std::string, std::string> cppDictionary;
    cppDictionary["Abstract Class"] = "A class that cannot be instantiated, often used as a base class.";
    cppDictionary["Algorithm"] = "A procedure for solving a problem, implemented in STL.";
    cppDictionary["Array"] = "Collection of elements of the same type stored contiguously.";
    cppDictionary["ASCII"] = "Character encoding standard for electronic communication.";
    cppDictionary["Assignment Operator"] = "Operator '=' used to assign values to variables.";
    cppDictionary["Auto"] = "Type specifier for automatic type deduction.";
    cppDictionary["Bit"] = "Smallest unit of data in a computer, with a binary value of 0 or 1.";
    cppDictionary["Boolean"] = "Data type that holds true or false.";
    cppDictionary["Break"] = "Statement that exits a loop or switch-case structure.";
    cppDictionary["Bug"] = "An error or flaw in a program.";
    cppDictionary["Build"] = "Process of converting source code into executable software.";
    cppDictionary["Byte"] = "Unit of data that is eight binary digits long.";
    cppDictionary["Callback"] = "Function passed as an argument to another function.";
    cppDictionary["Case"] = "Defines a block of code in a switch statement for a value.";
    cppDictionary["Cast"] = "Act of changing the type of a variable.";
    cppDictionary["Character"] = "Data type that holds a single character.";
    cppDictionary["Class"] = "Blueprint for creating objects, with state and behavior.";
    cppDictionary["Comments"] = "Non-executable text to describe code.";
    cppDictionary["Compiler"] = "Program that converts source code into executable code.";
    cppDictionary["Composition"] = "Design principle for class composition using objects.";
    cppDictionary["Const"] = "Qualifier specifying an object's value as unmodifiable.";
    cppDictionary["Constructor"] = "Special member function that initializes an object.";
    cppDictionary["Continue"] = "Statement that skips the current loop iteration.";
    cppDictionary["Cout"] = "Object of ostream class for standard output.";
    cppDictionary["Data Structure"] = "Organizes data in a computer.";
    cppDictionary["Debugging"] = "Process of finding and fixing software errors.";
    cppDictionary["Declaration"] = "Introduces a name into a scope.";
    cppDictionary["Destructor"] = "Special member function executed when an object is destroyed.";
    cppDictionary["Double"] = "Floating-point data type with double precision.";
    cppDictionary["Dynamic Allocation"] = "Allocating memory at runtime with new/delete.";
    cppDictionary["Encapsulation"] = "Bundling data with methods operating on it.";
    cppDictionary["Enum"] = "User-defined type with a set of named constants.";
    cppDictionary["Entry Point"] = "Starting point of program execution, usually main.";
    cppDictionary["Exception"] = "Error condition altering the flow of program execution.";
    cppDictionary["Explicit"] = "Keyword to prevent implicit type conversion in constructors.";
    cppDictionary["Export"] = "Keyword to make classes/functions available across files.";
    cppDictionary["Expression"] = "Variables, literals, and functions evaluated to a value.";
    cppDictionary["Extern"] = "Keyword to declare a variable/function in another file.";
    cppDictionary["File"] = "Resource for storing information, accessible by a program.";
    cppDictionary["Float"] = "Floating-point data type for fractional numbers.";
    cppDictionary["For"] = "Loop construct with initialization, condition, increment.";
    cppDictionary["Friend"] = "Keyword for external access to class's private/protected members.";
    cppDictionary["Function"] = "Named program section performing a specific task.";
    cppDictionary["Function Overloading"] = "Multiple functions with the same name but different parameters.";
    cppDictionary["Goto"] = "Statement that jumps to another program point.";
    cppDictionary["Header File"] = "A header file in C++ (often with a .h extension) contains declarations of functions, classes, and variables that can be used in multiple source files. It is included using the #include directive.";
    cppDictionary["Heap"] = "The heap is a region of memory used for dynamic memory allocation. Objects created on the heap persist until explicitly deallocated and are accessed through pointers.";
    cppDictionary["Hashing"] = "Hashing is a technique used to map data to a fixed-size array (hash table) using a hash function. It is commonly used for implementing data structures like hash tables and sets.";
    cppDictionary["Function Overloading"] = "Function overloading allows defining multiple functions with the same name in a C++ program, as long as their parameter lists (types or number of parameters) are different. The appropriate function is selected based on the arguments used.";
    cppDictionary["Header Guard"] = "A header guard (or include guard) is a preprocessor directive used in header files to prevent multiple inclusions of the same header file, which could lead to compilation errors.";
    cppDictionary["Hierarchy"] = "In C++, hierarchy refers to the arrangement of classes in a parent-child relationship. It is commonly used in object-oriented programming to represent relationships between classes.";
    cppDictionary["Handle"] = "A handle is a reference or identifier used to access an object or resource, typically in the context of managing resources like files, memory, or GUI elements.";
    cppDictionary["Heap Memory"] = "Heap memory is a portion of a computer's RAM (Random Access Memory) used for dynamic memory allocation at runtime. It is managed by the programmer and requires manual allocation and deallocation.";
    cppDictionary["Hexadecimal"] = "Hexadecimal (often abbreviated as 'hex') is a base-16 numeral system used in C++ and other programming languages to represent numbers and memory addresses. It uses the digits 0-9 and the letters A-F to represent values from 0 to 15.";
    cppDictionary["Heterogeneous Container"] = "A heterogeneous container is a data structure that can hold elements of different data types. In C++, std::variant and std::any are used to create such containers.";
    cppDictionary["IDE (Integrated Development Environment)"] = "A software environment for C++ development, including code editing, compiling, debugging, and tools.";
    cppDictionary["Inheritance"] = "C++ feature allowing classes to inherit properties and behaviors from others, promoting code reuse and hierarchy.";
    cppDictionary["Initializer List"] = "Used in C++ constructors to efficiently initialize member variables, improving code readability.";
    cppDictionary["Inline Function"] = "C++ function defined with 'inline' for compiler optimization in small, frequently used functions.";
    cppDictionary["IOStream"] = "C++ standard library for input/output operations (e.g., iostream, ifstream, ofstream).";
    cppDictionary["Iterator"] = "C++ object for traversing container elements, facilitating access and manipulation.";
    cppDictionary["Infinite Loop"] = "C++ loop executing indefinitely without normal termination control.";
    cppDictionary["Implicit Type Conversion"] = "C++ automatic conversion of data types for specific operations (e.g., int to double).";
    cppDictionary["Interface"] = "In C++, a class with pure virtual functions, defining methods for derived classes.";
    cppDictionary["JVM"] = "Executes Java bytecode; relevant in programming languages.";
    cppDictionary["JIT Compilation"] = "Compiles code at runtime; used in Java and .NET.";
    cppDictionary["Jacobian Matrix"] = "Represents derivatives in optimization.";
    cppDictionary["Jagged Array"] = "Varying-sized nested arrays, common in C#.";
    cppDictionary["JNI"] = "C++ interacts with Java; calls native code.";
    cppDictionary["JSON"] = "Lightweight data format for serialization.";
    cppDictionary["Jumps"] = "Control flow changes in C++ (break, continue, goto, return).";
    cppDictionary["Joining Threads"] = "std::thread::join() waits for thread completion.";
    cppDictionary["Job Queue"] = "Manages async tasks in multi-threaded programs.";
    cppDictionary["JIT Debugger"] = "Attaches before execution for real-time debugging.";
    cppDictionary["Keyword"] = "Reserved words in C++ with predefined meanings.";
    cppDictionary["Kernighan and Ritchie (K&R)"] = "Influential C programming book.";
    cppDictionary["Kilo (k)"] = "Metric prefix representing 1,000 units.";
    cppDictionary["Kernighan's Law"] = "Debugging complexity vs. clever code.";
    cppDictionary["Keypad Input"] = "Input from numeric keypad.";
    cppDictionary["Kernel"] = "Core of the operating system.";
    cppDictionary["Keyboard Buffer"] = "Temporary storage for keyboard input.";
    cppDictionary["Keyword Argument"] = "Named parameter passing.";
    cppDictionary["Kernel Module"] = "Dynamically loadable code for the kernel.";
    cppDictionary["Kruskal's Algorithm"] = "Minimum spanning tree graph algorithm.";
    cppDictionary["Lambda"] = "An anonymous function for in-line operations.";
    cppDictionary["Loop"] = "A control structure for repetitive code execution.";
    cppDictionary["Linker"] = "Combines object files into executables.";
    cppDictionary["LocalVar"] = "Variable with function or block scope.";
    cppDictionary["Lvalue"] = "Expression for left-side assignment.";
    cppDictionary["Literal"] = "Directly used constant value in code.";
    cppDictionary["Library"] = "Collection of reusable code modules.";
    cppDictionary["Long"] = "Type modifier for extended integer range.";
    cppDictionary["Linkage"] = "Scope and visibility of program entities.";
    cppDictionary["LiteralOp"] = "User-defined operator for literals.";
    cppDictionary["Macro"] = "A preprocessor directive for defining constants or code snippets.";
    cppDictionary["Memory Allocation"] = "Reserving and managing memory for data and objects.";
    cppDictionary["Member Function"] = "Function within a class for object-specific operations.";
    cppDictionary["Method"] = "Another term for a class member function.";
    cppDictionary["Multiple Inheritance"] = "Inheriting from multiple base classes.";
    cppDictionary["Mutable"] = "Allows modification of a `const` class member.";
    cppDictionary["Main Function"] = "Entry point for program execution.";
    cppDictionary["Manipulators"] = "Functions for stream output formatting.";
    cppDictionary["Multithreading"] = "Concurrent execution of threads in a process.";
    cppDictionary["Move Semantics"] = "Efficient transfer of resource ownership.";
    cppDictionary["Namespace"] = "C++ feature for organizing code to prevent naming conflicts.";
    cppDictionary["New"] = "Operator for dynamic memory allocation, returning a pointer.";
    cppDictionary["Null Pointer"] = "Pointer not pointing to valid memory (usually `nullptr`).";
    cppDictionary["Numeric Type"] = "Data types for storing numbers (e.g., `int`, `float`).";
    cppDictionary["Native Types"] = "Built-in data types (not user-defined).";
    cppDictionary["Non-member Function"] = "Functions not tied to a class.";
    cppDictionary["Nesting"] = "Placing one construct inside another for control flow.";
    cppDictionary["Narrowing Conversion"] = "Converting larger to smaller types with potential data loss.";
    cppDictionary["Named Constant"] = "Variable with a fixed value (often `const`).";
    cppDictionary["Non-blocking"] = "Code avoiding resource blocking, using async techniques.";
    cppDictionary["Object-Oriented Programming (OOP)"] = "Paradigm using objects to structure data and behaviors.";
    cppDictionary["Operator Overloading"] = "Customizing operators for user-defined types.";
    cppDictionary["Overloading"] = "Defining functions/operators with same name, varying parameters.";
    cppDictionary["Override"] = "Derived class redefines base class function.";
    cppDictionary["Object Lifetime"] = "Existence duration in memory, managed by constructors/destructors.";
    cppDictionary["Operator"] = "Symbol for operand operations (e.g., +, ==).";
    cppDictionary["One-Dimensional Array"] = "Ordered, same-type element collection in a row/column.";
    cppDictionary["Object Initialization"] = "Setting initial object values via constructors.";
    cppDictionary["Object Reference"] = "Efficient variable reference to the same object.";
    cppDictionary["Out-of-Bounds"] = "Unsafe access beyond valid range; may crash.";
    cppDictionary["Pointer"] = "A variable storing the memory address for dynamic memory manipulation.";
    cppDictionary["Polymorphism"] = "Allows different class objects to be treated as a common base class, involving function overloading and virtual functions.";
    cppDictionary["Public"] = "Access specifier in C++ for members accessible anywhere.";
    cppDictionary["Private"] = "Access specifier for members only accessible within the defining class.";
    cppDictionary["Protected"] = "Access specifier limiting access to the defining class and its derived classes.";
    cppDictionary["Parameter"] = "Variable representing function input values in declarations/definitions.";
    cppDictionary["Preprocessor"] = "Compiler phase handling directives before code compilation.";
    cppDictionary["Template"] = "Enables generic code for various data types, often used in containers and algorithms.";
    cppDictionary["Operator Overloading"] = "Defines operator behavior for user-defined data types.";
    cppDictionary["Pointer Arithmetic"] = "Manipulating pointers with arithmetic operations, useful for array and memory navigation.";
    cppDictionary["Qualifier"] = "C++ keyword for variable attributes (e.g., const, volatile, static, mutable).";
    cppDictionary["Queue"] = "FIFO linear data structure in C++ (rear insertion, front removal).";
    cppDictionary["QuickSort"] = "Divide-and-conquer sorting algorithm in C++ using pivot selection.";
    cppDictionary["Qubit"] = "Quantum computing's dual-state information unit in C++ (0 and 1 simultaneously).";
    cppDictionary["Qualifier List"] = "C++ variable/function return type modifiers for access and attributes.";
    cppDictionary["Qualified Name"] = "Fully-qualified C++ identifier with a complete path for unambiguous access.";
    cppDictionary["Query Language"] = "C++ tool for database interaction (e.g., SQL).";
    cppDictionary["QSort Algorithm"] = "Older C++ sorting algorithm using pivot-based recursion.";
    cppDictionary["Queue Container"] = "STL data structure for queue operations in C++.";
    cppDictionary["Quiet NaN"] = "Special C++ representation for undefined floating-point values.";
    cppDictionary["RAII"] = "Resource Acquisition Is Initialization ties resource lifetime to object lifetime in C++.";
    cppDictionary["Reference"] = "An alias for an existing variable, enabling manipulation without copying.";
    cppDictionary["Range-based for loop"] = "Simplifies container iteration in C++11.";
    cppDictionary["Recursion"] = "Calls a function within itself to solve problems with base and recursive cases.";
    cppDictionary["Rvalue"] = "Represents temporary values or movable objects, distinct from Lvalues.";
    cppDictionary["Range"] = "Denotes a value sequence within specified start and end points.";
    cppDictionary["Return Type"] = "Specifies the function's return value data type.";
    cppDictionary["Run-time"] = "The execution period of a program, involving dynamic code execution and data manipulation.";
    cppDictionary["RTTI"] = "Run-Time Type Information provides object type details at runtime, used with 'typeid' and casting.";
    cppDictionary["Resource Management"] = "Involves acquiring and releasing resources to prevent leaks.";
    cppDictionary["Syntax"] = "Rules governing C++ code structure and grammar, ensuring compiler comprehension.";
    cppDictionary["Statement"] = "Full code line performing specific action, often ending with `;`.";
    cppDictionary["Scope"] = "Code region where variable visibility and access are defined (local, global, class).";
    cppDictionary["Storage Class"] = "Controls variable lifetime, visibility, and storage (e.g., `auto`, `static`, `extern`).";
    cppDictionary["Static"] = "Declares class-level static members (not tied to instances).";
    cppDictionary["Struct"] = "User-defined data type grouping diverse variables publicly.";
    cppDictionary["Stack"] = "Memory region for local vars and LIFO function info.";
    cppDictionary["String"] = "Char sequence, often as `char` array or `std::string`.";
    cppDictionary["Stream"] = "Handles input/output, linking code to external sources (e.g., `std::cin`, `std::cout`).";
    cppDictionary["Smart Pointer"] = "Auto-manages dynamic memory, reduces leaks (e.g., `std::shared_ptr`).";
    cppDictionary["Template"] = "A blueprint for creating generic classes or functions.";
    cppDictionary["Try Catch"] = "A mechanism for handling exceptions in C++.";
    cppDictionary["Throw"] = "Used to throw an exception in C++ code.";
    cppDictionary["Type Casting"] = "Converting a data type to another type.";
    cppDictionary["Tuple"] = "A fixed-size collection of heterogeneous values.";
    cppDictionary["Thread"] = "A unit of execution in a multi-threaded program.";
    cppDictionary["Time Complexity"] = "An analysis of the computational complexity of an algorithm.";
    cppDictionary["Two's Complement"] = "A binary representation of signed integers.";
    cppDictionary["Template Metaprogramming"] = "A C++ programming technique that leverages templates to perform computations at compile time.";
    cppDictionary["Traversal"] = "The process of visiting and processing all elements of a data structure or container.";
    cppDictionary["Unicode"] = "A standard for representing and manipulating text using a universal character set.";
    cppDictionary["Union"] = "A user-defined data type that can store different types of data in the same memory location.";
    cppDictionary["Unary Operator"] = "An operator that operates on a single operand.";
    cppDictionary["User Defined Data Type"] = "Data types defined by the user.";
    cppDictionary["Undefined Behaviour"] = "Behaviour that is not defined by the C++ standard and can lead to unpredictable results.";
    cppDictionary["Unique Pointer"] = "A smart pointer that ensures single ownership of dynamically allocated objects.";
    cppDictionary["Unit Testing"] = "A software testing technique to test individual units or components of a program.";
    cppDictionary["Unsigned Data Type"] = "Data types that represent only non-negative integers.";
    cppDictionary["Utility Functions"] = "Reusable functions provided by C++ or libraries for common tasks.";
    cppDictionary["Universal Reference"] = "A reference type that can bind to both lvalues and rvalues.";
    cppDictionary["Variable"] = "A named storage location in memory used to store data.";
    cppDictionary["Value Type"] = "A type in C++ that represents a single value.";
    cppDictionary["Virtual Function"] = "A member function declared within a base class and redefined in derived classes.";
    cppDictionary["Vector"] = "A dynamic array-like container in the C++ Standard Library.";
    cppDictionary["Void"] = "A type used to indicate that a function returns no value or a pointer with no specified type.";
    cppDictionary["Virtual Base Class"] = "A base class from which multiple derived classes inherit virtually.";
    cppDictionary["Volatile"] = "A type qualifier used to indicate that an object can be modified by an external process.";
    cppDictionary["Value Category"] = "Categorization of expressions based on whether they are lvalues or rvalues.";
    cppDictionary["Vectorization"] = "A compiler optimization technique to execute multiple operations simultaneously.";
    cppDictionary["Visibility Control"] = "The management of access control to class members using access specifiers.";
    cppDictionary["While Loop"] = "A control flow statement that repeatedly executes a block of code as long as a condition is true.";
    cppDictionary["Wrapper Class"] = "A class that encapsulates and provides an interface to another class or data type.";
    cppDictionary["Wide String"] = "A sequence of wide characters, often used to represent multibyte character sets.";
    cppDictionary["Weak Pointer"] = "A smart pointer that does not control the lifetime of the pointed object.";
    cppDictionary["Widening Conversion"] = "A type conversion that promotes a value from a smaller type to a larger type.";
    cppDictionary["Web Assembly"] = "A binary instruction format used by web browsers for faster execution of web applications.";
    cppDictionary["Whitespace"] = "Spaces, tabs, and line breaks used for formatting and readability in code.";
    cppDictionary["X86 Architecture"] = "A family of computer processors used in most personal computers.";
    cppDictionary["XML"] = "A markup language used for encoding documents in a format that is both human-readable and machine-readable.";
    cppDictionary["Yield"] = "A keyword used in coroutines to return a value from the coroutine and suspend its execution.";
    cppDictionary["Y Combinator"] = "A higher-order function used in functional programming to define recursive functions without named recursion.";
    cppDictionary["YAML"] = "A human-readable data serialization standard commonly used for configuration files and data exchange.";
    cppDictionary["Zombie Process"] = "A process that has completed execution but still has an entry in the process table.";
    cppDictionary["Zero Division Error"] = "An error that occurs when attempting to divide by zero.";
    cppDictionary["Zip File"] = "A file format that compresses one or more files into a single archive for storage or distribution.";
    cppDictionary["Zero Initialization"] = "Initializing variables with zero values (e.g., `int x = 0;`).";

    char choice;
    std::string searchTerm;
    char startLetter;

    do {
        std::cout << "Choose an option:\n";
        std::cout << "1. Search for a term\n";
        std::cout << "2. Search for terms starting with a specific letter\n";
        std::cout << "3. Exit\n";
        std::cin >> choice;

        switch (choice) {
            case '1':
                std::cout << "Enter the term you want to search for: ";
                std::cin.ignore(); // Ignore newline character from previous input
                std::getline(std::cin, searchTerm);

                if (cppDictionary.find(searchTerm) != cppDictionary.end()) {
                    std::cout << "Definition: " << cppDictionary[searchTerm] << std::endl;
                } else {
                    std::cout << "Term not found." << std::endl;
                }
                break;

            case '2':
                std::cout << "Enter the letter you want to search for (a-z): ";
                std::cin >> startLetter;
                startLetter = std::toupper(startLetter);

                for (const auto& pair : cppDictionary) {
                    if (std::toupper(pair.first[0]) == startLetter) {
                        std::cout << pair.first << ": " << pair.second << std::endl;
                    }
                }
                break;

            case '3':
                std::cout << "Exiting program.\n";
                break;

            default:
                std::cout << "Invalid choice." << std::endl;
        }
    } while (choice != '3');

    return 0;
}
