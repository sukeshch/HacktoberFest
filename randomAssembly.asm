Add x29, x28, x29 // i + j
Addi x29, x29, 31 // + 31
Slli x29, x29, 2 // multiplying by 4
Add x29, x29, x27 
Slli x6, x6, 2 // mulyilplying by 4
Add x6, x6, x31 
Lw x28, 0(x28)
Sw x28, 0(x6)
