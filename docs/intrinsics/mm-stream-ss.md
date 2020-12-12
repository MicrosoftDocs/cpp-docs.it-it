---
description: 'Altre informazioni su: _mm_stream_ss'
title: _mm_stream_ss
ms.date: 09/02/2019
f1_keywords:
- _mm_stream_ss
helpviewer_keywords:
- movntss instruction
- _mm_stream_ss intrinsic
ms.assetid: c53dffe9-0dfe-4063-85d3-e8987b870fce
ms.openlocfilehash: 3af79ee38c09f08ab8e1e5300800846c866972a3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97133207"
---
# <a name="_mm_stream_ss"></a>_mm_stream_ss

**Specifico di Microsoft**

Scrive i dati a 32 bit in una posizione di memoria senza inquinare le cache.

## <a name="syntax"></a>Sintassi

```C
void _mm_stream_ss(
   float * Destination,
   __m128 Source
);
```

### <a name="parameters"></a>Parametri

*Destinazione*\
out Puntatore alla posizione in cui vengono scritti i dati di origine.

*Origine*\
in Numero a 128 bit che contiene il **`float`** valore da scrivere nei 32 bit inferiori.

## <a name="return-value"></a>Valore restituito

Nessuno.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`_mm_stream_ss`|SSE4a|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

La funzione intrinseca genera l' `movntss` istruzione. Per determinare il supporto hardware per questa istruzione, chiamare l'oggetto `__cpuid` intrinseco con `InfoType=0x80000001` e selezionare il bit 6 di `CPUInfo[2] (ECX)` . Questo bit è 1 quando l'istruzione è supportata e 0 in caso contrario.

Se si esegue codice che usa la funzione `_mm_stream_ss` intrinseca su hardware che non supporta l' `movntss` istruzione, i risultati sono imprevedibili.

## <a name="example"></a>Esempio

```cpp
// Compile this sample with: /EHsc
#include <iostream>
#include <intrin.h>
using namespace std;

int main()
{
    __m128 vals;
    float f[4];

    f[0] = -1.;
    f[1] = -2.;
    f[2] = -3.;
    f[3] = -4.;
    vals.m128_f32[0] = 0.;
    vals.m128_f32[1] = 1.;
    vals.m128_f32[2] = 2.;
    vals.m128_f32[3] = 3.;
    _mm_stream_ss(&f[3], vals);
    cout << "f[0] = " << f[0] << ", f[1] = " << f[1] << endl;
    cout << "f[1] = " << f[1] << ", f[3] = " << f[3] << endl;
}
```

```Output
f[0] = -1, f[1] = -2
f[2] = -3, f[3] = 3
```

**TERMINA specifica Microsoft**

Parti Copyright 2007 by Advanced Micro Devices, Inc. Tutti i diritti riservati. Riprodotto con l'autorizzazione da Advanced Micro Devices, Inc.

## <a name="see-also"></a>Vedi anche

[_mm_stream_sd](../intrinsics/mm-stream-sd.md)\
[_mm_stream_ps](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_stream_ps)\
[_mm_store_ss](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_store_ss)\
[_mm_sfence](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_sfence)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
