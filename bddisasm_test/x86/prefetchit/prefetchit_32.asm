    bits 32
    
    db 0x0F, 0x18, 0x38                                 ; NOP       dword ptr [eax]
    db 0x0F, 0x18, 0x3D, 0x90, 0x90, 0x90, 0x90         ; NOP       dword ptr [0x90909090]