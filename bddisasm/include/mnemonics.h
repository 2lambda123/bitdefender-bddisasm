/*
 * Copyright (c) 2020 Bitdefender
 * SPDX-License-Identifier: Apache-2.0
 */

//
// This file was auto-generated by generate_tables.py. DO NOT MODIFY!
//

#ifndef MNEMONICS_H
#define MNEMONICS_H

const char *gMnemonics[1734] = 
{
    "AAA", "AAD", "AADD", "AAM", "AAND", "AAS", "ADC", "ADCX", "ADD", 
    "ADDPD", "ADDPS", "ADDSD", "ADDSS", "ADDSUBPD", "ADDSUBPS", "ADOX", 
    "AESDEC", "AESDEC128KL", "AESDEC256KL", "AESDECLAST", "AESDECWIDE128KL", 
    "AESDECWIDE256KL", "AESENC", "AESENC128KL", "AESENC256KL", "AESENCLAST", 
    "AESENCWIDE128KL", "AESENCWIDE256KL", "AESIMC", "AESKEYGENASSIST", 
    "ALTINST", "AND", "ANDN", "ANDNPD", "ANDNPS", "ANDPD", "ANDPS", 
    "AOR", "ARPL", "AXOR", "BEXTR", "BLCFILL", "BLCI", "BLCIC", "BLCMSK", 
    "BLCS", "BLENDPD", "BLENDPS", "BLENDVPD", "BLENDVPS", "BLSFILL", 
    "BLSI", "BLSIC", "BLSMSK", "BLSR", "BNDCL", "BNDCN", "BNDCU", 
    "BNDLDX", "BNDMK", "BNDMOV", "BNDSTX", "BOUND", "BSF", "BSR", 
    "BSWAP", "BT", "BTC", "BTR", "BTS", "BZHI", "CALL", "CALLF", 
    "CBW", "CDQ", "CDQE", "CLAC", "CLC", "CLD", "CLDEMOTE", "CLEVICT0", 
    "CLEVICT1", "CLFLUSH", "CLFLUSHOPT", "CLGI", "CLI", "CLRSSBSY", 
    "CLTS", "CLUI", "CLWB", "CLZERO", "CMC", "CMOVBE", "CMOVC", "CMOVL", 
    "CMOVLE", "CMOVNBE", "CMOVNC", "CMOVNL", "CMOVNLE", "CMOVNO", 
    "CMOVNP", "CMOVNS", "CMOVNZ", "CMOVO", "CMOVP", "CMOVS", "CMOVZ", 
    "CMP", "CMPBEXADD", "CMPCXADD", "CMPLEXADD", "CMPLXADD", "CMPNBEXADD", 
    "CMPNCXADD", "CMPNLEXADD", "CMPNLXADD", "CMPNOXADD", "CMPNPXADD", 
    "CMPNSXADD", "CMPNZXADD", "CMPOXADD", "CMPPD", "CMPPS", "CMPPXADD", 
    "CMPSB", "CMPSD", "CMPSQ", "CMPSS", "CMPSW", "CMPSXADD", "CMPXCHG", 
    "CMPXCHG16B", "CMPXCHG8B", "CMPZXADD", "COMISD", "COMISS", "CPUID", 
    "CPU_READ", "CPU_WRITE", "CQO", "CRC32", "CVTDQ2PD", "CVTDQ2PS", 
    "CVTPD2DQ", "CVTPD2PI", "CVTPD2PS", "CVTPI2PD", "CVTPI2PS", "CVTPS2DQ", 
    "CVTPS2PD", "CVTPS2PI", "CVTSD2SI", "CVTSD2SS", "CVTSI2SD", "CVTSI2SS", 
    "CVTSS2SD", "CVTSS2SI", "CVTTPD2DQ", "CVTTPD2PI", "CVTTPS2DQ", 
    "CVTTPS2PI", "CVTTSD2SI", "CVTTSS2SI", "CWD", "CWDE", "DAA", 
    "DAS", "DEC", "DELAY", "DIV", "DIVPD", "DIVPS", "DIVSD", "DIVSS", 
    "DMINT", "DPPD", "DPPS", "EMMS", "ENCLS", "ENCLU", "ENCLV", "ENCODEKEY128", 
    "ENCODEKEY256", "ENDBR32", "ENDBR64", "ENQCMD", "ENQCMDS", "ENTER", 
    "ERETS", "ERETU", "EXTRACTPS", "EXTRQ", "F2XM1", "FABS", "FADD", 
    "FADDP", "FBLD", "FBSTP", "FCHS", "FCMOVB", "FCMOVBE", "FCMOVE", 
    "FCMOVNB", "FCMOVNBE", "FCMOVNE", "FCMOVNU", "FCMOVU", "FCOM", 
    "FCOMI", "FCOMIP", "FCOMP", "FCOMPP", "FCOS", "FDECSTP", "FDIV", 
    "FDIVP", "FDIVR", "FDIVRP", "FEMMS", "FFREE", "FFREEP", "FIADD", 
    "FICOM", "FICOMP", "FIDIV", "FIDIVR", "FILD", "FIMUL", "FINCSTP", 
    "FIST", "FISTP", "FISTTP", "FISUB", "FISUBR", "FLD", "FLD1", 
    "FLDCW", "FLDENV", "FLDL2E", "FLDL2T", "FLDLG2", "FLDLN2", "FLDPI", 
    "FLDZ", "FMUL", "FMULP", "FNCLEX", "FNDISI", "FNINIT", "FNOP", 
    "FNSAVE", "FNSTCW", "FNSTENV", "FNSTSW", "FPATAN", "FPREM", "FPREM1", 
    "FPTAN", "FRINEAR", "FRNDINT", "FRSTOR", "FSCALE", "FSIN", "FSINCOS", 
    "FSQRT", "FST", "FSTDW", "FSTP", "FSTPNCE", "FSTSG", "FSUB", 
    "FSUBP", "FSUBR", "FSUBRP", "FTST", "FUCOM", "FUCOMI", "FUCOMIP", 
    "FUCOMP", "FUCOMPP", "FXAM", "FXCH", "FXRSTOR", "FXRSTOR64", 
    "FXSAVE", "FXSAVE64", "FXTRACT", "FYL2X", "FYL2XP1", "GETSEC", 
    "GF2P8AFFINEINVQB", "GF2P8AFFINEQB", "GF2P8MULB", "HADDPD", "HADDPS", 
    "HLT", "HRESET", "HSUBPD", "HSUBPS", "IDIV", "IMUL", "IN", "INC", 
    "INCSSPD", "INCSSPQ", "INSB", "INSD", "INSERTPS", "INSERTQ", 
    "INSW", "INT", "INT1", "INT3", "INTO", "INVD", "INVEPT", "INVLPG", 
    "INVLPGA", "INVLPGB", "INVPCID", "INVVPID", "IRETD", "IRETQ", 
    "IRETW", "JBE", "JC", "JCXZ", "JECXZ", "JL", "JLE", "JMP", "JMPE", 
    "JMPF", "JNBE", "JNC", "JNL", "JNLE", "JNO", "JNP", "JNS", "JNZ", 
    "JO", "JP", "JRCXZ", "JS", "JZ", "KADDB", "KADDD", "KADDQ", "KADDW", 
    "KANDB", "KANDD", "KANDNB", "KANDND", "KANDNQ", "KANDNW", "KANDQ", 
    "KANDW", "KMERGE2L1H", "KMERGE2L1L", "KMOVB", "KMOVD", "KMOVQ", 
    "KMOVW", "KNOTB", "KNOTD", "KNOTQ", "KNOTW", "KORB", "KORD", 
    "KORQ", "KORTESTB", "KORTESTD", "KORTESTQ", "KORTESTW", "KORW", 
    "KSHIFTLB", "KSHIFTLD", "KSHIFTLQ", "KSHIFTLW", "KSHIFTRB", "KSHIFTRD", 
    "KSHIFTRQ", "KSHIFTRW", "KTESTB", "KTESTD", "KTESTQ", "KTESTW", 
    "KUNPCKBW", "KUNPCKDQ", "KUNPCKWD", "KXNORB", "KXNORD", "KXNORQ", 
    "KXNORW", "KXORB", "KXORD", "KXORQ", "KXORW", "LAHF", "LAR", 
    "LDDQU", "LDMXCSR", "LDS", "LDTILECFG", "LEA", "LEAVE", "LES", 
    "LFENCE", "LFS", "LGDT", "LGS", "LIDT", "LKGS", "LLDT", "LLWPCB", 
    "LMSW", "LOADIWKEY", "LODSB", "LODSD", "LODSQ", "LODSW", "LOOP", 
    "LOOPNZ", "LOOPZ", "LSL", "LSS", "LTR", "LWPINS", "LWPVAL", "LZCNT", 
    "MASKMOVDQU", "MASKMOVQ", "MAXPD", "MAXPS", "MAXSD", "MAXSS", 
    "MCOMMIT", "MFENCE", "MINPD", "MINPS", "MINSD", "MINSS", "MONITOR", 
    "MONITORX", "MONTMUL", "MOV", "MOVAPD", "MOVAPS", "MOVBE", "MOVD", 
    "MOVDDUP", "MOVDIR64B", "MOVDIRI", "MOVDQ2Q", "MOVDQA", "MOVDQU", 
    "MOVHLPS", "MOVHPD", "MOVHPS", "MOVLHPS", "MOVLPD", "MOVLPS", 
    "MOVMSKPD", "MOVMSKPS", "MOVNTDQ", "MOVNTDQA", "MOVNTI", "MOVNTPD", 
    "MOVNTPS", "MOVNTQ", "MOVNTSD", "MOVNTSS", "MOVQ", "MOVQ2DQ", 
    "MOVSB", "MOVSD", "MOVSHDUP", "MOVSLDUP", "MOVSQ", "MOVSS", "MOVSW", 
    "MOVSX", "MOVSXD", "MOVUPD", "MOVUPS", "MOVZX", "MPSADBW", "MUL", 
    "MULPD", "MULPS", "MULSD", "MULSS", "MULX", "MWAIT", "MWAITX", 
    "NEG", "NOP", "NOT", "OR", "ORPD", "ORPS", "OUT", "OUTSB", "OUTSD", 
    "OUTSW", "PABSB", "PABSD", "PABSW", "PACKSSDW", "PACKSSWB", "PACKUSDW", 
    "PACKUSWB", "PADDB", "PADDD", "PADDQ", "PADDSB", "PADDSW", "PADDUSB", 
    "PADDUSW", "PADDW", "PALIGNR", "PAND", "PANDN", "PAUSE", "PAVGB", 
    "PAVGUSB", "PAVGW", "PBLENDVB", "PBLENDW", "PCLMULQDQ", "PCMPEQB", 
    "PCMPEQD", "PCMPEQQ", "PCMPEQW", "PCMPESTRI", "PCMPESTRM", "PCMPGTB", 
    "PCMPGTD", "PCMPGTQ", "PCMPGTW", "PCMPISTRI", "PCMPISTRM", "PCONFIG", 
    "PDEP", "PEXT", "PEXTRB", "PEXTRD", "PEXTRQ", "PEXTRW", "PF2ID", 
    "PF2IW", "PFACC", "PFADD", "PFCMPEQ", "PFCMPGE", "PFCMPGT", "PFMAX", 
    "PFMIN", "PFMUL", "PFNACC", "PFPNACC", "PFRCP", "PFRCPIT1", "PFRCPIT2", 
    "PFRCPV", "PFRSQIT1", "PFRSQRT", "PFRSQRTV", "PFSUB", "PFSUBR", 
    "PHADDD", "PHADDSW", "PHADDW", "PHMINPOSUW", "PHSUBD", "PHSUBSW", 
    "PHSUBW", "PI2FD", "PI2FW", "PINSRB", "PINSRD", "PINSRQ", "PINSRW", 
    "PMADDUBSW", "PMADDWD", "PMAXSB", "PMAXSD", "PMAXSW", "PMAXUB", 
    "PMAXUD", "PMAXUW", "PMINSB", "PMINSD", "PMINSW", "PMINUB", "PMINUD", 
    "PMINUW", "PMOVMSKB", "PMOVSXBD", "PMOVSXBQ", "PMOVSXBW", "PMOVSXDQ", 
    "PMOVSXWD", "PMOVSXWQ", "PMOVZXBD", "PMOVZXBQ", "PMOVZXBW", "PMOVZXDQ", 
    "PMOVZXWD", "PMOVZXWQ", "PMULDQ", "PMULHRSW", "PMULHRW", "PMULHUW", 
    "PMULHW", "PMULLD", "PMULLW", "PMULUDQ", "POP", "POPA", "POPAD", 
    "POPCNT", "POPFD", "POPFQ", "POPFW", "POR", "PREFETCH", "PREFETCHE", 
    "PREFETCHIT0", "PREFETCHIT1", "PREFETCHM", "PREFETCHNTA", "PREFETCHT0", 
    "PREFETCHT1", "PREFETCHT2", "PREFETCHW", "PREFETCHWT1", "PSADBW", 
    "PSHUFB", "PSHUFD", "PSHUFHW", "PSHUFLW", "PSHUFW", "PSIGNB", 
    "PSIGND", "PSIGNW", "PSLLD", "PSLLDQ", "PSLLQ", "PSLLW", "PSMASH", 
    "PSRAD", "PSRAW", "PSRLD", "PSRLDQ", "PSRLQ", "PSRLW", "PSUBB", 
    "PSUBD", "PSUBQ", "PSUBSB", "PSUBSW", "PSUBUSB", "PSUBUSW", "PSUBW", 
    "PSWAPD", "PTEST", "PTWRITE", "PUNPCKHBW", "PUNPCKHDQ", "PUNPCKHQDQ", 
    "PUNPCKHWD", "PUNPCKLBW", "PUNPCKLDQ", "PUNPCKLQDQ", "PUNPCKLWD", 
    "PUSH", "PUSHA", "PUSHAD", "PUSHFD", "PUSHFQ", "PUSHFW", "PVALIDATE", 
    "PXOR", "RCL", "RCPPS", "RCPSS", "RCR", "RDFSBASE", "RDGSBASE", 
    "RDMSR", "RDMSRLIST", "RDPID", "RDPKRU", "RDPMC", "RDPRU", "RDRAND", 
    "RDSEED", "RDSHR", "RDSSPD", "RDSSPQ", "RDTSC", "RDTSCP", "RETF", 
    "RETN", "RMPADJUST", "RMPQUERY", "RMPUPDATE", "ROL", "ROR", "RORX", 
    "ROUNDPD", "ROUNDPS", "ROUNDSD", "ROUNDSS", "RSDC", "RSLDT", 
    "RSM", "RSQRTPS", "RSQRTSS", "RSTORSSP", "RSTS", "SAHF", "SAL", 
    "SALC", "SAR", "SARX", "SAVEPREVSSP", "SBB", "SCASB", "SCASD", 
    "SCASQ", "SCASW", "SEAMCALL", "SEAMOPS", "SEAMRET", "SENDUIPI", 
    "SERIALIZE", "SETBE", "SETC", "SETL", "SETLE", "SETNBE", "SETNC", 
    "SETNL", "SETNLE", "SETNO", "SETNP", "SETNS", "SETNZ", "SETO", 
    "SETP", "SETS", "SETSSBSY", "SETZ", "SFENCE", "SGDT", "SHA1MSG1", 
    "SHA1MSG2", "SHA1NEXTE", "SHA1RNDS4", "SHA256MSG1", "SHA256MSG2", 
    "SHA256RNDS2", "SHL", "SHLD", "SHLX", "SHR", "SHRD", "SHRX", 
    "SHUFPD", "SHUFPS", "SIDT", "SKINIT", "SLDT", "SLWPCB", "SMINT", 
    "SMSW", "SPFLT", "SQRTPD", "SQRTPS", "SQRTSD", "SQRTSS", "STAC", 
    "STC", "STD", "STGI", "STI", "STMXCSR", "STOSB", "STOSD", "STOSQ", 
    "STOSW", "STR", "STTILECFG", "STUI", "SUB", "SUBPD", "SUBPS", 
    "SUBSD", "SUBSS", "SVDC", "SVLDT", "SVTS", "SWAPGS", "SYSCALL", 
    "SYSENTER", "SYSEXIT", "SYSRET", "T1MSKC", "TDCALL", "TDPBF16PS", 
    "TDPBSSD", "TDPBSUD", "TDPBUSD", "TDPBUUD", "TDPFP16PS", "TEST", 
    "TESTUI", "TILELOADD", "TILELOADDT1", "TILERELEASE", "TILESTORED", 
    "TILEZERO", "TLBSYNC", "TPAUSE", "TZCNT", "TZMSK", "UCOMISD", 
    "UCOMISS", "UD0", "UD1", "UD2", "UIRET", "UMONITOR", "UMWAIT", 
    "UNPCKHPD", "UNPCKHPS", "UNPCKLPD", "UNPCKLPS", "V4FMADDPS", 
    "V4FMADDSS", "V4FNMADDPS", "V4FNMADDSS", "VADDPD", "VADDPH", 
    "VADDPS", "VADDSD", "VADDSH", "VADDSS", "VADDSUBPD", "VADDSUBPS", 
    "VAESDEC", "VAESDECLAST", "VAESENC", "VAESENCLAST", "VAESIMC", 
    "VAESKEYGENASSIST", "VALIGND", "VALIGNQ", "VANDNPD", "VANDNPS", 
    "VANDPD", "VANDPS", "VBCSTNEBF162PS", "VBCSTNESH2PS", "VBLENDMPD", 
    "VBLENDMPS", "VBLENDPD", "VBLENDPS", "VBLENDVPD", "VBLENDVPS", 
    "VBROADCASTF128", "VBROADCASTF32X2", "VBROADCASTF32X4", "VBROADCASTF32X8", 
    "VBROADCASTF64X2", "VBROADCASTF64X4", "VBROADCASTI128", "VBROADCASTI32X2", 
    "VBROADCASTI32X4", "VBROADCASTI32X8", "VBROADCASTI64X2", "VBROADCASTI64X4", 
    "VBROADCASTSD", "VBROADCASTSS", "VCMPPD", "VCMPPH", "VCMPPS", 
    "VCMPSD", "VCMPSH", "VCMPSS", "VCOMISD", "VCOMISH", "VCOMISS", 
    "VCOMPRESSPD", "VCOMPRESSPS", "VCVTDQ2PD", "VCVTDQ2PH", "VCVTDQ2PS", 
    "VCVTNE2PS2BF16", "VCVTNEEBF162PS", "VCVTNEEPH2PS", "VCVTNEOBF162PS", 
    "VCVTNEOPH2PS", "VCVTNEPS2BF16", "VCVTPD2DQ", "VCVTPD2PH", "VCVTPD2PS", 
    "VCVTPD2QQ", "VCVTPD2UDQ", "VCVTPD2UQQ", "VCVTPH2DQ", "VCVTPH2PD", 
    "VCVTPH2PS", "VCVTPH2PSX", "VCVTPH2QQ", "VCVTPH2UDQ", "VCVTPH2UQQ", 
    "VCVTPH2UW", "VCVTPH2W", "VCVTPS2DQ", "VCVTPS2PD", "VCVTPS2PH", 
    "VCVTPS2PHX", "VCVTPS2QQ", "VCVTPS2UDQ", "VCVTPS2UQQ", "VCVTQQ2PD", 
    "VCVTQQ2PH", "VCVTQQ2PS", "VCVTSD2SH", "VCVTSD2SI", "VCVTSD2SS", 
    "VCVTSD2USI", "VCVTSH2SD", "VCVTSH2SI", "VCVTSH2SS", "VCVTSH2USI", 
    "VCVTSI2SD", "VCVTSI2SH", "VCVTSI2SS", "VCVTSS2SD", "VCVTSS2SH", 
    "VCVTSS2SI", "VCVTSS2USI", "VCVTTPD2DQ", "VCVTTPD2QQ", "VCVTTPD2UDQ", 
    "VCVTTPD2UQQ", "VCVTTPH2DQ", "VCVTTPH2QQ", "VCVTTPH2UDQ", "VCVTTPH2UQQ", 
    "VCVTTPH2UW", "VCVTTPH2W", "VCVTTPS2DQ", "VCVTTPS2QQ", "VCVTTPS2UDQ", 
    "VCVTTPS2UQQ", "VCVTTSD2SI", "VCVTTSD2USI", "VCVTTSH2SI", "VCVTTSH2USI", 
    "VCVTTSS2SI", "VCVTTSS2USI", "VCVTUDQ2PD", "VCVTUDQ2PH", "VCVTUDQ2PS", 
    "VCVTUQQ2PD", "VCVTUQQ2PH", "VCVTUQQ2PS", "VCVTUSI2SD", "VCVTUSI2SH", 
    "VCVTUSI2SS", "VCVTUW2PH", "VCVTW2PH", "VDBPSADBW", "VDIVPD", 
    "VDIVPH", "VDIVPS", "VDIVSD", "VDIVSH", "VDIVSS", "VDPBF16PS", 
    "VDPPD", "VDPPS", "VERR", "VERW", "VEXP2PD", "VEXP2PS", "VEXPANDPD", 
    "VEXPANDPS", "VEXTRACTF128", "VEXTRACTF32X4", "VEXTRACTF32X8", 
    "VEXTRACTF64X2", "VEXTRACTF64X4", "VEXTRACTI128", "VEXTRACTI32X4", 
    "VEXTRACTI32X8", "VEXTRACTI64X2", "VEXTRACTI64X4", "VEXTRACTPS", 
    "VFCMADDCPH", "VFCMADDCSH", "VFCMULCPH", "VFCMULCSH", "VFIXUPIMMPD", 
    "VFIXUPIMMPS", "VFIXUPIMMSD", "VFIXUPIMMSS", "VFMADD132PD", "VFMADD132PH", 
    "VFMADD132PS", "VFMADD132SD", "VFMADD132SH", "VFMADD132SS", "VFMADD213PD", 
    "VFMADD213PH", "VFMADD213PS", "VFMADD213SD", "VFMADD213SH", "VFMADD213SS", 
    "VFMADD231PD", "VFMADD231PH", "VFMADD231PS", "VFMADD231SD", "VFMADD231SH", 
    "VFMADD231SS", "VFMADDCPH", "VFMADDCSH", "VFMADDPD", "VFMADDPS", 
    "VFMADDSD", "VFMADDSS", "VFMADDSUB132PD", "VFMADDSUB132PH", "VFMADDSUB132PS", 
    "VFMADDSUB213PD", "VFMADDSUB213PH", "VFMADDSUB213PS", "VFMADDSUB231PD", 
    "VFMADDSUB231PH", "VFMADDSUB231PS", "VFMADDSUBPD", "VFMADDSUBPS", 
    "VFMSUB132PD", "VFMSUB132PH", "VFMSUB132PS", "VFMSUB132SD", "VFMSUB132SH", 
    "VFMSUB132SS", "VFMSUB213PD", "VFMSUB213PH", "VFMSUB213PS", "VFMSUB213SD", 
    "VFMSUB213SH", "VFMSUB213SS", "VFMSUB231PD", "VFMSUB231PH", "VFMSUB231PS", 
    "VFMSUB231SD", "VFMSUB231SH", "VFMSUB231SS", "VFMSUBADD132PD", 
    "VFMSUBADD132PH", "VFMSUBADD132PS", "VFMSUBADD213PD", "VFMSUBADD213PH", 
    "VFMSUBADD213PS", "VFMSUBADD231PD", "VFMSUBADD231PH", "VFMSUBADD231PS", 
    "VFMSUBADDPD", "VFMSUBADDPS", "VFMSUBPD", "VFMSUBPS", "VFMSUBSD", 
    "VFMSUBSS", "VFMULCPH", "VFMULCSH", "VFNMADD132PD", "VFNMADD132PH", 
    "VFNMADD132PS", "VFNMADD132SD", "VFNMADD132SH", "VFNMADD132SS", 
    "VFNMADD213PD", "VFNMADD213PH", "VFNMADD213PS", "VFNMADD213SD", 
    "VFNMADD213SH", "VFNMADD213SS", "VFNMADD231PD", "VFNMADD231PH", 
    "VFNMADD231PS", "VFNMADD231SD", "VFNMADD231SH", "VFNMADD231SS", 
    "VFNMADDPD", "VFNMADDPS", "VFNMADDSD", "VFNMADDSS", "VFNMSUB132PD", 
    "VFNMSUB132PH", "VFNMSUB132PS", "VFNMSUB132SD", "VFNMSUB132SH", 
    "VFNMSUB132SS", "VFNMSUB213PD", "VFNMSUB213PH", "VFNMSUB213PS", 
    "VFNMSUB213SD", "VFNMSUB213SH", "VFNMSUB213SS", "VFNMSUB231PD", 
    "VFNMSUB231PH", "VFNMSUB231PS", "VFNMSUB231SD", "VFNMSUB231SH", 
    "VFNMSUB231SS", "VFNMSUBPD", "VFNMSUBPS", "VFNMSUBSD", "VFNMSUBSS", 
    "VFPCLASSPD", "VFPCLASSPH", "VFPCLASSPS", "VFPCLASSSD", "VFPCLASSSH", 
    "VFPCLASSSS", "VFRCZPD", "VFRCZPS", "VFRCZSD", "VFRCZSS", "VGATHERDPD", 
    "VGATHERDPS", "VGATHERPF0DPD", "VGATHERPF0DPS", "VGATHERPF0QPD", 
    "VGATHERPF0QPS", "VGATHERPF1DPD", "VGATHERPF1DPS", "VGATHERPF1QPD", 
    "VGATHERPF1QPS", "VGATHERQPD", "VGATHERQPS", "VGETEXPPD", "VGETEXPPH", 
    "VGETEXPPS", "VGETEXPSD", "VGETEXPSH", "VGETEXPSS", "VGETMANTPD", 
    "VGETMANTPH", "VGETMANTPS", "VGETMANTSD", "VGETMANTSH", "VGETMANTSS", 
    "VGF2P8AFFINEINVQB", "VGF2P8AFFINEQB", "VGF2P8MULB", "VHADDPD", 
    "VHADDPS", "VHSUBPD", "VHSUBPS", "VINSERTF128", "VINSERTF32X4", 
    "VINSERTF32X8", "VINSERTF64X2", "VINSERTF64X4", "VINSERTI128", 
    "VINSERTI32X4", "VINSERTI32X8", "VINSERTI64X2", "VINSERTI64X4", 
    "VINSERTPS", "VLDDQU", "VLDMXCSR", "VMASKMOVDQU", "VMASKMOVPD", 
    "VMASKMOVPS", "VMAXPD", "VMAXPH", "VMAXPS", "VMAXSD", "VMAXSH", 
    "VMAXSS", "VMCALL", "VMCLEAR", "VMFUNC", "VMGEXIT", "VMINPD", 
    "VMINPH", "VMINPS", "VMINSD", "VMINSH", "VMINSS", "VMLAUNCH", 
    "VMLOAD", "VMMCALL", "VMOVAPD", "VMOVAPS", "VMOVD", "VMOVDDUP", 
    "VMOVDQA", "VMOVDQA32", "VMOVDQA64", "VMOVDQU", "VMOVDQU16", 
    "VMOVDQU32", "VMOVDQU64", "VMOVDQU8", "VMOVHLPS", "VMOVHPD", 
    "VMOVHPS", "VMOVLHPS", "VMOVLPD", "VMOVLPS", "VMOVMSKPD", "VMOVMSKPS", 
    "VMOVNTDQ", "VMOVNTDQA", "VMOVNTPD", "VMOVNTPS", "VMOVQ", "VMOVSD", 
    "VMOVSH", "VMOVSHDUP", "VMOVSLDUP", "VMOVSS", "VMOVUPD", "VMOVUPS", 
    "VMOVW", "VMPSADBW", "VMPTRLD", "VMPTRST", "VMREAD", "VMRESUME", 
    "VMRUN", "VMSAVE", "VMULPD", "VMULPH", "VMULPS", "VMULSD", "VMULSH", 
    "VMULSS", "VMWRITE", "VMXOFF", "VMXON", "VORPD", "VORPS", "VP2INTERSECTD", 
    "VP2INTERSECTQ", "VP4DPWSSD", "VP4DPWSSDS", "VPABSB", "VPABSD", 
    "VPABSQ", "VPABSW", "VPACKSSDW", "VPACKSSWB", "VPACKUSDW", "VPACKUSWB", 
    "VPADDB", "VPADDD", "VPADDQ", "VPADDSB", "VPADDSW", "VPADDUSB", 
    "VPADDUSW", "VPADDW", "VPALIGNR", "VPAND", "VPANDD", "VPANDN", 
    "VPANDND", "VPANDNQ", "VPANDQ", "VPAVGB", "VPAVGW", "VPBLENDD", 
    "VPBLENDMB", "VPBLENDMD", "VPBLENDMQ", "VPBLENDMW", "VPBLENDVB", 
    "VPBLENDW", "VPBROADCASTB", "VPBROADCASTD", "VPBROADCASTMB2Q", 
    "VPBROADCASTMW2D", "VPBROADCASTQ", "VPBROADCASTW", "VPCLMULQDQ", 
    "VPCMOV", "VPCMPB", "VPCMPD", "VPCMPEQB", "VPCMPEQD", "VPCMPEQQ", 
    "VPCMPEQW", "VPCMPESTRI", "VPCMPESTRM", "VPCMPGTB", "VPCMPGTD", 
    "VPCMPGTQ", "VPCMPGTW", "VPCMPISTRI", "VPCMPISTRM", "VPCMPQ", 
    "VPCMPUB", "VPCMPUD", "VPCMPUQ", "VPCMPUW", "VPCMPW", "VPCOMB", 
    "VPCOMD", "VPCOMPRESSB", "VPCOMPRESSD", "VPCOMPRESSQ", "VPCOMPRESSW", 
    "VPCOMQ", "VPCOMUB", "VPCOMUD", "VPCOMUQ", "VPCOMUW", "VPCOMW", 
    "VPCONFLICTD", "VPCONFLICTQ", "VPDPBSSD", "VPDPBSSDS", "VPDPBSUD", 
    "VPDPBSUDS", "VPDPBUSD", "VPDPBUSDS", "VPDPBUUD", "VPDPBUUDS", 
    "VPDPWSSD", "VPDPWSSDS", "VPERM2F128", "VPERM2I128", "VPERMB", 
    "VPERMD", "VPERMI2B", "VPERMI2D", "VPERMI2PD", "VPERMI2PS", "VPERMI2Q", 
    "VPERMI2W", "VPERMIL2PD", "VPERMIL2PS", "VPERMILPD", "VPERMILPS", 
    "VPERMPD", "VPERMPS", "VPERMQ", "VPERMT2B", "VPERMT2D", "VPERMT2PD", 
    "VPERMT2PS", "VPERMT2Q", "VPERMT2W", "VPERMW", "VPEXPANDB", "VPEXPANDD", 
    "VPEXPANDQ", "VPEXPANDW", "VPEXTRB", "VPEXTRD", "VPEXTRQ", "VPEXTRW", 
    "VPGATHERDD", "VPGATHERDQ", "VPGATHERQD", "VPGATHERQQ", "VPHADDBD", 
    "VPHADDBQ", "VPHADDBW", "VPHADDD", "VPHADDDQ", "VPHADDSW", "VPHADDUBD", 
    "VPHADDUBQ", "VPHADDUBW", "VPHADDUDQ", "VPHADDUWD", "VPHADDUWQ", 
    "VPHADDW", "VPHADDWD", "VPHADDWQ", "VPHMINPOSUW", "VPHSUBBW", 
    "VPHSUBD", "VPHSUBDQ", "VPHSUBSW", "VPHSUBW", "VPHSUBWD", "VPINSRB", 
    "VPINSRD", "VPINSRQ", "VPINSRW", "VPLZCNTD", "VPLZCNTQ", "VPMACSDD", 
    "VPMACSDQH", "VPMACSDQL", "VPMACSSDD", "VPMACSSDQH", "VPMACSSDQL", 
    "VPMACSSWD", "VPMACSSWW", "VPMACSWD", "VPMACSWW", "VPMADCSSWD", 
    "VPMADCSWD", "VPMADD52HUQ", "VPMADD52LUQ", "VPMADDUBSW", "VPMADDWD", 
    "VPMASKMOVD", "VPMASKMOVQ", "VPMAXSB", "VPMAXSD", "VPMAXSQ", 
    "VPMAXSW", "VPMAXUB", "VPMAXUD", "VPMAXUQ", "VPMAXUW", "VPMINSB", 
    "VPMINSD", "VPMINSQ", "VPMINSW", "VPMINUB", "VPMINUD", "VPMINUQ", 
    "VPMINUW", "VPMOVB2M", "VPMOVD2M", "VPMOVDB", "VPMOVDW", "VPMOVM2B", 
    "VPMOVM2D", "VPMOVM2Q", "VPMOVM2W", "VPMOVMSKB", "VPMOVQ2M", 
    "VPMOVQB", "VPMOVQD", "VPMOVQW", "VPMOVSDB", "VPMOVSDW", "VPMOVSQB", 
    "VPMOVSQD", "VPMOVSQW", "VPMOVSWB", "VPMOVSXBD", "VPMOVSXBQ", 
    "VPMOVSXBW", "VPMOVSXDQ", "VPMOVSXWD", "VPMOVSXWQ", "VPMOVUSDB", 
    "VPMOVUSDW", "VPMOVUSQB", "VPMOVUSQD", "VPMOVUSQW", "VPMOVUSWB", 
    "VPMOVW2M", "VPMOVWB", "VPMOVZXBD", "VPMOVZXBQ", "VPMOVZXBW", 
    "VPMOVZXDQ", "VPMOVZXWD", "VPMOVZXWQ", "VPMULDQ", "VPMULHRSW", 
    "VPMULHUW", "VPMULHW", "VPMULLD", "VPMULLQ", "VPMULLW", "VPMULTISHIFTQB", 
    "VPMULUDQ", "VPOPCNTB", "VPOPCNTD", "VPOPCNTQ", "VPOPCNTW", "VPOR", 
    "VPORD", "VPORQ", "VPPERM", "VPROLD", "VPROLQ", "VPROLVD", "VPROLVQ", 
    "VPRORD", "VPRORQ", "VPRORVD", "VPRORVQ", "VPROTB", "VPROTD", 
    "VPROTQ", "VPROTW", "VPSADBW", "VPSCATTERDD", "VPSCATTERDQ", 
    "VPSCATTERQD", "VPSCATTERQQ", "VPSHAB", "VPSHAD", "VPSHAQ", "VPSHAW", 
    "VPSHLB", "VPSHLD", "VPSHLDD", "VPSHLDQ", "VPSHLDVD", "VPSHLDVQ", 
    "VPSHLDVW", "VPSHLDW", "VPSHLQ", "VPSHLW", "VPSHRDD", "VPSHRDQ", 
    "VPSHRDVD", "VPSHRDVQ", "VPSHRDVW", "VPSHRDW", "VPSHUFB", "VPSHUFBITQMB", 
    "VPSHUFD", "VPSHUFHW", "VPSHUFLW", "VPSIGNB", "VPSIGND", "VPSIGNW", 
    "VPSLLD", "VPSLLDQ", "VPSLLQ", "VPSLLVD", "VPSLLVQ", "VPSLLVW", 
    "VPSLLW", "VPSRAD", "VPSRAQ", "VPSRAVD", "VPSRAVQ", "VPSRAVW", 
    "VPSRAW", "VPSRLD", "VPSRLDQ", "VPSRLQ", "VPSRLVD", "VPSRLVQ", 
    "VPSRLVW", "VPSRLW", "VPSUBB", "VPSUBD", "VPSUBQ", "VPSUBSB", 
    "VPSUBSW", "VPSUBUSB", "VPSUBUSW", "VPSUBW", "VPTERNLOGD", "VPTERNLOGQ", 
    "VPTEST", "VPTESTMB", "VPTESTMD", "VPTESTMQ", "VPTESTMW", "VPTESTNMB", 
    "VPTESTNMD", "VPTESTNMQ", "VPTESTNMW", "VPUNPCKHBW", "VPUNPCKHDQ", 
    "VPUNPCKHQDQ", "VPUNPCKHWD", "VPUNPCKLBW", "VPUNPCKLDQ", "VPUNPCKLQDQ", 
    "VPUNPCKLWD", "VPXOR", "VPXORD", "VPXORQ", "VRANGEPD", "VRANGEPS", 
    "VRANGESD", "VRANGESS", "VRCP14PD", "VRCP14PS", "VRCP14SD", "VRCP14SS", 
    "VRCP28PD", "VRCP28PS", "VRCP28SD", "VRCP28SS", "VRCPPH", "VRCPPS", 
    "VRCPSH", "VRCPSS", "VREDUCEPD", "VREDUCEPH", "VREDUCEPS", "VREDUCESD", 
    "VREDUCESH", "VREDUCESS", "VRNDSCALEPD", "VRNDSCALEPH", "VRNDSCALEPS", 
    "VRNDSCALESD", "VRNDSCALESH", "VRNDSCALESS", "VROUNDPD", "VROUNDPS", 
    "VROUNDSD", "VROUNDSS", "VRSQRT14PD", "VRSQRT14PS", "VRSQRT14SD", 
    "VRSQRT14SS", "VRSQRT28PD", "VRSQRT28PS", "VRSQRT28SD", "VRSQRT28SS", 
    "VRSQRTPH", "VRSQRTPS", "VRSQRTSH", "VRSQRTSS", "VSCALEFPD", 
    "VSCALEFPH", "VSCALEFPS", "VSCALEFSD", "VSCALEFSH", "VSCALEFSS", 
    "VSCATTERDPD", "VSCATTERDPS", "VSCATTERPF0DPD", "VSCATTERPF0DPS", 
    "VSCATTERPF0QPD", "VSCATTERPF0QPS", "VSCATTERPF1DPD", "VSCATTERPF1DPS", 
    "VSCATTERPF1QPD", "VSCATTERPF1QPS", "VSCATTERQPD", "VSCATTERQPS", 
    "VSHUFF32X4", "VSHUFF64X2", "VSHUFI32X4", "VSHUFI64X2", "VSHUFPD", 
    "VSHUFPS", "VSQRTPD", "VSQRTPH", "VSQRTPS", "VSQRTSD", "VSQRTSH", 
    "VSQRTSS", "VSTMXCSR", "VSUBPD", "VSUBPH", "VSUBPS", "VSUBSD", 
    "VSUBSH", "VSUBSS", "VTESTPD", "VTESTPS", "VUCOMISD", "VUCOMISH", 
    "VUCOMISS", "VUNPCKHPD", "VUNPCKHPS", "VUNPCKLPD", "VUNPCKLPS", 
    "VXORPD", "VXORPS", "VZEROALL", "VZEROUPPER", "WAIT", "WBINVD", 
    "WBNOINVD", "WRFSBASE", "WRGSBASE", "WRMSR", "WRMSRLIST", "WRMSRNS", 
    "WRPKRU", "WRSHR", "WRSSD", "WRSSQ", "WRUSSD", "WRUSSQ", "XABORT", 
    "XADD", "XBEGIN", "XCHG", "XCRYPTCBC", "XCRYPTCFB", "XCRYPTCTR", 
    "XCRYPTECB", "XCRYPTOFB", "XEND", "XGETBV", "XLATB", "XOR", "XORPD", 
    "XORPS", "XRESLDTRK", "XRSTOR", "XRSTOR64", "XRSTORS", "XRSTORS64", 
    "XSAVE", "XSAVE64", "XSAVEC", "XSAVEC64", "XSAVEOPT", "XSAVEOPT64", 
    "XSAVES", "XSAVES64", "XSETBV", "XSHA1", "XSHA256", "XSTORE", 
    "XSUSLDTRK", "XTEST", 
};


#endif

