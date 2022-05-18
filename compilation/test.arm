code segment
 assume cs:code 

 mov ax,32
 mov bx,74
 mov cx,23

sort: cmp ax,bx 
      jge X          ;如果ax大于等于bx就跟cx比较
      xchg ax,bx 
    X:cmp ax,cx       ;如果ax大于cx
      jge Y
      xchg ax,cx  
    Y:int 21h 
      mov ax,4c00h
code ends
     end sort
