---
title: "Elenco oggetti intrinseci x64 (amd64) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compilatore cl-exe, intrinseci"
  - "intrinseci, amd64"
  - "intrinseci, x64"
ms.assetid: a2b65471-f1db-426c-8464-eff4a3761dee
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Elenco oggetti intrinseci x64 (amd64)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo documento sono elencati gli intrinseci supportati dal compilatore di Visual C\+\+ quando si imposta x64 \(noto anche come amd64\) come destinazione.  
  
 Per informazioni sui singoli intrinseci, vedere queste risorse, in base al processore scelto come destinazione:  
  
-   Il file di intestazione. Molti intrinseci sono documentati nei commenti nel file di intestazione.  
  
-   [Guida relativa agli intrinseci di Intel](http://go.microsoft.com/fwlink/p/?LinkId=512130). Usare la casella di ricerca per trovare specifici intrinseci.  
  
-   [Manuali degli sviluppatori software per le architetture Intel 64 e IA\-32](http://go.microsoft.com/fwlink/p/?LinkId=251198)  
  
-   [Intel AVX](http://go.microsoft.com/fwlink/p/?LinkId=251202)  
  
-   [Manuali e guide per gli sviluppatori AMD](http://go.microsoft.com/fwlink/p/?LinkId=251203)  
  
 La tabella seguente elenca le funzioni intrinseche disponibili per i processori x64. La colonna Tecnologia elenca il supporto del set di istruzioni richiesto. Usare la funzione intrinseca [\_\_cpuid](../intrinsics/cpuid-cpuidex.md) per determinare il supporto del set di istruzioni al runtime. Se due voci si trovano in una sola riga, rappresentano i diversi punti di ingresso per lo stesso oggetto intrinseco. \[1\] indica che la funzione intrinseca è disponibile solo per i processori AMD. \[2\] indica che la funzione intrinseca è disponibile solo per i processori Intel. \[3\] indica che il prototipo è una macro. L'intestazione richiesta per il prototipo di funzione è elencata nella colonna Intestazione. Per semplicità, l'intestazione intrin.h include immintrin.h e ammintrin.h.  
  
|Nome intrinseco|Tecnologia|Header|Prototipo di funzione|  
|---------------------|----------------|------------|---------------------------|  
|\_addcarry\_u16||intrin.h|unsigned char \_addcarry\_u16\(unsigned char c\_in,unsigned short src1,unsigned short src2,unsigned short \*sum\)|  
|[\_addcarry\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)||intrin.h|unsigned char \_addcarry\_u32\(unsigned char c\_in,unsigned int src1,unsigned int src2,unsigned int \*sum\)|  
|[\_addcarry\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)||intrin.h|unsigned char \_addcarry\_u64\(unsigned char c\_in,unsigned \_\_int64 src1,unsigned \_\_int64 src2,unsigned \_\_int64 \*sum\)|  
|\_addcarry\_u8||intrin.h|unsigned char \_addcarry\_u8\(unsigned char c\_in,unsigned char src1,unsigned char src2,unsigned char \*sum\)|  
|[\_addcarryx\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|ADX \[2\]|immintrin.h|unsigned char \_addcarryx\_u32\(unsigned char c\_in,unsigned int src1,unsigned int src2,unsigned int \*sum\)|  
|[\_addcarryx\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|ADX \[2\]|immintrin.h|unsigned char \_addcarryx\_u64\(unsigned char c\_in,unsigned \_\_int64 src1,unsigned \_\_int64 src2,unsigned \_\_int64 \*sum\)|  
|[\_\_addgsbyte](../intrinsics/addgsbyte-addgsword-addgsdword-addgsqword.md)||intrin.h|void \_\_addgsbyte\(unsigned long,unsigned char\)|  
|[\_\_addgsdword](../intrinsics/addgsbyte-addgsword-addgsdword-addgsqword.md)||intrin.h|void \_\_addgsdword\(unsigned long,unsigned int\)|  
|[\_\_addgsqword](../intrinsics/addgsbyte-addgsword-addgsdword-addgsqword.md)||intrin.h|void \_\_addgsqword\(unsigned long,unsigned \_\_int64\)|  
|[\_\_addgsword](../intrinsics/addgsbyte-addgsword-addgsdword-addgsqword.md)||intrin.h|void \_\_addgsword\(unsigned long,unsigned short\)|  
|[\_AddressOfReturnAddress](../intrinsics/addressofreturnaddress.md)||intrin.h|void \* \_AddressOfReturnAddress\(void\)|  
|\_andn\_u32|BMI \[1\]|ammintrin.h|unsigned int \_andn\_u32\(unsigned int,unsigned int\)|  
|\_andn\_u64|BMI \[1\]|ammintrin.h|unsigned \_\_int64 \_andn\_u64\(unsigned \_\_int64,unsigned \_\_int64\)|  
|[\_bextr\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI|ammintrin.h, immintrin.h|unsigned int \_bextr\_u32\(unsigned int,unsigned int,unsigned int\)|  
|[\_bextr\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI|ammintrin.h, immintrin.h|unsigned \_\_int64 \_bextr\_u64\(unsigned \_\_int64,unsigned int,unsigned int\)|  
|\_bextri\_u32|ABM \[1\]|ammintrin.h|unsigned int \_bextri\_u32\(unsigned int,unsigned int\)|  
|\_bextri\_u64|ABM \[1\]|ammintrin.h|unsigned \_\_int64 \_bextri\_u64\(unsigned \_\_int64,unsigned int\)|  
|[\_BitScanForward](../intrinsics/bitscanforward-bitscanforward64.md)||intrin.h|BOOLEAN \_BitScanForward\(OUT ULONG\* Index,IN ULONG Mask\)|  
|[\_BitScanForward64](../intrinsics/bitscanforward-bitscanforward64.md)||intrin.h|BOOLEAN \_BitScanForward64\(OUT ULONG\* Index,IN ULONG64 Mask\)|  
|[\_BitScanReverse](../intrinsics/bitscanreverse-bitscanreverse64.md)||intrin.h|BOOLEAN \_BitScanReverse\(OUT ULONG\* Index,IN ULONG Mask\)|  
|[\_BitScanReverse64](../intrinsics/bitscanreverse-bitscanreverse64.md)||intrin.h|BOOLEAN \_BitScanReverse64\(OUT ULONG\* Index,IN ULONG64 Mask\)|  
|[\_bittest](../intrinsics/bittest-bittest64.md)||intrin.h|unsigned char \_bittest\(long const \*a,long b\)|  
|[\_bittest64](../intrinsics/bittest-bittest64.md)||intrin.h|unsigned char \_bittest64\(\_\_int64 const \*a,\_\_int64 b\)|  
|[\_bittestandcomplement](../intrinsics/bittestandcomplement-bittestandcomplement64.md)||intrin.h|unsigned char \_bittestandcomplement\(long \*a,long b\)|  
|[\_bittestandcomplement64](../intrinsics/bittestandcomplement-bittestandcomplement64.md)||intrin.h|unsigned char \_bittestandcomplement64\(\_\_int64 \*a,\_\_int64 b\)|  
|[\_bittestandreset](../intrinsics/bittestandreset-bittestandreset64.md)||intrin.h|unsigned char \_bittestandreset\(long \*a,long b\)|  
|[\_bittestandreset64](../intrinsics/bittestandreset-bittestandreset64.md)||intrin.h|unsigned char \_bittestandreset64\(\_\_int64 \*a,\_\_int64 b\)|  
|[\_bittestandset](../intrinsics/bittestandset-bittestandset64.md)||intrin.h|unsigned char \_bittestandset\(long \*a,long b\)|  
|[\_bittestandset64](../intrinsics/bittestandset-bittestandset64.md)||intrin.h|unsigned char \_bittestandset64\(\_\_int64 \*a,\_\_int64 b\)|  
|\_blcfill\_u32|ABM \[1\]|ammintrin.h|unsigned int \_blcfill\_u32\(unsigned int\)|  
|\_blcfill\_u64|ABM \[1\]|ammintrin.h|unsigned \_\_int64 \_blcfill\_u64\(unsigned \_\_int64\)|  
|\_blci\_u32|ABM \[1\]|ammintrin.h|unsigned int \_blci\_u32\(unsigned int\)|  
|\_blci\_u64|ABM \[1\]|ammintrin.h|unsigned \_\_int64 \_blci\_u64\(unsigned \_\_int64\)|  
|\_blcic\_u32|ABM \[1\]|ammintrin.h|unsigned int \_blcic\_u32\(unsigned int\)|  
|\_blcic\_u64|ABM \[1\]|ammintrin.h|unsigned \_\_int64 \_blcic\_u64\(unsigned \_\_int64\)|  
|\_blcmsk\_u32|ABM \[1\]|ammintrin.h|unsigned int \_blcmsk\_u32\(unsigned int\)|  
|\_blcmsk\_u64|ABM \[1\]|ammintrin.h|unsigned \_\_int64 \_blcmsk\_u64\(unsigned \_\_int64\)|  
|\_blcs\_u32|ABM \[1\]|ammintrin.h|unsigned int \_blcs\_u32\(unsigned int\)|  
|\_blcs\_u64|ABM \[1\]|ammintrin.h|unsigned \_\_int64 \_blcs\_u64\(unsigned \_\_int64\)|  
|\_blsfill\_u32|ABM \[1\]|ammintrin.h|unsigned int \_blsfill\_u32\(unsigned int\)|  
|\_blsfill\_u64|ABM \[1\]|ammintrin.h|unsigned \_\_int64 \_blsfill\_u64\(unsigned \_\_int64\)|  
|[\_blsi\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI|ammintrin.h, immintrin.h|unsigned int \_blsi\_u32\(unsigned int\)|  
|[\_blsi\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI|ammintrin.h, immintrin.h|unsigned \_\_int64 \_blsi\_u64\(unsigned \_\_int64\)|  
|\_blsic\_u32|ABM \[1\]|ammintrin.h|unsigned int \_blsic\_u32\(unsigned int\)|  
|\_blsic\_u64|ABM \[1\]|ammintrin.h|unsigned \_\_int64 \_blsic\_u64\(unsigned \_\_int64\)|  
|[\_blsmsk\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI|ammintrin.h, immintrin.h|unsigned int \_blsmsk\_u32\(unsigned int\)|  
|[\_blsmsk\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI|ammintrin.h, immintrin.h|unsigned \_\_int64 \_blsmsk\_u64\(unsigned \_\_int64\)|  
|[\_blsr\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI|ammintrin.h, immintrin.h|unsigned int \_blsr\_u32\(unsigned int\)|  
|[\_blsr\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI|ammintrin.h, immintrin.h|unsigned \_\_int64 \_blsr\_u64\(unsigned \_\_int64\)|  
|[\_bzhi\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI \[2\]|immintrin.h|unsigned int \_bzhi\_u32\(unsigned int,unsigned int\)|  
|[\_bzhi\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI \[2\]|immintrin.h|unsigned \_\_int64 \_bzhi\_u64\(unsigned \_\_int64,unsigned int\)|  
|\_clac|SMAP|intrin.h|void \_clac\(void\)|  
|[\_\_cpuid](../intrinsics/cpuid-cpuidex.md)||intrin.h|void \_\_cpuid\(int \*a,int b\)|  
|[\_\_cpuidex](../intrinsics/cpuid-cpuidex.md)||intrin.h|void \_\_cpuidex\(int \*a,int b,int c\)|  
|[\_\_debugbreak](../intrinsics/debugbreak.md)||intrin.h|void \_\_debugbreak\(void\)|  
|[\_disable](../intrinsics/disable.md)||intrin.h|void \_disable\(void\)|  
|[\_\_emul](../intrinsics/emul-emulu.md)||intrin.h|\_\_int64 \[pascal\/cdecl\] \_\_emul\(int,int\)|  
|[\_\_emulu](../intrinsics/emul-emulu.md)||intrin.h|unsigned \_\_int64 \[pascal\/cdecl\]\_\_emulu\(unsigned int,unsigned int\)|  
|[\_enable](../intrinsics/enable.md)||intrin.h|void \_enable\(void\)|  
|[\_\_fastfail](../intrinsics/fastfail.md)||intrin.h|void \_\_fastfail\(unsigned int\)|  
|[\_\_faststorefence](../intrinsics/faststorefence.md)||intrin.h|void \_\_faststorefence\(void\)|  
|[\_fxrstor](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FXSR \[2\]|immintrin.h|void \_fxrstor\(void const\*\)|  
|[\_fxrstor64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FXSR \[2\]|immintrin.h|void \_fxrstor64\(void const\*\)|  
|[\_fxsave](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FXSR \[2\]|immintrin.h|void \_fxsave\(void\*\)|  
|[\_fxsave64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FXSR \[2\]|immintrin.h|void \_fxsave64\(void\*\)|  
|[\_\_getcallerseflags](../intrinsics/getcallerseflags.md)||intrin.h|\(unsigned int \_\_getcallerseflags\(\)\)|  
|[\_\_halt](../intrinsics/halt.md)||intrin.h|void \_\_halt\(void\)|  
|[\_\_inbyte](../intrinsics/inbyte.md)||intrin.h|unsigned char \_\_inbyte\(unsigned short Port\)|  
|[\_\_inbytestring](../intrinsics/inbytestring.md)||intrin.h|void \_\_inbytestring\(unsigned short Port,unsigned char \*Buffer,unsigned long Count\)|  
|[\_\_incgsbyte](../intrinsics/incgsbyte-incgsword-incgsdword-incgsqword.md)||intrin.h|void \_\_incgsbyte\(unsigned long\)|  
|[\_\_incgsdword](../intrinsics/incgsbyte-incgsword-incgsdword-incgsqword.md)||intrin.h|void \_\_incgsdword\(unsigned long\)|  
|[\_\_incgsqword](../intrinsics/incgsbyte-incgsword-incgsdword-incgsqword.md)||intrin.h|void \_\_incgsqword\(unsigned long\)|  
|[\_\_incgsword](../intrinsics/incgsbyte-incgsword-incgsdword-incgsqword.md)||intrin.h|void \_\_incgsword\(unsigned long\)|  
|[\_\_indword](../intrinsics/indword.md)||intrin.h|unsigned long \_\_indword\(unsigned short Port\)|  
|[\_\_indwordstring](../intrinsics/indwordstring.md)||intrin.h|void \_\_indwordstring\(unsigned short Port,unsigned long \*Buffer,unsigned long Count\)|  
|[\_\_int2c](../intrinsics/int2c.md)||intrin.h|void \_\_int2c\(void\)|  
|[\_InterlockedAnd](../intrinsics/interlockedand-intrinsic-functions.md)||intrin.h|long \_InterlockedAnd\(long volatile \*, long\)|  
|[\_InterlockedAnd\_HLEAcquire](../intrinsics/interlockedand-intrinsic-functions.md)|HLE \[2\]|immintrin.h|long \_InterlockedAnd\_HLEAcquire\(long volatile \*,long\)|  
|[\_InterlockedAnd\_HLERelease](../intrinsics/interlockedand-intrinsic-functions.md)|HLE \[2\]|immintrin.h|long \_InterlockedAnd\_HLERelease\(long volatile \*,long\)|  
|[\_InterlockedAnd\_np](../intrinsics/interlockedand-intrinsic-functions.md)||intrin.h|long \_InterlockedAnd\_np\(long \*,long\)|  
|[\_InterlockedAnd16](../intrinsics/interlockedand-intrinsic-functions.md)||intrin.h|short \_InterlockedAnd16\(short volatile \*, short\)|  
|[\_InterlockedAnd16\_np](../intrinsics/interlockedand-intrinsic-functions.md)||intrin.h|short \_InterlockedAnd16\_np\(short \*,short\)|  
|[\_InterlockedAnd64](../intrinsics/interlockedand-intrinsic-functions.md)||intrin.h|\_\_int64 \_InterlockedAnd64\(\_\_int64 volatile \*, \_\_int64\)|  
|[\_InterlockedAnd64\_HLEAcquire](../intrinsics/interlockedand-intrinsic-functions.md)|HLE \[2\]|immintrin.h|\_\_int64 \_InterlockedAnd64\_HLEAcquire\(\_\_int64 volatile \*,\_\_int64\)|  
|[\_InterlockedAnd64\_HLERelease](../intrinsics/interlockedand-intrinsic-functions.md)|HLE \[2\]|immintrin.h|\_\_int64 \_InterlockedAnd64\_HLERelease\(\_\_int64 volatile \*,\_\_int64\)|  
|[\_InterlockedAnd64\_np](../intrinsics/interlockedand-intrinsic-functions.md)||intrin.h|\_\_int64 \_InterlockedAnd64\_np\(\_\_int64 \*,\_\_int64\)|  
|[\_InterlockedAnd8](../intrinsics/interlockedand-intrinsic-functions.md)||intrin.h|char \_InterlockedAnd8\(char volatile \*, char\)|  
|[\_InterlockedAnd8\_np](../intrinsics/interlockedand-intrinsic-functions.md)||intrin.h|char \_InterlockedAnd8\_np\(char \*,char\)|  
|[\_interlockedbittestandreset](../intrinsics/interlockedbittestandreset-intrinsic-functions.md)||intrin.h|unsigned char \_interlockedbittestandreset\(long \*a,long b\)|  
|[\_interlockedbittestandreset\_HLEAcquire](../intrinsics/interlockedbittestandreset-intrinsic-functions.md)|HLE \[2\]|immintrin.h|unsigned char \_interlockedbittestandreset\_HLEAcquire\(long \*a,long b\)|  
|[\_interlockedbittestandreset\_HLERelease](../intrinsics/interlockedbittestandreset-intrinsic-functions.md)|HLE \[2\]|immintrin.h|unsigned char \_interlockedbittestandreset\_HLERelease\(long \*a,long b\)|  
|[\_interlockedbittestandreset64](../intrinsics/interlockedbittestandreset-intrinsic-functions.md)||intrin.h|unsigned char \_interlockedbittestandreset64\(\_\_int64 \*a,\_\_int64 b\)|  
|[\_interlockedbittestandreset64\_HLEAcquire](../intrinsics/interlockedbittestandreset-intrinsic-functions.md)|HLE \[2\]|immintrin.h|unsigned char \_interlockedbittestandreset64\_HLEAcquire\(\_\_int64 \*a,\_\_int64 b\)|  
|[\_interlockedbittestandreset64\_HLERelease](../intrinsics/interlockedbittestandreset-intrinsic-functions.md)|HLE \[2\]|immintrin.h|unsigned char \_interlockedbittestandreset64\_HLERelease\(\_\_int64 \*a,\_\_int64 b\)|  
|[\_interlockedbittestandset](../intrinsics/interlockedbittestandset-intrinsic-functions.md)||intrin.h|unsigned char \_interlockedbittestandset\(long \*a,long b\)|  
|[\_interlockedbittestandset\_HLEAcquire](../intrinsics/interlockedbittestandset-intrinsic-functions.md)|HLE \[2\]|immintrin.h|unsigned char \_interlockedbittestandset\_HLEAcquire\(long \*a,long b\)|  
|[\_interlockedbittestandset\_HLERelease](../intrinsics/interlockedbittestandset-intrinsic-functions.md)|HLE \[2\]|immintrin.h|unsigned char \_interlockedbittestandset\_HLERelease\(long \*a,long b\)|  
|[\_interlockedbittestandset64](../intrinsics/interlockedbittestandset-intrinsic-functions.md)||intrin.h|unsigned char \_interlockedbittestandset64\(\_\_int64 \*a,\_\_int64 b\)|  
|[\_interlockedbittestandset64\_HLEAcquire](../intrinsics/interlockedbittestandset-intrinsic-functions.md)|HLE \[2\]|immintrin.h|unsigned char \_interlockedbittestandset64\_HLEAcquire\(\_\_int64 \*a,\_\_int64 b\)|  
|[\_interlockedbittestandset64\_HLERelease](../intrinsics/interlockedbittestandset-intrinsic-functions.md)|HLE \[2\]|immintrin.h|unsigned char \_interlockedbittestandset64\_HLERelease\(\_\_int64 \*a,\_\_int64 b\)|  
|[\_InterlockedCompareExchange](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)||intrin.h|long \_InterlockedCompareExchange \(long volatile \*,long,long\)|  
|[\_InterlockedCompareExchange\_HLEAcquire](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)|HLE \[2\]|immintrin.h|long \_InterlockedCompareExchange\_HLEAcquire\(long volatile \*,long,long\)|  
|[\_InterlockedCompareExchange\_HLERelease](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)|HLE \[2\]|immintrin.h|long \_InterlockedCompareExchange\_HLERelease\(long volatile \*,long,long\)|  
|[\_InterlockedCompareExchange\_np](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)||intrin.h|long \_InterlockedCompareExchange\_np \(long \*,long,long\)|  
|[\_InterlockedCompareExchange128](../intrinsics/interlockedcompareexchange128.md)||intrin.h|unsigned char \_InterlockedCompareExchange128\(\_\_int64 volatile \*,\_\_int64,\_\_int64,\_\_int64\*\)|  
|[\_InterlockedCompareExchange128\_np](../intrinsics/interlockedcompareexchange128.md)||intrin.h|unsigned char \_InterlockedCompareExchange128\(\_\_int64 volatile \*,\_\_int64,\_\_int64,\_\_int64\*\)|  
|[\_InterlockedCompareExchange16](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)||intrin.h|short \_InterlockedCompareExchange16\(short volatile \*Destination,short Exchange,short Comparand\)|  
|[\_InterlockedCompareExchange16\_np](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)||intrin.h|short \_InterlockedCompareExchange16\_np\(short volatile \*Destination,short Exchange,short Comparand\)|  
|[\_InterlockedCompareExchange64](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)||intrin.h|\_\_int64 \_InterlockedCompareExchange64\(\_\_int64 volatile \*,\_\_int64,\_\_int64\)|  
|[\_InterlockedCompareExchange64\_HLEAcquire](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)|HLE \[2\]|immintrin.h|\_\_int64 \_InterlockedCompareExchange64\_HLEAcquire\(\_\_int64 volatile \*,\_\_int64,\_\_int64\)|  
|[\_InterlockedCompareExchange64\_HLERelease](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)|HLE \[2\]|immintrin.h|\_\_int64 \_InterlockedCompareExchange64\_HLERelease\(\_\_int64 volatile \*,\_\_int64,\_\_int64\)|  
|[\_InterlockedCompareExchange64\_np](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)||intrin.h|\_\_int64 \_InterlockedCompareExchange64\_np\(\_\_int64 \*,\_\_int64,\_\_int64\)|  
|[\_InterlockedCompareExchange8](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)||intrin.h|char \_InterlockedCompareExchange8\(char volatile \*Destination,char Exchange,char Comparand\)|  
|[\_InterlockedCompareExchangePointer](../intrinsics/interlockedcompareexchangepointer-intrinsic-functions.md)||intrin.h|void \* \_InterlockedCompareExchangePointer\(void \* volatile \*, void \*, void \*\)|  
|[\_InterlockedCompareExchangePointer\_HLEAcquire](../intrinsics/interlockedcompareexchangepointer-intrinsic-functions.md)|HLE \[2\]|immintrin.h|void \*\_InterlockedCompareExchangePointer\_HLEAcquire\(void \*volatile \*,void \*,void \*\)|  
|[\_InterlockedCompareExchangePointer\_HLERelease](../intrinsics/interlockedcompareexchangepointer-intrinsic-functions.md)|HLE \[2\]|immintrin.h|void \*\_InterlockedCompareExchangePointer\_HLERelease\(void \*volatile \*,void \*,void \*\)|  
|[\_InterlockedCompareExchangePointer\_np](../intrinsics/interlockedcompareexchangepointer-intrinsic-functions.md)||intrin.h|void \*\_InterlockedCompareExchangePointer\_np\(void \*\*,void \*,void \*\)|  
|[\_InterlockedDecrement](../intrinsics/interlockeddecrement-intrinsic-functions.md)||intrin.h|long \_InterlockedDecrement\(long volatile \*\)|  
|[\_InterlockedDecrement16](../intrinsics/interlockeddecrement-intrinsic-functions.md)||intrin.h|short \_InterlockedDecrement16\(short volatile \*Addend\)|  
|[\_InterlockedDecrement64](../intrinsics/interlockeddecrement-intrinsic-functions.md)||intrin.h|\_\_int64 \_InterlockedDecrement64\(\_\_int64 volatile \*\)|  
|[\_InterlockedExchange](../intrinsics/interlockedexchange-intrinsic-functions.md)||intrin.h|long \_InterlockedExchange\(long volatile \*,long\)|  
|[\_InterlockedExchange\_HLEAcquire](../intrinsics/interlockedexchange-intrinsic-functions.md)|HLE \[2\]|immintrin.h|long \_InterlockedExchange\_HLEAcquire\(long volatile \*,long\)|  
|[\_InterlockedExchange\_HLERelease](../intrinsics/interlockedexchange-intrinsic-functions.md)|HLE \[2\]|immintrin.h|long \_InterlockedExchange\_HLERelease\(long volatile \*,long\)|  
|[\_InterlockedExchange16](../intrinsics/interlockedexchange-intrinsic-functions.md)||intrin.h|short \_InterlockedExchange16\(short volatile \*,short\)|  
|[\_InterlockedExchange64](../intrinsics/interlockedexchange-intrinsic-functions.md)||intrin.h|\_\_int64 \_InterlockedExchange64\(\_\_int64 volatile \*,\_\_int64\)|  
|[\_InterlockedExchange64\_HLEAcquire](../intrinsics/interlockedexchange-intrinsic-functions.md)|HLE \[2\]|immintrin.h|\_\_int64 \_InterlockedExchange64\_HLEAcquire\(\_\_int64 volatile \*,\_\_int64\)|  
|[\_InterlockedExchange64\_HLERelease](../intrinsics/interlockedexchange-intrinsic-functions.md)|HLE \[2\]|immintrin.h|\_\_int64 \_InterlockedExchange64\_HLERelease\(\_\_int64 volatile \*,\_\_int64\)|  
|[\_InterlockedExchange8](../intrinsics/interlockedexchange-intrinsic-functions.md)||intrin.h|char \_InterlockedExchange8\(char volatile \*,char\)|  
|[\_InterlockedExchangeAdd](../intrinsics/interlockedexchangeadd-intrinsic-functions.md)||intrin.h|long \_InterlockedExchangeAdd\(long volatile \*,long\)|  
|[\_InterlockedExchangeAdd\_HLEAcquire](../intrinsics/interlockedexchangeadd-intrinsic-functions.md)|HLE \[2\]|immintrin.h|long \_InterlockedExchangeAdd\_HLEAcquire\(long volatile \*,long\)|  
|[\_InterlockedExchangeAdd\_HLERelease](../intrinsics/interlockedexchangeadd-intrinsic-functions.md)|HLE \[2\]|immintrin.h|long \_InterlockedExchangeAdd\_HLERelease\(long volatile \*,long\)|  
|[\_InterlockedExchangeAdd16](../intrinsics/interlockedexchangeadd-intrinsic-functions.md)||intrin.h|short \_InterlockedExchangeAdd16\(short volatile \*, short\)|  
|[\_InterlockedExchangeAdd64](../intrinsics/interlockedexchangeadd-intrinsic-functions.md)||intrin.h|\_\_int64 \_InterlockedExchangeAdd64\(\_\_int64 volatile \*, \_\_int64\)|  
|[\_InterlockedExchangeAdd64\_HLEAcquire](../intrinsics/interlockedexchangeadd-intrinsic-functions.md)|HLE \[2\]|immintrin.h|\_\_int64 \_InterlockedExchangeAdd64\_HLEAcquire\(\_\_int64 volatile \*,\_\_int64\)|  
|[\_InterlockedExchangeAdd64\_HLERelease](../intrinsics/interlockedexchangeadd-intrinsic-functions.md)|HLE \[2\]|immintrin.h|\_\_int64 \_InterlockedExchangeAdd64\_HLERelease\(\_\_int64 volatile \*,\_\_int64\)|  
|[\_InterlockedExchangeAdd8](../intrinsics/interlockedexchangeadd-intrinsic-functions.md)||intrin.h|char \_InterlockedExchangeAdd8\(char volatile \*, char\)|  
|[\_InterlockedExchangePointer](../intrinsics/interlockedexchangepointer-intrinsic-functions.md)||intrin.h|void \* \_InterlockedExchangePointer\(void \*volatile \*,void \*\)|  
|[\_InterlockedExchangePointer\_HLEAcquire](../intrinsics/interlockedexchangepointer-intrinsic-functions.md)|HLE \[2\]|immintrin.h|void \* \_InterlockedExchangePointer\_HLEAcquire\(void \*volatile \*,void \*\)|  
|[\_InterlockedExchangePointer\_HLERelease](../intrinsics/interlockedexchangepointer-intrinsic-functions.md)|HLE \[2\]|immintrin.h|void \* \_InterlockedExchangePointer\_HLERelease\(void \*volatile \*,void \*\)|  
|[\_InterlockedIncrement](../intrinsics/interlockedincrement-intrinsic-functions.md)||intrin.h|long \_InterlockedIncrement\(long volatile \*\)|  
|[\_InterlockedIncrement16](../intrinsics/interlockedincrement-intrinsic-functions.md)||intrin.h|short \_InterlockedIncrement16\(short volatile \*Addend\)|  
|[\_InterlockedIncrement64](../intrinsics/interlockedincrement-intrinsic-functions.md)||intrin.h|\_\_int64 \_InterlockedIncrement64\(\_\_int64 volatile \*\)|  
|[\_InterlockedOr](../intrinsics/interlockedor-intrinsic-functions.md)||intrin.h|long \_InterlockedOr\(long volatile \*, long\)|  
|[\_InterlockedOr\_HLEAcquire](../intrinsics/interlockedor-intrinsic-functions.md)|HLE \[2\]|immintrin.h|long \_InterlockedOr\_HLEAcquire\(long volatile \*,long\)|  
|[\_InterlockedOr\_HLERelease](../intrinsics/interlockedor-intrinsic-functions.md)|HLE \[2\]|immintrin.h|long \_InterlockedOr\_HLERelease\(long volatile \*,long\)|  
|[\_InterlockedOr\_np](../intrinsics/interlockedor-intrinsic-functions.md)||intrin.h|long \_InterlockedOr\_np\(long \*,long\)|  
|[\_InterlockedOr16](../intrinsics/interlockedor-intrinsic-functions.md)||intrin.h|short \_InterlockedOr16\(short volatile \*, short\)|  
|[\_InterlockedOr16\_np](../intrinsics/interlockedor-intrinsic-functions.md)||intrin.h|short \_InterlockedOr16\_np\(short \*,short\)|  
|[\_InterlockedOr64](../intrinsics/interlockedor-intrinsic-functions.md)||intrin.h|\_\_int64 \_InterlockedOr64\(\_\_int64 volatile \*, \_\_int64\)|  
|[\_InterlockedOr64\_HLEAcquire](../intrinsics/interlockedor-intrinsic-functions.md)|HLE \[2\]|immintrin.h|\_\_int64 \_InterlockedOr64\_HLEAcquire\(\_\_int64 volatile \*,\_\_int64\)|  
|[\_InterlockedOr64\_HLERelease](../intrinsics/interlockedor-intrinsic-functions.md)|HLE \[2\]|immintrin.h|\_\_int64 \_InterlockedOr64\_HLERelease\(\_\_int64 volatile \*,\_\_int64\)|  
|[\_InterlockedOr64\_np](../intrinsics/interlockedor-intrinsic-functions.md)||intrin.h|\_\_int64 \_InterlockedOr64\_np\(\_\_int64 \*,\_\_int64\)|  
|[\_InterlockedOr8](../intrinsics/interlockedor-intrinsic-functions.md)||intrin.h|char \_InterlockedOr8\(char volatile \*, char\)|  
|[\_InterlockedOr8\_np](../intrinsics/interlockedor-intrinsic-functions.md)||intrin.h|char \_InterlockedOr8\_np\(char \*,char\)|  
|[\_InterlockedXor](../intrinsics/interlockedxor-intrinsic-functions.md)||intrin.h|long \_InterlockedXor\(long volatile \*, long\)|  
|[\_InterlockedXor\_HLEAcquire](../intrinsics/interlockedxor-intrinsic-functions.md)|HLE \[2\]|immintrin.h|long \_InterlockedXor\_HLEAcquire\(long volatile \*,long\)|  
|[\_InterlockedXor\_HLERelease](../intrinsics/interlockedxor-intrinsic-functions.md)|HLE \[2\]|immintrin.h|long \_InterlockedXor\_HLERelease\(long volatile \*,long\)|  
|[\_InterlockedXor\_np](../intrinsics/interlockedxor-intrinsic-functions.md)||intrin.h|long \_InterlockedXor\_np\(long \*,long\)|  
|[\_InterlockedXor16](../intrinsics/interlockedxor-intrinsic-functions.md)||intrin.h|short \_InterlockedXor16\(short volatile \*, short\)|  
|[\_InterlockedXor16\_np](../intrinsics/interlockedxor-intrinsic-functions.md)||intrin.h|short \_InterlockedXor16\_np\(short \*,short\)|  
|[\_InterlockedXor64](../intrinsics/interlockedxor-intrinsic-functions.md)||intrin.h|\_\_int64 \_InterlockedXor64\(\_\_int64 volatile \*, \_\_int64\)|  
|[\_InterlockedXor64\_HLEAcquire](../intrinsics/interlockedxor-intrinsic-functions.md)|HLE \[2\]|immintrin.h|\_\_int64 \_InterlockedXor64\_HLEAcquire\(\_\_int64 volatile \*,\_\_int64\)|  
|[\_InterlockedXor64\_HLERelease](../intrinsics/interlockedxor-intrinsic-functions.md)|HLE \[2\]|immintrin.h|\_\_int64 \_InterlockedXor64\_HLERelease\(\_\_int64 volatile \*,\_\_int64\)|  
|[\_InterlockedXor64\_np](../intrinsics/interlockedxor-intrinsic-functions.md)||intrin.h|\_\_int64 \_InterlockedXor64\_np\(\_\_int64 \*,\_\_int64\)|  
|[\_InterlockedXor8](../intrinsics/interlockedxor-intrinsic-functions.md)||intrin.h|char \_InterlockedXor8\(char volatile \*, char\)|  
|[\_InterlockedXor8\_np](../intrinsics/interlockedxor-intrinsic-functions.md)||intrin.h|char \_InterlockedXor8\_np\(char \*,char\)|  
|[\_\_invlpg](../intrinsics/invlpg.md)||intrin.h|void \_\_invlpg\(void\*\)|  
|[\_invpcid](http://go.microsoft.com/fwlink/p/?LinkId=512130)|INVPCID \[2\]|immintrin.h|void \_invpcid\(unsigned int,void \*\)|  
|[\_\_inword](../intrinsics/inword.md)||intrin.h|unsigned short \_\_inword\(unsigned short Port\)|  
|[\_\_inwordstring](../intrinsics/inwordstring.md)||intrin.h|void \_\_inwordstring\(unsigned short Port,unsigned short \*Buffer,unsigned long Count\)|  
|\_lgdt||intrin.h|void \_lgdt\(void\*\)|  
|[\_\_lidt](../intrinsics/lidt.md)||intrin.h|void \_\_lidt\(void\*\)|  
|[\_\_ll\_lshift](../intrinsics/ll-lshift.md)||intrin.h|unsigned \_\_int64 \[pascal\/cdecl\] \_\_ll\_lshift\(unsigned \_\_int64,int\)|  
|[\_\_ll\_rshift](../intrinsics/ll-rshift.md)||intrin.h|\_\_int64 \[pascal\/cdecl\] \_\_ll\_rshift\(\_\_int64,int\)|  
|\_\_llwpcb|LWP \[1\]|ammintrin.h|void \_\_llwpcb\(void \*\)|  
|\_load\_be\_u16<br /><br /> [\_loadbe\_i16](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_loadbe_i16&expand=3071)|MOVBE|immintrin.h|unsigned short \_load\_be\_u16\(void const\*\);<br /><br /> short \_loadbe\_i16\(void const\*\); \[3\]|  
|\_load\_be\_u32<br /><br /> [\_loadbe\_i32](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_loadbe_i32&expand=3072)|MOVBE|immintrin.h|unsigned int \_load\_be\_u32\(void const\*\);<br /><br /> int \_loadbe\_i32\(void const\*\); \[3\]|  
|\_load\_be\_u64<br /><br /> [\_loadbe\_i64](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_loadbe_i64&expand=3073)|MOVBE|immintrin.h|unsigned \_\_int64 \_load\_be\_u64\(void const\*\);<br /><br /> \_\_int64 \_loadbe\_i64\(void const\*\); \[3\]|  
|\_\_lwpins32|LWP \[1\]|ammintrin.h|unsigned char \_\_lwpins32\(unsigned int,unsigned int,unsigned int\)|  
|\_\_lwpins64|LWP \[1\]|ammintrin.h|unsigned char \_\_lwpins64\(unsigned \_\_int64,unsigned int,unsigned int\)|  
|\_\_lwpval32|LWP \[1\]|ammintrin.h|void \_\_lwpval32\(unsigned int,unsigned int,unsigned int\)|  
|\_\_lwpval64|LWP \[1\]|ammintrin.h|void \_\_lwpval64\(unsigned \_\_int64,unsigned int,unsigned int\)|  
|[\_\_lzcnt](../intrinsics/lzcnt16-lzcnt-lzcnt64.md)|LZCNT|intrin.h|unsigned int \_\_lzcnt\(unsigned int\)|  
|[\_lzcnt\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI|ammintrin.h, immintrin.h|unsigned int \_lzcnt\_u32\(unsigned int\)|  
|[\_lzcnt\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI|ammintrin.h, immintrin.h|unsigned \_\_int64 \_lzcnt\_u64\(unsigned \_\_int64\)|  
|[\_\_lzcnt16](../intrinsics/lzcnt16-lzcnt-lzcnt64.md)|LZCNT|intrin.h|unsigned short \_\_lzcnt16\(unsigned short\)|  
|[\_\_lzcnt64](../intrinsics/lzcnt16-lzcnt-lzcnt64.md)|LZCNT|intrin.h|unsigned \_\_int64 \_\_lzcnt64\(unsigned \_\_int64\)|  
|\_m\_prefetch|3DNOW|intrin.h|void \_m\_prefetch\(void\*\)|  
|\_m\_prefetchw|3DNOW|intrin.h|void \_m\_prefetchw\(void\*\)|  
|[\_mm\_abs\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_abs\_epi16\(\_\_m128i\)|  
|[\_mm\_abs\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_abs\_epi32\(\_\_m128i\)|  
|[\_mm\_abs\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_abs\_epi8\(\_\_m128i\)|  
|[\_mm\_add\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_add\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_add\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_add\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_add\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_add\_epi64\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_add\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_add\_epi8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_add\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_add\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_add\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_add\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_add\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_add\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_add\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_add\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_adds\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_adds\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_adds\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_adds\_epi8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_adds\_epu16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_adds\_epu16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_adds\_epu8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_adds\_epu8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_addsub\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE3|intrin.h|\_\_m128d \_mm\_addsub\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_addsub\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE3|intrin.h|\_\_m128 \_mm\_addsub\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_aesdec\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AESNI \[2\]|immintrin.h|\_\_m128i \_mm\_aesdec\_si128\( \_\_m128i,\_\_m128i \)|  
|[\_mm\_aesdeclast\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AESNI \[2\]|immintrin.h|\_\_m128i \_mm\_aesdeclast\_si128\( \_\_m128i,\_\_m128i \)|  
|[\_mm\_aesenc\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AESNI \[2\]|immintrin.h|\_\_m128i \_mm\_aesenc\_si128\( \_\_m128i,\_\_m128i \)|  
|[\_mm\_aesenclast\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AESNI \[2\]|immintrin.h|\_\_m128i \_mm\_aesenclast\_si128\( \_\_m128i,\_\_m128i \)|  
|[\_mm\_aesimc\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AESNI \[2\]|immintrin.h|\_\_m128i \_mm\_aesimc\_si128 \(\_\_m128i \)|  
|[\_mm\_aeskeygenassist\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AESNI \[2\]|immintrin.h|\_\_m128i \_mm\_aeskeygenassist\_si128 \(\_\_m128i,const int \)|  
|[\_mm\_alignr\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_alignr\_epi8\(\_\_m128i,\_\_m128i,int\)|  
|[\_mm\_and\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_and\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_and\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_and\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_and\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_and\_si128\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_andnot\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_andnot\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_andnot\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_andnot\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_andnot\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_andnot\_si128\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_avg\_epu16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_avg\_epu16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_avg\_epu8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_avg\_epu8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_blend\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_blend\_epi16 \(\_\_m128i,\_\_m128i,const int \)|  
|[\_mm\_blend\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_blend\_epi32\(\_\_m128i,\_\_m128i,const int\)|  
|[\_mm\_blend\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128d \_mm\_blend\_pd \(\_\_m128d,\_\_m128d,const int \)|  
|[\_mm\_blend\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128  \_mm\_blend\_ps \(\_\_m128,\_\_m128,const int \)|  
|[\_mm\_blendv\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_blendv\_epi8 \(\_\_m128i,\_\_m128i,\_\_m128i \)|  
|[\_mm\_blendv\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128d \_mm\_blendv\_pd\(\_\_m128d,\_\_m128d,\_\_m128d\)|  
|[\_mm\_blendv\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128  \_mm\_blendv\_ps\(\_\_m128,\_\_m128,\_\_m128 \)|  
|[\_mm\_broadcast\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128 \_mm\_broadcast\_ss\(float const \*\)|  
|[\_mm\_broadcastb\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_broadcastb\_epi8\(\_\_m128i\)|  
|[\_mm\_broadcastd\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_broadcastd\_epi32\(\_\_m128i\)|  
|[\_mm\_broadcastq\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_broadcastq\_epi64\(\_\_m128i\)|  
|[\_mm\_broadcastsd\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128d \_mm\_broadcastsd\_pd\(\_\_m128d\)|  
|[\_mm\_broadcastss\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128 \_mm\_broadcastss\_ps\(\_\_m128\)|  
|[\_mm\_broadcastw\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_broadcastw\_epi16\(\_\_m128i\)|  
|[\_mm\_castpd\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128  \_mm\_castpd\_ps\(\_\_m128d\)|  
|[\_mm\_castpd\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_castpd\_si128\(\_\_m128d\)|  
|[\_mm\_castps\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128d \_mm\_castps\_pd\(\_\_m128\)|  
|[\_mm\_castps\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_castps\_si128\(\_\_m128\)|  
|[\_mm\_castsi128\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128d \_mm\_castsi128\_pd\(\_\_m128i\)|  
|[\_mm\_castsi128\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128  \_mm\_castsi128\_ps\(\_\_m128i\)|  
|[\_mm\_clflush](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_clflush\(void const \*\)|  
|[\_mm\_clmulepi64\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|PCLMULQDQ \[2\]|immintrin.h|\_\_m128i \_mm\_clmulepi64\_si128 \(\_\_m128i,\_\_m128i,const int \)|  
|\_mm\_cmov\_si128|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_cmov\_si128\(\_\_m128i,\_\_m128i,\_\_m128i\)|  
|[\_mm\_cmp\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128d  \_mm\_cmp\_pd\(\_\_m128d,\_\_m128d,const int\)|  
|[\_mm\_cmp\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128  \_mm\_cmp\_ps\(\_\_m128,\_\_m128,const int\)|  
|[\_mm\_cmp\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128d  \_mm\_cmp\_sd\(\_\_m128d,\_\_m128d,const int\)|  
|[\_mm\_cmp\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128  \_mm\_cmp\_ss\(\_\_m128,\_\_m128,const int\)|  
|[\_mm\_cmpeq\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cmpeq\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_cmpeq\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cmpeq\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_cmpeq\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_cmpeq\_epi64\(\_\_m128i,\_\_m128i \)|  
|[\_mm\_cmpeq\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cmpeq\_epi8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_cmpeq\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpeq\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpeq\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpeq\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpeq\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpeq\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpeq\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpeq\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpestra](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|int \_mm\_cmpestra\(\_\_m128i,int,\_\_m128i,int,const int\)|  
|[\_mm\_cmpestrc](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|int \_mm\_cmpestrc\(\_\_m128i,int,\_\_m128i,int,const int\)|  
|[\_mm\_cmpestri](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|int \_mm\_cmpestri\(\_\_m128i,int,\_\_m128i,int,const int\)|  
|[\_mm\_cmpestrm](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|\_\_m128i \_mm\_cmpestrm\(\_\_m128i,int,\_\_m128i,int,const int\)|  
|[\_mm\_cmpestro](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|int \_mm\_cmpestro\(\_\_m128i,int,\_\_m128i,int,const int\)|  
|[\_mm\_cmpestrs](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|int \_mm\_cmpestrs\(\_\_m128i,int,\_\_m128i,int,const int\)|  
|[\_mm\_cmpestrz](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|int \_mm\_cmpestrz\(\_\_m128i,int,\_\_m128i,int,const int\)|  
|[\_mm\_cmpge\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpge\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpge\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpge\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpge\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpge\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpge\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpge\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpgt\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cmpgt\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_cmpgt\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cmpgt\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_cmpgt\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|\_\_m128i \_mm\_cmpgt\_epi64\(\_\_m128i,\_\_m128i \)|  
|[\_mm\_cmpgt\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cmpgt\_epi8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_cmpgt\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpgt\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpgt\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpgt\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpgt\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpgt\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpgt\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpgt\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpistra](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|int \_mm\_cmpistra\(\_\_m128i,\_\_m128i,const int\)|  
|[\_mm\_cmpistrc](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|int \_mm\_cmpistrc\(\_\_m128i,\_\_m128i,const int\)|  
|[\_mm\_cmpistri](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|int \_mm\_cmpistri\(\_\_m128i,\_\_m128i,const int\)|  
|[\_mm\_cmpistrm](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|\_\_m128i \_mm\_cmpistrm\(\_\_m128i,\_\_m128i,const int\)|  
|[\_mm\_cmpistro](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|int \_mm\_cmpistro\(\_\_m128i,\_\_m128i,const int\)|  
|[\_mm\_cmpistrs](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|int \_mm\_cmpistrs\(\_\_m128i,\_\_m128i,const int\)|  
|[\_mm\_cmpistrz](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|int \_mm\_cmpistrz\(\_\_m128i,\_\_m128i,const int\)|  
|[\_mm\_cmple\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmple\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmple\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmple\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmple\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmple\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmple\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmple\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmplt\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cmplt\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_cmplt\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cmplt\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_cmplt\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cmplt\_epi8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_cmplt\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmplt\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmplt\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmplt\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmplt\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmplt\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmplt\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmplt\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpneq\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpneq\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpneq\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpneq\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpneq\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpneq\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpneq\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpneq\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpnge\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpnge\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpnge\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpnge\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpnge\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpnge\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpnge\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpnge\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpngt\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpngt\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpngt\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpngt\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpngt\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpngt\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpngt\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpngt\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpnle\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpnle\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpnle\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpnle\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpnle\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpnle\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpnle\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpnle\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpnlt\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpnlt\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpnlt\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpnlt\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpnlt\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpnlt\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpnlt\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpnlt\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpord\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpord\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpord\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpord\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpord\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpord\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpord\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpord\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpunord\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpunord\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpunord\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpunord\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_cmpunord\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cmpunord\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_cmpunord\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cmpunord\_ss\(\_\_m128,\_\_m128\)|  
|\_mm\_com\_epi16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_com\_epi16\(\_\_m128i,\_\_m128i,int\)|  
|\_mm\_com\_epi32|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_com\_epi32\(\_\_m128i,\_\_m128i,int\)|  
|\_mm\_com\_epi64|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_com\_epi32\(\_\_m128i,\_\_m128i,int\)|  
|\_mm\_com\_epi8|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_com\_epi8\(\_\_m128i,\_\_m128i,int\)|  
|\_mm\_com\_epu16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_com\_epu16\(\_\_m128i,\_\_m128i,int\)|  
|\_mm\_com\_epu32|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_com\_epu32\(\_\_m128i,\_\_m128i,int\)|  
|\_mm\_com\_epu64|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_com\_epu32\(\_\_m128i,\_\_m128i,int\)|  
|\_mm\_com\_epu8|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_com\_epu8\(\_\_m128i,\_\_m128i,int\)|  
|[\_mm\_comieq\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_comieq\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_comieq\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|int \_mm\_comieq\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_comige\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_comige\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_comige\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|int \_mm\_comige\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_comigt\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_comigt\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_comigt\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|int \_mm\_comigt\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_comile\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_comile\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_comile\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|int \_mm\_comile\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_comilt\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_comilt\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_comilt\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|int \_mm\_comilt\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_comineq\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_comineq\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_comineq\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|int \_mm\_comineq\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_crc32\_u16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|unsigned int \_mm\_crc32\_u16\(unsigned int,unsigned short\)|  
|[\_mm\_crc32\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|unsigned int \_mm\_crc32\_u32\(unsigned int,unsigned int\)|  
|[\_mm\_crc32\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|unsigned \_\_int64 \_mm\_crc32\_u64\(unsigned \_\_int64,unsigned \_\_int64\)|  
|[\_mm\_crc32\_u8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE42|intrin.h|unsigned int \_mm\_crc32\_u8\(unsigned int,unsigned char\)|  
|[\_mm\_cvt\_si2ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_cvt\_si2ss\(\_\_m128,int\)|  
|[\_mm\_cvt\_ss2si](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|int \_mm\_cvt\_ss2si\(\_\_m128\)|  
|[\_mm\_cvtepi16\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_cvtepi16\_epi32\(\_\_m128i \)|  
|[\_mm\_cvtepi16\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_cvtepi16\_epi64\(\_\_m128i \)|  
|[\_mm\_cvtepi32\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_cvtepi32\_epi64\(\_\_m128i \)|  
|[\_mm\_cvtepi32\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cvtepi32\_pd\(\_\_m128i\)|  
|[\_mm\_cvtepi32\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128 \_mm\_cvtepi32\_ps\(\_\_m128i\)|  
|[\_mm\_cvtepi8\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_cvtepi8\_epi16 \(\_\_m128i \)|  
|[\_mm\_cvtepi8\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_cvtepi8\_epi32 \(\_\_m128i \)|  
|[\_mm\_cvtepi8\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_cvtepi8\_epi64 \(\_\_m128i \)|  
|[\_mm\_cvtepu16\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_cvtepu16\_epi32\(\_\_m128i \)|  
|[\_mm\_cvtepu16\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_cvtepu16\_epi64\(\_\_m128i \)|  
|[\_mm\_cvtepu32\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_cvtepu32\_epi64\(\_\_m128i \)|  
|[\_mm\_cvtepu8\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_cvtepu8\_epi16 \(\_\_m128i \)|  
|[\_mm\_cvtepu8\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_cvtepu8\_epi32 \(\_\_m128i \)|  
|[\_mm\_cvtepu8\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_cvtepu8\_epi64 \(\_\_m128i \)|  
|[\_mm\_cvtpd\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cvtpd\_epi32\(\_\_m128d\)|  
|[\_mm\_cvtpd\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128 \_mm\_cvtpd\_ps\(\_\_m128d\)|  
|[\_mm\_cvtph\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|F16C \[2\]|immintrin.h|\_\_m128 \_mm\_cvtph\_ps\(\_\_m128i\)|  
|[\_mm\_cvtps\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cvtps\_epi32\(\_\_m128\)|  
|[\_mm\_cvtps\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cvtps\_pd\(\_\_m128\)|  
|[\_mm\_cvtps\_ph](http://go.microsoft.com/fwlink/p/?LinkId=512130)|F16C \[2\]|immintrin.h|\_\_m128i \_mm\_cvtps\_ph\(\_\_m128,const int\)|  
|[\_mm\_cvtsd\_f64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|double \_mm\_cvtsd\_f64\(\_\_m128d\)|  
|[\_mm\_cvtsd\_si32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_cvtsd\_si32\(\_\_m128d\)|  
|[\_mm\_cvtsd\_si64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_int64 \_mm\_cvtsd\_si64\(\_\_m128d\)|  
|[\_mm\_cvtsd\_si64x](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_int64 \_mm\_cvtsd\_si64x\(\_\_m128d a\)|  
|[\_mm\_cvtsd\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128 \_mm\_cvtsd\_ss\(\_\_m128,\_\_m128d\)|  
|[\_mm\_cvtsi128\_si32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_cvtsi128\_si32\(\_\_m128i\)|  
|[\_mm\_cvtsi128\_si64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_int64 \_mm\_cvtsi128\_si64\(\_\_m128i\)|  
|[\_mm\_cvtsi128\_si64x](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_int64 \_mm\_cvtsi128\_si64x\(\_\_m128i a\)|  
|[\_mm\_cvtsi32\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cvtsi32\_sd\(\_\_m128d,int\)|  
|[\_mm\_cvtsi32\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cvtsi32\_si128\(int\)|  
|[\_mm\_cvtsi64\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cvtsi64\_sd\(\_\_m128d,\_\_int64\)|  
|[\_mm\_cvtsi64\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cvtsi64\_si128\(\_\_int64\)|  
|[\_mm\_cvtsi64\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128  \_mm\_cvtsi64\_ss\(\_\_m128,\_\_int64\)|  
|[\_mm\_cvtsi64x\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cvtsi64x\_sd\(\_\_m128d a,\_\_int64 b\)|  
|[\_mm\_cvtsi64x\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cvtsi64x\_si128\(\_\_int64 a\)|  
|[\_mm\_cvtsi64x\_ss](../intrinsics/mm-cvtsi64x-ss.md)|SSE2|intrin.h|\_\_m128 \_mm\_cvtsi64x\_ss\(\_\_m128 a,\_\_int64 b\)|  
|[\_mm\_cvtss\_f32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|float \_mm\_cvtss\_f32\(\_\_m128\)|  
|[\_mm\_cvtss\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_cvtss\_sd\(\_\_m128d,\_\_m128\)|  
|[\_mm\_cvtss\_si64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_int64 \_mm\_cvtss\_si64\(\_\_m128\)|  
|[\_mm\_cvtss\_si64x](../intrinsics/mm-cvtss-si64x.md)|SSE2|intrin.h|\_\_int64 \_mm\_cvtss\_si64x\(\_\_m128 a\)|  
|[\_mm\_cvtt\_ss2si](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|int \_mm\_cvtt\_ss2si\(\_\_m128\)|  
|[\_mm\_cvttpd\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cvttpd\_epi32\(\_\_m128d\)|  
|[\_mm\_cvttps\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_cvttps\_epi32\(\_\_m128\)|  
|[\_mm\_cvttsd\_si32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_cvttsd\_si32\(\_\_m128d\)|  
|[\_mm\_cvttsd\_si64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_int64 \_mm\_cvttsd\_si64\(\_\_m128d\)|  
|[\_mm\_cvttsd\_si64x](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_int64 \_mm\_cvttsd\_si64x\(\_\_m128d a\)|  
|[\_mm\_cvttss\_si64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_int64 \_mm\_cvttss\_si64\(\_\_m128\)|  
|[\_mm\_cvttss\_si64x](../intrinsics/mm-cvttss-si64x.md)|SSE2|intrin.h|\_\_int64 \_mm\_cvttss\_si64x\(\_\_m128 a\)|  
|[\_mm\_div\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_div\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_div\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_div\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_div\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_div\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_div\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_div\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_dp\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128d \_mm\_dp\_pd\(\_\_m128d,\_\_m128d,const int \)|  
|[\_mm\_dp\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128  \_mm\_dp\_ps\(\_\_m128,\_\_m128,const int \)|  
|[\_mm\_extract\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_extract\_epi16\(\_\_m128i,int\)|  
|[\_mm\_extract\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|int   \_mm\_extract\_epi32\(\_\_m128i,const int \)|  
|[\_mm\_extract\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_int64 \_mm\_extract\_epi64\(\_\_m128i,const int \)|  
|[\_mm\_extract\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|int   \_mm\_extract\_epi8 \(\_\_m128i,const int \)|  
|[\_mm\_extract\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|int \_mm\_extract\_ps\(\_\_m128,const int \)|  
|[\_mm\_extract\_si64](../intrinsics/mm-extract-si64-mm-extracti-si64.md)|SSE4a|intrin.h|\_\_m128i \_mm\_extract\_si64\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_extracti\_si64](../intrinsics/mm-extract-si64-mm-extracti-si64.md)|SSE4a|intrin.h|\_\_m128i \_mm\_extracti\_si64\(\_\_m128i,int,int\)|  
|[\_mm\_fmadd\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128d \_mm\_fmadd\_pd \(\_\_m128d a,\_\_m128d b,\_\_m128d c\)|  
|[\_mm\_fmadd\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128 \_mm\_fmadd\_ps \(\_\_m128 a,\_\_m128 b,\_\_m128 c\)|  
|[\_mm\_fmadd\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128d \_mm\_fmadd\_sd \(\_\_m128d a,\_\_m128d b,\_\_m128d c\)|  
|[\_mm\_fmadd\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128 \_mm\_fmadd\_ss \(\_\_m128 a,\_\_m128 b,\_\_m128 c\)|  
|[\_mm\_fmaddsub\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128d \_mm\_fmaddsub\_pd \(\_\_m128d a,\_\_m128d b,\_\_m128d c\)|  
|[\_mm\_fmaddsub\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128 \_mm\_fmaddsub\_ps \(\_\_m128 a,\_\_m128 b,\_\_m128 c\)|  
|[\_mm\_fmsub\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128d \_mm\_fmsub\_pd \(\_\_m128d a,\_\_m128d b,\_\_m128d c\)|  
|[\_mm\_fmsub\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128 \_mm\_fmsub\_ps \(\_\_m128 a,\_\_m128 b,\_\_m128 c\)|  
|[\_mm\_fmsub\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128d \_mm\_fmsub\_sd \(\_\_m128d a,\_\_m128d b,\_\_m128d c\)|  
|[\_mm\_fmsub\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128 \_mm\_fmsub\_ss \(\_\_m128 a,\_\_m128 b,\_\_m128 c\)|  
|[\_mm\_fmsubadd\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128d \_mm\_fmsubadd\_pd \(\_\_m128d a,\_\_m128d b,\_\_m128d c\)|  
|[\_mm\_fmsubadd\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128 \_mm\_fmsubadd\_ps \(\_\_m128 a,\_\_m128 b,\_\_m128 c\)|  
|[\_mm\_fnmadd\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128d \_mm\_fnmadd\_pd \(\_\_m128d a,\_\_m128d b,\_\_m128d c\)|  
|[\_mm\_fnmadd\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128 \_mm\_fnmadd\_ps \(\_\_m128 a,\_\_m128 b,\_\_m128 c\)|  
|[\_mm\_fnmadd\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128d \_mm\_fnmadd\_sd \(\_\_m128d a,\_\_m128d b,\_\_m128d c\)|  
|[\_mm\_fnmadd\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128 \_mm\_fnmadd\_ss \(\_\_m128 a,\_\_m128 b,\_\_m128 c\)|  
|[\_mm\_fnmsub\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128d \_mm\_fnmsub\_pd \(\_\_m128d a,\_\_m128d b,\_\_m128d c\)|  
|[\_mm\_fnmsub\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128 \_mm\_fnmsub\_ps \(\_\_m128 a,\_\_m128 b,\_\_m128 c\)|  
|[\_mm\_fnmsub\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128d \_mm\_fnmsub\_sd \(\_\_m128d a,\_\_m128d b,\_\_m128d c\)|  
|[\_mm\_fnmsub\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m128 \_mm\_fnmsub\_ss \(\_\_m128 a,\_\_m128 b,\_\_m128 c\)|  
|\_mm\_frcz\_pd|XOP \[1\]|ammintrin.h|\_\_m128d \_mm\_frcz\_pd\(\_\_m128d\)|  
|\_mm\_frcz\_ps|XOP \[1\]|ammintrin.h|\_\_m128 \_mm\_frcz\_ps\(\_\_m128\)|  
|\_mm\_frcz\_sd|XOP \[1\]|ammintrin.h|\_\_m128d \_mm\_frcz\_sd\(\_\_m128d,\_\_m128d\)|  
|\_mm\_frcz\_ss|XOP \[1\]|ammintrin.h|\_\_m128 \_mm\_frcz\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_getcsr](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|unsigned int \_mm\_getcsr\(void\)|  
|[\_mm\_hadd\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_hadd\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_hadd\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_hadd\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_hadd\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE3|intrin.h|\_\_m128d \_mm\_hadd\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_hadd\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE3|intrin.h|\_\_m128 \_mm\_hadd\_ps\(\_\_m128,\_\_m128\)|  
|\_mm\_haddd\_epi16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_haddd\_epi16\(\_\_m128i\)|  
|\_mm\_haddd\_epi8|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_haddd\_epi8\(\_\_m128i\)|  
|\_mm\_haddd\_epu16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_haddd\_epu16\(\_\_m128i\)|  
|\_mm\_haddd\_epu8|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_haddd\_epu8\(\_\_m128i\)|  
|\_mm\_haddq\_epi16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_haddq\_epi16\(\_\_m128i\)|  
|\_mm\_haddq\_epi32|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_haddq\_epi32\(\_\_m128i\)|  
|\_mm\_haddq\_epi8|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_haddq\_epi8\(\_\_m128i\)|  
|\_mm\_haddq\_epu16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_haddq\_epu16\(\_\_m128i\)|  
|\_mm\_haddq\_epu32|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_haddq\_epu32\(\_\_m128i\)|  
|\_mm\_haddq\_epu8|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_haddq\_epu8\(\_\_m128i\)|  
|[\_mm\_hadds\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_hadds\_epi16\(\_\_m128i,\_\_m128i\)|  
|\_mm\_haddw\_epi8|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_haddw\_epi8\(\_\_m128i\)|  
|\_mm\_haddw\_epu8|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_haddw\_epu8\(\_\_m128i\)|  
|[\_mm\_hsub\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_hsub\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_hsub\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_hsub\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_hsub\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE3|intrin.h|\_\_m128d \_mm\_hsub\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_hsub\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE3|intrin.h|\_\_m128 \_mm\_hsub\_ps\(\_\_m128,\_\_m128\)|  
|\_mm\_hsubd\_epi16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_hsubd\_epi16\(\_\_m128i\)|  
|\_mm\_hsubq\_epi32|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_hsubq\_epi32\(\_\_m128i\)|  
|[\_mm\_hsubs\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_hsubs\_epi16\(\_\_m128i,\_\_m128i\)|  
|\_mm\_hsubw\_epi8|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_hsubw\_epi8\(\_\_m128i\)|  
|[\_mm\_i32gather\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_i32gather\_epi32\(int const \*base,\_\_m128i index,const int scale\)|  
|[\_mm\_i32gather\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_i32gather\_epi64\(\_\_int64 const \*base,\_\_m128i index,const int scale\)|  
|[\_mm\_i32gather\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128d \_mm\_i32gather\_pd\(double const \*base,\_\_m128i index,const int scale\)|  
|[\_mm\_i32gather\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128 \_mm\_i32gather\_ps\(float const \*base,\_\_m128i index,const int scale\)|  
|[\_mm\_i64gather\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_i64gather\_epi32\(int const \*base,\_\_m128i index,const int scale\)|  
|[\_mm\_i64gather\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_i64gather\_epi64\(\_\_int64 const \*base,\_\_m128i index,const int scale\)|  
|[\_mm\_i64gather\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128d \_mm\_i64gather\_pd\(double const \*base,\_\_m128i index,const int scale\)|  
|[\_mm\_i64gather\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128 \_mm\_i64gather\_ps\(float const \*base,\_\_m128i index,const int scale\)|  
|[\_mm\_insert\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_insert\_epi16\(\_\_m128i,int,int\)|  
|[\_mm\_insert\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_insert\_epi32\(\_\_m128i,int,const int \)|  
|[\_mm\_insert\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_insert\_epi64\(\_\_m128i,\_\_int64,const int \)|  
|[\_mm\_insert\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_insert\_epi8 \(\_\_m128i,int,const int \)|  
|[\_mm\_insert\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128 \_mm\_insert\_ps\(\_\_m128,\_\_m128,const int \)|  
|[\_mm\_insert\_si64](../intrinsics/mm-insert-si64-mm-inserti-si64.md)|SSE4a|intrin.h|\_\_m128i \_mm\_insert\_si64\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_inserti\_si64](../intrinsics/mm-insert-si64-mm-inserti-si64.md)|SSE4a|intrin.h|\_\_m128i \_mm\_inserti\_si64\(\_\_m128i,\_\_m128i,int,int\)|  
|[\_mm\_lddqu\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE3|intrin.h|\_\_m128i \_mm\_lddqu\_si128\(\_\_m128i const\*\)|  
|[\_mm\_lfence](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_lfence\(void\)|  
|[\_mm\_load\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_load\_pd\(double\*\)|  
|[\_mm\_load\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_load\_ps\(float\*\)|  
|[\_mm\_load\_ps1](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_load\_ps1\(float\*\)|  
|[\_mm\_load\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_load\_sd\(double\*\)|  
|[\_mm\_load\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_load\_si128\(\_\_m128i\*\)|  
|[\_mm\_load\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_load\_ss\(float\*\)|  
|[\_mm\_load1\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_load1\_pd\(double\*\)|  
|[\_mm\_loaddup\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE3|intrin.h|\_\_m128d \_mm\_loaddup\_pd\(double const\*\)|  
|[\_mm\_loadh\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_loadh\_pd\(\_\_m128d,double\*\)|  
|[\_mm\_loadh\_pi](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_loadh\_pi\(\_\_m128,\_\_m64\*\)|  
|[\_mm\_loadl\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_loadl\_epi64\(\_\_m128i\*\)|  
|[\_mm\_loadl\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_loadl\_pd\(\_\_m128d,double\*\)|  
|[\_mm\_loadl\_pi](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_loadl\_pi\(\_\_m128,\_\_m64\*\)|  
|[\_mm\_loadr\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_loadr\_pd\(double\*\)|  
|[\_mm\_loadr\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_loadr\_ps\(float\*\)|  
|[\_mm\_loadu\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_loadu\_pd\(double\*\)|  
|[\_mm\_loadu\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_loadu\_ps\(float\*\)|  
|[\_mm\_loadu\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_loadu\_si128\(\_\_m128i\*\)|  
|\_mm\_macc\_epi16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_macc\_epi16\(\_\_m128i,\_\_m128i,\_\_m128i\)|  
|\_mm\_macc\_epi32|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_macc\_epi32\(\_\_m128i,\_\_m128i,\_\_m128i\)|  
|\_mm\_macc\_pd|FMA4 \[1\]|ammintrin.h|\_\_m128d \_mm\_macc\_pd\(\_\_m128d,\_\_m128d,\_\_m128d\)|  
|\_mm\_macc\_ps|FMA4 \[1\]|ammintrin.h|\_\_m128 \_mm\_macc\_ps\(\_\_m128,\_\_m128,\_\_m128\)|  
|\_mm\_macc\_sd|FMA4 \[1\]|ammintrin.h|\_\_m128d \_mm\_macc\_sd\(\_\_m128d,\_\_m128d,\_\_m128d\)|  
|\_mm\_macc\_ss|FMA4 \[1\]|ammintrin.h|\_\_m128 \_mm\_macc\_ss\(\_\_m128,\_\_m128,\_\_m128\)|  
|\_mm\_maccd\_epi16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_maccd\_epi16\(\_\_m128i,\_\_m128i,\_\_m128i\)|  
|\_mm\_macchi\_epi32|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_macchi\_epi32\(\_\_m128i,\_\_m128i,\_\_m128i\)|  
|\_mm\_macclo\_epi32|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_macclo\_epi32\(\_\_m128i,\_\_m128i,\_\_m128i\)|  
|\_mm\_maccs\_epi16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_maccs\_epi16\(\_\_m128i,\_\_m128i,\_\_m128i\)|  
|\_mm\_maccs\_epi32|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_maccs\_epi32\(\_\_m128i,\_\_m128i,\_\_m128i\)|  
|\_mm\_maccsd\_epi16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_maccsd\_epi16\(\_\_m128i,\_\_m128i,\_\_m128i\)|  
|\_mm\_maccshi\_epi32|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_maccshi\_epi32\(\_\_m128i,\_\_m128i,\_\_m128i\)|  
|\_mm\_maccslo\_epi32|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_maccslo\_epi32\(\_\_m128i,\_\_m128i,\_\_m128i\)|  
|[\_mm\_madd\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_madd\_epi16\(\_\_m128i,\_\_m128i\)|  
|\_mm\_maddd\_epi16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_maddd\_epi16\(\_\_m128i,\_\_m128i,\_\_m128i\)|  
|\_mm\_maddsd\_epi16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_maddsd\_epi16\(\_\_m128i,\_\_m128i,\_\_m128i\)|  
|\_mm\_maddsub\_pd|FMA4 \[1\]|ammintrin.h|\_\_m128d \_mm\_maddsub\_pd\(\_\_m128d,\_\_m128d,\_\_m128d\)|  
|\_mm\_maddsub\_ps|FMA4 \[1\]|ammintrin.h|\_\_m128 \_mm\_maddsub\_ps\(\_\_m128,\_\_m128,\_\_m128\)|  
|[\_mm\_maddubs\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_maddubs\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_mask\_i32gather\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_mask\_i32gather\_epi32\(\_\_m128i src,int const \*base,\_\_m128i index,\_\_m128i mask,const int scale\)|  
|[\_mm\_mask\_i32gather\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_mask\_i32gather\_epi64\(\_\_m128i src,\_\_int64 const \*base,\_\_m128i index,\_\_m128i mask,const int scale\)|  
|[\_mm\_mask\_i32gather\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128d \_mm\_mask\_i32gather\_pd\(\_\_m128d src,double const \*base,\_\_m128i index,\_\_m128d mask,const int scale\)|  
|[\_mm\_mask\_i32gather\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128 \_mm\_mask\_i32gather\_ps\(\_\_m128 src,float const \*base,\_\_m128i index,\_\_m128 mask,const int scale\)|  
|[\_mm\_mask\_i64gather\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_mask\_i64gather\_epi32\(\_\_m128i src,int const \*base,\_\_m128i index,\_\_m128i mask,const int scale\)|  
|[\_mm\_mask\_i64gather\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_mask\_i64gather\_epi64\(\_\_m128i src,\_\_int64 const \*base,\_\_m128i index,\_\_m128i mask,const int scale\)|  
|[\_mm\_mask\_i64gather\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128d \_mm\_mask\_i64gather\_pd\(\_\_m128d src,double const \*base,\_\_m128i index,\_\_m128d mask,const int scale\)|  
|[\_mm\_mask\_i64gather\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128 \_mm\_mask\_i64gather\_ps\(\_\_m128 src,float const \*base,\_\_m128i index,\_\_m128 mask,const int scale\)|  
|[\_mm\_maskload\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_maskload\_epi32\(int const \*,\_\_m128i\)|  
|[\_mm\_maskload\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_maskload\_epi64\( \_\_int64 const \*,\_\_m128i\)|  
|[\_mm\_maskload\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128d \_mm\_maskload\_pd\(double const \*,\_\_m128i\)|  
|[\_mm\_maskload\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128 \_mm\_maskload\_ps\(float const \*,\_\_m128i\)|  
|[\_mm\_maskmoveu\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_maskmoveu\_si128\(\_\_m128i,\_\_m128i,char\*\)|  
|[\_mm\_maskstore\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|void \_mm\_maskstore\_epi32\(int \*,\_\_m128i,\_\_m128i\)|  
|[\_mm\_maskstore\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|void \_mm\_maskstore\_epi64\(\_\_int64 \*,\_\_m128i,\_\_m128i\)|  
|[\_mm\_maskstore\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|void \_mm\_maskstore\_pd\(double \*,\_\_m128i,\_\_m128d\)|  
|[\_mm\_maskstore\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|void \_mm\_maskstore\_ps\(float \*,\_\_m128i,\_\_m128\)|  
|[\_mm\_max\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_max\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_max\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_max\_epi32\(\_\_m128i,\_\_m128i \)|  
|[\_mm\_max\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_max\_epi8 \(\_\_m128i,\_\_m128i \)|  
|[\_mm\_max\_epu16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_max\_epu16\(\_\_m128i,\_\_m128i \)|  
|[\_mm\_max\_epu32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_max\_epu32\(\_\_m128i,\_\_m128i \)|  
|[\_mm\_max\_epu8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_max\_epu8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_max\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_max\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_max\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_max\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_max\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_max\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_max\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_max\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_mfence](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_mfence\(void\)|  
|[\_mm\_min\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_min\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_min\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_min\_epi32\(\_\_m128i,\_\_m128i \)|  
|[\_mm\_min\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_min\_epi8 \(\_\_m128i,\_\_m128i \)|  
|[\_mm\_min\_epu16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_min\_epu16\(\_\_m128i,\_\_m128i \)|  
|[\_mm\_min\_epu32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_min\_epu32\(\_\_m128i,\_\_m128i \)|  
|[\_mm\_min\_epu8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_min\_epu8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_min\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_min\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_min\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_min\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_min\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_min\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_min\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_min\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_minpos\_epu16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_minpos\_epu16\(\_\_m128i \)|  
|[\_mm\_monitor](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE3|intrin.h|void \_mm\_monitor\(void const\*,unsigned int,unsigned int\)|  
|[\_mm\_move\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_move\_epi64\(\_\_m128i\)|  
|[\_mm\_move\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_move\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_move\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_move\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_movedup\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE3|intrin.h|\_\_m128d \_mm\_movedup\_pd\(\_\_m128d\)|  
|[\_mm\_movehdup\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE3|intrin.h|\_\_m128 \_mm\_movehdup\_ps\(\_\_m128\)|  
|[\_mm\_movehl\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_movehl\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_moveldup\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE3|intrin.h|\_\_m128 \_mm\_moveldup\_ps\(\_\_m128\)|  
|[\_mm\_movelh\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_movelh\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_movemask\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_movemask\_epi8\(\_\_m128i\)|  
|[\_mm\_movemask\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_movemask\_pd\(\_\_m128d\)|  
|[\_mm\_movemask\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|int \_mm\_movemask\_ps\(\_\_m128\)|  
|[\_mm\_mpsadbw\_epu8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_mpsadbw\_epu8\(\_\_m128i s1,\_\_m128i,const int\)|  
|\_mm\_msub\_pd|FMA4 \[1\]|ammintrin.h|\_\_m128d \_mm\_msub\_pd\(\_\_m128d,\_\_m128d,\_\_m128d\)|  
|\_mm\_msub\_ps|FMA4 \[1\]|ammintrin.h|\_\_m128 \_mm\_msub\_ps\(\_\_m128,\_\_m128,\_\_m128\)|  
|\_mm\_msub\_sd|FMA4 \[1\]|ammintrin.h|\_\_m128d \_mm\_msub\_sd\(\_\_m128d,\_\_m128d,\_\_m128d\)|  
|\_mm\_msub\_ss|FMA4 \[1\]|ammintrin.h|\_\_m128 \_mm\_msub\_ss\(\_\_m128,\_\_m128,\_\_m128\)|  
|\_mm\_msubadd\_pd|FMA4 \[1\]|ammintrin.h|\_\_m128d \_mm\_msubadd\_pd\(\_\_m128d,\_\_m128d,\_\_m128d\)|  
|\_mm\_msubadd\_ps|FMA4 \[1\]|ammintrin.h|\_\_m128 \_mm\_msubadd\_ps\(\_\_m128,\_\_m128,\_\_m128\)|  
|[\_mm\_mul\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_mul\_epi32\(\_\_m128i,\_\_m128i \)|  
|[\_mm\_mul\_epu32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_mul\_epu32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_mul\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_mul\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_mul\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_mul\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_mul\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_mul\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_mul\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_mul\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_mulhi\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_mulhi\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_mulhi\_epu16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_mulhi\_epu16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_mulhrs\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_mulhrs\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_mullo\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_mullo\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_mullo\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_mullo\_epi32\(\_\_m128i,\_\_m128i \)|  
|[\_mm\_mwait](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE3|intrin.h|void \_mm\_mwait\(unsigned int,unsigned int\)|  
|\_mm\_nmacc\_pd|FMA4 \[1\]|ammintrin.h|\_\_m128d \_mm\_nmacc\_pd\(\_\_m128d,\_\_m128d,\_\_m128d\)|  
|\_mm\_nmacc\_ps|FMA4 \[1\]|ammintrin.h|\_\_m128 \_mm\_nmacc\_ps\(\_\_m128,\_\_m128,\_\_m128\)|  
|\_mm\_nmacc\_sd|FMA4 \[1\]|ammintrin.h|\_\_m128d \_mm\_nmacc\_sd\(\_\_m128d,\_\_m128d,\_\_m128d\)|  
|\_mm\_nmacc\_ss|FMA4 \[1\]|ammintrin.h|\_\_m128 \_mm\_nmacc\_ss\(\_\_m128,\_\_m128,\_\_m128\)|  
|\_mm\_nmsub\_pd|FMA4 \[1\]|ammintrin.h|\_\_m128d \_mm\_nmsub\_pd\(\_\_m128d,\_\_m128d,\_\_m128d\)|  
|\_mm\_nmsub\_ps|FMA4 \[1\]|ammintrin.h|\_\_m128 \_mm\_nmsub\_ps\(\_\_m128,\_\_m128,\_\_m128\)|  
|\_mm\_nmsub\_sd|FMA4 \[1\]|ammintrin.h|\_\_m128d \_mm\_nmsub\_sd\(\_\_m128d,\_\_m128d,\_\_m128d\)|  
|\_mm\_nmsub\_ss|FMA4 \[1\]|ammintrin.h|\_\_m128 \_mm\_nmsub\_ss\(\_\_m128,\_\_m128,\_\_m128\)|  
|[\_mm\_or\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_or\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_or\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_or\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_or\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_or\_si128\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_packs\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_packs\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_packs\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_packs\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_packus\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_packus\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_packus\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_packus\_epi32\(\_\_m128i,\_\_m128i \)|  
|[\_mm\_pause](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_pause\(void\)|  
|\_mm\_perm\_epi8|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_perm\_epi8\(\_\_m128i,\_\_m128i,\_\_m128i\)|  
|[\_mm\_permute\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128d \_mm\_permute\_pd\(\_\_m128d,int\)|  
|[\_mm\_permute\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128 \_mm\_permute\_ps\(\_\_m128,int\)|  
|\_mm\_permute2\_pd|XOP \[1\]|ammintrin.h|\_\_m128d \_mm\_permute2\_pd\(\_\_m128d,\_\_m128d,\_\_m128i,int\)|  
|\_mm\_permute2\_ps|XOP \[1\]|ammintrin.h|\_\_m128 \_mm\_permute2\_ps\(\_\_m128,\_\_m128,\_\_m128i,int\)|  
|[\_mm\_permutevar\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128d \_mm\_permutevar\_pd\(\_\_m128d,\_\_m128i\)|  
|[\_mm\_permutevar\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128 \_mm\_permutevar\_ps\(\_\_m128,\_\_m128i\)|  
|[\_mm\_popcnt\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|POPCNT|intrin.h|int \_mm\_popcnt\_u32\(unsigned int\)|  
|[\_mm\_popcnt\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|POPCNT|intrin.h|\_\_int64 \_mm\_popcnt\_u64\(unsigned \_\_int64\)|  
|[\_mm\_prefetch](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|void \_mm\_prefetch\(char\*,int\)|  
|[\_mm\_rcp\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_rcp\_ps\(\_\_m128\)|  
|[\_mm\_rcp\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_rcp\_ss\(\_\_m128\)|  
|\_mm\_rot\_epi16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_rot\_epi16\(\_\_m128i,\_\_m128i\)|  
|\_mm\_rot\_epi32|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_rot\_epi32\(\_\_m128i,\_\_m128i\)|  
|\_mm\_rot\_epi64|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_rot\_epi64\(\_\_m128i,\_\_m128i\)|  
|\_mm\_rot\_epi8|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_rot\_epi8\(\_\_m128i,\_\_m128i\)|  
|\_mm\_roti\_epi16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_rot\_epi16\(\_\_m128i,int\)|  
|\_mm\_roti\_epi32|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_rot\_epi32\(\_\_m128i,int\)|  
|\_mm\_roti\_epi64|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_rot\_epi64\(\_\_m128i,int\)|  
|\_mm\_roti\_epi8|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_rot\_epi8\(\_\_m128i,int\)|  
|[\_mm\_round\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128d \_mm\_round\_pd\(\_\_m128d,const int \)|  
|[\_mm\_round\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128  \_mm\_round\_ps\(\_\_m128,const int \)|  
|[\_mm\_round\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128d \_mm\_round\_sd\(\_\_m128d,\_\_m128d,const int \)|  
|[\_mm\_round\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128  \_mm\_round\_ss\(\_\_m128,\_\_m128,const int \)|  
|[\_mm\_rsqrt\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_rsqrt\_ps\(\_\_m128\)|  
|[\_mm\_rsqrt\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_rsqrt\_ss\(\_\_m128\)|  
|[\_mm\_sad\_epu8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_sad\_epu8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_set\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_set\_epi16\(short,short,short,short,short,short,short,short\)|  
|[\_mm\_set\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_set\_epi32\(int,int,int,int\)|  
|[\_mm\_set\_epi64x](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_set\_epi64x\(\_\_int64 i1,\_\_int64 i0\)|  
|[\_mm\_set\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_set\_epi8\(char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char\)|  
|[\_mm\_set\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_set\_pd\(double,double\)|  
|[\_mm\_set\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_set\_ps\(float,float,float,float\)|  
|[\_mm\_set\_ps1](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_set\_ps1\(float\)|  
|[\_mm\_set\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_set\_sd\(double\)|  
|[\_mm\_set\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_set\_ss\(float\)|  
|[\_mm\_set1\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_set1\_epi16\(short\)|  
|[\_mm\_set1\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_set1\_epi32\(int\)|  
|[\_mm\_set1\_epi64x](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_set1\_epi64x\(\_\_int64 i\)|  
|[\_mm\_set1\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_set1\_epi8\(char\)|  
|[\_mm\_set1\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_set1\_pd\(double\)|  
|[\_mm\_setcsr](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|void \_mm\_setcsr\(unsigned int\)|  
|\_mm\_setl\_epi64|SSE2|intrin.h|\_\_m128i \_mm\_setl\_epi64\(\_\_m128i\)|  
|[\_mm\_setr\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_setr\_epi16\(short,short,short,short,short,short,short,short\)|  
|[\_mm\_setr\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_setr\_epi32\(int,int,int,int\)|  
|[\_mm\_setr\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_setr\_epi8\(char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char\)|  
|[\_mm\_setr\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_setr\_pd\(double,double\)|  
|[\_mm\_setr\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_setr\_ps\(float,float,float,float\)|  
|[\_mm\_setzero\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_setzero\_pd\(void\)|  
|[\_mm\_setzero\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_setzero\_ps\(void\)|  
|[\_mm\_setzero\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_setzero\_si128\(void\)|  
|[\_mm\_sfence](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|void \_mm\_sfence\(void\)|  
|\_mm\_sha\_epi16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_sha\_epi16\(\_\_m128i,\_\_m128i\)|  
|\_mm\_sha\_epi32|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_sha\_epi32\(\_\_m128i,\_\_m128i\)|  
|\_mm\_sha\_epi64|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_sha\_epi64\(\_\_m128i,\_\_m128i\)|  
|\_mm\_sha\_epi8|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_sha\_epi8\(\_\_m128i,\_\_m128i\)|  
|\_mm\_shl\_epi16|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_shl\_epi16\(\_\_m128i,\_\_m128i\)|  
|\_mm\_shl\_epi32|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_shl\_epi32\(\_\_m128i,\_\_m128i\)|  
|\_mm\_shl\_epi64|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_shl\_epi64\(\_\_m128i,\_\_m128i\)|  
|\_mm\_shl\_epi8|XOP \[1\]|ammintrin.h|\_\_m128i \_mm\_shl\_epi8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_shuffle\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_shuffle\_epi32\(\_\_m128i,int\)|  
|[\_mm\_shuffle\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_shuffle\_epi8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_shuffle\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_shuffle\_pd\(\_\_m128d,\_\_m128d,int\)|  
|[\_mm\_shuffle\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_shuffle\_ps\(\_\_m128,\_\_m128,unsigned int\)|  
|[\_mm\_shufflehi\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_shufflehi\_epi16\(\_\_m128i,int\)|  
|[\_mm\_shufflelo\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_shufflelo\_epi16\(\_\_m128i,int\)|  
|[\_mm\_sign\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_sign\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_sign\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_sign\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_sign\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSSE3|intrin.h|\_\_m128i \_mm\_sign\_epi8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_sll\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_sll\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_sll\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_sll\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_sll\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_sll\_epi64\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_slli\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_slli\_epi16\(\_\_m128i,int\)|  
|[\_mm\_slli\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_slli\_epi32\(\_\_m128i,int\)|  
|[\_mm\_slli\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_slli\_epi64\(\_\_m128i,int\)|  
|[\_mm\_slli\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_slli\_si128\(\_\_m128i,int\)|  
|[\_mm\_sllv\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_sllv\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_sllv\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_sllv\_epi64\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_sqrt\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_sqrt\_pd\(\_\_m128d\)|  
|[\_mm\_sqrt\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_sqrt\_ps\(\_\_m128\)|  
|[\_mm\_sqrt\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_sqrt\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_sqrt\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_sqrt\_ss\(\_\_m128\)|  
|[\_mm\_sra\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_sra\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_sra\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_sra\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_srai\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_srai\_epi16\(\_\_m128i,int\)|  
|[\_mm\_srai\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_srai\_epi32\(\_\_m128i,int\)|  
|[\_mm\_srav\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_srav\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_srl\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_srl\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_srl\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_srl\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_srl\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_srl\_epi64\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_srli\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_srli\_epi16\(\_\_m128i,int\)|  
|[\_mm\_srli\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_srli\_epi32\(\_\_m128i,int\)|  
|[\_mm\_srli\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_srli\_epi64\(\_\_m128i,int\)|  
|[\_mm\_srli\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_srli\_si128\(\_\_m128i,int\)|  
|[\_mm\_srlv\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_srlv\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_srlv\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm\_srlv\_epi64\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_store\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_store\_pd\(double\*,\_\_m128d\)|  
|[\_mm\_store\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|void \_mm\_store\_ps\(float\*,\_\_m128\)|  
|[\_mm\_store\_ps1](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|void \_mm\_store\_ps1\(float\*,\_\_m128\)|  
|[\_mm\_store\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_store\_sd\(double\*,\_\_m128d\)|  
|[\_mm\_store\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_store\_si128\(\_\_m128i\*,\_\_m128i\)|  
|[\_mm\_store\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|void \_mm\_store\_ss\(float\*,\_\_m128\)|  
|[\_mm\_store1\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_store1\_pd\(double\*,\_\_m128d\)|  
|[\_mm\_storeh\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_storeh\_pd\(double\*,\_\_m128d\)|  
|[\_mm\_storeh\_pi](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|void \_mm\_storeh\_pi\(\_\_m64\*,\_\_m128\)|  
|[\_mm\_storel\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_storel\_epi64\(\_\_m128i\*,\_\_m128i\)|  
|[\_mm\_storel\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_storel\_pd\(double\*,\_\_m128d\)|  
|[\_mm\_storel\_pi](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|void \_mm\_storel\_pi\(\_\_m64\*,\_\_m128\)|  
|[\_mm\_storer\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_storer\_pd\(double\*,\_\_m128d\)|  
|[\_mm\_storer\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|void \_mm\_storer\_ps\(float\*,\_\_m128\)|  
|[\_mm\_storeu\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_storeu\_pd\(double\*,\_\_m128d\)|  
|[\_mm\_storeu\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|void \_mm\_storeu\_ps\(float\*,\_\_m128\)|  
|[\_mm\_storeu\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_storeu\_si128\(\_\_m128i\*,\_\_m128i\)|  
|[\_mm\_stream\_load\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|\_\_m128i \_mm\_stream\_load\_si128\(\_\_m128i\* \)|  
|[\_mm\_stream\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_stream\_pd\(double\*,\_\_m128d\)|  
|[\_mm\_stream\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|void \_mm\_stream\_ps\(float\*,\_\_m128\)|  
|[\_mm\_stream\_sd](../intrinsics/mm-stream-sd.md)|SSE4a|intrin.h|void \_mm\_stream\_sd\(double\*,\_\_m128d\)|  
|[\_mm\_stream\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_stream\_si128\(\_\_m128i\*,\_\_m128i\)|  
|[\_mm\_stream\_si32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|void \_mm\_stream\_si32\(int\*,int\)|  
|[\_mm\_stream\_si64x](../intrinsics/mm-stream-si64x.md)|SSE2|intrin.h|void \_mm\_stream\_si64x\(\_\_int64 \*,\_\_int64\)|  
|[\_mm\_stream\_ss](../intrinsics/mm-stream-ss.md)|SSE4a|intrin.h|void \_mm\_stream\_ss\(float\*,\_\_m128\)|  
|[\_mm\_sub\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_sub\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_sub\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_sub\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_sub\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_sub\_epi64\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_sub\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_sub\_epi8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_sub\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_sub\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_sub\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_sub\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_sub\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_sub\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_sub\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_sub\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_subs\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_subs\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_subs\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_subs\_epi8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_subs\_epu16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_subs\_epu16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_subs\_epu8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_subs\_epu8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_testc\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm\_testc\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_testc\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm\_testc\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_testc\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|int \_mm\_testc\_si128\(\_\_m128i,\_\_m128i \)|  
|[\_mm\_testnzc\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm\_testnzc\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_testnzc\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm\_testnzc\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_testnzc\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|int \_mm\_testnzc\_si128\(\_\_m128i,\_\_m128i \)|  
|[\_mm\_testz\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm\_testz\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_testz\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm\_testz\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_testz\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE41|intrin.h|int \_mm\_testz\_si128\(\_\_m128i,\_\_m128i \)|  
|[\_mm\_ucomieq\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_ucomieq\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_ucomieq\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|int \_mm\_ucomieq\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_ucomige\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_ucomige\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_ucomige\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|int \_mm\_ucomige\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_ucomigt\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_ucomigt\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_ucomigt\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|int \_mm\_ucomigt\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_ucomile\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_ucomile\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_ucomile\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|int \_mm\_ucomile\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_ucomilt\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_ucomilt\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_ucomilt\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|int \_mm\_ucomilt\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_ucomineq\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|int \_mm\_ucomineq\_sd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_ucomineq\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|int \_mm\_ucomineq\_ss\(\_\_m128,\_\_m128\)|  
|[\_mm\_unpackhi\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_unpackhi\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_unpackhi\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_unpackhi\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_unpackhi\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_unpackhi\_epi64\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_unpackhi\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_unpackhi\_epi8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_unpackhi\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_unpackhi\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_unpackhi\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_unpackhi\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_unpacklo\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_unpacklo\_epi16\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_unpacklo\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_unpacklo\_epi32\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_unpacklo\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_unpacklo\_epi64\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_unpacklo\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_unpacklo\_epi8\(\_\_m128i,\_\_m128i\)|  
|[\_mm\_unpacklo\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_unpacklo\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_unpacklo\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_unpacklo\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_xor\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128d \_mm\_xor\_pd\(\_\_m128d,\_\_m128d\)|  
|[\_mm\_xor\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE|intrin.h|\_\_m128 \_mm\_xor\_ps\(\_\_m128,\_\_m128\)|  
|[\_mm\_xor\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|SSE2|intrin.h|\_\_m128i \_mm\_xor\_si128\(\_\_m128i,\_\_m128i\)|  
|[\_mm256\_abs\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_abs\_epi16\(\_\_m256i\)|  
|[\_mm256\_abs\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_abs\_epi32\(\_\_m256i\)|  
|[\_mm256\_abs\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_abs\_epi8\(\_\_m256i\)|  
|[\_mm256\_add\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_add\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_add\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_add\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_add\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_add\_epi64\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_add\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_add\_epi8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_add\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_add\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_add\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_add\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_adds\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_adds\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_adds\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_adds\_epi8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_adds\_epu16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_adds\_epu16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_adds\_epu8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_adds\_epu8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_addsub\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_addsub\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_addsub\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_addsub\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_alignr\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_alignr\_epi8\(\_\_m256i,\_\_m256i,const int\)|  
|[\_mm256\_and\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_and\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_and\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_and\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_and\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_and\_si256\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_andnot\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_andnot\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_andnot\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_andnot\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_andnot\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_andnot\_si256\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_avg\_epu16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_avg\_epu16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_avg\_epu8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_avg\_epu8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_blend\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_blend\_epi16\(\_\_m256i,\_\_m256i,const int\)|  
|[\_mm256\_blend\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_blend\_epi32\(\_\_m256i,\_\_m256i,const int\)|  
|[\_mm256\_blend\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_blend\_pd\(\_\_m256d,\_\_m256d,const int\)|  
|[\_mm256\_blend\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_blend\_ps\(\_\_m256,\_\_m256,const int\)|  
|[\_mm256\_blendv\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_blendv\_epi8\(\_\_m256i,\_\_m256i,\_\_m256i\)|  
|[\_mm256\_blendv\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_blendv\_pd\(\_\_m256d,\_\_m256d,\_\_m256d\)|  
|[\_mm256\_blendv\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_blendv\_ps\(\_\_m256,\_\_m256,\_\_m256\)|  
|[\_mm256\_broadcast\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_broadcast\_pd\(\_\_m128d const \*\)|  
|[\_mm256\_broadcast\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_broadcast\_ps\(\_\_m128 const \*\)|  
|[\_mm256\_broadcast\_sd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_broadcast\_sd\(double const \*\)|  
|[\_mm256\_broadcast\_ss](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_broadcast\_ss\(float const \*\)|  
|[\_mm256\_broadcastb\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_broadcastb\_epi8 \(\_\_m128i\)|  
|[\_mm256\_broadcastd\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_broadcastd\_epi32\(\_\_m128i\)|  
|[\_mm256\_broadcastq\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_broadcastq\_epi64\(\_\_m128i\)|  
|[\_mm256\_broadcastsd\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256d \_mm256\_broadcastsd\_pd\(\_\_m128d\)|  
|[\_mm256\_broadcastsi128\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_broadcastsi128\_si256\(\_\_m128i\)|  
|[\_mm256\_broadcastss\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256 \_mm256\_broadcastss\_ps\(\_\_m128\)|  
|[\_mm256\_broadcastw\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_broadcastw\_epi16\(\_\_m128i\)|  
|[\_mm256\_castpd\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_castpd\_ps\(\_\_m256d\)|  
|[\_mm256\_castpd\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_castpd\_si256\(\_\_m256d\)|  
|[\_mm256\_castpd128\_pd256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_castpd128\_pd256\(\_\_m128d\)|  
|[\_mm256\_castpd256\_pd128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128d \_mm256\_castpd256\_pd128\(\_\_m256d\)|  
|[\_mm256\_castps\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_castps\_pd\(\_\_m256\)|  
|[\_mm256\_castps\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_castps\_si256\(\_\_m256\)|  
|[\_mm256\_castps128\_ps256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_castps128\_ps256\(\_\_m128\)|  
|[\_mm256\_castps256\_ps128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128 \_mm256\_castps256\_ps128\(\_\_m256\)|  
|[\_mm256\_castsi128\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_castsi128\_si256\(\_\_m128i\)|  
|[\_mm256\_castsi256\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_castsi256\_pd\(\_\_m256i\)|  
|[\_mm256\_castsi256\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_castsi256\_ps\(\_\_m256i\)|  
|[\_mm256\_castsi256\_si128](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128i \_mm256\_castsi256\_si128\(\_\_m256i\)|  
|\_mm256\_cmov\_si256|XOP \[1\]|ammintrin.h|\_\_m256i \_mm256\_cmov\_si256\(\_\_m256i,\_\_m256i,\_\_m256i\)|  
|[\_mm256\_cmp\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d  \_mm256\_cmp\_pd\(\_\_m256d,\_\_m256d,const int\)|  
|[\_mm256\_cmp\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256  \_mm256\_cmp\_ps\(\_\_m256,\_\_m256,const int\)|  
|[\_mm256\_cmpeq\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cmpeq\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_cmpeq\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cmpeq\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_cmpeq\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cmpeq\_epi64\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_cmpeq\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cmpeq\_epi8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_cmpgt\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cmpgt\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_cmpgt\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cmpgt\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_cmpgt\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cmpgt\_epi64\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_cmpgt\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cmpgt\_epi8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_cvtepi16\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cvtepi16\_epi32\(\_\_m128i\)|  
|[\_mm256\_cvtepi16\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cvtepi16\_epi64\(\_\_m128i\)|  
|[\_mm256\_cvtepi32\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cvtepi32\_epi64\(\_\_m128i\)|  
|[\_mm256\_cvtepi32\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_cvtepi32\_pd\(\_\_m128i\)|  
|[\_mm256\_cvtepi32\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_cvtepi32\_ps\(\_\_m256i\)|  
|[\_mm256\_cvtepi8\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cvtepi8\_epi16\(\_\_m128i\)|  
|[\_mm256\_cvtepi8\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cvtepi8\_epi32\(\_\_m128i\)|  
|[\_mm256\_cvtepi8\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cvtepi8\_epi64\(\_\_m128i\)|  
|[\_mm256\_cvtepu16\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cvtepu16\_epi32\(\_\_m128i\)|  
|[\_mm256\_cvtepu16\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cvtepu16\_epi64\(\_\_m128i\)|  
|[\_mm256\_cvtepu32\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cvtepu32\_epi64\(\_\_m128i\)|  
|[\_mm256\_cvtepu8\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cvtepu8\_epi16\(\_\_m128i\)|  
|[\_mm256\_cvtepu8\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cvtepu8\_epi32\(\_\_m128i\)|  
|[\_mm256\_cvtepu8\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_cvtepu8\_epi64\(\_\_m128i\)|  
|[\_mm256\_cvtpd\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128i \_mm256\_cvtpd\_epi32\(\_\_m256d\)|  
|[\_mm256\_cvtpd\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128 \_mm256\_cvtpd\_ps\(\_\_m256d\)|  
|[\_mm256\_cvtph\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|F16C \[2\]|immintrin.h|\_\_m256 \_mm256\_cvtph\_ps\(\_\_m128i\)|  
|[\_mm256\_cvtps\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_cvtps\_epi32\(\_\_m256\)|  
|[\_mm256\_cvtps\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_cvtps\_pd\(\_\_m128\)|  
|[\_mm256\_cvtps\_ph](http://go.microsoft.com/fwlink/p/?LinkId=512130)|F16C \[2\]|immintrin.h|\_\_m128i \_mm256\_cvtps\_ph\(\_\_m256,const int\)|  
|[\_mm256\_cvttpd\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128i \_mm256\_cvttpd\_epi32\(\_\_m256d\)|  
|[\_mm256\_cvttps\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_cvttps\_epi32\(\_\_m256\)|  
|[\_mm256\_div\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_div\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_div\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_div\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_dp\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_dp\_ps\(\_\_m256,\_\_m256,const int\)|  
|[\_mm256\_extractf128\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128d \_mm256\_extractf128\_pd\(\_\_m256d,const int\)|  
|[\_mm256\_extractf128\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128 \_mm256\_extractf128\_ps\(\_\_m256,const int\)|  
|[\_mm256\_extractf128\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m128i \_mm256\_extractf128\_si256\(\_\_m256i,const int\)|  
|[\_mm256\_extracti128\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm256\_extracti128\_si256\(\_\_m256i a,int offset\)|  
|[\_mm256\_fmadd\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m256d \_mm256\_fmadd\_pd \(\_\_m256d a,\_\_m256d b,\_\_m256d c\)|  
|[\_mm256\_fmadd\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m256 \_mm256\_fmadd\_ps \(\_\_m256 a,\_\_m256 b,\_\_m256 c\)|  
|[\_mm256\_fmaddsub\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m256d \_mm256\_fmaddsub\_pd \(\_\_m256d a,\_\_m256d b,\_\_m256d c\)|  
|[\_mm256\_fmaddsub\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m256 \_mm256\_fmaddsub\_ps \(\_\_m256 a,\_\_m256 b,\_\_m256 c\)|  
|[\_mm256\_fmsub\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m256d \_mm256\_fmsub\_pd \(\_\_m256d a,\_\_m256d b,\_\_m256d c\)|  
|[\_mm256\_fmsub\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m256 \_mm256\_fmsub\_ps \(\_\_m256 a,\_\_m256 b,\_\_m256 c\)|  
|[\_mm256\_fmsubadd\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m256d \_mm256\_fmsubadd\_pd \(\_\_m256d a,\_\_m256d b,\_\_m256d c\)|  
|[\_mm256\_fmsubadd\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m256 \_mm256\_fmsubadd\_ps \(\_\_m256 a,\_\_m256 b,\_\_m256 c\)|  
|[\_mm256\_fnmadd\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m256d \_mm256\_fnmadd\_pd \(\_\_m256d a,\_\_m256d b,\_\_m256d c\)|  
|[\_mm256\_fnmadd\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m256 \_mm256\_fnmadd\_ps \(\_\_m256 a,\_\_m256 b,\_\_m256 c\)|  
|[\_mm256\_fnmsub\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m256d \_mm256\_fnmsub\_pd \(\_\_m256d a,\_\_m256d b,\_\_m256d c\)|  
|[\_mm256\_fnmsub\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FMA \[2\]|immintrin.h|\_\_m256 \_mm256\_fnmsub\_ps \(\_\_m256 a,\_\_m256 b,\_\_m256 c\)|  
|\_mm256\_frcz\_pd|XOP \[1\]|ammintrin.h|\_\_m256d \_mm256\_frcz\_pd\(\_\_m256d\)|  
|\_mm256\_frcz\_ps|XOP \[1\]|ammintrin.h|\_\_m256 \_mm256\_frcz\_ps\(\_\_m256\)|  
|[\_mm256\_hadd\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_hadd\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_hadd\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_hadd\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_hadd\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_hadd\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_hadd\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_hadd\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_hadds\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_hadds\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_hsub\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_hsub\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_hsub\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_hsub\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_hsub\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_hsub\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_hsub\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_hsub\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_hsubs\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_hsubs\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_i32gather\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_i32gather\_epi32\(int const \*base,\_\_m256i index,const int scale\)|  
|[\_mm256\_i32gather\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_i32gather\_epi64\(\_\_int64 const \*base,\_\_m128i index,const int scale\)|  
|[\_mm256\_i32gather\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256d \_mm256\_i32gather\_pd\(double const \*base,\_\_m128i index,const int scale\)|  
|[\_mm256\_i32gather\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256 \_mm256\_i32gather\_ps\(float const \*base,\_\_m256i index,const int scale\)|  
|[\_mm256\_i64gather\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_i64gather\_epi32\(int const \*base,\_\_m256i index,const int scale\)|  
|[\_mm256\_i64gather\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_i64gather\_epi64\(\_\_int64 const \*base,\_\_m256i index,const int scale\)|  
|[\_mm256\_i64gather\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256d \_mm256\_i64gather\_pd\(double const \*base,\_\_m256i index,const int scale\)|  
|[\_mm256\_i64gather\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128 \_mm256\_i64gather\_ps\(float const \*base,\_\_m256i index,const int scale\)|  
|[\_mm256\_insertf128\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_insertf128\_pd\(\_\_m256d,\_\_m128d,int \)|  
|[\_mm256\_insertf128\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_insertf128\_ps\(\_\_m256,\_\_m128,int \)|  
|[\_mm256\_insertf128\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_insertf128\_si256\(\_\_m256i,\_\_m128i,int \)|  
|[\_mm256\_inserti128\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_inserti128\_si256\(\_\_m256i,\_\_m128i,int\)|  
|[\_mm256\_lddqu\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_lddqu\_si256\(\_\_m256i \*\)|  
|[\_mm256\_load\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_load\_pd\(double const \*\)|  
|[\_mm256\_load\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_load\_ps\(float const \*\)|  
|[\_mm256\_load\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_load\_si256\(\_\_m256i \*\)|  
|[\_mm256\_loadu\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_loadu\_pd\(double const \*\)|  
|[\_mm256\_loadu\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_loadu\_ps\(float const \*\)|  
|[\_mm256\_loadu\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_loadu\_si256\(\_\_m256i \*\)|  
|\_mm256\_macc\_pd|FMA4 \[1\]|ammintrin.h|\_\_m256d \_mm\_macc\_pd\(\_\_m256d,\_\_m256d,\_\_m256d\)|  
|\_mm256\_macc\_ps|FMA4 \[1\]|ammintrin.h|\_\_m256 \_mm\_macc\_ps\(\_\_m256,\_\_m256,\_\_m256\)|  
|[\_mm256\_madd\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_madd\_epi16\(\_\_m256i,\_\_m256i\)|  
|\_mm256\_maddsub\_pd|FMA4 \[1\]|ammintrin.h|\_\_m256d \_mm\_maddsub\_pd\(\_\_m256d,\_\_m256d,\_\_m256d\)|  
|\_mm256\_maddsub\_ps|FMA4 \[1\]|ammintrin.h|\_\_m256 \_mm\_maddsub\_ps\(\_\_m256,\_\_m256,\_\_m256\)|  
|[\_mm256\_maddubs\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_maddubs\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_mask\_i32gather\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_mask\_i32gather\_epi32\(\_\_m256i src,int const \*base,\_\_m256i index,\_\_m256i mask,const int scale\)|  
|[\_mm256\_mask\_i32gather\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_mask\_i32gather\_epi64\(\_\_m256i src,\_\_int64 const \*base,\_\_m128i index,\_\_m256i mask,const int scale\)|  
|[\_mm256\_mask\_i32gather\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256d \_mm256\_mask\_i32gather\_pd\(\_\_m256d src,double const \*base,\_\_m128i index,\_\_m256d mask,const int scale\)|  
|[\_mm256\_mask\_i32gather\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256 \_mm256\_mask\_i32gather\_ps\(\_\_m256 src,float const \*base,\_\_m256i index,\_\_m256 mask,const int scale\)|  
|[\_mm256\_mask\_i64gather\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128i \_mm256\_mask\_i64gather\_epi32\(\_\_m128i src,int const \*base,\_\_m256i index,\_\_m128i mask,const int scale\)|  
|[\_mm256\_mask\_i64gather\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_mask\_i64gather\_epi64\(\_\_m256i src,\_\_int64 const \*base,\_\_m256i index,\_\_m256i mask,const int scale\)|  
|[\_mm256\_mask\_i64gather\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256d \_mm256\_mask\_i64gather\_pd\(\_\_m256d src,double const \*base,\_\_m256i index,\_\_m256d mask,const int scale\)|  
|[\_mm256\_mask\_i64gather\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m128 \_mm256\_mask\_i64gather\_ps\(\_\_m128 src,float const \*base,\_\_m256i index,\_\_m128 mask,const int scale\)|  
|[\_mm256\_maskload\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_maskload\_epi32\(int const \*,\_\_m256i\)|  
|[\_mm256\_maskload\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_maskload\_epi64\( \_\_int64 const \*,\_\_m256i\)|  
|[\_mm256\_maskload\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_maskload\_pd\(double const \*,\_\_m256i\)|  
|[\_mm256\_maskload\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_maskload\_ps\(float const \*,\_\_m256i\)|  
|[\_mm256\_maskstore\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|void \_mm256\_maskstore\_epi32\(int \*,\_\_m256i,\_\_m256i\)|  
|[\_mm256\_maskstore\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|void \_mm256\_maskstore\_epi64\(\_\_int64 \*,\_\_m256i,\_\_m256i\)|  
|[\_mm256\_maskstore\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|void \_mm256\_maskstore\_pd\(double \*,\_\_m256i,\_\_m256d\)|  
|[\_mm256\_maskstore\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|void \_mm256\_maskstore\_ps\(float \*,\_\_m256i,\_\_m256\)|  
|[\_mm256\_max\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_max\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_max\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_max\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_max\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_max\_epi8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_max\_epu16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_max\_epu16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_max\_epu32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_max\_epu32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_max\_epu8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_max\_epu8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_max\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_max\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_max\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_max\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_min\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_min\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_min\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_min\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_min\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_min\_epi8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_min\_epu16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_min\_epu16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_min\_epu32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_min\_epu32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_min\_epu8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_min\_epu8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_min\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_min\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_min\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_min\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_movedup\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_movedup\_pd\(\_\_m256d\)|  
|[\_mm256\_movehdup\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_movehdup\_ps\(\_\_m256\)|  
|[\_mm256\_moveldup\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_moveldup\_ps\(\_\_m256\)|  
|[\_mm256\_movemask\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|int \_mm256\_movemask\_epi8\(\_\_m256i\)|  
|[\_mm256\_movemask\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm256\_movemask\_pd\(\_\_m256d\)|  
|[\_mm256\_movemask\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm256\_movemask\_ps\(\_\_m256\)|  
|[\_mm256\_mpsadbw\_epu8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_mpsadbw\_epu8\(\_\_m256i,\_\_m256i,const int\)|  
|\_mm256\_msub\_pd|FMA4 \[1\]|ammintrin.h|\_\_m256d \_mm\_msub\_pd\(\_\_m256d,\_\_m256d,\_\_m256d\)|  
|\_mm256\_msub\_ps|FMA4 \[1\]|ammintrin.h|\_\_m256 \_mm\_msub\_ps\(\_\_m256,\_\_m256,\_\_m256\)|  
|\_mm256\_msubadd\_pd|FMA4 \[1\]|ammintrin.h|\_\_m256d \_mm\_msubadd\_pd\(\_\_m256d,\_\_m256d,\_\_m256d\)|  
|\_mm256\_msubadd\_ps|FMA4 \[1\]|ammintrin.h|\_\_m256 \_mm\_msubadd\_ps\(\_\_m256,\_\_m256,\_\_m256\)|  
|[\_mm256\_mul\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_mul\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_mul\_epu32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_mul\_epu32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_mul\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_mul\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_mul\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_mul\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_mulhi\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_mulhi\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_mulhi\_epu16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_mulhi\_epu16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_mulhrs\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_mulhrs\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_mullo\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_mullo\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_mullo\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_mullo\_epi32\(\_\_m256i,\_\_m256i\)|  
|\_mm256\_nmacc\_pd|FMA4 \[1\]|ammintrin.h|\_\_m256d \_mm\_nmacc\_pd\(\_\_m256d,\_\_m256d,\_\_m256d\)|  
|\_mm256\_nmacc\_ps|FMA4 \[1\]|ammintrin.h|\_\_m256 \_mm\_nmacc\_ps\(\_\_m256,\_\_m256,\_\_m256\)|  
|\_mm256\_nmsub\_pd|FMA4 \[1\]|ammintrin.h|\_\_m256d \_mm\_nmsub\_pd\(\_\_m256d,\_\_m256d,\_\_m256d\)|  
|\_mm256\_nmsub\_ps|FMA4 \[1\]|ammintrin.h|\_\_m256 \_mm\_nmsub\_ps\(\_\_m256,\_\_m256,\_\_m256\)|  
|[\_mm256\_or\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_or\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_or\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_or\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_or\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_or\_si256\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_packs\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_packs\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_packs\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_packs\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_packus\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_packus\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_packus\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_packus\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_permute\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_permute\_pd\(\_\_m256d,int\)|  
|[\_mm256\_permute\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_permute\_ps\(\_\_m256,int\)|  
|\_mm256\_permute2\_pd|XOP \[1\]|ammintrin.h|\_\_m256d \_mm256\_permute2\_pd\(\_\_m256d,\_\_m256d,\_\_m256i,int\)|  
|\_mm256\_permute2\_ps|XOP \[1\]|ammintrin.h|\_\_m256 \_mm256\_permute2\_ps\(\_\_m256,\_\_m256,\_\_m256i,int\)|  
|[\_mm256\_permute2f128\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_permute2f128\_pd\(\_\_m256d,\_\_m256d,int\)|  
|[\_mm256\_permute2f128\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_permute2f128\_ps\(\_\_m256,\_\_m256,int\)|  
|[\_mm256\_permute2f128\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_permute2f128\_si256\(\_\_m256i,\_\_m256i,int\)|  
|[\_mm256\_permute2x128\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_permute2x128\_si256\(\_\_m256i,\_\_m256i,const int\)|  
|[\_mm256\_permute4x64\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_permute4x64\_epi64 \(\_\_m256i,const int\)|  
|[\_mm256\_permute4x64\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256d \_mm256\_permute4x64\_pd\(\_\_m256d,const int\)|  
|[\_mm256\_permutevar\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_permutevar\_pd\(\_\_m256d,\_\_m256i\)|  
|[\_mm256\_permutevar\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_permutevar\_ps\(\_\_m256,\_\_m256i\)|  
|[\_mm256\_permutevar8x32\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_permutevar8x32\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_permutevar8x32\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256 \_mm256\_permutevar8x32\_ps \(\_\_m256,\_\_m256i\)|  
|[\_mm256\_rcp\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_rcp\_ps\(\_\_m256\)|  
|[\_mm256\_round\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_round\_pd\(\_\_m256d,int\)|  
|[\_mm256\_round\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_round\_ps\(\_\_m256,int\)|  
|[\_mm256\_rsqrt\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_rsqrt\_ps\(\_\_m256\)|  
|[\_mm256\_sad\_epu8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_sad\_epu8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_set\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\(\_\_m256i \_mm256\_set\_epi16\(short|  
|[\_mm256\_set\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_set\_epi32\(int,int,int,int,int,int,int,int\)|  
|[\_mm256\_set\_epi64x](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_set\_epi64x\(long long,long long,long long,long long\)|  
|[\_mm256\_set\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_set\_epi8\(char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char\)|  
|[\_mm256\_set\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_set\_pd\(double,double,double,double\)|  
|[\_mm256\_set\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_set\_ps\(float,float,float,float,float,float,float,float\)|  
|[\_mm256\_set1\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_set1\_epi16\(short\)|  
|[\_mm256\_set1\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_set1\_epi32\(int\)|  
|[\_mm256\_set1\_epi64x](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_set1\_epi64x\(long long\)|  
|[\_mm256\_set1\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_set1\_epi8\(char\)|  
|[\_mm256\_set1\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_set1\_pd\(double\)|  
|[\_mm256\_set1\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_set1\_ps\(float\)|  
|[\_mm256\_setr\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\(\_\_m256i \_mm256\_setr\_epi16\(short|  
|[\_mm256\_setr\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_setr\_epi32\(int,int,int,int,int,int,int,int\)|  
|[\_mm256\_setr\_epi64x](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_setr\_epi64x\(long long,long long,long long,long long\)|  
|[\_mm256\_setr\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\(\_\_m256i \_mm256\_setr\_epi8\(char|  
|[\_mm256\_setr\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_setr\_pd\(double,double,double,double\)|  
|[\_mm256\_setr\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_setr\_ps\(float,float,float,float,float,float,float,float\)|  
|[\_mm256\_setzero\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_setzero\_pd\(void\)|  
|[\_mm256\_setzero\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_setzero\_ps\(void\)|  
|[\_mm256\_setzero\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256i \_mm256\_setzero\_si256\(void\)|  
|[\_mm256\_shuffle\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_shuffle\_epi32\(\_\_m256i,const int\)|  
|[\_mm256\_shuffle\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_shuffle\_epi8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_shuffle\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_shuffle\_pd\(\_\_m256d,\_\_m256d,const int\)|  
|[\_mm256\_shuffle\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_shuffle\_ps\(\_\_m256,\_\_m256,const int\)|  
|[\_mm256\_shufflehi\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_shufflehi\_epi16\(\_\_m256i,const int\)|  
|[\_mm256\_shufflelo\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_shufflelo\_epi16\(\_\_m256i,const int\)|  
|[\_mm256\_sign\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_sign\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_sign\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_sign\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_sign\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_sign\_epi8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_sll\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_sll\_epi16\(\_\_m256i,\_\_m128i\)|  
|[\_mm256\_sll\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_sll\_epi32\(\_\_m256i,\_\_m128i\)|  
|[\_mm256\_sll\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_sll\_epi64\(\_\_m256i,\_\_m128i\)|  
|[\_mm256\_slli\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_slli\_epi16\(\_\_m256i,int\)|  
|[\_mm256\_slli\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_slli\_epi32\(\_\_m256i,int\)|  
|[\_mm256\_slli\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_slli\_epi64\(\_\_m256i,int\)|  
|[\_mm256\_slli\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_slli\_si256\(\_\_m256i,int\)|  
|[\_mm256\_sllv\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_sllv\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_sllv\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_sllv\_epi64\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_sqrt\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_sqrt\_pd\(\_\_m256d\)|  
|[\_mm256\_sqrt\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_sqrt\_ps\(\_\_m256\)|  
|[\_mm256\_sra\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_sra\_epi16\(\_\_m256i,\_\_m128i\)|  
|[\_mm256\_sra\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_sra\_epi32\(\_\_m256i,\_\_m128i\)|  
|[\_mm256\_srai\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_srai\_epi16\(\_\_m256i,int\)|  
|[\_mm256\_srai\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_srai\_epi32\(\_\_m256i,int\)|  
|[\_mm256\_srav\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_srav\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_srl\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_srl\_epi16\(\_\_m256i,\_\_m128i\)|  
|[\_mm256\_srl\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_srl\_epi32\(\_\_m256i,\_\_m128i\)|  
|[\_mm256\_srl\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_srl\_epi64\(\_\_m256i,\_\_m128i\)|  
|[\_mm256\_srli\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_srli\_epi16\(\_\_m256i,int\)|  
|[\_mm256\_srli\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_srli\_epi32\(\_\_m256i,int\)|  
|[\_mm256\_srli\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_srli\_epi64\(\_\_m256i,int\)|  
|[\_mm256\_srli\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_srli\_si256\(\_\_m256i,int\)|  
|[\_mm256\_srlv\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_srlv\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_srlv\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_srlv\_epi64\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_store\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|void \_mm256\_store\_pd\(double \*,\_\_m256d\)|  
|[\_mm256\_store\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|void \_mm256\_store\_ps\(float \*,\_\_m256\)|  
|[\_mm256\_store\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|void \_mm256\_store\_si256\(\_\_m256i \*,\_\_m256i\)|  
|[\_mm256\_storeu\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|void \_mm256\_storeu\_pd\(double \*,\_\_m256d\)|  
|[\_mm256\_storeu\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|void \_mm256\_storeu\_ps\(float \*,\_\_m256\)|  
|[\_mm256\_storeu\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|void \_mm256\_storeu\_si256\(\_\_m256i \*,\_\_m256i\)|  
|[\_mm256\_stream\_load\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_stream\_load\_si256\(\_\_m256i const \*\)|  
|[\_mm256\_stream\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|void \_\_mm256\_stream\_pd\(double \*,\_\_m256d\)|  
|[\_mm256\_stream\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|void \_mm256\_stream\_ps\(float \*p,\_\_m256 a\)|  
|[\_mm256\_stream\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|void \_\_mm256\_stream\_si256\(\_\_m256i \*,\_\_m256i\)|  
|[\_mm256\_sub\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_sub\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_sub\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_sub\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_sub\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_sub\_epi64\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_sub\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_sub\_epi8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_sub\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_sub\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_sub\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_sub\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_subs\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_subs\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_subs\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_subs\_epi8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_subs\_epu16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_subs\_epu16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_subs\_epu8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_subs\_epu8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_testc\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm256\_testc\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_testc\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm256\_testc\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_testc\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm256\_testc\_si256\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_testnzc\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm256\_testnzc\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_testnzc\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm256\_testnzc\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_testnzc\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm256\_testnzc\_si256\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_testz\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm256\_testz\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_testz\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm256\_testz\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_testz\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|int \_mm256\_testz\_si256\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_unpackhi\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_unpackhi\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_unpackhi\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_unpackhi\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_unpackhi\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_unpackhi\_epi64\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_unpackhi\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_unpackhi\_epi8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_unpackhi\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_unpackhi\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_unpackhi\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_unpackhi\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_unpacklo\_epi16](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_unpacklo\_epi16\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_unpacklo\_epi32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_unpacklo\_epi32\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_unpacklo\_epi64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_unpacklo\_epi64\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_unpacklo\_epi8](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_unpacklo\_epi8\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_unpacklo\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_unpacklo\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_unpacklo\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_unpacklo\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_xor\_pd](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256d \_mm256\_xor\_pd\(\_\_m256d,\_\_m256d\)|  
|[\_mm256\_xor\_ps](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|\_\_m256 \_mm256\_xor\_ps\(\_\_m256,\_\_m256\)|  
|[\_mm256\_xor\_si256](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX2 \[2\]|immintrin.h|\_\_m256i \_mm256\_xor\_si256\(\_\_m256i,\_\_m256i\)|  
|[\_mm256\_zeroall](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|void \_mm256\_zeroall\(void\)|  
|[\_mm256\_zeroupper](http://go.microsoft.com/fwlink/p/?LinkId=512130)|AVX \[2\]|immintrin.h|void \_mm256\_zeroupper\(void\)|  
|[\_\_movsb](../intrinsics/movsb.md)||intrin.h|VOID \_\_movsb\(IN PBYTE,IN BYTE const \*,IN SIZE\_T\)|  
|[\_\_movsd](../intrinsics/movsd.md)||intrin.h|VOID \_\_movsd\(IN PDWORD,IN DWORD const \*,IN SIZE\_T\)|  
|[\_\_movsq](../intrinsics/movsq.md)||intrin.h|VOID \_\_movsq\(IN PDWORD64,IN DWORD64 const \*,IN SIZE\_T\)|  
|[\_\_movsw](../intrinsics/movsw.md)||intrin.h|VOID \_\_movsw\(IN PWORD,IN WORD const \*,IN SIZE\_T\)|  
|[\_mul128](../intrinsics/mul128.md)||intrin.h|\_\_int64 \_mul128\(\_\_int64 multiplier,\_\_int64 multiplicand,\_\_int64 \*highproduct\)|  
|[\_\_mulh](../intrinsics/mulh.md)||intrin.h|\_\_int64 \_\_mulh\(\_\_int64,\_\_int64\)|  
|\_mulx\_u32|BMI \[2\]|immintrin.h|unsigned int \_mulx\_u32\(unsigned int,unsigned int,unsigned int\*\)|  
|\_mulx\_u64|BMI \[2\]|immintrin.h|unsigned \_\_int64 \_mulx\_u64\(unsigned \_\_int64,unsigned \_\_int64,unsigned \_\_int64\*\)|  
|[\_\_nop](../intrinsics/nop.md)||intrin.h|void \_\_nop\(void\)|  
|\_\_nvreg\_restore\_fence||intrin.h|void \_\_nvreg\_restore\_fence\(void\)|  
|\_\_nvreg\_save\_fence||intrin.h|void \_\_nvreg\_save\_fence\(void\)|  
|[\_\_outbyte](../intrinsics/outbyte.md)||intrin.h|void \_\_outbyte\(unsigned short Port,unsigned char Data\)|  
|[\_\_outbytestring](../intrinsics/outbytestring.md)||intrin.h|void \_\_outbytestring\(unsigned short Port,unsigned char \*Buffer,unsigned long Count\)|  
|[\_\_outdword](../intrinsics/outdword.md)||intrin.h|void \_\_outdword\(unsigned short Port,unsigned long Data\)|  
|[\_\_outdwordstring](../intrinsics/outdwordstring.md)||intrin.h|void \_\_outdwordstring\(unsigned short Port,unsigned long \*Buffer,unsigned long Count\)|  
|[\_\_outword](../intrinsics/outword.md)||intrin.h|void \_\_outword\(unsigned short Port,unsigned short Data\)|  
|[\_\_outwordstring](../intrinsics/outwordstring.md)||intrin.h|void \_\_outwordstring\(unsigned short Port,unsigned short \*Buffer,unsigned long Count\)|  
|[\_pdep\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI \[2\]|immintrin.h|unsigned int \_pdep\_u32\(unsigned int,unsigned int\)|  
|[\_pdep\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI \[2\]|immintrin.h|unsigned \_\_int64 \_pdep\_u64\(unsigned \_\_int64,unsigned \_\_int64\)|  
|[\_pext\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI \[2\]|immintrin.h|unsigned int \_pext\_u32\(unsigned int,unsigned int\)|  
|[\_pext\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI \[2\]|immintrin.h|unsigned \_\_int64 \_pext\_u64\(unsigned \_\_int64,unsigned \_\_int64\)|  
|[\_\_popcnt](../intrinsics/popcnt16-popcnt-popcnt64.md)|POPCNT|intrin.h|unsigned int \_\_popcnt\(unsigned int\)|  
|[\_\_popcnt16](../intrinsics/popcnt16-popcnt-popcnt64.md)|POPCNT|intrin.h|unsigned short \_\_popcnt16\(unsigned short\)|  
|[\_\_popcnt64](../intrinsics/popcnt16-popcnt-popcnt64.md)|POPCNT|intrin.h|unsigned \_\_int64 \_\_popcnt64\(unsigned \_\_int64\)|  
|[\_rdrand16\_step](http://go.microsoft.com/fwlink/p/?LinkId=512130)|RDRAND \[2\]|immintrin.h|int \_rdrand16\_step\(unsigned short \*\)|  
|[\_rdrand32\_step](http://go.microsoft.com/fwlink/p/?LinkId=512130)|RDRAND \[2\]|immintrin.h|int \_rdrand32\_step\(unsigned int \*\)|  
|[\_rdrand64\_step](http://go.microsoft.com/fwlink/p/?LinkId=512130)|RDRAND \[2\]|immintrin.h|int \_rdrand64\_step\(unsigned \_\_int64 \*\)|  
|[\_rdseed16\_step](http://go.microsoft.com/fwlink/p/?LinkId=512130)|RDSEED \[2\]|immintrin.h|int \_rdseed16\_step\(unsigned short \*\)|  
|[\_rdseed32\_step](http://go.microsoft.com/fwlink/p/?LinkId=512130)|RDSEED \[2\]|immintrin.h|int \_rdseed32\_step\(unsigned int \*\)|  
|[\_rdseed64\_step](http://go.microsoft.com/fwlink/p/?LinkId=512130)|RDSEED \[2\]|immintrin.h|int \_rdseed64\_step\(unsigned \_\_int64 \*\)|  
|[\_\_rdtsc](../intrinsics/rdtsc.md)||intrin.h|unsigned \_\_int64 \_\_rdtsc\(void\)|  
|[\_\_rdtscp](../intrinsics/rdtscp.md)|RDTSCP|intrin.h|unsigned \_\_int64 \_\_rdtscp\(unsigned int\*\)|  
|[\_ReadBarrier](../intrinsics/readbarrier.md)||intrin.h|void \_ReadBarrier\(void\)|  
|[\_\_readcr0](../intrinsics/readcr0.md)||intrin.h|unsigned \_\_int64 \_\_readcr0\(void\)|  
|[\_\_readcr2](../intrinsics/readcr2.md)||intrin.h|unsigned \_\_int64 \_\_readcr2\(void\)|  
|[\_\_readcr3](../intrinsics/readcr3.md)||intrin.h|unsigned \_\_int64 \_\_readcr3\(void\)|  
|[\_\_readcr4](../intrinsics/readcr4.md)||intrin.h|unsigned \_\_int64 \_\_readcr4\(void\)|  
|[\_\_readcr8](../intrinsics/readcr8.md)||intrin.h|unsigned \_\_int64 \_\_readcr8\(void\)|  
|[\_\_readdr](../intrinsics/readdr.md)||intrin.h|unsigned \_\_int64 \_\_readdr\(unsigned\)|  
|[\_\_readeflags](../intrinsics/readeflags.md)||intrin.h|unsigned \_\_int64 \_\_readeflags\(void\)|  
|[\_readfsbase\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FSGSBASE \[2\]|immintrin.h|unsigned int \_readfsbase\_u32\(void\)|  
|[\_readfsbase\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FSGSBASE \[2\]|immintrin.h|unsigned \_\_int64 \_readfsbase\_u64\(void\)|  
|[\_readgsbase\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FSGSBASE \[2\]|immintrin.h|unsigned int \_readgsbase\_u32\(void\)|  
|[\_readgsbase\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FSGSBASE \[2\]|immintrin.h|unsigned \_\_int64 \_readgsbase\_u64\(void\)|  
|[\_\_readgsbyte](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)||intrin.h|unsigned char \_\_readgsbyte\(unsigned long Offset\)|  
|[\_\_readgsdword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)||intrin.h|unsigned long \_\_readgsdword\(unsigned long Offset\)|  
|[\_\_readgsqword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)||intrin.h|unsigned \_\_int64 \_\_readgsqword\(unsigned long Offset\)|  
|[\_\_readgsword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)||intrin.h|unsigned short \_\_readgsword\(unsigned long Offset\)|  
|[\_\_readmsr](../intrinsics/readmsr.md)||intrin.h|unsigned \_\_int64 \_\_readmsr\(unsigned long\)|  
|[\_\_readpmc](../intrinsics/readpmc.md)||intrin.h|unsigned \_\_int64 \_\_readpmc\(unsigned long a\)|  
|[\_ReadWriteBarrier](../intrinsics/readwritebarrier.md)||intrin.h|void \_ReadWriteBarrier\(void\)|  
|[\_ReturnAddress](../intrinsics/returnaddress.md)||intrin.h|void \* \_ReturnAddress\(void\)|  
|\_rorx\_u32|BMI \[2\]|immintrin.h|unsigned int \_rorx\_u32\(unsigned int,const unsigned int\)|  
|\_rorx\_u64|BMI \[2\]|immintrin.h|unsigned \_\_int64 \_rorx\_u64\(unsigned \_\_int64,const unsigned int\)|  
|[\_rotl16](../intrinsics/rotl8-rotl16.md)||intrin.h|unsigned short \_rotl16\(unsigned short value,unsigned char shift\)|  
|[\_rotl8](../intrinsics/rotl8-rotl16.md)||intrin.h|unsigned char \_rotl8\(unsigned char value,unsigned char shift\)|  
|[\_rotr16](../intrinsics/rotr8-rotr16.md)||intrin.h|unsigned short \_rotr16\(unsigned short value,unsigned char shift\)|  
|[\_rotr8](../intrinsics/rotr8-rotr16.md)||intrin.h|unsigned char \_rotr8\(unsigned char value,unsigned char shift\)|  
|\_rsm||intrin.h|void \_rsm\(void\)|  
|\_sarx\_i32|BMI \[2\]|immintrin.h|int \_sarx\_i32\(int,unsigned int\)|  
|\_sarx\_i64|BMI \[2\]|immintrin.h|\_\_int64 \_sarx\_i64\(\_\_int64,unsigned int\)|  
|[\_\_segmentlimit](../intrinsics/segmentlimit.md)||intrin.h|unsigned long \_\_segmentlimit\(unsigned long a\)|  
|\_sgdt||intrin.h|void \_sgdt\(void\*\)|  
|[\_\_shiftleft128](../intrinsics/shiftleft128.md)||intrin.h|unsigned \_\_int64 \_\_shiftleft128\(unsigned \_\_int64 LowPart,unsigned \_\_int64 HighPart,unsigned char Shift\)|  
|[\_\_shiftright128](../intrinsics/shiftright128.md)||intrin.h|unsigned \_\_int64 \_\_shiftright128\(unsigned \_\_int64 LowPart,unsigned \_\_int64 HighPart,unsigned char Shift\)|  
|\_shlx\_u32|BMI \[2\]|immintrin.h|unsigned int \_shlx\_u32\(unsigned int,unsigned int\)|  
|\_shlx\_u64|BMI \[2\]|immintrin.h|unsigned \_\_int64 \_shlx\_u64\(unsigned \_\_int64,unsigned int\)|  
|\_shrx\_u32|BMI \[2\]|immintrin.h|unsigned int \_shrx\_u32\(unsigned int,unsigned int\)|  
|\_shrx\_u64|BMI \[2\]|immintrin.h|unsigned \_\_int64 \_shrx\_u64\(unsigned \_\_int64,unsigned int\)|  
|[\_\_sidt](../intrinsics/sidt.md)||intrin.h|void \_\_sidt\(void\*\)|  
|\_\_slwpcb|LWP \[1\]|ammintrin.h|void \*\_\_slwpcb\(void\)|  
|\_stac|SMAP|intrin.h|void \_stac\(void\)|  
|\_store\_be\_u16<br /><br /> [\_storebe\_i16](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_storebe_i16&expand=5141)|MOVBE|immintrin.h|void \_store\_be\_u16\(void \*, unsigned short\);<br /><br /> void \_storebe\_i16\(void \*, short\); \[3\]|  
|\_store\_be\_u32<br /><br /> [\_storebe\_i32](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_storebe_i32&expand=5142)|MOVBE|immintrin.h|void \_store\_be\_u32\(void \*, unsigned int\);<br /><br /> void \_storebe\_i32\(void \*, int\); \[3\]|  
|\_store\_be\_u64<br /><br /> [\_storebe\_i64](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_storebe_i64&expand=5143)|MOVBE|immintrin.h|void \_store\_be\_u64\(void \*, unsigned \_\_int64\);<br /><br /> void \_storebe\_i64\(void \*, \_\_int64\); \[3\]|  
|\_Store\_HLERelease|HLE \[2\]|immintrin.h|void \_Store\_HLERelease\(long volatile \*,long\)|  
|\_Store64\_HLERelease|HLE \[2\]|immintrin.h|void \_Store64\_HLERelease\(\_\_int64 volatile \*,\_\_int64\)|  
|\_StorePointer\_HLERelease|HLE \[2\]|immintrin.h|void \_StorePointer\_HLERelease\(void \* volatile \*,void \*\)|  
|[\_\_stosb](../intrinsics/stosb.md)||intrin.h|void \_\_stosb\(IN PBYTE,IN BYTE,IN SIZE\_T\)|  
|[\_\_stosd](../intrinsics/stosd.md)||intrin.h|void \_\_stosd\(IN PDWORD,IN DWORD,IN SIZE\_T\)|  
|[\_\_stosq](../intrinsics/stosq.md)||intrin.h|void \_\_stosq\(IN PDWORD64,IN DWORD64,IN SIZE\_T\)|  
|[\_\_stosw](../intrinsics/stosw.md)||intrin.h|void \_\_stosw\(IN PWORD,IN WORD,IN SIZE\_T\)|  
|\_subborrow\_u16||intrin.h|unsigned char \_subborrow\_u16\(unsigned char b\_in,unsigned short src1,unsigned short src2,unsigned short \*diff\)|  
|[\_subborrow\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)||intrin.h|unsigned char \_subborrow\_u32\(unsigned char b\_in,unsigned int src1,unsigned int src2,unsigned int \*diff\)|  
|[\_subborrow\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)||intrin.h|unsigned char \_subborrow\_u64\(unsigned char b\_in,unsigned \_\_int64 src1,unsigned \_\_int64 src2,unsigned \_\_int64 \*diff\)|  
|\_subborrow\_u8||intrin.h|unsigned char \_subborrow\_u8\(unsigned char b\_in,unsigned char src1,unsigned char src2,unsigned char \*diff\)|  
|[\_\_svm\_clgi](../intrinsics/svm-clgi.md)||intrin.h|void \_\_svm\_clgi\(void\)|  
|[\_\_svm\_invlpga](../intrinsics/svm-invlpga.md)||intrin.h|void \_\_svm\_invlpga\(void\*,int\)|  
|[\_\_svm\_skinit](../intrinsics/svm-skinit.md)||intrin.h|void \_\_svm\_skinit\(int\)|  
|[\_\_svm\_stgi](../intrinsics/svm-stgi.md)||intrin.h|void \_\_svm\_stgi\(void\)|  
|[\_\_svm\_vmload](../intrinsics/svm-vmload.md)||intrin.h|void \_\_svm\_vmload\(size\_t\)|  
|[\_\_svm\_vmrun](../intrinsics/svm-vmrun.md)||intrin.h|void \_\_svm\_vmrun\(size\_t\)|  
|[\_\_svm\_vmsave](../intrinsics/svm-vmsave.md)||intrin.h|void \_\_svm\_vmsave\(size\_t\)|  
|\_t1mskc\_u32|ABM \[1\]|ammintrin.h|unsigned int \_t1mskc\_u32\(unsigned int\)|  
|\_t1mskc\_u64|ABM \[1\]|ammintrin.h|unsigned \_\_int64 \_t1mskc\_u64\(unsigned \_\_int64\)|  
|[\_tzcnt\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI|ammintrin.h, immintrin.h|unsigned int \_tzcnt\_u32\(unsigned int\)|  
|[\_tzcnt\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|BMI|ammintrin.h, immintrin.h|unsigned \_\_int64 \_tzcnt\_u64\(unsigned \_\_int64\)|  
|\_tzmsk\_u32|ABM \[1\]|ammintrin.h|unsigned int \_tzmsk\_u32\(unsigned int\)|  
|\_tzmsk\_u64|ABM \[1\]|ammintrin.h|unsigned \_\_int64 \_tzmsk\_u64\(unsigned \_\_int64\)|  
|[\_\_ud2](../intrinsics/ud2.md)||intrin.h|void \_\_ud2\(void\)|  
|[\_\_ull\_rshift](../intrinsics/ull-rshift.md)||intrin.h|unsigned \_\_int64 \[pascal\/cdecl\] \_\_ull\_rshift\(unsigned \_\_int64,int\)|  
|[\_umul128](../intrinsics/umul128.md)||intrin.h|unsigned \_\_int64 \_umul128\(unsigned \_\_int64 multiplier,unsigned \_\_int64 multiplicand,unsigned \_\_int64 \*highproduct\)|  
|[\_\_umulh](../intrinsics/umulh.md)||intrin.h|unsigned \_\_int64 \_\_umulh\(unsigned \_\_int64,unsigned \_\_int64\)|  
|[\_\_vmx\_off](../intrinsics/vmx-off.md)||intrin.h|void \_\_vmx\_off\(void\)|  
|[\_\_vmx\_on](../intrinsics/vmx-on.md)||intrin.h|unsigned char \_\_vmx\_on\(unsigned \_\_int64\*\)|  
|[\_\_vmx\_vmclear](../intrinsics/vmx-vmclear.md)||intrin.h|unsigned char \_\_vmx\_vmclear\(unsigned \_\_int64\*\)|  
|[\_\_vmx\_vmlaunch](../intrinsics/vmx-vmlaunch.md)||intrin.h|unsigned char \_\_vmx\_vmlaunch\(void\)|  
|[\_\_vmx\_vmptrld](../intrinsics/vmx-vmptrld.md)||intrin.h|unsigned char \_\_vmx\_vmptrld\(unsigned \_\_int64\*\)|  
|[\_\_vmx\_vmptrst](../intrinsics/vmx-vmptrst.md)||intrin.h|void \_\_vmx\_vmptrst\(unsigned \_\_int64 \*\)|  
|[\_\_vmx\_vmread](../intrinsics/vmx-vmread.md)||intrin.h|unsigned char \_\_vmx\_vmread\(size\_t,size\_t\*\)|  
|[\_\_vmx\_vmresume](../intrinsics/vmx-vmresume.md)||intrin.h|unsigned char \_\_vmx\_vmresume\(void\)|  
|[\_\_vmx\_vmwrite](../intrinsics/vmx-vmwrite.md)||intrin.h|unsigned char \_\_vmx\_vmwrite\(size\_t,size\_t\)|  
|[\_\_wbinvd](../intrinsics/wbinvd.md)||intrin.h|void \_\_wbinvd\(void\)|  
|[\_WriteBarrier](../intrinsics/writebarrier.md)||intrin.h|void \_WriteBarrier\(void\)|  
|[\_\_writecr0](../intrinsics/writecr0.md)||intrin.h|void \_\_writecr0\(unsigned \_\_int64\)|  
|[\_\_writecr3](../intrinsics/writecr3.md)||intrin.h|void \_\_writecr3\(unsigned \_\_int64\)|  
|[\_\_writecr4](../intrinsics/writecr4.md)||intrin.h|void \_\_writecr4\(unsigned \_\_int64\)|  
|[\_\_writecr8](../intrinsics/writecr8.md)||intrin.h|void \_\_writecr8\(unsigned \_\_int64\)|  
|[\_\_writedr](../intrinsics/writedr.md)||intrin.h|void \_\_writedr\(unsigned,unsigned \_\_int64\)|  
|[\_\_writeeflags](../intrinsics/writeeflags.md)||intrin.h|void \_\_writeeflags\(unsigned \_\_int64\)|  
|[\_writefsbase\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FSGSBASE \[2\]|immintrin.h|void \_writefsbase\_u32\(unsigned int\)|  
|[\_writefsbase\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FSGSBASE \[2\]|immintrin.h|void \_writefsbase\_u64\(unsigned \_\_int64\)|  
|[\_writegsbase\_u32](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FSGSBASE \[2\]|immintrin.h|void \_writegsbase\_u32\(unsigned int\)|  
|[\_writegsbase\_u64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|FSGSBASE \[2\]|immintrin.h|void \_writegsbase\_u64\(unsigned \_\_int64\)|  
|[\_\_writegsbyte](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)||intrin.h|void \_\_writegsbyte\(unsigned long Offset,unsigned char Data\)|  
|[\_\_writegsdword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)||intrin.h|void \_\_writegsdword\(unsigned long Offset,unsigned long Data\)|  
|[\_\_writegsqword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)||intrin.h|void \_\_writegsqword\(unsigned long Offset,unsigned \_\_int64 Data\)|  
|[\_\_writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)||intrin.h|void \_\_writegsword\(unsigned long Offset,unsigned short Data\)|  
|[\_\_writemsr](../intrinsics/writemsr.md)||intrin.h|void \_\_writemsr\(unsigned long,unsigned \_\_int64\)|  
|[\_xabort](http://go.microsoft.com/fwlink/p/?LinkId=512130)|RTM \[2\]|immintrin.h|void \_xabort\(unsigned int\)|  
|[\_xbegin](http://go.microsoft.com/fwlink/p/?LinkId=512130)|RTM \[2\]|immintrin.h|unsigned \_xbegin\(void\)|  
|[\_xend](http://go.microsoft.com/fwlink/p/?LinkId=512130)|RTM \[2\]|immintrin.h|void \_xend\(void\)|  
|[\_xgetbv](http://go.microsoft.com/fwlink/p/?LinkId=512130)|XSAVE \[2\]|immintrin.h|unsigned \_\_int64 \_xgetbv\(unsigned int\)|  
|[\_xrstor](http://go.microsoft.com/fwlink/p/?LinkId=512130)|XSAVE \[2\]|immintrin.h|void \_xrstor\(void const\*,unsigned \_\_int64\)|  
|[\_xrstor64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|XSAVE \[2\]|immintrin.h|void \_xrstor64\(void const\*,unsigned \_\_int64\)|  
|[\_xsave](http://go.microsoft.com/fwlink/p/?LinkId=512130)|XSAVE \[2\]|immintrin.h|void \_xsave\(void\*,unsigned \_\_int64\)|  
|[\_xsave64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|XSAVE \[2\]|immintrin.h|void \_xsave64\(void\*,unsigned \_\_int64\)|  
|[\_xsaveopt](http://go.microsoft.com/fwlink/p/?LinkId=512130)|XSAVEOPT \[2\]|immintrin.h|void \_xsaveopt\(void\*,unsigned \_\_int64\)|  
|[\_xsaveopt64](http://go.microsoft.com/fwlink/p/?LinkId=512130)|XSAVEOPT \[2\]|immintrin.h|void \_xsaveopt64\(void\*,unsigned \_\_int64\)|  
|[\_xsetbv](http://go.microsoft.com/fwlink/p/?LinkId=512130)|XSAVE \[2\]|immintrin.h|void \_xsetbv\(unsigned int,unsigned \_\_int64\)|  
|[\_xtest](http://go.microsoft.com/fwlink/p/?LinkId=512130)|XTEST \[2\]|immintrin.h|unsigned char \_xtest\(void\)|  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Oggetti intrinseci ARM](../intrinsics/arm-intrinsics.md)   
 [Oggetti intrinseci x86](../intrinsics/x86-intrinsics-list.md)