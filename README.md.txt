1. Создать класс. Поле класса: буфер. Методы класса: изменение размера буфера, очищение буфера, чтение буфера. 
   В конструкторе выделяется память для буфера. В деструкторе буфер удаляется из памяти.
   
2. При создании объекта класса, пользователь указывает размер буфера.

3. Метод print(String s) принимает строку и добавляет ее в конец буфера. При полном заполнении буфера он выводится на экран.

4. Метод flush() принудительно выводит на экран содержимое буфера, не дожидаясь его полного заполнения.


1. Create a class. Class field: buffer. Class methods: resize buffer, clear buffer, read buffer.
   Buffer memory is allocated in the constructor. In the destructor, the buffer is deleted from memory.
   
2. When creating a class object, the user specifies the size of the buffer.

3. The print (String s) method takes a string and appends it to the end of the buffer. When the buffer is full, it is displayed.

4. The flush () method forcibly displays the contents of the buffer without waiting for it to be full.
