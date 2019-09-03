---
title: _mm_stream_sd
ms.date: 09/02/2019
f1_keywords:
- _mm_stream_sd
helpviewer_keywords:
- _mm_stream_sd intrinsic
- movntsd instruction
ms.assetid: 2b4bea5e-e64e-45fa-9afc-88a2e4b82cfc
ms.openlocfilehash: 7f0c6457cc0806a0f1764300cffa1c9878b8a600
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217369"
---
# <a name="_mm_stream_sd"></a>_mm_stream_sd

**Sezione specifica Microsoft**

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

*Source*\
in Valore a 128 bit contenente il `double` valore da scrivere nei 64 bit inferiori.

## <a name="return-value"></a>Valore restituito

No.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_mm_stream_sd`|SSE4a|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La funzione intrinseca `movntsd` genera l'istruzione. Per determinare il supporto hardware per questa istruzione, chiamare `__cpuid` l'oggetto `InfoType=0x80000001` intrinseco con e selezionare `CPUInfo[2] (ECX)`il bit 6 di. Questo bit è 1 se l'hardware supporta questa istruzione e 0 in caso contrario.

Se si esegue codice che usa la `_mm_stream_sd` funzione intrinseca su hardware che non `movntsd` supporta l'istruzione, i risultati sono imprevedibili.

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

**Fine sezione specifica Microsoft**

Parti Copyright 2007 by Advanced Micro Devices, Inc. Tutti i diritti sono riservati. Riprodotto con l'autorizzazione da Advanced Micro Devices, Inc.

## <a name="see-also"></a>Vedere anche

[_mm_stream_ss](../intrinsics/mm-stream-ss.md)\
[_mm_store_sd](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_store_sd)\
[_mm_sfence](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_sfence)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
