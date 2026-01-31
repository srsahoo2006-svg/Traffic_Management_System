<img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSHQjnzybXb3Fn3Yre1DK2oF48TqdppDpy_4A&s" height="400" width="800" alt="Image"/> 
<h1> TRAFFIC MANAGEMENT SYSTEM </h1><BR>
<body>

<h3>1. Project Description</h3>
<p>This project simulates a traffic signal system using object-oriented programming and data structures.
Vehicles arriving at a signal are stored in a queue, and when the signal turns green, vehicles are dequeued in order.
 The system provides options to add vehicles, release them when the signal turns green, and display the current queue of waiting vehicles.</p>

<h3>2. What the Project Does</h3>
Vehicle Arrival: Adds a vehicle (with number and type) to the queue.

Green Signal: Removes the first vehicle from the queue (FIFO order).

Display Vehicles: Shows all vehicles currently waiting at the signal.

Menu System: Provides an interactive console-based interface for users.

<h3>3. DSA Concepts Applied</h3>
Linked List: Each vehicle is represented as a node in a linked list.

Queue (FIFO): Vehicles are enqueued when they arrive and dequeued when the signal turns green.

Pointers: Used to dynamically allocate and link vehicle nodes.

Classes & Objects: Encapsulation of vehicle and traffic signal logic.

<h3>4. Why This Problem Was Chosen</h3>
Traffic management is a real-world issue that everyone can relate to.<br>

It provides a practical way to apply queue data structures.<br>

Demonstrates how linked lists can be used to manage dynamic data.<br>

Helps beginners understand object-oriented programming in C++.<br>

<h3> 5.Setup Instructions</h3>

<h4>How to Run : </h4>

Save the code in a file named traffic_signal.cpp.

<h4>Compile the program : </h4>

g++ traffic_signal.cpp -o traffic_signal
<h4>Run the executable : </h4>

./traffic_signal

<h4>Expected Input Format : </h4>

Vehicle Number: Integer (e.g., 101).

Vehicle Type: String (Car/Bike/Truck/Bus).

Menu Choice: Integer (1–4).

<h3>6. Challenges Faced & Solutions : </h3>
<p>Challenge: Managing dynamic memory for vehicles.

Solution: Used a destructor to free memory when the program ends.

Challenge: Ensuring correct queue behavior (FIFO).

Solution: Implemented linked list pointers (front and rear) carefully.

Challenge: Handling empty queue cases.

Solution: Added checks before dequeue and display operations.

Challenge: User input validation.

Solution: Provided clear prompts and error messages for invalid choices.</p></body>

<img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcS2OZKW3MmiyFE5ZWrhMcCmJONA2rMnjun3Dw&s"  height="400" width="800" alt="Camera"/>

