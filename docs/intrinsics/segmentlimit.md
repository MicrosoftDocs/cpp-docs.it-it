---
title: __segmentlimit
ms.date: 11/04/2016
f1_keywords:
- __segmentlimit
helpviewer_keywords:
- __segmentlimit intrinsic
- lsl instruction
ms.assetid: d0bc3630-90cb-4185-8667-686fd41e23d4
ms.openlocfilehash: 854e3efce48b7ed863db1a94467a6da99d796a89
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50636423"
---
# <a name="segmentlimit"></a>__segmentlimit

**Sezione specifica Microsoft**

Genera il `lsl` istruzione (limite di carico segmento).

## <a name="syntax"></a>Sintassi

```
unsigned long __segmentlimit( 
   unsigned long a 
);
```

#### <a name="parameters"></a>Parametri

*a*<br/>
[in] Costante che specifica il selettore di segmento.

## <a name="return-value"></a>Valore restituito

Il limite di segmento del selettore di segmenti specificato da `a`, a condizione che il selettore sia valido e visibile a livello di autorizzazione corrente.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__segmentlimit`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Se il limite di segmento non può essere recuperato, questa istruzione ha esito negativo. In caso di errore, questa istruzione consente di cancellare il flag ZF e il valore restituito è indefinito.

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```
#include <stdio.h>

#ifdef _M_IX86
typedef unsigned int READETYPE;
#else
typedef unsigned __int64 READETYPE;
#endif

#define EFLAGS_ZF      0x00000040
#define KGDT_R3_DATA    0x0020
#define RPL_MASK        0x3

extern "C"
{
unsigned long __segmentlimit (unsigned long);
READETYPE __readeflags();
}

#pragma intrinsic(__readeflags)
#pragma intrinsic(__segmentlimit)

int main(void)
{
   const unsigned long initsl = 0xbaadbabe;
   READETYPE eflags = 0;
   unsigned long sl = initsl;

   printf("Before: segment limit =0x%x eflags =0x%x\n", sl, eflags);
   sl = __segmentlimit(KGDT_R3_DATA + RPL_MASK);

   eflags = __readeflags();

   printf("After: segment limit =0x%x eflags =0x%x eflags.zf = %s\n", sl, eflags, (eflags & EFLAGS_ZF) ? "set" : "clear");

   // If ZF is set, the call to lsl succeeded; if ZF is clear, the call failed.
   printf("%s\n", eflags & EFLAGS_ZF ? "Success!": "Fail!");

   // You can verify the value of sl to make sure that the instruction wrote to it
   printf("sl was %s\n", (sl == initsl) ? "unchanged" : "changed");

   return 0;
}
```

```Output
Before: segment limit =0xbaadbabe eflags =0x0
After: segment limit =0xffffffff eflags =0x256 eflags.zf = set
Success!
sl was changed
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)