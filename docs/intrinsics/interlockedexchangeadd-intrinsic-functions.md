---
title: Funzioni intrinseche InterlockedExchangeAdd | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- _InterlockedExchangeAdd64_nf
- _InterlockedExchangeAdd64_rel
- _InterlockedExchangeAdd16_rel
- _InterlockedExchangeAdd_acq
- _InterlockedExchangeAdd_nf
- _InterlockedExchangeAdd_rel
- _InterlockedExchangeAdd8_acq
- _InterlockedExchangeAdd16_nf
- _InterlockedExchangeAdd_acq_cpp
- _InterlockedExchangeAdd64_acq_cpp
- _InterlockedExchangeAdd16_acq
- _InterlockedExchangeAdd_HLERelease
- _InterlockedExchangeAdd64_cpp
- _InterlockedExchangeAdd64_HLERelease
- _InterlockedExchangeAdd64_acq
- _InterlockedExchangeAdd8
- _InterlockedExchangeAdd64
- _InterlockedExchangeAdd8_nf
- _InterlockedExchangeAdd16
- _InterlockedExchangeAdd64_rel_cpp
- _InterlockedExchangeAdd_cpp
- _InterlockedExchangeAdd8_rel
- _InterlockedExchangeAdd_HLEAcquire
- _InterlockedExchangeAdd64_HLEAcquire
- _InterlockedExchangeAdd
dev_langs:
- C++
helpviewer_keywords:
- _InterlockedExchangeAdd8_nf intrinsic
- InterlockedExchangeAdd64_acq intrinsic
- _InterlockedExchangeAdd8_acq intrinsic
- _InterlockedExchangeAdd64 intrinsic
- _InterlockedExchangeAdd intrinsic
- _InterlockedExchangeAdd8_rel intrinsic
- _InterlockedExchangeAdd_acq intrinsic
- _InterlockedExchangeAdd_HLEAcquire intrinsic
- _InterlockedExchangeAdd8 intrinsic
- _InterlockedExchangeAdd_rel intrinsic
- _InterlockedExchangeAdd64_HLERelease intrinsic
- _InterlockedExchangeAdd64_nf intrinsic
- InterlockedExchangeAdd_rel intrinsic
- InterlockedExchangeAdd intrinsic
- _InterlockedExchangeAdd_nf intrinsic
- _InterlockedExchangeAdd16_rel intrinsic
- InterlockedExchangeAdd_acq intrinsic
- _InterlockedExchangeAdd64_HLEAcquire intrinsic
- _InterlockedExchangeAdd16 intrinsic
- _InterlockedExchangeAdd64_acq intrinsic
- InterlockedExchangeAdd64_rel intrinsic
- _InterlockedExchangeAdd16_acq intrinsic
- InterlockedExchangeAdd64 intrinsic
- _InterlockedExchangeAdd_HLERelease intrinsic
- _InterlockedExchangeAdd16_nf intrinsic
- _InterlockedExchangeAdd64_rel intrinsic
ms.assetid: 25809e1f-9c60-4492-9f7c-0fb59c8d13d2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c141caf090eb34482fe53a03138ff71d2740e2fc
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33340554"
---
# <a name="interlockedexchangeadd-intrinsic-functions"></a>Funzioni intrinseche _InterlockedExchangeAdd
**Sezione specifica Microsoft**  
  
 Fornire il supporto intrinseco del compilatore per Win32 [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)] [InterlockedExchangeAdd Intrinsic Functions](../intrinsics/interlockedexchangeadd-intrinsic-functions.md) (funzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
long _InterlockedExchangeAdd(  
   long volatile * Addend,  
   long Value  
);  
long _InterlockedExchangeAdd_acq(  
   long volatile * Addend,  
   long Value  
);  
long _InterlockedExchangeAdd_rel(  
   long volatile * Addend,  
   long Value  
);  
long _InterlockedExchangeAdd_nf(  
   long volatile * Addend,  
   long Value  
);  
long _InterlockedExchangeAdd_HLEAcquire(  
   long volatile * Addend,  
   long Value  
);  
long _InterlockedExchangeAdd_HLERelease(  
   long volatile * Addend,  
   long Value  
);  
char _InterlockedExchangeAdd8(  
   char volatile * Addend,  
   char Value  
);  
char _InterlockedExchangeAdd8_acq(  
   char volatile * Addend,  
   char Value  
);  
char _InterlockedExchangeAdd8_rel(  
   char volatile * Addend,  
   char Value  
);  
char _InterlockedExchangeAdd8_nf(  
   char volatile * Addend,  
   char Value  
);  
short _InterlockedExchangeAdd16(  
   short volatile * Addend,  
   short Value  
);  
short _InterlockedExchangeAdd16_acq(  
   short volatile * Addend,  
   short Value  
);  
short _InterlockedExchangeAdd16_rel(  
   short volatile * Addend,  
   short Value  
);  
short _InterlockedExchangeAdd16_nf(  
   short volatile * Addend,  
   short Value  
);  
__int64 _InterlockedExchangeAdd64(  
   __int64 volatile * Addend,  
   __int64 Value  
);  
__int64 _InterlockedExchangeAdd64_acq(  
   __int64 volatile * Addend,  
   __int64 Value  
);  
__int64 _InterlockedExchangeAdd64_rel(  
   __int64 volatile * Addend,  
   __int64 Value  
);  
__int64 _InterlockedExchangeAdd64_nf(  
   __int64 volatile * Addend,  
   __int64 Value  
);  
__int64 _InterlockedExchangeAdd64_HLEAcquire(  
   __int64 volatile * Addend,  
   __int64 Value  
);  
__int64 _InterlockedExchangeAdd64_HLERelease(  
   __int64 volatile * Addend,  
   __int64 Value  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 [in, out] `Addend`  
 Il valore da aggiungere a; sostituito dal risultato dell'addizione.  
  
 [in] `Value`  
 Il valore da aggiungere.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore restituito è il valore iniziale della variabile a cui punta il parametro `Addend`.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|Intestazione|  
|---------------|------------------|------------|  
|`_InterlockedExchangeAdd`, `_InterlockedExchangeAdd8`, `_InterlockedExchangeAdd16`, `_InterlockedExchangeAdd64`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h>|  
|`_InterlockedExchangeAdd_acq`, `_InterlockedExchangeAdd_rel`, `_InterlockedExchangeAdd_nf`, `_InterlockedExchangeAdd8_acq`, `_InterlockedExchangeAdd8_rel`, `_InterlockedExchangeAdd8_nf`,`_InterlockedExchangeAdd16_acq`, `_InterlockedExchangeAdd16_rel`, `_InterlockedExchangeAdd16_nf`, `_InterlockedExchangeAdd64_acq`, `_InterlockedExchangeAdd64_rel`, `_InterlockedExchangeAdd64_nf`|ARM|\<intrin.h>|  
|`_InterlockedExchangeAdd_HLEAcquire`, `_InterlockedExchangeAdd_HLERelease`, `_InterlockedExchangeAdd64_HLEAcquire`, `_InterlockedExchangeAdd64_HLErelease`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<immintrin.h>|  
  
## <a name="remarks"></a>Note  
 Ci sono diverse varianti di `_InterlockedExchangeAdd` che variano in base ai tipi di dati interessati e all'uso della semantica di acquisizione o di rilascio specifica del processore.  
  
 Mentre la funzione `_InterlockedExchangeAdd` opera su valori integer a 32 bit, `_InterlockedExchangeAdd8` opera su valori integer a 8 bit, `_InterlockedExchangeAdd16` opera su valori integer a 16 bit e `_InterlockedExchangeAdd64` opera su valori integer a 64 bit.  
  
 Sulle piattaforme ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica. Le funzioni intrinseche con suffisso `_nf` ("nessun limite") non fungono da barriera di memoria.  
  
 Sulle piattaforme Intel che supportano le istruzioni HLE (Hardware Lock Elision), le funzioni intrinseche con suffissi `_HLEAcquire` e `_HLERelease` includono un hint per il processore che consente di accelerare le prestazioni eliminando un passaggio di blocco scrittura nell'hardware. Se queste funzioni intrinseche vengono chiamate su piattaforme che non supportano HLE, l'hint viene ignorato.  
  
 Queste routine sono disponibili solo come funzioni intrinseche. Di conseguenza, sono intrinseci a prescindere o non [/Oi](../build/reference/oi-generate-intrinsic-functions.md) o [#pragma intrinseco](../preprocessor/intrinsic.md) viene utilizzato. Non è possibile utilizzare [#pragma funzione](../preprocessor/function-c-cpp.md) su queste funzioni intrinseche.  
  
## <a name="example"></a>Esempio  
 Per un esempio di come utilizzare `_InterlockedExchangeAdd`, vedere [InterlockedDecrement](../intrinsics/interlockeddecrement-intrinsic-functions.md).  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)