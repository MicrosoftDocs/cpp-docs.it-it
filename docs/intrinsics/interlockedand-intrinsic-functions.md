---
title: Funzioni intrinseche interlockedand | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- _InterlockedAnd_rel
- _InterlockedAnd_cpp
- _InterlockedAnd8_nf
- _InterlockedAnd
- _InterlockedAnd_HLERelease
- _InterlockedAnd8_np
- _InterlockedAnd16_rel
- _InterlockedAnd64_np
- _InterlockedAnd_np
- _InterlockedAnd64_HLERelease
- _InterlockedAnd64
- _InterlockedAnd64_nf
- _InterlockedAnd64_HLEAcquire
- _InterlockedAnd16
- _InterlockedAnd16_nf
- _InterlockedAnd8
- _InterlockedAnd_HLEAcquire
- _InterlockedAnd_acq
- _InterlockedAnd16_np
- _InterlockedAnd64_cpp
- _InterlockedAnd64_acq
- _InterlockedAnd16_acq
- _InterlockedAnd8_acq
- _InterlockedAnd64_rel
- _InterlockedAnd_nf
- _InterlockedAnd8_rel
dev_langs:
- C++
helpviewer_keywords:
- _InterlockedAnd64_np intrinsic
- _InterlockedAnd intrinsic
- _InterlockedAnd64 intrinsic
- _InterlockedAnd8_rel intrinsic
- InterlockedAnd64 intrinsic
- _InterlockedAnd16_np intrinsic
- _InterlockedAnd64_nf intrinsic
- _InterlockedAnd_nf intrinsic
- _InterlockedAnd_np intrinsic
- _InterlockedAnd64_HLERelease intrinsic
- _InterlockedAnd16_rel intrinsic
- _InterlockedAnd_HLERelease intrinsic
- _InterlockedAnd64_acq intrinsic
- _InterlockedAnd16 intrinsic
- _InterlockedAnd8_nf intrinsic
- _InterlockedAnd64_rel intrinsic
- _InterlockedAnd8_np intrinsic
- _InterlockedAnd_rel intrinsic
- InterlockedAnd intrinsic
- _InterlockedAnd8_acq intrinsic
- _InterlockedAnd_acq intrinsic
- _InterlockedAnd64_HLEAcquire intrinsic
- _InterlockedAnd16_acq intrinsic
- _InterlockedAnd16_nf intrinsic
- _InterlockedAnd8 intrinsic
- _InterlockedAnd_HLEAcquire intrinsic
ms.assetid: ad271dc3-42cd-47d0-9f65-30d5cfeb66fc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 009c3dd2fd7e7ce123f760ae832c2c4e25fedd92
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33334925"
---
# <a name="interlockedand-intrinsic-functions"></a>Funzioni intrinseche _InterlockedAnd
**Sezione specifica Microsoft**  
  
 Usato per eseguire un'operazione atomica con AND bit per bit su una variabile condivisa da più thread.  
  
## <a name="syntax"></a>Sintassi  
  
