1. Create a class. Class field: buffer. Class methods: resize buffer, clear buffer, read buffer.
   Buffer memory is allocated in the constructor. In the destructor, the buffer is deleted from memory.
   
2. When creating a class object, the user specifies the size of the buffer.

3. The print (String s) method takes a string and appends it to the end of the buffer. When the buffer is full, it is displayed.

4. The flush () method forcibly displays the contents of the buffer without waiting for it to be full.
