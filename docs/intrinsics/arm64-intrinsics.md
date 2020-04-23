---
title: Funzioni intrinseche ARM64
description: Elenco di riferimento delle funzioni intrinseche di ARM64 supportate dal compilatore di Microsoft C' in Visual Studio.
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
helpviewer_keywords:
- __break ARM64 intrinsic
- __addx18byte ARM64 intrinsic
- __addx18word ARM64 intrinsic
- __addx18dword ARM64 intrinsic
- __addx18qword ARM64 intrinsic
- __cas8 ARM64 intrinsic
- __cas16 ARM64 intrinsic
- __cas32 ARM64 intrinsic
- __cas64 ARM64 intrinsic
- __casa8 ARM64 intrinsic
- __casa16 ARM64 intrinsic
- __casa32 ARM64 intrinsic
- __casa64 ARM64 intrinsic
- __casl8 ARM64 intrinsic
- __casl16 ARM64 intrinsic
- __casl32 ARM64 intrinsic
- __casl64 ARM64 intrinsic
- __casal8 ARM64 intrinsic
- __casal16 ARM64 intrinsic
- __casal32 ARM64 intrinsic
- __casal64 ARM64 intrinsic
- __crc32b ARM64 intrinsic
- __crc32h ARM64 intrinsic
- __crc32w ARM64 intrinsic
- __crc32d ARM64 intrinsic
- __crc32cb ARM64 intrinsic
- __crc32ch ARM64 intrinsic
- __crc32cw ARM64 intrinsic
- __crc32cd ARM64 intrinsic
- __getReg ARM64 intrinsic
- __getRegFp ARM64 intrinsic
- __getCallerReg ARM64 intrinsic
- __getCallerRegFp ARM64 intrinsic
- __hlt ARM64 intrinsic
- __incx18byte ARM64 intrinsic
- __incx18word ARM64 intrinsic
- __incx18dword ARM64 intrinsic
- __incx18qword ARM64 intrinsic
- __ldar8 ARM64 intrinsic
- __ldar16 ARM64 intrinsic
- __ldar32 ARM64 intrinsic
- __ldar64 ARM64 intrinsic
- __ldapr8 ARM64 intrinsic
- __ldapr16 ARM64 intrinsic
- __ldapr32 ARM64 intrinsic
- __ldapr64 ARM64 intrinsic
- __prefetch2 ARM64 intrinsic
- __readx18byte ARM64 intrinsic
- __readx18word ARM64 intrinsic
- __readx18dword ARM64 intrinsic
- __readx18qword ARM64 intrinsic
- __setReg ARM64 intrinsic
- __setRegFp ARM64 intrinsic
- __setCallerReg ARM64 intrinsic
- __setCallerRegFp ARM64 intrinsic
- __stlr8 ARM64 intrinsic
- __stlr16 ARM64 intrinsic
- __stlr32 ARM64 intrinsic
- __stlr64 ARM64 intrinsic
- __swp8 ARM64 intrinsic
- __swp16 ARM64 intrinsic
- __swp32 ARM64 intrinsic
- __swp64 ARM64 intrinsic
- __swpa8 ARM64 intrinsic
- __swpa16 ARM64 intrinsic
- __swpa32 ARM64 intrinsic
- __swpa64 ARM64 intrinsic
- __swpl8 ARM64 intrinsic
- __swpl16 ARM64 intrinsic
- __swpl32 ARM64 intrinsic
- __swpl64 ARM64 intrinsic
- __swpal8 ARM64 intrinsic
- __swpal16 ARM64 intrinsic
- __swpal32 ARM64 intrinsic
- __swpal64 ARM64 intrinsic
- __sys ARM64 intrinsic
- __svc ARM64 intrinsic
- __writex18byte ARM64 intrinsic
- __writex18word ARM64 intrinsic
- __writex18dword ARM64 intrinsic
- __writex18qword ARM64 intrinsic
author: sigatrev
ms.author: magardn
ms.date: 11/14/2019
ms.openlocfilehash: 27325df55d128337a45e76bbf5387508a523f57c
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754526"
---
# <a name="arm64-intrinsics"></a>Funzioni intrinseche ARM64

Il compilatore di Microsoft C, ovvero il compilatore (MSVC, Microsoft C, Microsoft, Microsoft, Microsoft, Microsoft, Microsoft C, Microsoft, Microsoft, Microsoft, Microsoft, Microsoft, Microsoft, Microsoft, Microsoft) rende disponibili le seguenti funzioni intrinseche nell'architettura ARM64. Per ulteriori informazioni su ARM, vedere le sezioni Architecture and Software Development Tools del sito Web [ARMI Developer Documentation.](https://developer.arm.com/docs)

## <a name="neon"></a><a name="top"></a>Neon

Le estensioni del set di istruzioni vettoriali NEON per ARM64 forniscono funzionalità SIMD (Single Instruction Multiple Data). Essi assomigliano a quelli nei set di istruzioni vettoriali MMX e SSE che sono comuni ai processori di architettura x86 e x64.