```  
long _InterlockedAnd(  
   long volatile * value,  
   long mask  
);  
long _InterlockedAnd_acq(  
   long volatile * value,  
   long mask  
);  
long _InterlockedAnd_HLEAcquire(  
   long volatile * value,  
   long mask  
);  
long _InterlockedAnd_HLERelease(  
   long volatile * value,  
   long mask  
);  
long _InterlockedAnd_nf(  
   long volatile * value,  
   long mask  
);  
long _InterlockedAnd_np(  
   long volatile * value,  
   long mask  
);  
long _InterlockedAnd_rel(  
   long volatile * value,  
   long mask  
);  
char _InterlockedAnd8(  
   char volatile * value,  
   char mask  
);  
char _InterlockedAnd8_acq(  
   char volatile * value,  
   char mask  
);  
char _InterlockedAnd8_nf(  
   char volatile * value,  
   char mask  
);  
char _InterlockedAnd8_np(  
   char volatile * value,  
   char mask  
);  
char _InterlockedAnd8_rel(  
   char volatile * value,  
   char mask  
);  
short _InterlockedAnd16(  
   short volatile * value,  
   short mask  
);  
short _InterlockedAnd16_acq(  
   short volatile * value,  
   short mask  
);  
short _InterlockedAnd16_nf(  
   short volatile * value,  
   short mask  
);  
short _InterlockedAnd16_np(  
   short volatile * value,  
   short mask  
);  
short _InterlockedAnd16_rel(  
   short volatile * value,  
   short mask  
);  
__int64 _InterlockedAnd64(  
   __int64 volatile* value,  
   __int64 mask  
);  
__int64 _InterlockedAnd64_acq(  
   __int64 volatile* value,  
   __int64 mask  
);   
__int64 _InterlockedAnd64_HLEAcquire(  
   __int64 volatile* value,  
   __int64 mask  
);  
__int64 _InterlockedAnd64_HLERelease(  
   __int64 volatile* value,  
   __int64 mask  
);  
__int64 _InterlockedAnd64_nf(  
   __int64 volatile* value,  
   __int64 mask  
);  
__int64 _InterlockedAnd64_np(  
   __int64 volatile* value,  
   __int64 mask  
);  
__int64 _InterlockedAnd64_rel(  
   __int64 volatile* value,  
   __int64 mask  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in, out] `value`  
 Puntatore al primo operando, da sostituire con il risultato.  
  
 [in] `mask`  
 Secondo operando.  
  
## <a name="return-value"></a>Valore restituito  
 Valore originale del primo operando.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|Intestazione|  
|---------------|------------------|------------|  
|`_InterlockedAnd`, `_InterlockedAnd8`, `_InterlockedAnd16`, `_InterlockedAnd64`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h>|  
|`_InterlockedAnd_acq`, `_InterlockedAnd_nf`, `_InterlockedAnd_rel`, `_InterlockedAnd8_acq`, `_InterlockedAnd8_nf`, `_InterlockedAnd8_rel`, `_InterlockedAnd16_acq`, `_InterlockedAnd16_nf`, `_InterlockedAnd16_rel`, `_InterlockedAnd64_acq`, `_InterlockedAnd64_nf`, `_InterlockedAnd64_rel`|ARM|\<intrin.h>|  
|`_InterlockedAnd_np`, `_InterlockedAnd8_np`, `_InterlockedAnd16_np`, `_InterlockedAnd64_np`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h>|  
|`_InterlockedAnd_HLEAcquire`, `_InterlockedAnd_HLERelease`, `_InterlockedAnd64_HLEAcquire`, `_InterlockedAnd64_HLERelease`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<immintrin.h>|  
  
## <a name="remarks"></a>Note  
 Il numero nel nome di ogni funzione specifica la dimensione in bit degli argomenti.  
  
 Sulle piattaforme ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica. Le funzioni intrinseche con suffisso `_nf` ("nessun limite") non fungono da barriera di memoria.  
  
 Le funzioni intrinseche con suffisso `_np` ("nessuna prelettura") impediscono l'inserimento di una possibile operazione di prelettura da parte del compilatore.  
  
 Sulle piattaforme Intel che supportano le istruzioni HLE (Hardware Lock Elision), le funzioni intrinseche con suffissi `_HLEAcquire` e `_HLERelease` includono un hint per il processore che consente di accelerare le prestazioni eliminando un passaggio di blocco scrittura nell'hardware. Se queste funzioni intrinseche vengono chiamate su piattaforme che non supportano HLE, l'hint viene ignorato.  
  
## <a name="example"></a>Esempio  
  
```  
// InterlockedAnd.cpp  
// Compile with: /Oi  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(_InterlockedAnd)  
  
int main()  
{  
        long data1 = 0xFF00FF00;  
        long data2 = 0x00FFFF00;  
        long retval;  
        retval = _InterlockedAnd(&data1, data2);  
        printf_s("0x%x 0x%x 0x%x", data1, data2, retval);   
}  
```  
  
```Output  
0xff00 0xffff00 0xff00ff00  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)