        bits 64
        
        db 0xc4, 0x62, 0x78, 0xd2, 0xc7         ; VPDPWUUD  xmm8, xmm0, xmm7
        db 0xc4, 0x62, 0x78, 0xd2, 0x01         ; VPDPWUUD  xmm8, xmm0, xmmword ptr [rcx]
        db 0xc4, 0x62, 0x78, 0xd3, 0xc7         ; VPDPWUUDS xmm8, xmm0, xmm7
        db 0xc4, 0x62, 0x78, 0xd3, 0x01         ; VPDPWUUDS xmm8, xmm0, xmmword ptr [rcx]
        
        db 0xc4, 0x62, 0x79, 0xd2, 0xc7         ; VPDPWUSD  xmm8, xmm0, xmm7
        db 0xc4, 0x62, 0x79, 0xd2, 0x01         ; VPDPWUSD  xmm8, xmm0, xmmword ptr [rcx]
        db 0xc4, 0x62, 0x79, 0xd3, 0xc7         ; VPDPWUSDS xmm8, xmm0, xmm7
        db 0xc4, 0x62, 0x79, 0xd3, 0x01         ; VPDPWUSDS xmm8, xmm0, xmmword ptr [rcx]
        
        db 0xc4, 0x62, 0x7a, 0xd2, 0xc7         ; VPDPWSUD  xmm8, xmm0, xmm7
        db 0xc4, 0x62, 0x7a, 0xd2, 0x01         ; VPDPWSUD  xmm8, xmm0, xmmword ptr [rcx]
        db 0xc4, 0x62, 0x7a, 0xd3, 0xc7         ; VPDPWSUDS xmm8, xmm0, xmm7
        db 0xc4, 0x62, 0x7a, 0xd3, 0x01         ; VPDPWSUDS xmm8, xmm0, xmmword ptr [rcx]
        
        
        db 0xc4, 0x62, 0x7c, 0xd2, 0xc7         ; VPDPWUUD  ymm8, ymm0, ymm7
        db 0xc4, 0x62, 0x7c, 0xd2, 0x01         ; VPDPWUUD  ymm8, ymm0, ymmword ptr [rcx]
        db 0xc4, 0x62, 0x7c, 0xd3, 0xc7         ; VPDPWUUDS ymm8, ymm0, ymm7
        db 0xc4, 0x62, 0x7c, 0xd3, 0x01         ; VPDPWUUDS ymm8, ymm0, ymmword ptr [rcx]
        
        db 0xc4, 0x62, 0x7d, 0xd2, 0xc7         ; VPDPWUSD  ymm8, ymm0, ymm7
        db 0xc4, 0x62, 0x7d, 0xd2, 0x01         ; VPDPWUSD  ymm8, ymm0, ymmword ptr [rcx]
        db 0xc4, 0x62, 0x7d, 0xd3, 0xc7         ; VPDPWUSDS ymm8, ymm0, ymm7
        db 0xc4, 0x62, 0x7d, 0xd3, 0x01         ; VPDPWUSDS ymm8, ymm0, ymmword ptr [rcx]
        
        db 0xc4, 0x62, 0x7e, 0xd2, 0xc7         ; VPDPWSUD  ymm8, ymm0, ymm7
        db 0xc4, 0x62, 0x7e, 0xd2, 0x01         ; VPDPWSUD  ymm8, ymm0, ymmword ptr [rcx]
        db 0xc4, 0x62, 0x7e, 0xd3, 0xc7         ; VPDPWSUDS ymm8, ymm0, ymm7
        db 0xc4, 0x62, 0x7e, 0xd3, 0x01         ; VPDPWSUDS ymm8, ymm0, ymmword ptr [rcx]
        
        
    