Le funzioni intrinseche NEON sono supportate, come indicato nel file di intestazione *arm64_neon.h*. Il supporto MSVC per le funzioni intrinseche di NEON è simile a quello del compilatore ARM64, documentato nel [riferimento intrinseco DI ARM NEON](https://static.docs.arm.com/ihi0073/c/IHI0073C_arm_neon_intrinsics_ref.pdf) sul sito Web ARM Infocenter.

## <a name="arm64-specific-intrinsics-listing"></a><a name="A"></a>Elenco di funzioni intrinseche specifiche di ARM64

|Nome funzione|Istruzione|Prototipo di funzione|
|-------------------|-----------------|------------------------|
|__break|Brk|void __break(int)|
|__addx18byte||void __addx18byte(unsigned long, unsigned char)|
|__addx18word||void __addx18word(unsigned long, unsigned short)|
|__addx18dword||void __addx18dword(unsigned long, unsigned long)|
|__addx18qword||void __addx18qword(__int64 long, senza segno)|
|__cas8|CASB (CASB)|__cas8 di __int8 senza segno (_Target senza segno __int8, _Target di __int8 senza segno, _Comp _Value di __int8 senza segno)|
|__cas16|Contanti|__cas16 __int16 senza segno __int16 (di _Target, __int16 senza segno, _Comp _Value __int16 senza segno)|
|__cas32|CAS|__cas32 __int32 senza segno __int32 (_Target, _Comp di __int32 senza segno, _Comp di _Value __int32 __int32 senza segno)|
|__cas64|CAS|__cas64 __int64 senza segno __int64 (_Target di __int64, __int64 senza segno, _Comp _Value di __int64 __int64 senza segno)|
|__casa8|CASAB|__casa8 __int8 senza segno (_Target __int8 senza segno, _Comp __int8 senza segno, _Value __int8 senza segno)|
|__casa16|CASAH|__casa16 __int16 senza segno __int16 (_Value _Target, __int16 senza segno, _Comp _Value __int16 senza segno)|
|__casa32|CASA|__casa32 __int32 senza segno __int32 (_Value _Target, __int32 senza segno, _Comp __int32 senza __int32 segno)|
|__casa64|CASA|__casa64 __int64 senza segno (_Target __int64 senza segno, _Comp _Target di __int64 senza segno, _Value di __int64 senza segno)|
|__casl8|CASLB (CASLB)|__casl8 __int8 senza segno (_Target __int8 non firmati, _Comp __int8 senza segno, _Value __int8 senza segno)|
|__casl16|CASLH|__casl16 __int16 senza segno (_Target _Comp di __int16 senza segno __int16 involatile, _Comp __int16 senza segno, _Value di __int16 senza segno)|
|__casl32|CASL|__casl32 __int32 senza segno __int32 (_Target, _Comp __int32 senza segno, _Value __int32 senza segno)|
|__casl64|CASL|__casl64 __int64 senza segno __int64 (_Value _Target, __int64 senza segno, _Comp _Value senza segno __int64)|
|__casal8|CASALB|__casal8 __int8 senza segno (_Target __int8 senza segno, _Comp di __int8 senza segno, _Value di __int8 senza segno)|
|__casal16|CASALH|__casal16 __int16 senza segno (_Target __int16 senza segno, _Comp di __int16 senza segno, _Value di __int16 senza segno)|
|__casal32|Casal|__casal32 __int32 senza segno __int32 (_Comp dei _Target, _Target senza segno, _Comp dei __int32 senza segno, _Value dei __int32 senza segno)|
|__casal64|Casal|__casal64 __int64 senza segno (_Target senza segno __int64 volatile, _Comp __int64 senza segno, _Value __int64 senza segno)|
|__crc32b|CRC32B|__crc32b __int32 senza segno (__int32 non firmato, __int32 non firmato)|
|__crc32h|CRC32H|__crc32h __int32 non firmato (__int32 non firmato, __int32 senza segno)|
|__crc32w|CRC32W|__crc32w di __int32 non firmati (__int32 non firmati, __int32 non firmati)|
|__crc32d|CRC32X|__crc32d __int32 non firmati (__int32 non firmato, __int64 non firmato)|
|__crc32cb|CRC32CB|__crc32cb __int32 non firmati (__int32 non firmato, __int32 non firmato)|
|__crc32ch|CRC32CH|__crc32ch __int32 senza segno (__int32 non firmato, __int32 senza segno)|
|__crc32cw|CRC32CW|__crc32cw __int32 non firmati (__int32 non firmato, __int32 non firmato)|
|__crc32cd|CRC32CX|__crc32cd __int32 non firmati (__int32 non firmato, __int64 non firmato)|
|__dmb|DMB|void __dmb(unsigned int `_Type`)<br /><br /> Inserisce un'operazione di barriera di memoria nel flusso di istruzioni. Il parametro `_Type` specifica il tipo di restrizione imposto dalla barriera.<br /><br /> Per ulteriori informazioni sui tipi di restrizioni che possono essere applicate, vedere Restrizioni della [barriera di memoria](#BarrierRestrictions).|
|__dsb|DSB|void __dsb(unsigned int _Type)<br /><br /> Inserisce un'operazione di barriera di memoria nel flusso di istruzioni. Il parametro `_Type` specifica il tipo di restrizione imposto dalla barriera.<br /><br /> Per ulteriori informazioni sui tipi di restrizioni che possono essere applicate, vedere Restrizioni della [barriera di memoria](#BarrierRestrictions).|
|__isb|ISB|void __isb(unsigned int _Type)<br /><br /> Inserisce un'operazione di barriera di memoria nel flusso di istruzioni. Il parametro `_Type` specifica il tipo di restrizione imposto dalla barriera.<br /><br /> Per ulteriori informazioni sui tipi di restrizioni che possono essere applicate, vedere Restrizioni della [barriera di memoria](#BarrierRestrictions).|
|__getReg||__getReg(int) __int64 non firmati|
|__getRegFp||doppio __getRegFp(int)|
|__getCallerReg||__getCallerReg(int) di __int64 non firmati|
|__getCallerRegFp||doppio __getCallerRegFp(int)|
|__hvc|HVC|unsigned int __hvc(unsigned int, ...)|
|__hlt|Hlt|int __hlt(unsigned int, ...)|
|__incx18byte||void __incx18byte(long senza segno)|
|__incx18word||void __incx18word(senza segno long)|
|__incx18dword||void __incx18dword(senza segno long)|
|__incx18qword||void __incx18qword(long senza segno)|
|__iso_volatile_load16||_iso_volatile_load16 \___int16 (_int16 \_ \*volatile const )<br /><br /> Per ulteriori informazioni, vedere [funzioni intrinseche __iso_volatile_load/archivio](#IsoVolatileLoadStore).|
|__iso_volatile_load32||__int32 \__iso_volatile_load32(const \_ \*_int32 volatile )<br /><br /> Per ulteriori informazioni, vedere [funzioni intrinseche __iso_volatile_load/archivio](#IsoVolatileLoadStore).|
|__iso_volatile_load64||__int64 \__iso_volatile_load64(_int64 \* \_volatile const )<br /><br /> Per ulteriori informazioni, vedere [funzioni intrinseche __iso_volatile_load/archivio](#IsoVolatileLoadStore).|
|__iso_volatile_load8||__int8 \__iso_volatile_load8(_int8 \* \_volatile const )<br /><br /> Per ulteriori informazioni, vedere [funzioni intrinseche __iso_volatile_load/archivio](#IsoVolatileLoadStore).|
|__iso_volatile_store16||void \___iso_volatile_store16(_int16 \* \_volatile , _int16)<br /><br /> Per ulteriori informazioni, vedere [funzioni intrinseche __iso_volatile_load/archivio](#IsoVolatileLoadStore).|
|__iso_volatile_store32||void \___iso_volatile_store32(_int32 \* \_volatile , _int32)<br /><br /> Per ulteriori informazioni, vedere [funzioni intrinseche __iso_volatile_load/archivio](#IsoVolatileLoadStore).|
|__iso_volatile_store64||__iso_volatile_store64 \_void(_int64 \* \_volatile , _int64)<br /><br /> Per ulteriori informazioni, vedere [funzioni intrinseche __iso_volatile_load/archivio](#IsoVolatileLoadStore).|
|__iso_volatile_store8||void \___iso_volatile_store8(_int8 \* \_volatile , _int8)<br /><br /> Per ulteriori informazioni, vedere [funzioni intrinseche __iso_volatile_load/archivio](#IsoVolatileLoadStore).|
|__ldar8|LDARB|__ldar8 __int8 senza segno (_Target senza segno __int8 volatile)|
|__ldar16|LDARH|__ldar16 __int16 senza segno (_Target senza segno __int16 volatile)|
|__ldar32|LDAR|__ldar32 __int32 senza segno (_Target senza segno __int32 volatile)|
|__ldar64|LDAR|__ldar64 __int64 senza segno (_Target senza segno __int64 volatile)|
|__ldapr8|LDAPRB|__ldapr8 __int8 senza segno (_Target senza segno __int8 volatile)|
|__ldapr16|LDAPRH|__ldapr16 __int16 senza segno (_Target di non con segno __int16 insolsi)|
|__ldapr32|LDAPR (LDAPR)|__ldapr32 di __int32 senza segno (_Target senza segno __int32 volatile)|
|__ldapr64|LDAPR (LDAPR)|__ldapr64 __int64 senza segno (_Target senza segno __int64 volatile)|
|__mulh||\__int64 __mulh(\_ \__int64, _int64)|
|__prefetch|PRFM (Repubblica popolare con due)|void \___cdecl _prefetch(const void \*)<br /><br /> Fornisce `PRFM` un suggerimento di `PLDL1KEEP` memoria con l'operazione di prelettura al sistema in cui è possibile accedere presto alla memoria in corrispondenza o vicino all'indirizzo specificato. Alcuni sistemi possono scegliere di ottimizzare tale criterio di accesso alla memoria per migliorare le prestazioni di runtime. Tuttavia, dal punto di vista del linguaggio C++, la funzione non ha alcun effetto osservabile e potrebbe non eseguire alcuna operazione.|
|__prefetch2|PRFM (Repubblica popolare con due)|nullo \___cdecl _prefetch(const void \*, uint8_t prfop)<br /><br /> Fornisce `PRFM` un suggerimento di memoria con l'operazione di prelettura fornita al sistema in cui è possibile accedere presto alla memoria in corrispondenza o vicino all'indirizzo specificato. Alcuni sistemi possono scegliere di ottimizzare tale criterio di accesso alla memoria per migliorare le prestazioni di runtime. Tuttavia, dal punto di vista del linguaggio C++, la funzione non ha alcun effetto osservabile e potrebbe non eseguire alcuna operazione.|
|__readx18byte||__readx18byte di caratteri senza segno(senza segno long)|
|__readx18word||__readx18word short senza segno (long non firmato)|
|__readx18dword||__readx18dword long senza segno (long non firmato)|
|__readx18qword||__readx18qword di __int64 non firmati (long non firmato)|
|__setReg||void __setReg(int, __int64 senza segno)|
|__setRegFp||vuoto __setRegFp(int, double)|
|__setCallerReg||void __setCallerReg(int, __int64 non firmato)|
|__setCallerRegFp||vuoto __setCallerRegFp(int, double)|
|__sev|SEV|void __sev(void)|
|__static_assert||void __static_assert(int, const char \*)|
|__stlr8|STLRB|void __stlr8(_Target _Value di senza segno __int8 volatile, __int8 senza segno)|
|__stlr16|STLRH|void __stlr16(_Target __int16 senza segno, _Value __int16 senza segno)|
|__stlr32|STLR (STLR)|void __stlr32(_Target _Value __int32 senza segno __int32 volatile, senza segno)|
|__stlr64|STLR (STLR)|void __stlr64(_Target _Value __int64 senza segno __int64 volatile e senza segno)|
|__swp8|SWPB (SWPB)|__swp8 __int8 senza segno (_Value _Target, __int8 senza segno __int8 senza segno)|
|__swp16|SWPH (Configurazione oLaP per i contratti|__swp16 __int16 senza segno __int16 (_Value _Target, _Target __int16 senza segno e senza segno)|
|__swp32|Swp|__swp32 __int32 senza segno (_Value _Target di __int32 senza segno __int32 senza segno)|
|__swp64|Swp|__swp64 __int64 senza segno (_Value __int64 __int64 senza segno, _Target senza segno)|
|__swpa8|SWPAB (informazioni in stato squillo|__swpa8 __int8 senza segno (_Target senza segno __int8 instabile, _Value __int8 senza segno)|
|__swpa16|SWPAH|__swpa16 __int16 senza segno (_Target __swpa16 senza segno __int16 volatile, _Value __int16 senza segno)|
|__swpa32|SWPA (SWPA)|__swpa32 __int32 senza segno (_Value _Target, __int32 senza segno __int32 senza segno)|
|__swpa64|SWPA (SWPA)|__swpa64 __int64 senza segno (_Target __int64 senza segno, _Value di __int64 senza segno)|
|__swpl8|SWPLB (SWPLB)|__swpl8 __int8 senza segno (_Value _Target senza segno __int8 volatile, __int8 senza segno)|
|__swpl16|SWPLH|__swpl16 __int16 senza segno (_Value _Target, __int16 senza segno __int16 senza segno)|
|__swpl32|SWPL (SWPL)|__swpl32 __int32 senza segno (_Target __int32 senza segno, _Value di __int32 senza segno)|
|__swpl64|SWPL (SWPL)|__swpl64 __int64 senza segno (_Value _Target senza segno __int64 volatile, __int64 senza segno)|
|__swpal8|SWPALB|__swpal8 __int8 senza segno __int8 (_Target senza segno, __int8 _Target senza segno, _Value)|
|__swpal16|SWPALH|__swpal16 __int16 senza segno (_Value _Target __int16 senza segno __int16 inedito e senza segno)|
|__swpal32|SWPAL (SWPAL)|__swpal32 __int32 senza segno (_Value di _Target __int32 senza segno __int32 volatile, senza segno)|
|__swpal64|SWPAL (SWPAL)|__swpal64 __int64 senza segno (_Value di __int64 senza segno __int64 senza _Target segno)|
|__sys|Sistema di sistema|__sys int non firmati(int, __int64)|
|__svc|SVC|__svc non firmati(unsigned int, ...)|
|__wfe|WFE|void __wfe(void)|
|__wfi|WFI|void __wfi(void)|
|__writex18byte||void __writex18byte(unsigned long, unsigned char)|
|__writex18word||void __writex18word(unsigned long, unsigned short)|
|__writex18dword||void __writex18dword(unsigned long, unsigned long)|
|__writex18qword||void __writex18qword(__int64 long, unsigned long, unsigned)|
|__umulh||__umulh \__int64 non firmato \_(_int64 \_non firmato, _int64 senza segno)|
|_CopyDoubleFromInt64||doppio _CopyDoubleFromInt64(_int64)\_|
|_CopyFloatFromInt32||float _CopyFloatFromInt32(\__int32)|
|_CopyInt32FromFloat||__int32 _CopyInt32FromFloat(float)|
|_CopyInt64FromDouble||__int64 _CopyInt64FromDouble(double)|
|_CountLeadingOnes||unsigned int _CountLeadingOnes(unsigned long)|
|_CountLeadingOnes64||_CountLeadingOnes64 int non firmati (_int64 non firmati) \_|
|_CountLeadingSigns||unsigned int _CountLeadingSigns(long)|
|_CountLeadingSigns64||_CountLeadingSigns64 int non\_firmati(_int64)|
|_CountLeadingZeros||unsigned int _CountLeadingZeros(unsigned long)|
|_CountLeadingZeros64||_CountLeadingZeros64 int non firmati (_int64 non firmati) \_|
|_ReadStatusReg|MRS|\__int64 _ReadStatusReg(int)|
|_WriteStatusReg|MSR|vuoto _WriteStatusReg(int, \__int64)|

[[Torna all'inizio](#top)]

### <a name="memory-barrier-restrictions"></a><a name="BarrierRestrictions"></a>Restrizioni della barriera di memoria

Le funzioni `__dmb` intrinseche (barriera della memoria dei dati), `__dsb` (barriera di sincronizzazione dei dati) e `__isb` (barriera di sincronizzazione delle istruzioni) utilizzano i seguenti valori predefiniti per specificare la restrizione della barriera di memoria in termini di dominio di condivisione e il tipo di accesso interessato dall'operazione.

|Valore di restrizione|Descrizione|
|-----------------------|-----------------|
|_ARM64_BARRIER_SY|Sistema completo, operazioni di lettura e scrittura.|
|_ARM64_BARRIER_ST|Sistema completo, solo operazioni di scrittura.|
|_ARM64_BARRIER_LD|Sistema completo, di sola lettura.|
|_ARM64_BARRIER_ISH|Condivisibile all'interno, operazioni di lettura e scrittura.|
|_ARM64_BARRIER_ISHST|Condivisibile all'interno, solo operazioni di scrittura.|
|_ARM64_BARRIER_ISHLD|Inner condivisibile, di sola lettura.|
|_ARM64_BARRIER_NSH|Non condivisibile, operazioni di lettura e scrittura.|
|_ARM64_BARRIER_NSHST|Non condivisibile, solo operazioni di scrittura.|
|_ARM64_BARRIER_NSHLD|Non condivisibile, di sola lettura.|
|_ARM64_BARRIER_OSH|Condivisibile all'esterno, operazioni di lettura e scrittura.|
|_ARM64_BARRIER_OSHST|Condivisibile all'esterno, solo operazioni di scrittura.|
|_ARM64_BARRIER_OSHLD|Esterno condivisibile, di sola lettura.|

Per `__isb` l'intrinseco, l'unica restrizione attualmente valida è _ARM64_BARRIER_SY; tutti gli altri valori sono riservati dall'architettura.

### <a name="__iso_volatile_loadstore-intrinsics"></a><a name="IsoVolatileLoadStore"></a>funzioni intrinseche __iso_volatile_load/store

Queste funzioni intrinseche eseguono in modo esplicito carichi e archivi che non sono soggetti alle ottimizzazioni del compilatore.

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

*Posizione*\
Indirizzo di una posizione di memoria da cui leggere o in cui scrivere.

*Valore*\
Valore da scrivere nella posizione di memoria specificata (solo funzioni intrinseche dell'archivio).

#### <a name="return-value-load-intrinsics-only"></a>Valore restituito (solo funzioni intrinseche di caricamento)

Valore della posizione di memoria specificata da *Location*.

#### <a name="remarks"></a>Osservazioni

È possibile `__iso_volatile_load8/16/32/64` utilizzare `__iso_volatile_store8/16/32/64` le funzioni intrinseche e per eseguire in modo esplicito accessi alla memoria che non sono soggette alle ottimizzazioni del compilatore. Il compilatore non può rimuovere, sintetizzare o modificare l'ordine relativo di queste operazioni. Tuttavia, non genera barriere di memoria hardware implicite. Di conseguenza, l'hardware potrebbe comunque riordinare gli accessi alla memoria osservabili tra più thread. Più precisamente, questi intrinseci sono equivalenti alle seguenti espressioni compilate in **/volatile:iso**.

```cpp
int a = __iso_volatile_load32(p);    // equivalent to: int a = *(const volatile __int32*)p;
__iso_volatile_store32(p, a);        // equivalent to: *(volatile __int32*)p = a;
```

Si noti che le funzioni intrinseche accettano puntatori volatili per poter usare variabili volatili. Tuttavia, non vi è alcun requisito o raccomandazione per utilizzare i puntatori volatili come argomenti. La semantica di queste operazioni è esattamente la stessa se viene utilizzato un tipo normale non volatile.

Per ulteriori informazioni sull'argomento della riga di comando **/volatile:iso,** vedere [/volatile (interpretazione](../build/reference/volatile-volatile-keyword-interpretation.md)di parole chiave volatili) .

## <a name="arm64-support-for-intrinsics-from-other-architectures"></a><a name="I"></a>Supporto ARM64 per funzioni intrinseche da altre architetture

Nella tabella seguente sono elencate le funzioni intrinseche di altre architetture supportate nelle piattaforme ARM64. Se il comportamento di un intrinseco in ARM64 è diverso dal comportamento in altre architetture hardware, vengono annotati ulteriori dettagli.

|Nome funzione|Prototipo di funzione|
|-------------------|------------------------|
|__assume|void __assume(int)|
|__code_seg|void __code_seg(const \*char )|
|__debugbreak|nullo \___cdecl _debugbreak(vuoto)|
|__fastfail|__declspec(noreturn) \__fastfail(unsigned int)|
|__nop|void __nop(void)|
|__yield|void __yield(void) **Nota:** sulle piattaforme ARM64, questa funzione genera l'istruzione YIELD. Questa istruzione indica che il thread sta eseguendo un'attività che può essere temporaneamente sospesa dall'esecuzione, ad esempio uno spinlock, senza influire negativamente sul programma. Consente alla CPU di eseguire altre attività durante i cicli di esecuzione che altrimenti andrebbero sprecati.|
|_AddressOfReturnAddress|vuoto \* _AddressOfReturnAddress(vuoto)|
|_BitScanForward|_BitScanForward di tipo char \* senza segno (_Index lungo senza segno, _Mask lungo senza segno)Unsigned char _BitScanForward(unsigned long _Index, unsigned long _Mask)|
|_BitScanForward64|_BitScanForward64 char senza segno \* (_Index lungo senza segno, _Mask di __int64 senza segno)Unsigned char _BitScanForward64(unsigned long _Index, unsigned __int64 _Mask)|
|_BitScanReverse|_BitScanReverse di caratteri senza \* segno(_Index lungo senza segno, _Mask lungo senza segno)|
|_BitScanReverse64|_BitScanReverse64 di caratteri senza \* segno (_Index lungo senza segno, _Mask di __int64 senza segno)|
|_bittest|_bittest senza segno(long \*const , long)|
|_bittest64|_bittest64 di caratteri senza \*segno(__int64 const, __int64)|
|_bittestandcomplement|_bittestandcomplement senza segno(long \*, long)|
|_bittestandcomplement64|_bittestandcomplement64 di caratteri \*senza segno(__int64 , __int64)|
|_bittestandreset|_bittestandreset unsigned char(long \*, long)|
|_bittestandreset64|_bittestandreset64 senza segno \*(__int64 , __int64)|
|_bittestandset|_bittestandset senza segno(long \*, long)|
|_bittestandset64|_bittestandset64 (__int64 , \*__int64 , __int64)|
|_byteswap_uint64|_byteswap_uint64 _cdecl \___int64 senza \_segno (_int64 non firmati)|
|_byteswap_ulong|unsigned long __cdecl _byteswap_ulong(unsigned long)|
|_byteswap_ushort|unsigned short __cdecl _byteswap_ushort(unsigned short)|
|_disable|void __cdecl _disable(void) **Nota:** sulle piattaforme ARM64, questa funzione genera l'istruzione `MSR DAIFCLR,#2`; è disponibile solo come intrinseco.|
|_enable|void __cdecl _enable(void) **Nota:** sulle piattaforme ARM64, questa funzione genera l'istruzione `MSR DAIFSET,#2`; è disponibile solo come intrinseco.|
|_lrotl|unsigned long __cdecl _lrotl(unsigned long, int)|
|_lrotr|unsigned long __cdecl _lrotr(unsigned long, int)|
|_ReadBarrier|void _ReadBarrier(void)|
|_ReadWriteBarrier|void _ReadWriteBarrier(void)|
|_ReturnAddress|void \* _ReturnAddress(void)|
|_rotl|unsigned int __cdecl _rotl(unsigned int _Value, int _Shift)|
|_rotl16|unsigned short _rotl16(unsigned short _Value, unsigned char _Shift)|
|_rotl64|_rotl64 \__cdecl __int64 non \_firmato (_Value _int64 non firmato, int _Shift)|
|_rotl8|unsigned char _rotl8(unsigned char _Value, unsigned char _Shift)|
|_rotr|unsigned int __cdecl _rotr(unsigned int _Value, int _Shift)|
|_rotr16|unsigned short _rotr16(unsigned short _Value, unsigned char _Shift)|
|_rotr64|_rotr64 _cdecl \___int64 non \_firmati (_Value _int64 non firmati, int _Shift)|
|_rotr8|unsigned char _rotr8(unsigned char _Value, unsigned char _Shift)|
|_setjmpex|int __cdecl _setjmpex(jmp_buf)|
|_WriteBarrier|void _WriteBarrier(void)|

[[Torna all'inizio](#top)]

## <a name="interlocked-intrinsics"></a>Intrinseci interbloccati

Le funzioni intrinseche interlocked sono un set di funzioni intrinseche che consentono di eseguire operazioni atomiche di lettura, modifica e scrittura. Alcune di esse sono comuni a tutte le piattaforme. Sono elencati separatamente qui perché ci sono un gran numero di loro. Poiché le loro definizioni sono per lo più ridondanti, è più facile pensarle in termini generali. Dai nomi se ne evince l'esatto comportamento.

Nella tabella seguente viene riepilogato il supporto ARM64 delle funzioni intrinseche interlocked non di bit test. Ogni cella della tabella corrisponde a un nome derivato aggiungendo il nome dell'operazione nella cella più a sinistra della riga e il nome del tipo nella cella più in alto della colonna in `_Interlocked`. Ad esempio, la cella all'intersezione tra la `Xor` riga e la `8` colonna corrisponde a `_InterlockedXor8` ed è completamente supportata. La maggior parte delle funzioni supportate fornisce i seguenti suffissi facoltativi: `_acq`, `_rel` e `_nf`. Il suffisso `_acq` indica una semantica di acquisizione e il suffisso `_rel` indica una semantica di rilascio. Il `_nf` suffisso o "no fence" è univoco per ARM e ARM64 ed è descritto nella sezione successiva.

||8|16|32|64|128|P|
|-|-------|--------|--------|--------|-------|-------|
|Add|nessuno|nessuno|Full|Full|nessuno|nessuno|
|e|Full|Full|Full|Full|nessuno|nessuno|
|CompareExchange|Full|Full|Full|Full|Full|Full|
|Operatore di conversione|nessuno|Full|Full|Full|nessuno|nessuno|
|Exchange|Full|Full|Full|Full|nessuno|Full|
|ExchangeAdd|Full|Full|Full|Full|nessuno|nessuno|
|Incremento valore Identity|nessuno|Full|Full|Full|nessuno|nessuno|
|Oppure|Full|Full|Full|Full|nessuno|nessuno|
|Xor|Full|Full|Full|Full|nessuno|nessuno|

Chiave:

- **Completo**: supporta `_acq`le `_rel`forme `_nf` plain, , e .

- **Nessuno:** non supportato

### <a name="_nf-no-fence-suffix"></a><a name="nf_suffix"></a>_nf suffisso (senza recinzione)

Il `_nf` suffisso o "nessun limite" indica che l'operazione non si comporta come qualsiasi tipo di `_acq`barriera di memoria, a differenza delle altre tre forme (semplice, e `_rel`), che si comportano tutte come una sorta di barriera. Un possibile utilizzo `_nf` dei moduli consiste nel mantenere un contatore delle statistiche che viene aggiornato da più thread contemporaneamente, ma il cui valore non viene altrimenti utilizzato durante l'esecuzione di più thread.

### <a name="list-of-interlocked-intrinsics"></a>Elenco di funzioni intrinseche interbloccate

|Nome funzione|Prototipo di funzione|
|-------------------|------------------------|
|_InterlockedAdd|lungo _InterlockedAdd (_volatile \*lungo , lungo)|
|_InterlockedAdd64|__int64 _InterlockedAdd64(\_ \*_int64 \_volatile , _int64)|
|_InterlockedAdd64_acq|__int64 _InterlockedAdd64_acq(\_ \*_int64 \_volatile , _int64)|
|_InterlockedAdd64_nf|__int64\__InterlockedAdd64_nf(_int64 \* \_volatile, _int64)|
|_InterlockedAdd64_rel|__int64 _InterlockedAdd64_rel(\_ \*_int64 \_volatile , _int64)|
|_InterlockedAdd_acq|_InterlockedAdd_acq (lungo \*volatile , lungo)|
|_InterlockedAdd_nf|_InterlockedAdd_nf lungo(volatile \*lungo , lungo)|
|_InterlockedAdd_rel|_InterlockedAdd_rel long(lunghe \*volatili , lunghi)|
|_InterlockedAnd|_InterlockedAnd lungo(volatile \*lungo , lungo)|
|_InterlockedAnd16|breve _InterlockedAnd16(breve \*volatile , breve)|
|_InterlockedAnd16_acq|breve _InterlockedAnd16_acq(breve \*volatile , breve)|
|_InterlockedAnd16_nf|breve _InterlockedAnd16_nf (breve volatile \*, breve)|
|_InterlockedAnd16_rel|breve _InterlockedAnd16_rel(breve \*volatile , breve)|
|_InterlockedAnd64|__int64 _InterlockedAnd64(\_ \*_int64 \_volatile, _int64)|
|_InterlockedAnd64_acq|__int64 _InterlockedAnd64_acq(\_ \*_int64 \_volatile, _int64)|
|_InterlockedAnd64_nf|__int64 _InterlockedAnd64_nf(\_ \*_int64 \_volatile , _int64)|
|_InterlockedAnd64_rel|__int64 _InterlockedAnd64_rel(\_ \*_int64 \_volatile, _int64)|
|_InterlockedAnd8|char _InterlockedAnd8(char \*volatile , char)|
|_InterlockedAnd8_acq|char _InterlockedAnd8_acq(char \*volatile , char)|
|_InterlockedAnd8_nf|char _InterlockedAnd8_nf(char \*volatile , char)|
|_InterlockedAnd8_rel|char _InterlockedAnd8_rel(char \*volatile , char)|
|_InterlockedAnd_acq|lungo _InterlockedAnd_acq(volatile \*lungo , lungo)|
|_InterlockedAnd_nf|_InterlockedAnd_nf lungo(volatile \*lungo , lungo)|
|_InterlockedAnd_rel|_InterlockedAnd_rel long(lunghe \*volatili , lunghi)|
|_InterlockedCompareExchange|_InterlockedCompareExchange __cdecl lungo(volatile lungo \*, lungo, lungo)|
|_InterlockedCompareExchange_acq|_InterlockedCompareExchange_acq lungo(lunghe \*volatili , long, long)|
|_InterlockedCompareExchange_nf|lungo _InterlockedCompareExchange_nf(lungo \*volatile , lungo, lungo)|
|_InterlockedCompareExchange_rel|_InterlockedCompareExchange_rel (lunghe \*sostanze volatili , lunghe, lunghe)|
|_InterlockedCompareExchange16|breve _InterlockedCompareExchange16(breve \*volatile , breve, corto)|
|_InterlockedCompareExchange16_acq|breve _InterlockedCompareExchange16_acq(breve \*volatile , breve, corto)|
|_InterlockedCompareExchange16_nf|breve _InterlockedCompareExchange16_nf(breve \*volatile , breve, corto)|
|_InterlockedCompareExchange16_rel|breve _InterlockedCompareExchange16_rel(breve \*volatile , breve, corto)|
|_InterlockedCompareExchange64|\___int64 _InterlockedCompareExchange64( \*_int64 \_volatile \_, _int64, _int64)|
|_InterlockedCompareExchange64_acq|\___int64 _InterlockedCompareExchange64_acq( \*_int64 \_volatile \_, _int64, _int64)|
|_InterlockedCompareExchange64_nf|__int64\__InterlockedCompareExchange64_nf( \*_int64 \_volatile, _int64, \__int64)|
|_InterlockedCompareExchange64_rel|\___int64 _InterlockedCompareExchange64_rel( \*_int64 \_volatile \_, _int64, _int64)|
|_InterlockedCompareExchange8|char _InterlockedCompareExchange8(char \*volatile , char, char)|
|_InterlockedCompareExchange8_acq|char _InterlockedCompareExchange8_acq(char \*volatile , char, char)|
|_InterlockedCompareExchange8_nf|char _InterlockedCompareExchange8_nf(char \*volatile , char, char)|
|_InterlockedCompareExchange8_rel|char _InterlockedCompareExchange8_rel(char \*volatile , char, char)|
|_InterlockedCompareExchangePointer|void \* \* _InterlockedCompareExchangePointer(void \*volatile \*, \*void , void )|
|_InterlockedCompareExchangePointer_acq|void \* \* _InterlockedCompareExchangePointer_acq(void \*volatile \*, \*void , void )|
|_InterlockedCompareExchangePointer_nf|void \* \* _InterlockedCompareExchangePointer_nf(void \*volatile \*, \*void , void )|
|_InterlockedCompareExchangePointer_rel|void \* \* _InterlockedCompareExchangePointer_rel(void \*volatile \*, \*void , void )|
|_InterlockedCompareExchange128|_InterlockedCompareExchange128 di caratteri\_senza \* segno( _int64 _Destination volatile, \__ExchangeHigh _int64, \__ExchangeLow _int64 _int64 \_ \* _ComparandResult _int64)|
|_InterlockedCompareExchange128_acq|_InterlockedCompareExchange128_acq di caratteri\_senza \* segno( _int64 _Destination volatile, \__ExchangeHigh _int64, \__ExchangeLow _int64 _int64 \_ \* _ComparandResult _int64)|
|_InterlockedCompareExchange128_nf|_InterlockedCompareExchange128_nf di caratteri\_senza \* segno( _int64 _Destination volatile, \__ExchangeHigh _int64, \__ExchangeLow _int64 _int64 \_ \* _ComparandResult)|
|_InterlockedCompareExchange128_rel|_InterlockedCompareExchange128_rel di caratteri\_senza \* segno( _int64 _Destination volatile, \__ExchangeHigh _int64, \__ExchangeLow _int64 _ComparandResult _int64 _Destination) \_ \*|
|_InterlockedDecrement|_InterlockedDecrement __cdecl lungo \*(volatile lungo)|
|_InterlockedDecrement16|breve _InterlockedDecrement16(volatile \*corto)|
|_InterlockedDecrement16_acq|breve _InterlockedDecrement16_acq(volatile \*breve)|
|_InterlockedDecrement16_nf|breve _InterlockedDecrement16_nf(volatile \*corto)|
|_InterlockedDecrement16_rel|breve _InterlockedDecrement16_rel(volatile \*corto)|
|_InterlockedDecrement64|__int64 _InterlockedDecrement64(\_ \*_int64 volatile )|
|_InterlockedDecrement64_acq|__int64 _InterlockedDecrement64_acq(\_ \*_int64 volatile )|
|_InterlockedDecrement64_nf|_InterlockedDecrement64_nf __int64(\_ \*_int64 volatile )|
|_InterlockedDecrement64_rel|_InterlockedDecrement64_rel__int64\_(_int64 \*volatile )|
|_InterlockedDecrement_acq|_InterlockedDecrement_acq lungo (volatile \*lungo)|
|_InterlockedDecrement_nf|_InterlockedDecrement_nf lungo (volatile \*lungo)|
|_InterlockedDecrement_rel|_InterlockedDecrement_rel lungo (volatile \*lungo)|
|_InterlockedExchange|_InterlockedExchange di __cdecl \* lungo(_Target volatile lunga, lungo)|
|_InterlockedExchange_acq|_InterlockedExchange_acq lungo (_Target volatile \* lungo, lungo)|
|_InterlockedExchange_nf|_InterlockedExchange_nf lungo(_Target \* volatile lungo, lungo)|
|_InterlockedExchange_rel|_InterlockedExchange_rel lungo (_Target volatile \* lungo, lungo)|
|_InterlockedExchange16|breve _InterlockedExchange16(_Target \* volatile breve, breve)|
|_InterlockedExchange16_acq|breve _InterlockedExchange16_acq (_Target volatile \* breve, breve)|
|_InterlockedExchange16_nf|breve _InterlockedExchange16_nf (_Target volatile \* breve, breve)|
|_InterlockedExchange16_rel|_InterlockedExchange16_rel breve (_Target volatile \* breve, breve)|
|_InterlockedExchange64|__int64\__InterlockedExchange64(_Target \* _int64 \_volatile, _int64)|
|_InterlockedExchange64_acq|_InterlockedExchange64_acq __int64(\_ \* _int64 \__Target volatili, _int64)|
|_InterlockedExchange64_nf|__int64 _InterlockedExchange64_nf(\_ \* _int64 \__Target volatili, _int64)|
|_InterlockedExchange64_rel|__int64 _InterlockedExchange64_rel(\_ \* _int64 \__Target volatili, _int64)|
|_InterlockedExchange8|char _InterlockedExchange8 (_Target volatile \* char, char)|
|_InterlockedExchange8_acq|char _InterlockedExchange8_acq(_Target \* volatile char, char)|
|_InterlockedExchange8_nf|char _InterlockedExchange8_nf(_Target \* volatile char, char)|
|_InterlockedExchange8_rel|char _InterlockedExchange8_rel (_Target volatile \* char, char)|
|_InterlockedExchangeAdd|_InterlockedExchangeAdd __cdecl lungo(volatile \*lungo , lungo)|
|_InterlockedExchangeAdd16|breve _InterlockedExchangeAdd16(breve \*volatile , breve)|
|_InterlockedExchangeAdd16_acq|breve _InterlockedExchangeAdd16_acq(breve \*volatile , breve)|
|_InterlockedExchangeAdd16_nf|breve _InterlockedExchangeAdd16_nf (breve volatile \*, breve)|
|_InterlockedExchangeAdd16_rel|breve _InterlockedExchangeAdd16_rel(breve \*volatile , breve)|
|_InterlockedExchangeAdd64|__int64 _InterlockedExchangeAdd64(\_ \*_int64 \_volatile , _int64)|
|_InterlockedExchangeAdd64_acq|__int64 _InterlockedExchangeAdd64_acq(\_ \*_int64 \_volatile, _int64)|
|_InterlockedExchangeAdd64_nf|_InterlockedExchangeAdd64_nf __int64(\_ \*_int64 \_volatile , _int64)|
|_InterlockedExchangeAdd64_rel|_InterlockedExchangeAdd64_rel __int64(\_ \*_int64 \_volatile , _int64)|
|_InterlockedExchangeAdd8|char _InterlockedExchangeAdd8(char \*volatile , char)|
|_InterlockedExchangeAdd8_acq|char _InterlockedExchangeAdd8_acq(char \*volatile , char)|
|_InterlockedExchangeAdd8_nf|_InterlockedExchangeAdd8_nf char(char \*volatile , char)|
|_InterlockedExchangeAdd8_rel|char _InterlockedExchangeAdd8_rel(char \*volatile , char)|
|_InterlockedExchangeAdd_acq|_InterlockedExchangeAdd_acq (volatile \*lungo , lungo)|
|_InterlockedExchangeAdd_nf|lungo _InterlockedExchangeAdd_nf(volatile \*lungo , lungo)|
|_InterlockedExchangeAdd_rel|lungo _InterlockedExchangeAdd_rel(volatile \*lungo , lungo)|
|_InterlockedExchangePointer|void \* _InterlockedExchangePointer(_Target \* volatile \*null, \* void )|
|_InterlockedExchangePointer_acq|void \* _InterlockedExchangePointer_acq(_Target \* volatile \*null, \* void )|
|_InterlockedExchangePointer_nf|void \* _InterlockedExchangePointer_nf(_Target \* volatile \*nullo, \* vuoto )|
|_InterlockedExchangePointer_rel|void \* _InterlockedExchangePointer_rel(_Target \* volatile \*nullo, \* vuoto )|
|_InterlockedIncrement|_InterlockedIncrement __cdecl lungo \*(volatile lungo)|
|_InterlockedIncrement16|breve _InterlockedIncrement16(breve \*volatile )|
|_InterlockedIncrement16_acq|breve _InterlockedIncrement16_acq(volatile \*corto)|
|_InterlockedIncrement16_nf|breve _InterlockedIncrement16_nf(volatile \*breve)|
|_InterlockedIncrement16_rel|breve _InterlockedIncrement16_rel(volatile \*breve)|
|_InterlockedIncrement64|_InterlockedIncrement64 __int64(\_ \*_int64 volatile )|
|_InterlockedIncrement64_acq|__int64 _InterlockedIncrement64_acq(\_ \*_int64 volatile )|
|_InterlockedIncrement64_nf|__int64 _InterlockedIncrement64_nf(\_ \*_int64 volatile )|
|_InterlockedIncrement64_rel|_InterlockedIncrement64_rel __int64(\_ \*_int64 volatile )|
|_InterlockedIncrement_acq|_InterlockedIncrement_acq lungo (volatile \*lungo)|
|_InterlockedIncrement_nf|_InterlockedIncrement_nf lungo (volatile \*lungo)|
|_InterlockedIncrement_rel|_InterlockedIncrement_rel lungo (volatile \*lungo)|
|_InterlockedOr|_InterlockedOr lungo(volatile \*lungo , lungo)|
|_InterlockedOr16|breve _InterlockedOr16(breve \*volatile , breve)|
|_InterlockedOr16_acq|breve _InterlockedOr16_acq(breve \*volatile , breve)|
|_InterlockedOr16_nf|_InterlockedOr16_nf (breve \*volatile , breve)|
|_InterlockedOr16_rel|breve _InterlockedOr16_rel(breve \*volatile , breve)|
|_InterlockedOr64|__int64 _InterlockedOr64(\_ \*_int64 \_volatile _int64)|
|_InterlockedOr64_acq|__int64 _InterlockedOr64_acq(\_ \*_int64 \_volatile , _int64)|
|_InterlockedOr64_nf|__int64 _InterlockedOr64_nf(\_ \*_int64 \__int64 _int64 _int64 _int64 volatili)|
|_InterlockedOr64_rel|_InterlockedOr64_rel __int64(\_ \*_int64 \_volatile , _int64)|
|_InterlockedOr8|char _InterlockedOr8(char \*volatile , char)|
|_InterlockedOr8_acq|char _InterlockedOr8_acq(char \*volatile , char)|
|_InterlockedOr8_nf|char _InterlockedOr8_nf(char \*volatile , char)|
|_InterlockedOr8_rel|char _InterlockedOr8_rel(char \*volatile , char)|
|_InterlockedOr_acq|_InterlockedOr_acq (lungo \*volatile , lungo)|
|_InterlockedOr_nf|lungo _InterlockedOr_nf(volatile \*lungo , lungo)|
|_InterlockedOr_rel|_InterlockedOr_rel lungo(volatile \*lungo , lungo)|
|_InterlockedXor|_InterlockedXor (volatile \*lungo , lungo)|
|_InterlockedXor16|breve _InterlockedXor16 (breve volatile \*, breve)|
|_InterlockedXor16_acq|breve _InterlockedXor16_acq(breve \*volatile , breve)|
|_InterlockedXor16_nf|breve _InterlockedXor16_nf(breve \*volatile , breve)|
|_InterlockedXor16_rel|breve _InterlockedXor16_rel (breve volatile \*, breve)|
|_InterlockedXor64|__int64 _InterlockedXor64(\_ \*_int64 \_volatile , _int64)|
|_InterlockedXor64_acq|__int64 _InterlockedXor64_acq(\_ \*_int64 \_volatile, _int64)|
|_InterlockedXor64_nf|__int64 _InterlockedXor64_nf(\_ \*_int64 \_volatile , _int64)|
|_InterlockedXor64_rel|__int64 _InterlockedXor64_rel(\_ \*_int64 \_volatile , _int64)|
|_InterlockedXor8|char _InterlockedXor8(char \*volatile , char)|
|_InterlockedXor8_acq|char _InterlockedXor8_acq(char \*volatile , char)|
|_InterlockedXor8_nf|char _InterlockedXor8_nf(char \*volatile , char)|
|_InterlockedXor8_rel|char _InterlockedXor8_rel(char \*volatile , char)|
|_InterlockedXor_acq|lungo _InterlockedXor_acq(volatile \*lungo , lungo)|
|_InterlockedXor_nf|_InterlockedXor_nf lungo(volatile \*lungo , lungo)|
|_InterlockedXor_rel|_InterlockedXor_rel (volatile \*lungo , lungo)|

[[Torna all'inizio](#top)]

### <a name="_interlockedbittest-intrinsics"></a>intrinseci _interlockedbittest

Le funzioni intrinseche di test di bit interlocked semplici sono comuni a tutte le piattaforme. ARM64 `_acq`aggiunge `_rel`, `_nf` e varianti, che modificano semplicemente la semantica di barriera di un'operazione, come descritto in [_nf (nessun limite) Suffisso](#nf_suffix) più indietro in questo articolo.

|Nome funzione|Prototipo di funzione|
|-------------------|------------------------|
|_interlockedbittestandreset|_interlockedbittestandreset di caratteri senza \*segno(long volatile , long)|
|_interlockedbittestandreset_acq|_interlockedbittestandreset_acq unsigned char(long volatile \*, long)|
|_interlockedbittestandreset_nf|_interlockedbittestandreset_nf unsigned char(long volatile \*, long)|
|_interlockedbittestandreset_rel|_interlockedbittestandreset_rel unsigned char(long volatile \*, long)|
|_interlockedbittestandreset64|_interlockedbittestandreset64 di caratteri senza \*segno(__int64 volatile, __int64)|
|_interlockedbittestandreset64_acq|_interlockedbittestandreset64_acq char senza segno(__int64 volatile \*, __int64)|
|_interlockedbittestandreset64_nf|_interlockedbittestandreset64_nf di caratteri senza \*segno(__int64 volatile , __int64)|
|_interlockedbittestandreset64_rel|_interlockedbittestandreset64_rel di caratteri senza \*segno(__int64 volatile , __int64)|
|_interlockedbittestandset|_interlockedbittestandset unsigned char(long volatile \*, long)|
|_interlockedbittestandset_acq|_interlockedbittestandset_acq char senza segno(long volatile \*, long)|
|_interlockedbittestandset_nf|_interlockedbittestandset_nf senza segno(volatile \*lungo , lungo)|
|_interlockedbittestandset_rel|_interlockedbittestandset_rel unsigned char(long volatile \*, long)|
|_interlockedbittestandset64|_interlockedbittestandset64 di caratteri senza \*segno(__int64 volatile , __int64)|
|_interlockedbittestandset64_acq|_interlockedbittestandset64_acq di caratteri senza \*segno(__int64 volatile, __int64)|
|_interlockedbittestandset64_nf|_interlockedbittestandset64_nf di caratteri senza \*segno(__int64 volatile , __int64)|
|_interlockedbittestandset64_rel|_interlockedbittestandset64_rel senza segno (__int64 volatile \*, __int64)|

[[Torna all'inizio](#top)]

## <a name="see-also"></a>Vedere anche

[Funzioni intrinseche del compilatoreCompiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Intrinseche ARM](arm-intrinsics.md)\
[Riferimento assembler ARM](../assembler/arm/arm-assembler-reference.md)\
[Riferimento del linguaggio C](../cpp/cpp-language-reference.md)
