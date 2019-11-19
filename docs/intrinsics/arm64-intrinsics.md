---
title: Funzioni intrinseche ARM64
description: Elenco di funzioni intrinseche ARM64 supportate dal compilatore Microsoft C++ .
f1_keywords:
- __break
- __addx18byte
- __addx18word
- __addx18dword
- __addx18qword
- __cas8
- __cas16
- __cas32
- __cas64
- __casa8
- __casa16
- __casa32
- __casa64
- __casl8
- __casl16
- __casl32
- __casl64
- __casal8
- __casal16
- __casal32
- __casal64
- __crc32b
- __crc32h
- __crc32w
- __crc32d
- __crc32cb
- __crc32ch
- __crc32cw
- __crc32cd
- __getReg
- __getRegFp
- __getCallerReg
- __getCallerRegFp
- __hlt
- __incx18byte
- __incx18word
- __incx18dword
- __incx18qword
- __ldar8
- __ldar16
- __ldar32
- __ldar64
- __ldapr8
- __ldapr16
- __ldapr32
- __ldapr64
- __prefetch2
- __readx18byte
- __readx18word
- __readx18dword
- __readx18qword
- __setReg
- __setRegFp
- __setCallerReg
- __setCallerRegFp
- __stlr8
- __stlr16
- __stlr32
- __stlr64
- __swp8
- __swp16
- __swp32
- __swp64
- __swpa8
- __swpa16
- __swpa32
- __swpa64
- __swpl8
- __swpl16
- __swpl32
- __swpl64
- __swpal8
- __swpal16
- __swpal32
- __swpal64
- __sys
- __svc
- __writex18byte
- __writex18word
- __writex18dword
- __writex18qword
author: sigatrev
ms.author: magardn
ms.date: 11/14/2019
ms.openlocfilehash: 30881c2b45714f91bf9035819b11ae41322b7086
ms.sourcegitcommit: e805200eaef4fe7a65a00051bbd305273af94fe7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/18/2019
ms.locfileid: "74163671"
---
# <a name="arm64-intrinsics"></a>Funzioni intrinseche ARM64

Il compilatore C++ Microsoft (MSVC) rende disponibili gli intrinseci seguenti nell'architettura arm64. Per altre informazioni su ARM, vedere le sezioni architettura e strumenti di sviluppo software del sito Web della [documentazione per sviluppatori ARM](https://developer.arm.com/docs) .

## <a name="top"></a>NEON

Le estensioni del set di istruzioni vettoriali NEON per ARM64 forniscono funzionalità di Single Instruction Multiple Data (SIMD). Sono simili a quelle dei set di istruzioni vettoriali MMX e SSE comuni ai processori di architettura x86 e x64.

