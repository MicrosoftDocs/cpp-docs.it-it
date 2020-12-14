---
description: 'Altre informazioni su: _mm_insert_si64, _mm_inserti_si64'
title: _mm_insert_si64, _mm_inserti_si64
ms.date: 09/02/2019
f1_keywords:
- _mm_inserti_si64
- _mm_insert_si64
helpviewer_keywords:
- insertq instruction
- _mm_insert_si64 intrinsic
- _mm_inserti_si64 intrinsic
ms.assetid: 897a4b36-8b08-4b00-a18f-7850f5732d7d
ms.openlocfilehash: 96ddf9a8836dcb927a09a51e0b2818b2a040c9d2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97345264"
---
# <a name="_mm_insert_si64-_mm_inserti_si64"></a>_mm_insert_si64, _mm_inserti_si64

**Specifico di Microsoft**

Genera l' `insertq` istruzione per inserire i bit dal secondo operando nel primo operando.

## <a name="syntax"></a>Sintassi

```C
__m128i _mm_insert_si64(
   __m128i Source1,
   __m128i Source2
);
__m128i _mm_inserti_si64(
   __m128i Source1,
   __m128i Source2
   int Length,
   int Index
);
```

### <a name="parameters"></a>Parametri

*Source1*\
in Un campo a 128 bit con dati di input nei 64 bit inferiori, in cui verrà inserito un campo.

*Source2*\
in Un campo a 128 bit che contiene i dati da inserire nei bit inferiori.  Per `_mm_insert_si64` , contiene anche un descrittore di campo nei bit massimi.

*Lunghezza*\
in Costante integer che specifica la lunghezza del campo da inserire.

*Indice*\
in Costante integer che specifica l'indice del bit meno significativo del campo in cui verranno inseriti i dati.

## <a name="return-value"></a>Valore restituito

Un campo a 128 bit, i cui 64 bit inferiori contengono i bit 64 originali bassi di *source1*, con il campo di bit specificato sostituito dai bit bassi di *source2*. I 64 bit superiori del valore restituito non sono definiti.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`_mm_insert_si64`|SSE4a|
|`_mm_inserti_si64`|SSE4a|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Queste funzioni intrinseche generano l' `insertq` istruzione per inserire BITS da *source2* in *source1*. Sono disponibili due versioni: `_mm_inserti_si64` , è la versione immediata e `_mm_insert_si64` è quella non immediata. Ogni versione estrae un campo di bit di una determinata lunghezza da source2 e lo inserisce in source1.  I bit estratti sono i bit meno significativi di source2.  Il campo source1 in cui verranno inseriti questi bit viene definito dalla lunghezza e dall'indice del bit meno significativo.  I valori di length e index vengono presi mod 64, quindi both-1 e 127 vengono interpretati come 63. Se la somma della lunghezza del campo (ridotta) e della lunghezza del campo (ridotta) è maggiore di 64, i risultati non sono definiti. Un valore pari a zero per la lunghezza del campo viene interpretato come 64. Se la lunghezza del campo e l'indice di bit sono entrambi pari a zero, i bit 63:0 di *source2* vengono inseriti in *source1*. Se la lunghezza del campo è zero, ma l'indice di bit è diverso da zero, i risultati non sono definiti.

In una chiamata a _mm_insert_si64 la lunghezza del campo è contenuta in bits 77:72 di source2 e l'indice in bits 69:64.

Se si chiama `_mm_inserti_si64` con argomenti che il compilatore non può determinare come costanti Integer, il compilatore genera il codice per comprimere tali valori in un registro XMM e per chiamare `_mm_insert_si64` .

Per determinare il supporto hardware per l' `insertq` istruzione, chiamare l'oggetto `__cpuid` intrinseco con `InfoType=0x80000001` e selezionare il bit 6 di `CPUInfo[2] (ECX)` . Questo bit è 1 se l'istruzione è supportata; in caso contrario, 0. Se si esegue codice che usa la funzione intrinseca su hardware che non supporta l' `insertq` istruzione, i risultati sono imprevedibili.

## <a name="example"></a>Esempio

```cpp
// Compile this sample with: /EHsc
#include <iostream>
#include <intrin.h>
using namespace std;

union {
    __m128i m;
    unsigned __int64 ui64[2];
} source1, source2, source3, result1, result2, result3;

int
main()
{

    __int64 mask;

    source1.ui64[0] = 0xffffffffffffffffll;
    source2.ui64[0] = 0xfedcba9876543210ll;
    source2.ui64[1] = 0xc10;
    source3.ui64[0] = source2.ui64[0];

    result1.m = _mm_insert_si64 (source1.m, source2.m);
    result2.m = _mm_inserti_si64(source1.m, source3.m, 16, 12);
    mask = 0xffff << 12;
    mask = ~mask;
    result3.ui64[0] = (source1.ui64[0] & mask) |
                      ((source2.ui64[0] & 0xffff) << 12);

    cout << hex << "result1 = 0x" << result1.ui64[0] << endl;
    cout << "result2 = 0x" << result2.ui64[0] << endl;
    cout << "result3 = 0x" << result3.ui64[0] << endl;

}
```

```Output
result1 = 0xfffffffff3210fff
result2 = 0xfffffffff3210fff
result3 = 0xfffffffff3210fff
```

**TERMINA specifica Microsoft**

Parti Copyright 2007 by Advanced Micro Devices, Inc. Tutti i diritti riservati. Riprodotto con l'autorizzazione da Advanced Micro Devices, Inc.

## <a name="see-also"></a>Vedi anche

[_mm_extract_si64, _mm_extracti_si64](../intrinsics/mm-extract-si64-mm-extracti-si64.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
