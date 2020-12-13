---
description: 'Altre informazioni su: _mm_stream_sd'
title: _mm_stream_sd
ms.date: 09/02/2019
f1_keywords:
- _mm_stream_sd
helpviewer_keywords:
- _mm_stream_sd intrinsic
- movntsd instruction
ms.assetid: 2b4bea5e-e64e-45fa-9afc-88a2e4b82cfc
ms.openlocfilehash: 60ef13afcbe99e1390f4eb1087fddc5540a7de34
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97133263"
---
# <a name="_mm_stream_sd"></a>_mm_stream_sd

**Specifico di Microsoft**

Scrive i dati a 64 bit in una posizione di memoria senza inquinare le cache.

## <a name="syntax"></a>Sintassi

```C
void _mm_stream_sd(
   double * Dest,
   __m128d Source
);
```

### <a name="parameters"></a>Parametri

*Dest*\
out Puntatore alla posizione in cui verranno scritti i dati di origine.

*Origine*\
in Valore a 128 bit contenente il **`double`** valore da scrivere nei 64 bit inferiori.

## <a name="return-value"></a>Valore restituito

Nessuno.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`_mm_stream_sd`|SSE4a|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

La funzione intrinseca genera l' `movntsd` istruzione. Per determinare il supporto hardware per questa istruzione, chiamare l'oggetto `__cpuid` intrinseco con `InfoType=0x80000001` e selezionare il bit 6 di `CPUInfo[2] (ECX)` . Questo bit è 1 se l'hardware supporta questa istruzione e 0 in caso contrario.

Se si esegue codice che usa la funzione `_mm_stream_sd` intrinseca su hardware che non supporta l' `movntsd` istruzione, i risultati sono imprevedibili.

## <a name="example"></a>Esempio

```cpp
// Compile this sample with: /EHsc
#include <iostream>
#include <intrin.h>
using namespace std;

int main()
{
    __m128d vals;
    double d[2];

    d[0] = -1.;
    d[1] = -2.;
    vals.m128d_f64[0] = 0.;
    vals.m128d_f64[1] = 1.;
    _mm_stream_sd(&d[1], vals);
    cout << "d[0] = " << d[0] << ", d[1] = " << d[1] << endl;
}
```

```Output
d[0] = -1, d[1] = 1
```

**TERMINA specifica Microsoft**

Parti Copyright 2007 by Advanced Micro Devices, Inc. Tutti i diritti riservati. Riprodotto con l'autorizzazione da Advanced Micro Devices, Inc.

## <a name="see-also"></a>Vedi anche

[_mm_stream_ss](../intrinsics/mm-stream-ss.md)\
[_mm_store_sd](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_store_sd)\
[_mm_sfence](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_sfence)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