Gli intrinseci NEON sono supportati, come specificato nel file di intestazione *arm64_neon. h*. Il supporto di MSVC per le funzioni intrinseche NEON è simile a quello del compilatore ARM64, documentato nel [riferimento intrinseco neon ARM](https://static.docs.arm.com/ihi0073/c/IHI0073C_arm_neon_intrinsics_ref.pdf) nel sito Web del centro informazioni ARM.

##  <a name="A"></a>Elenco intrinseci specifici di ARM64

|Nome funzione|Istruzione|Prototipo di funzione|
|-------------------|-----------------|------------------------|
|__break|BRK|void __break (int)|
|__addx18byte||void __addx18byte (unsigned long, unsigned char)|
|__addx18word||void __addx18word (unsigned long, unsigned short)|
|__addx18dword||void __addx18dword (unsigned long, unsigned long)|
|__addx18qword||void __addx18qword (unsigned long, unsigned __int64)|
|__cas8|CASB|unsigned __int8 __cas8 (senza segno __int8 volatile * _Target, __int8 senza segno _Comp, __int8 senza segno _Value)|
|__cas16|CONTANTI|unsigned __int16 __cas16 (senza segno __int16 volatile * _Target, __int16 senza segno _Comp, __int16 senza segno _Value)|
|__cas32|CAS|unsigned __int32 __cas32 (senza segno __int32 volatile * _Target, __int32 senza segno _Comp, __int32 senza segno _Value)|
|__cas64|CAS|unsigned __int64 __cas64 (senza segno __int64 volatile * _Target, __int64 senza segno _Comp, __int64 senza segno _Value)|
|__casa8|CASAB|unsigned __int8 __casa8 (senza segno __int8 volatile * _Target, __int8 senza segno _Comp, __int8 senza segno _Value)|
|__casa16|CASAH|unsigned __int16 __casa16 (senza segno __int16 volatile * _Target, __int16 senza segno _Comp, __int16 senza segno _Value)|
|__casa32|CASA|unsigned __int32 __casa32 (senza segno __int32 volatile * _Target, __int32 senza segno _Comp, __int32 senza segno _Value)|
|__casa64|CASA|unsigned __int64 __casa64 (senza segno __int64 volatile * _Target, __int64 senza segno _Comp, __int64 senza segno _Value)|
|__casl8|CASLB|unsigned __int8 __casl8 (senza segno __int8 volatile * _Target, __int8 senza segno _Comp, __int8 senza segno _Value)|
|__casl16|CASLH|unsigned __int16 __casl16 (senza segno __int16 volatile * _Target, __int16 senza segno _Comp, __int16 senza segno _Value)|
|__casl32|Cerrone|unsigned __int32 __casl32 (senza segno __int32 volatile * _Target, __int32 senza segno _Comp, __int32 senza segno _Value)|
|__casl64|Cerrone|unsigned __int64 __casl64 (senza segno __int64 volatile * _Target, __int64 senza segno _Comp, __int64 senza segno _Value)|
|__casal8|CASALB|unsigned __int8 __casal8 (senza segno __int8 volatile * _Target, __int8 senza segno _Comp, __int8 senza segno _Value)|
|__casal16|CASALH|unsigned __int16 __casal16 (senza segno __int16 volatile * _Target, __int16 senza segno _Comp, __int16 senza segno _Value)|
|__casal32|CASAL|unsigned __int32 __casal32 (senza segno __int32 volatile * _Target, __int32 senza segno _Comp, __int32 senza segno _Value)|
|__casal64|CASAL|unsigned __int64 __casal64 (senza segno __int64 volatile * _Target, __int64 senza segno _Comp, __int64 senza segno _Value)|
|__crc32b|CRC32B|unsigned __int32 __crc32b (unsigned __int32, unsigned __int32)|
|__crc32h|CRC32H|unsigned __int32 __crc32h (unsigned __int32, unsigned __int32)|
|__crc32w|CRC32W|unsigned __int32 __crc32w (unsigned __int32, unsigned __int32)|
|__crc32d|CRC32X|unsigned __int32 __crc32d (unsigned __int32, unsigned __int64)|
|__crc32cb|CRC32CB|unsigned __int32 __crc32cb (unsigned __int32, unsigned __int32)|
|__crc32ch|CRC32CH|unsigned __int32 __crc32ch (unsigned __int32, unsigned __int32)|
|__crc32cw|CRC32CW|unsigned __int32 __crc32cw (unsigned __int32, unsigned __int32)|
|__crc32cd|CRC32CX|unsigned __int32 __crc32cd (unsigned __int32, unsigned __int64)|
|__dmb|DMB|void __dmb(unsigned int `_Type`)<br /><br /> Inserisce un'operazione di barriera di memoria nel flusso di istruzioni. Il parametro `_Type` specifica il tipo di restrizione imposto dalla barriera.<br /><br /> Per altre informazioni sui tipi di restrizioni che possono essere applicati, vedere [restrizioni della barriera di memoria](#BarrierRestrictions).|
|__dsb|DSB|void __dsb(unsigned int _Type)<br /><br /> Inserisce un'operazione di barriera di memoria nel flusso di istruzioni. Il parametro `_Type` specifica il tipo di restrizione imposto dalla barriera.<br /><br /> Per altre informazioni sui tipi di restrizioni che possono essere applicati, vedere [restrizioni della barriera di memoria](#BarrierRestrictions).|
|__isb|ISB|void __isb(unsigned int _Type)<br /><br /> Inserisce un'operazione di barriera di memoria nel flusso di istruzioni. Il parametro `_Type` specifica il tipo di restrizione imposto dalla barriera.<br /><br /> Per altre informazioni sui tipi di restrizioni che possono essere applicati, vedere [restrizioni della barriera di memoria](#BarrierRestrictions).|
|__getReg||unsigned __int64 __getReg (int)|
|__getRegFp||doppio __getRegFp (int)|
|__getCallerReg||unsigned __int64 __getCallerReg (int)|
|__getCallerRegFp||doppio __getCallerRegFp (int)|
|__hvc|HVC|unsigned int __hvc(unsigned int, ...)|
|__hlt|HLT|int __hlt (unsigned int,...)|
|__incx18byte||void __incx18byte (unsigned long)|
|__incx18word||void __incx18word (unsigned long)|
|__incx18dword||void __incx18dword (unsigned long)|
|__incx18qword||void __incx18qword (unsigned long)|
|__iso_volatile_load16||__int16 \__iso_volatile_load16 (const volatile \__int16 \*)<br /><br /> Per ulteriori informazioni, vedere [__iso_volatile_load funzioni intrinseche/Store](#IsoVolatileLoadStore).|
|__iso_volatile_load32||__int32 \__iso_volatile_load32 (const volatile \__int32 \*)<br /><br /> Per ulteriori informazioni, vedere [__iso_volatile_load funzioni intrinseche/Store](#IsoVolatileLoadStore).|
|__iso_volatile_load64||__int64 \__iso_volatile_load64 (const volatile \__int64 \*)<br /><br /> Per ulteriori informazioni, vedere [__iso_volatile_load funzioni intrinseche/Store](#IsoVolatileLoadStore).|
|__iso_volatile_load8||__int8 \__iso_volatile_load8 (const volatile \__int8 \*)<br /><br /> Per ulteriori informazioni, vedere [__iso_volatile_load funzioni intrinseche/Store](#IsoVolatileLoadStore).|
|__iso_volatile_store16||void __iso_volatile_store16 (volatile \__int16 \*, \__int16)<br /><br /> Per ulteriori informazioni, vedere [__iso_volatile_load funzioni intrinseche/Store](#IsoVolatileLoadStore).|
|__iso_volatile_store32||void __iso_volatile_store32 (volatile \__int32 \*, \__int32)<br /><br /> Per ulteriori informazioni, vedere [__iso_volatile_load funzioni intrinseche/Store](#IsoVolatileLoadStore).|
|__iso_volatile_store64||void __iso_volatile_store64 (volatile \__int64 \*, \__int64)<br /><br /> Per ulteriori informazioni, vedere [__iso_volatile_load funzioni intrinseche/Store](#IsoVolatileLoadStore).|
|__iso_volatile_store8||void __iso_volatile_store8 (volatile \__int8 \*, \__int8)<br /><br /> Per ulteriori informazioni, vedere [__iso_volatile_load funzioni intrinseche/Store](#IsoVolatileLoadStore).|
|__ldar8|LDARB|unsigned __int8 __ldar8 (unsigned __int8 volatile * _Target)|
|__ldar16|LDARH|unsigned __int16 __ldar16 (unsigned __int16 volatile * _Target)|
|__ldar32|LDAR|unsigned __int32 __ldar32 (unsigned __int32 volatile * _Target)|
|__ldar64|LDAR|unsigned __int64 __ldar64 (unsigned __int64 volatile * _Target)|
|__ldapr8|LDAPRB|unsigned __int8 __ldapr8 (unsigned __int8 volatile * _Target)|
|__ldapr16|LDAPRH|unsigned __int16 __ldapr16 (unsigned __int16 volatile * _Target)|
|__ldapr32|LDAPr|unsigned __int32 __ldapr32 (unsigned __int32 volatile * _Target)|
|__ldapr64|LDAPr|unsigned __int64 __ldapr64 (unsigned __int64 volatile * _Target)|
|__mulh||\__int64 __mulh (\__int64, \__int64)|
|__prefetch|PRFM|void __cdecl \__prefetch (const void \*)<br /><br /> Fornisce un hint di memoria `PRFM` con l'operazione di prelettura `PLDL1KEEP` al sistema a cui è possibile accedere a breve. Alcuni sistemi possono scegliere di ottimizzare tale criterio di accesso alla memoria per migliorare le prestazioni di runtime. Tuttavia, dal punto di vista del linguaggio C++, la funzione non ha alcun effetto osservabile e potrebbe non eseguire alcuna operazione.|
|__prefetch2|PRFM|void __cdecl \__prefetch (const void \*, uint8_t prfop)<br /><br /> Fornisce un hint di memoria `PRFM` con l'operazione di prelettura fornita al sistema a cui è possibile accedere a breve dalla memoria all'indirizzo specificato. Alcuni sistemi possono scegliere di ottimizzare tale criterio di accesso alla memoria per migliorare le prestazioni di runtime. Tuttavia, dal punto di vista del linguaggio C++, la funzione non ha alcun effetto osservabile e potrebbe non eseguire alcuna operazione.|
|__readx18byte||__readx18byte char senza segno (Long senza segno)|
|__readx18word||unsigned short __readx18word (unsigned long)|
|__readx18dword||Unsigned Long __readx18dword (unsigned long)|
|__readx18qword||unsigned __int64 __readx18qword (unsigned long)|
|__setReg||void __setReg (int, unsigned __int64)|
|__setRegFp||void __setRegFp (int, Double)|
|__setCallerReg||void __setCallerReg (int, unsigned __int64)|
|__setCallerRegFp||void __setCallerRegFp (int, Double)|
|__sev|SEV|void __sev(void)|
|__static_assert||void __static_assert (int, const char \*)|
|__stlr8|STLRB|void __stlr8 (unsigned __int8 volatile * _Target, __int8 senza segno _Value)|
|__stlr16|STLRH|void __stlr16 (unsigned __int16 volatile * _Target, __int16 senza segno _Value)|
|__stlr32|STLR|void __stlr32 (unsigned __int32 volatile * _Target, __int32 senza segno _Value)|
|__stlr64|STLR|void __stlr64 (unsigned __int64 volatile * _Target, __int64 senza segno _Value)|
|__swp8|SWPB|unsigned __int8 __swp8 (unsigned __int8 volatile * _Target, unsigned __int8 _Value)|
|__swp16|SWPH|unsigned __int16 __swp16 (unsigned __int16 volatile * _Target, unsigned __int16 _Value)|
|__swp32|SWP|unsigned __int32 __swp32 (unsigned __int32 volatile * _Target, unsigned __int32 _Value)|
|__swp64|SWP|unsigned __int64 __swp64 (unsigned __int64 volatile * _Target, unsigned __int64 _Value)|
|__swpa8|SWPAB|unsigned __int8 __swpa8 (unsigned __int8 volatile * _Target, unsigned __int8 _Value)|
|__swpa16|SWPAH|unsigned __int16 __swpa16 (unsigned __int16 volatile * _Target, unsigned __int16 _Value)|
|__swpa32|SWPA|unsigned __int32 __swpa32 (unsigned __int32 volatile * _Target, unsigned __int32 _Value)|
|__swpa64|SWPA|unsigned __int64 __swpa64 (unsigned __int64 volatile * _Target, unsigned __int64 _Value)|
|__swpl8|SWPLB|unsigned __int8 __swpl8 (unsigned __int8 volatile * _Target, unsigned __int8 _Value)|
|__swpl16|SWPLH|unsigned __int16 __swpl16 (unsigned __int16 volatile * _Target, unsigned __int16 _Value)|
|__swpl32|SWPL|unsigned __int32 __swpl32 (unsigned __int32 volatile * _Target, unsigned __int32 _Value)|
|__swpl64|SWPL|unsigned __int64 __swpl64 (unsigned __int64 volatile * _Target, unsigned __int64 _Value)|
|__swpal8|SWPALB|unsigned __int8 __swpal8 (unsigned __int8 volatile * _Target, unsigned __int8 _Value)|
|__swpal16|SWPALH|unsigned __int16 __swpal16 (unsigned __int16 volatile * _Target, unsigned __int16 _Value)|
|__swpal32|SWPAL|unsigned __int32 __swpal32 (unsigned __int32 volatile * _Target, unsigned __int32 _Value)|
|__swpal64|SWPAL|unsigned __int64 __swpal64 (unsigned __int64 volatile * _Target, unsigned __int64 _Value)|
|__sys|SYS|unsigned int __sys (int, __int64)|
|__svc|SVC|unsigned int __svc (unsigned int,...)|
|__wfe|WFE|void __wfe(void)|
|__wfi|WFI|void __wfi(void)|
|__writex18byte||void __writex18byte (unsigned long, unsigned char)|
|__writex18word||void __writex18word (unsigned long, unsigned short)|
|__writex18dword||void __writex18dword (unsigned long, unsigned long)|
|__writex18qword||void __writex18qword (unsigned long, unsigned __int64)|
|__umulh||unsigned \__int64 __umulh (\_senza segno _int64, \_senza segno _int64)|
|_CopyDoubleFromInt64||doppio _CopyDoubleFromInt64 (\__int64)|
|_CopyFloatFromInt32||float _CopyFloatFromInt32 (\__int32)|
|_CopyInt32FromFloat||__int32 _CopyInt32FromFloat(float)|
|_CopyInt64FromDouble||__int64 _CopyInt64FromDouble(double)|
|_CountLeadingOnes||unsigned int _CountLeadingOnes(unsigned long)|
|_CountLeadingOnes64||unsigned int _CountLeadingOnes64 (unsigned \__int64)|
|_CountLeadingSigns||unsigned int _CountLeadingSigns(long)|
|_CountLeadingSigns64||unsigned int _CountLeadingSigns64 (\__int64)|
|_CountLeadingZeros||unsigned int _CountLeadingZeros(unsigned long)|
|_CountLeadingZeros64||unsigned int _CountLeadingZeros64 (unsigned \__int64)|
|_ReadStatusReg|MRS|\__int64 _ReadStatusReg (int)|
|_WriteStatusReg|MSR|void _WriteStatusReg (int, \__int64)|

[[Torna all'inizio](#top)]

###  <a name="BarrierRestrictions"></a>Limitazioni della barriera di memoria

Le funzioni intrinseche `__dmb` (barriera di memoria dati), `__dsb` (barriera di sincronizzazione dei dati) e `__isb` (barriera di sincronizzazione delle istruzioni) utilizzano i valori predefiniti seguenti per specificare la restrizione della barriera di memoria in termini di dominio di condivisione e il tipo di accesso interessato dall'operazione.

|Valore di restrizione|Descrizione|
|-----------------------|-----------------|
|_ARM64_BARRIER_SY|Sistema completo, operazioni di lettura e scrittura.|
|_ARM64_BARRIER_ST|Sistema completo, solo operazioni di scrittura.|
|_ARM64_BARRIER_LD|Sistema completo, sola lettura.|
|_ARM64_BARRIER_ISH|Condivisibile all'interno, operazioni di lettura e scrittura.|
|_ARM64_BARRIER_ISHST|Condivisibile all'interno, solo operazioni di scrittura.|
|_ARM64_BARRIER_ISHLD|Condivisibile interna, sola lettura.|
|_ARM64_BARRIER_NSH|Non condivisibile, operazioni di lettura e scrittura.|
|_ARM64_BARRIER_NSHST|Non condivisibile, solo operazioni di scrittura.|
|_ARM64_BARRIER_NSHLD|Non condivisibile, in sola lettura.|
|_ARM64_BARRIER_OSH|Condivisibile all'esterno, operazioni di lettura e scrittura.|
|_ARM64_BARRIER_OSHST|Condivisibile all'esterno, solo operazioni di scrittura.|
|_ARM64_BARRIER_OSHLD|Condivisibile all'esterno, di sola lettura.|

Per la `__isb` intrinseca, l'unica restrizione attualmente valida è _ARM64_BARRIER_SY; tutti gli altri valori sono riservati dall'architettura.

###  <a name="IsoVolatileLoadStore"></a>__iso_volatile_load intrinseci/Store

Queste funzioni intrinseche eseguono in modo esplicito i carichi e gli archivi che non sono soggetti alle ottimizzazioni del compilatore.

```C
__int16 __iso_volatile_load16(const volatile __int16 * Location);
__int32 __iso_volatile_load32(const volatile __int32 * Location);
__int64 __iso_volatile_load64(const volatile __int64 * Location);
__int8 __iso_volatile_load8(const volatile __int8 * Location);

void __iso_volatile_store16(volatile __int16 * Location, __int16 Value);
void __iso_volatile_store32(volatile __int32 * Location, __int32 Value);
void __iso_volatile_store64(volatile __int64 * Location, __int64 Value);
void __iso_volatile_store8(volatile __int8 * Location, __int8 Value);
```

#### <a name="parameters"></a>Parametri

*Località*\
Indirizzo di una posizione di memoria da cui leggere o in cui scrivere.

*Valore*\
Valore da scrivere nella posizione di memoria specificata (solo funzioni intrinseche di archiviazione).

#### <a name="return-value-load-intrinsics-only"></a>Valore restituito (solo funzioni intrinseche di caricamento)

Valore della posizione di memoria specificata da *location*.

#### <a name="remarks"></a>Note

È possibile usare le funzioni intrinseche `__iso_volatile_load8/16/32/64` e `__iso_volatile_store8/16/32/64` per eseguire in modo esplicito gli accessi alla memoria che non sono soggetti alle ottimizzazioni del compilatore. Il compilatore non può rimuovere, sintetizzare o modificare l'ordine relativo di queste operazioni. Tuttavia, non genera barriere di memoria hardware implicite. Di conseguenza, l'hardware potrebbe comunque riordinare gli accessi alla memoria osservabili tra più thread. Più precisamente, queste funzioni intrinseche sono equivalenti alle seguenti espressioni come compilate in **/volatile: ISO**.

```cpp
int a = __iso_volatile_load32(p);    // equivalent to: int a = *(const volatile __int32*)p;
__iso_volatile_store32(p, a);        // equivalent to: *(volatile __int32*)p = a;
```

Si noti che le funzioni intrinseche accettano puntatori volatili per poter usare variabili volatili. Tuttavia, non esiste alcun requisito o raccomandazione per usare i puntatori volatili come argomenti. La semantica di queste operazioni è esattamente la stessa se viene usato un tipo normale non volatile.

Per ulteriori informazioni sull'argomento della riga di comando **/volatile: ISO** , vedere [/volatile (interpretazione di parole chiave volatile)](../build/reference/volatile-volatile-keyword-interpretation.md).

##  <a name="I"></a>Supporto di ARM64 per le funzioni intrinseche di altre architetture

La tabella seguente elenca le funzioni intrinseche di altre architetture supportate nelle piattaforme ARM64. Laddove il comportamento di un intrinseco in ARM64 differisce dal comportamento di altre architetture hardware, vengono indicati ulteriori dettagli.

|Nome funzione|Prototipo di funzione|
|-------------------|------------------------|
|__assume|void __assume(int)|
|__code_seg|void __code_seg (const char \*)|
|__debugbreak|void __cdecl \__debugbreak (void)|
|__fastfail|__declspec (noreturn) void \__fastfail (unsigned int)|
|__nop|void __nop(void)|
|__yield|void __yield (void) **Nota:** sulle piattaforme arm64 questa funzione genera l'istruzione yield. Questa istruzione indica che il thread sta eseguendo un'attività che può essere temporaneamente sospesa dall'esecuzione, ad esempio un spinlock, senza influire negativamente sul programma. Consente alla CPU di eseguire altre attività durante i cicli di esecuzione che altrimenti sarebbero sprecati.|
|_AddressOfReturnAddress|void \* _AddressOfReturnAddress (void)|
|_BitScanForward|unsigned char _BitScanForward (unsigned long \* _Index, unsigned long _Mask)|
|_BitScanForward64|unsigned char _BitScanForward64 (unsigned long \* _Index, __int64 senza segno _Mask)|
|_BitScanReverse|unsigned char _BitScanReverse (unsigned long \* _Index, unsigned long _Mask)|
|_BitScanReverse64|unsigned char _BitScanReverse64 (unsigned long \* _Index, __int64 senza segno _Mask)|
|_bittest|unsigned char _bittest (Long const \*, Long)|
|_bittest64|unsigned char _bittest64 (__int64 const \*, __int64)|
|_bittestandcomplement|unsigned char _bittestandcomplement (Long \*, Long)|
|_bittestandcomplement64|_bittestandcomplement64 char senza segno (__int64 \*, __int64)|
|_bittestandreset|unsigned char _bittestandreset (Long \*, Long)|
|_bittestandreset64|_bittestandreset64 char senza segno (__int64 \*, __int64)|
|_bittestandset|unsigned char _bittestandset (Long \*, Long)|
|_bittestandset64|_bittestandset64 char senza segno (__int64 \*, __int64)|
|_byteswap_uint64|unsigned __int64 \__cdecl _byteswap_uint64 (\_senza segno _int64)|
|_byteswap_ulong|unsigned long __cdecl _byteswap_ulong(unsigned long)|
|_byteswap_ushort|unsigned short __cdecl _byteswap_ushort(unsigned short)|
|_disable|void __cdecl _disable (void) **Nota:** sulle piattaforme arm64 questa funzione genera l'istruzione `MSR DAIFCLR,#2`; è disponibile solo come funzione intrinseca.|
|_enable|void __cdecl _enable (void) **Nota:** sulle piattaforme arm64 questa funzione genera l'istruzione `MSR DAIFSET,#2`; è disponibile solo come funzione intrinseca.|
|_lrotl|unsigned long __cdecl _lrotl(unsigned long, int)|
|_lrotr|unsigned long __cdecl _lrotr(unsigned long, int)|
|_ReadBarrier|void _ReadBarrier(void)|
|_ReadWriteBarrier|void _ReadWriteBarrier(void)|
|_ReturnAddress|void \* _ReturnAddress (void)|
|_rotl|unsigned int __cdecl _rotl(unsigned int _Value, int _Shift)|
|_rotl16|unsigned short _rotl16(unsigned short _Value, unsigned char _Shift)|
|_rotl64|unsigned __int64 \__cdecl _rotl64 (senza segno \__int64 _Value, int _Shift)|
|_rotl8|unsigned char _rotl8(unsigned char _Value, unsigned char _Shift)|
|_rotr|unsigned int __cdecl _rotr(unsigned int _Value, int _Shift)|
|_rotr16|unsigned short _rotr16(unsigned short _Value, unsigned char _Shift)|
|_rotr64|unsigned __int64 \__cdecl _rotr64 (senza segno \__int64 _Value, int _Shift)|
|_rotr8|unsigned char _rotr8(unsigned char _Value, unsigned char _Shift)|
|_setjmpex|int __cdecl _setjmpex(jmp_buf)|
|_WriteBarrier|void _WriteBarrier(void)|

[[Torna all'inizio](#top)]

## <a name="interlocked-intrinsics"></a>Funzioni intrinseche Interlocked

Le funzioni intrinseche interlocked sono un set di funzioni intrinseche che consentono di eseguire operazioni atomiche di lettura, modifica e scrittura. Alcune di esse sono comuni a tutte le piattaforme. Sono elencate separatamente, perché ne esistono un numero elevato. Poiché le definizioni sono perlopiù ridondanti, è più facile considerarle in termini generali. Dai nomi se ne evince l'esatto comportamento.

Nella tabella seguente viene riepilogato il supporto ARM64 delle funzioni intrinseche Interlocked non bittest. Ogni cella della tabella corrisponde a un nome derivato aggiungendo il nome dell'operazione nella cella più a sinistra della riga e il nome del tipo nella cella più in alto della colonna in `_Interlocked`. Ad esempio, la cella in corrispondenza dell'intersezione tra la `Xor` riga e la colonna `8` corrisponde `_InterlockedXor8` ed è completamente supportata. La maggior parte delle funzioni supportate fornisce i seguenti suffissi facoltativi: `_acq`, `_rel` e `_nf`. Il suffisso `_acq` indica una semantica di acquisizione e il suffisso `_rel` indica una semantica di rilascio. Il suffisso `_nf` o "No Fence" è univoco per ARM e ARM64 e viene illustrato nella sezione successiva.

||8|16|32|64|128|P|
|-|-------|--------|--------|--------|-------|-------|
|Aggiunta|Nessuno|Nessuno|Completo|Completo|Nessuno|Nessuno|
|e|Completo|Completo|Completo|Completo|Nessuno|Nessuno|
|CompareExchange|Completo|Completo|Completo|Completo|Completo|Completo|
|Operatore di conversione|Nessuno|Completo|Completo|Completo|Nessuno|Nessuno|
|Exchange|Completo|Completo|Completo|Completo|Nessuno|Completo|
|ExchangeAdd|Completo|Completo|Completo|Completo|Nessuno|Nessuno|
|Operatore di incremento|Nessuno|Completo|Completo|Completo|Nessuno|Nessuno|
|Oppure|Completo|Completo|Completo|Completo|Nessuno|Nessuno|
|Xor|Completo|Completo|Completo|Completo|Nessuno|Nessuno|

Key:

- **Completo**: supporta i moduli plain, `_acq`, `_rel`e `_nf`.

- **None**: non supportato

###  <a name="nf_suffix"></a>suffisso _nf (nessun limite)

Il suffisso `_nf` o "No Fence" indica che l'operazione non si comporta come un tipo di barriera di memoria, a differenza delle altre tre forme (Plain, `_acq`e `_rel`), che si comportano tutti come un tipo di barriera. Un possibile uso dei moduli `_nf` consiste nel mantenere un contatore delle statistiche aggiornato da più thread contemporaneamente, ma il cui valore non viene altrimenti usato durante l'esecuzione di più thread.

### <a name="list-of-interlocked-intrinsics"></a>Elenco di funzioni intrinseche Interlocked

|Nome funzione|Prototipo di funzione|
|-------------------|------------------------|
|_InterlockedAdd|Long _InterlockedAdd (Long _volatile \*, Long)|
|_InterlockedAdd64|__int64 _InterlockedAdd64 (\__int64 volatile \*, \__int64)|
|_InterlockedAdd64_acq|__int64 _InterlockedAdd64_acq (\__int64 volatile \*, \__int64)|
|_InterlockedAdd64_nf|__int64 _InterlockedAdd64_nf (\__int64 volatile \*, \__int64)|
|_InterlockedAdd64_rel|__int64 _InterlockedAdd64_rel (\__int64 volatile \*, \__int64)|
|_InterlockedAdd_acq|Long _InterlockedAdd_acq (long volatile \*, Long)|
|_InterlockedAdd_nf|Long _InterlockedAdd_nf (long volatile \*, Long)|
|_InterlockedAdd_rel|Long _InterlockedAdd_rel (long volatile \*, Long)|
|_InterlockedAnd|Long _InterlockedAnd (long volatile \*, Long)|
|_InterlockedAnd16|Short _InterlockedAnd16 (short volatile \*, short)|
|_InterlockedAnd16_acq|Short _InterlockedAnd16_acq (short volatile \*, short)|
|_InterlockedAnd16_nf|Short _InterlockedAnd16_nf (short volatile \*, short)|
|_InterlockedAnd16_rel|Short _InterlockedAnd16_rel (short volatile \*, short)|
|_InterlockedAnd64|__int64 _InterlockedAnd64 (\__int64 volatile \*, \__int64)|
|_InterlockedAnd64_acq|__int64 _InterlockedAnd64_acq (\__int64 volatile \*, \__int64)|
|_InterlockedAnd64_nf|__int64 _InterlockedAnd64_nf (\__int64 volatile \*, \__int64)|
|_InterlockedAnd64_rel|__int64 _InterlockedAnd64_rel (\__int64 volatile \*, \__int64)|
|_InterlockedAnd8|char _InterlockedAnd8 (Char volatile \*, Char)|
|_InterlockedAnd8_acq|char _InterlockedAnd8_acq (Char volatile \*, Char)|
|_InterlockedAnd8_nf|char _InterlockedAnd8_nf (Char volatile \*, Char)|
|_InterlockedAnd8_rel|char _InterlockedAnd8_rel (Char volatile \*, Char)|
|_InterlockedAnd_acq|Long _InterlockedAnd_acq (long volatile \*, Long)|
|_InterlockedAnd_nf|Long _InterlockedAnd_nf (long volatile \*, Long)|
|_InterlockedAnd_rel|Long _InterlockedAnd_rel (long volatile \*, Long)|
|_InterlockedCompareExchange|Long __cdecl _InterlockedCompareExchange (long volatile \*, Long, Long)|
|_InterlockedCompareExchange_acq|Long _InterlockedCompareExchange_acq (long volatile \*, Long, Long)|
|_InterlockedCompareExchange_nf|Long _InterlockedCompareExchange_nf (long volatile \*, Long, Long)|
|_InterlockedCompareExchange_rel|Long _InterlockedCompareExchange_rel (long volatile \*, Long, Long)|
|_InterlockedCompareExchange16|Short _InterlockedCompareExchange16 (short volatile \*, short, short)|
|_InterlockedCompareExchange16_acq|Short _InterlockedCompareExchange16_acq (short volatile \*, short, short)|
|_InterlockedCompareExchange16_nf|Short _InterlockedCompareExchange16_nf (short volatile \*, short, short)|
|_InterlockedCompareExchange16_rel|Short _InterlockedCompareExchange16_rel (short volatile \*, short, short)|
|_InterlockedCompareExchange64|__int64 _InterlockedCompareExchange64 (\__int64 volatile \*, \__int64, \__int64)|
|_InterlockedCompareExchange64_acq|__int64 _InterlockedCompareExchange64_acq (\__int64 volatile \*, \__int64, \__int64)|
|_InterlockedCompareExchange64_nf|__int64 _InterlockedCompareExchange64_nf (\__int64 volatile \*, \__int64, \__int64)|
|_InterlockedCompareExchange64_rel|__int64 _InterlockedCompareExchange64_rel (\__int64 volatile \*, \__int64, \__int64)|
|_InterlockedCompareExchange8|char _InterlockedCompareExchange8 (Char volatile \*, Char, Char)|
|_InterlockedCompareExchange8_acq|char _InterlockedCompareExchange8_acq (Char volatile \*, Char, Char)|
|_InterlockedCompareExchange8_nf|char _InterlockedCompareExchange8_nf (Char volatile \*, Char, Char)|
|_InterlockedCompareExchange8_rel|char _InterlockedCompareExchange8_rel (Char volatile \*, Char, Char)|
|_InterlockedCompareExchangePointer|void \* _InterlockedCompareExchangePointer (void \* volatile \*, void \*, void \*)|
|_InterlockedCompareExchangePointer_acq|void \* _InterlockedCompareExchangePointer_acq (void \* volatile \*, void \*, void \*)|
|_InterlockedCompareExchangePointer_nf|void \* _InterlockedCompareExchangePointer_nf (void \* volatile \*, void \*, void \*)|
|_InterlockedCompareExchangePointer_rel|void \* _InterlockedCompareExchangePointer_rel (void \* volatile \*, void \*, void \*)|
|_InterlockedCompareExchange128|unsigned char _InterlockedCompareExchange128 (\__int64 volatile \* _Destination, \__int64 _ExchangeHigh, \__int64 _ExchangeLow, \__int64 \* _ComparandResult)|
|_InterlockedCompareExchange128_acq|unsigned char _InterlockedCompareExchange128_acq (\__int64 volatile \* _Destination, \__int64 _ExchangeHigh, \__int64 _ExchangeLow, \__int64 \* _ComparandResult)|
|_InterlockedCompareExchange128_nf|unsigned char _InterlockedCompareExchange128_nf (\__int64 volatile \* _Destination, \__int64 _ExchangeHigh, \__int64 _ExchangeLow, \__int64 \* _ComparandResult)|
|_InterlockedCompareExchange128_rel|unsigned char _InterlockedCompareExchange128_rel (\__int64 volatile \* _Destination, \__int64 _ExchangeHigh, \__int64 _ExchangeLow, \__int64 \* _ComparandResult)|
|_InterlockedDecrement|Long __cdecl _InterlockedDecrement (long volatile \*)|
|_InterlockedDecrement16|Short _InterlockedDecrement16 (short volatile \*)|
|_InterlockedDecrement16_acq|Short _InterlockedDecrement16_acq (short volatile \*)|
|_InterlockedDecrement16_nf|Short _InterlockedDecrement16_nf (short volatile \*)|
|_InterlockedDecrement16_rel|Short _InterlockedDecrement16_rel (short volatile \*)|
|_InterlockedDecrement64|__int64 _InterlockedDecrement64 (\__int64 volatile \*)|
|_InterlockedDecrement64_acq|__int64 _InterlockedDecrement64_acq (\__int64 volatile \*)|
|_InterlockedDecrement64_nf|__int64 _InterlockedDecrement64_nf (\__int64 volatile \*)|
|_InterlockedDecrement64_rel|__int64 _InterlockedDecrement64_rel (\__int64 volatile \*)|
|_InterlockedDecrement_acq|Long _InterlockedDecrement_acq (long volatile \*)|
|_InterlockedDecrement_nf|Long _InterlockedDecrement_nf (long volatile \*)|
|_InterlockedDecrement_rel|Long _InterlockedDecrement_rel (long volatile \*)|
|_InterlockedExchange|Long __cdecl _InterlockedExchange (long volatile \* _Target, Long)|
|_InterlockedExchange_acq|Long _InterlockedExchange_acq (long volatile \* _Target, Long)|
|_InterlockedExchange_nf|Long _InterlockedExchange_nf (long volatile \* _Target, Long)|
|_InterlockedExchange_rel|Long _InterlockedExchange_rel (long volatile \* _Target, Long)|
|_InterlockedExchange16|Short _InterlockedExchange16 (short volatile \* _Target, short)|
|_InterlockedExchange16_acq|Short _InterlockedExchange16_acq (short volatile \* _Target, short)|
|_InterlockedExchange16_nf|Short _InterlockedExchange16_nf (short volatile \* _Target, short)|
|_InterlockedExchange16_rel|Short _InterlockedExchange16_rel (short volatile \* _Target, short)|
|_InterlockedExchange64|__int64 _InterlockedExchange64 (\__int64 volatile \* _Target \_)|
|_InterlockedExchange64_acq|__int64 _InterlockedExchange64_acq (\__int64 volatile \* _Target \_)|
|_InterlockedExchange64_nf|__int64 _InterlockedExchange64_nf (\__int64 volatile \* _Target \_)|
|_InterlockedExchange64_rel|__int64 _InterlockedExchange64_rel (\__int64 volatile \* _Target \_)|
|_InterlockedExchange8|char _InterlockedExchange8 (Char volatile \* _Target, Char)|
|_InterlockedExchange8_acq|char _InterlockedExchange8_acq (Char volatile \* _Target, Char)|
|_InterlockedExchange8_nf|char _InterlockedExchange8_nf (Char volatile \* _Target, Char)|
|_InterlockedExchange8_rel|char _InterlockedExchange8_rel (Char volatile \* _Target, Char)|
|_InterlockedExchangeAdd|Long __cdecl _InterlockedExchangeAdd (long volatile \*, Long)|
|_InterlockedExchangeAdd16|Short _InterlockedExchangeAdd16 (short volatile \*, short)|
|_InterlockedExchangeAdd16_acq|Short _InterlockedExchangeAdd16_acq (short volatile \*, short)|
|_InterlockedExchangeAdd16_nf|Short _InterlockedExchangeAdd16_nf (short volatile \*, short)|
|_InterlockedExchangeAdd16_rel|Short _InterlockedExchangeAdd16_rel (short volatile \*, short)|
|_InterlockedExchangeAdd64|__int64 _InterlockedExchangeAdd64 (\__int64 volatile \*, \__int64)|
|_InterlockedExchangeAdd64_acq|__int64 _InterlockedExchangeAdd64_acq (\__int64 volatile \*, \__int64)|
|_InterlockedExchangeAdd64_nf|__int64 _InterlockedExchangeAdd64_nf (\__int64 volatile \*, \__int64)|
|_InterlockedExchangeAdd64_rel|__int64 _InterlockedExchangeAdd64_rel (\__int64 volatile \*, \__int64)|
|_InterlockedExchangeAdd8|char _InterlockedExchangeAdd8 (Char volatile \*, Char)|
|_InterlockedExchangeAdd8_acq|char _InterlockedExchangeAdd8_acq (Char volatile \*, Char)|
|_InterlockedExchangeAdd8_nf|char _InterlockedExchangeAdd8_nf (Char volatile \*, Char)|
|_InterlockedExchangeAdd8_rel|char _InterlockedExchangeAdd8_rel (Char volatile \*, Char)|
|_InterlockedExchangeAdd_acq|Long _InterlockedExchangeAdd_acq (long volatile \*, Long)|
|_InterlockedExchangeAdd_nf|Long _InterlockedExchangeAdd_nf (long volatile \*, Long)|
|_InterlockedExchangeAdd_rel|Long _InterlockedExchangeAdd_rel (long volatile \*, Long)|
|_InterlockedExchangePointer|void \* _InterlockedExchangePointer (void \* volatile \* _Target, void \*)|
|_InterlockedExchangePointer_acq|void \* _InterlockedExchangePointer_acq (void \* volatile \* _Target, void \*)|
|_InterlockedExchangePointer_nf|void \* _InterlockedExchangePointer_nf (void \* volatile \* _Target, void \*)|
|_InterlockedExchangePointer_rel|void \* _InterlockedExchangePointer_rel (void \* volatile \* _Target, void \*)|
|_InterlockedIncrement|Long __cdecl _InterlockedIncrement (long volatile \*)|
|_InterlockedIncrement16|Short _InterlockedIncrement16 (short volatile \*)|
|_InterlockedIncrement16_acq|Short _InterlockedIncrement16_acq (short volatile \*)|
|_InterlockedIncrement16_nf|Short _InterlockedIncrement16_nf (short volatile \*)|
|_InterlockedIncrement16_rel|Short _InterlockedIncrement16_rel (short volatile \*)|
|_InterlockedIncrement64|__int64 _InterlockedIncrement64 (\__int64 volatile \*)|
|_InterlockedIncrement64_acq|__int64 _InterlockedIncrement64_acq (\__int64 volatile \*)|
|_InterlockedIncrement64_nf|__int64 _InterlockedIncrement64_nf (\__int64 volatile \*)|
|_InterlockedIncrement64_rel|__int64 _InterlockedIncrement64_rel (\__int64 volatile \*)|
|_InterlockedIncrement_acq|Long _InterlockedIncrement_acq (long volatile \*)|
|_InterlockedIncrement_nf|Long _InterlockedIncrement_nf (long volatile \*)|
|_InterlockedIncrement_rel|Long _InterlockedIncrement_rel (long volatile \*)|
|_InterlockedOr|Long _InterlockedOr (long volatile \*, Long)|
|_InterlockedOr16|Short _InterlockedOr16 (short volatile \*, short)|
|_InterlockedOr16_acq|Short _InterlockedOr16_acq (short volatile \*, short)|
|_InterlockedOr16_nf|Short _InterlockedOr16_nf (short volatile \*, short)|
|_InterlockedOr16_rel|Short _InterlockedOr16_rel (short volatile \*, short)|
|_InterlockedOr64|__int64 _InterlockedOr64 (\__int64 volatile \*, \__int64)|
|_InterlockedOr64_acq|__int64 _InterlockedOr64_acq (\__int64 volatile \*, \__int64)|
|_InterlockedOr64_nf|__int64 _InterlockedOr64_nf (\__int64 volatile \*, \__int64)|
|_InterlockedOr64_rel|__int64 _InterlockedOr64_rel (\__int64 volatile \*, \__int64)|
|_InterlockedOr8|char _InterlockedOr8 (Char volatile \*, Char)|
|_InterlockedOr8_acq|char _InterlockedOr8_acq (Char volatile \*, Char)|
|_InterlockedOr8_nf|char _InterlockedOr8_nf (Char volatile \*, Char)|
|_InterlockedOr8_rel|char _InterlockedOr8_rel (Char volatile \*, Char)|
|_InterlockedOr_acq|Long _InterlockedOr_acq (long volatile \*, Long)|
|_InterlockedOr_nf|Long _InterlockedOr_nf (long volatile \*, Long)|
|_InterlockedOr_rel|Long _InterlockedOr_rel (long volatile \*, Long)|
|_InterlockedXor|Long _InterlockedXor (long volatile \*, Long)|
|_InterlockedXor16|Short _InterlockedXor16 (short volatile \*, short)|
|_InterlockedXor16_acq|Short _InterlockedXor16_acq (short volatile \*, short)|
|_InterlockedXor16_nf|Short _InterlockedXor16_nf (short volatile \*, short)|
|_InterlockedXor16_rel|Short _InterlockedXor16_rel (short volatile \*, short)|
|_InterlockedXor64|__int64 _InterlockedXor64 (\__int64 volatile \*, \__int64)|
|_InterlockedXor64_acq|__int64 _InterlockedXor64_acq (\__int64 volatile \*, \__int64)|
|_InterlockedXor64_nf|__int64 _InterlockedXor64_nf (\__int64 volatile \*, \__int64)|
|_InterlockedXor64_rel|__int64 _InterlockedXor64_rel (\__int64 volatile \*, \__int64)|
|_InterlockedXor8|char _InterlockedXor8 (Char volatile \*, Char)|
|_InterlockedXor8_acq|char _InterlockedXor8_acq (Char volatile \*, Char)|
|_InterlockedXor8_nf|char _InterlockedXor8_nf (Char volatile \*, Char)|
|_InterlockedXor8_rel|char _InterlockedXor8_rel (Char volatile \*, Char)|
|_InterlockedXor_acq|Long _InterlockedXor_acq (long volatile \*, Long)|
|_InterlockedXor_nf|Long _InterlockedXor_nf (long volatile \*, Long)|
|_InterlockedXor_rel|Long _InterlockedXor_rel (long volatile \*, Long)|

[[Torna all'inizio](#top)]

### <a name="_interlockedbittest-intrinsics"></a>funzioni intrinseche _interlockedbittest

Le funzioni intrinseche di test di bit Interlocked semplici sono comuni a tutte le piattaforme. ARM64 aggiunge `_acq`, `_rel`e `_nf` varianti, che modificano solo la semantica della barriera di un'operazione, come descritto nel [suffisso _nf (no Fence)](#nf_suffix) più indietro in questo articolo.

|Nome funzione|Prototipo di funzione|
|-------------------|------------------------|
|_interlockedbittestandreset|unsigned char _interlockedbittestandreset (long volatile \*, Long)|
|_interlockedbittestandreset_acq|unsigned char _interlockedbittestandreset_acq (long volatile \*, Long)|
|_interlockedbittestandreset_nf|unsigned char _interlockedbittestandreset_nf (long volatile \*, Long)|
|_interlockedbittestandreset_rel|unsigned char _interlockedbittestandreset_rel (long volatile \*, Long)|
|_interlockedbittestandreset64|unsigned char _interlockedbittestandreset64 (__int64 volatile \*, __int64)|
|_interlockedbittestandreset64_acq|unsigned char _interlockedbittestandreset64_acq (__int64 volatile \*, __int64)|
|_interlockedbittestandreset64_nf|unsigned char _interlockedbittestandreset64_nf (__int64 volatile \*, __int64)|
|_interlockedbittestandreset64_rel|unsigned char _interlockedbittestandreset64_rel (__int64 volatile \*, __int64)|
|_interlockedbittestandset|unsigned char _interlockedbittestandset (long volatile \*, Long)|
|_interlockedbittestandset_acq|unsigned char _interlockedbittestandset_acq (long volatile \*, Long)|
|_interlockedbittestandset_nf|unsigned char _interlockedbittestandset_nf (long volatile \*, Long)|
|_interlockedbittestandset_rel|unsigned char _interlockedbittestandset_rel (long volatile \*, Long)|
|_interlockedbittestandset64|unsigned char _interlockedbittestandset64 (__int64 volatile \*, __int64)|
|_interlockedbittestandset64_acq|unsigned char _interlockedbittestandset64_acq (__int64 volatile \*, __int64)|
|_interlockedbittestandset64_nf|unsigned char _interlockedbittestandset64_nf (__int64 volatile \*, __int64)|
|_interlockedbittestandset64_rel|unsigned char _interlockedbittestandset64_rel (__int64 volatile \*, __int64)|

[[Torna all'inizio](#top)]

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
Oggetti [intrinseci ARM](arm-intrinsics.md)\
[Riferimento all'assembler ARM](../assembler/arm/arm-assembler-reference.md)\
[C++riferimenti per il linguaggio](../cpp/cpp-language-reference.md)
