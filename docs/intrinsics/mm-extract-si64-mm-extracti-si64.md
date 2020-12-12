---
description: 'Altre informazioni su: _mm_extract_si64, _mm_extracti_si64'
title: _mm_extract_si64, _mm_extracti_si64
ms.date: 09/02/2019
f1_keywords:
- _mm_extracti_si64
- _mm_extract_si64
helpviewer_keywords:
- extrq instruction
- _mm_extracti_si64 intrinsic
- _mm_extract_si64 intrinsic
ms.assetid: 459fdd72-cc54-4ee5-bbd5-d2c6067a88e7
ms.openlocfilehash: 39a07c7310727de8d752c060c3d38481469ff1a7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322867"
---
# <a name="_mm_extract_si64-_mm_extracti_si64"></a>_mm_extract_si64, _mm_extracti_si64

**Specifico di Microsoft**

Genera l' `extrq` istruzione per estrarre i bit specificati dai bit 64 bassi del primo argomento.

## <a name="syntax"></a>Sintassi

```C
__m128i _mm_extract_si64(
   __m128i Source,
   __m128i Descriptor
);
__m128i _mm_extracti_si64(
   __m128i Source,
   int Length,
   int Index
);
```

### <a name="parameters"></a>Parametri

*Origine*\
in Un campo a 128 bit con dati di input nei 64 bit inferiori.

*Descrittore*\
in Campo a 128 bit che descrive il campo di bit da estrarre.

*Lunghezza*\
in Integer che specifica la lunghezza del campo da estrarre.

*Indice*\
in Integer che specifica l'indice del campo da estrarre.

## <a name="return-value"></a>Valore restituito

Un campo a 128 bit con il campo Estratto nei bit meno significativi.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`_mm_extract_si64`|SSE4a|
|`_mm_extracti_si64`|SSE4a|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Queste funzioni intrinseche generano l' `extrq` istruzione per estrarre i bit dall' *origine*. Sono disponibili due versioni: `_mm_extracti_si64` è la versione immediata e `_mm_extract_si64` è quella non immediata. Ogni versione estrae dall' *origine* un campo di bit definito dalla relativa lunghezza e dall'indice del bit meno significativo. I valori di length e index vengono presi mod 64, quindi both-1 e 127 vengono interpretati come 63. Se la somma della lunghezza del campo (ridotta) e (ridotta) è maggiore di 64, i risultati non sono definiti. Un valore pari a zero per la lunghezza del campo viene interpretato come 64. Se la lunghezza del campo e l'indice di bit sono entrambi pari a zero, vengono estratti i bit 63:0 dell' *origine* . Se la lunghezza del campo è zero, ma l'indice di bit è diverso da zero, i risultati non sono definiti.

In una chiamata a `_mm_extract_si64` , il *descrittore* contiene l'indice in bits 13:8 e la lunghezza del campo dei dati da estrarre in bits 5:0.

Se si chiama `_mm_extracti_si64` con argomenti che il compilatore non può determinare come costanti Integer, il compilatore genera il codice per comprimere tali valori in un registro XMM (*descrittore*) e per chiamare `_mm_extract_si64` .

Per determinare il supporto hardware per l' `extrq` istruzione, chiamare l'oggetto `__cpuid` intrinseco con `InfoType=0x80000001` e selezionare il bit 6 di `CPUInfo[2] (ECX)` . Questo bit sarà 1 se l'istruzione è supportata; in caso contrario, 0. Se si esegue codice che utilizza questo hardware intrinseco che non supporta l' `extrq` istruzione, i risultati sono imprevedibili.

## <a name="example"></a>Esempio

```cpp
// Compile this sample with: /EHsc
#include <iostream>
#include <intrin.h>
using namespace std;

union {
    __m128i m;
    unsigned __int64 ui64[2];
} source, descriptor, result1, result2, result3;

int
main()
{
    source.ui64[0] =     0xfedcba9876543210ll;
    descriptor.ui64[0] = 0x0000000000000b1bll;

    result1.m = _mm_extract_si64 (source.m, descriptor.m);
    result2.m = _mm_extracti_si64(source.m, 27, 11);
    result3.ui64[0] = (source.ui64[0] >> 11) & 0x7ffffff;

    cout << hex << "result1 = 0x" << result1.ui64[0] << endl;
    cout << "result2 = 0x" << result2.ui64[0] << endl;
    cout << "result3 = 0x" << result3.ui64[0] << endl;
}
```

```Output
result1 = 0x30eca86
result2 = 0x30eca86
result3 = 0x30eca86
```

**TERMINA specifica Microsoft**

Parti Copyright 2007 by Advanced Micro Devices, Inc. Tutti i diritti riservati. Riprodotto con l'autorizzazione da Advanced Micro Devices, Inc.

## <a name="see-also"></a>Vedi anche

[_mm_insert_si64, _mm_inserti_si64](../intrinsics/mm-insert-si64-mm-inserti-si64.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
