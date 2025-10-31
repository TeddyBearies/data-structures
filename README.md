# data-structures

# Vector.cpp
The Vector code is like a normal array but smarter. It can grow in size when it becomes full.
I used a dynamic array that doubles its capacity every time it runs out of space. 
It keeps track of how many elements are stored and how much space it has left. When I call push_back, it adds a new value at the end, and if there’s no more space, it resizes itself.
Pop_back removes the last item, and operator[] lets me access any index directly. 
This helped me understand how dynamic arrays actually work behind the scenes.

# Stack.cpp
The Stack works using the LIFO rule, which means “last in, first out.”
I built it using an integer array with a top index that goes up every time I push something and goes down when I pop. 
The code also checks if the stack is full or empty before doing any action. 
When I print the stack, it shows items from the top down, which makes it easy to see how data is stacked. 
Writing this made me understand how stacks are used for undo operations and function calls.

# Queue.cpp
The Queue uses the FIFO rule, “first in, first out.” I made it with a circular array so it can reuse the empty spaces once elements are removed.
I used front and rear indexes to track where items enter and leave. Enqueue adds to the back, dequeue removes from the front, and front() shows what’s next to come out.
This helped me see how queues are used in real life like waiting lines or data buffers.
