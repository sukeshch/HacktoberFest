add x7, x0, x0    // 𝑖 = 0
LOOP1:     
beq x7, x5, DONE  
addi x7, x7, 1   
add x29, x0, x0  
LOOP2:    
beq x29, x6, LOOP1 
addi x29, x29, 1 
slli x30, x29, 2 
add x30, x30, x10 
add x31, x7, x29 
sd x31, 0(x30)  
beq x0, x0, LOOP2 
DONE:
