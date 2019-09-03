---
title: _mm_stream_si64x
ms.date: 09/02/2019
f1_keywords:
- _mm_stream_si64x
helpviewer_keywords:
- movnti instruction
- _mm_stream_si64x intrinsic
ms.assetid: 114c2cd0-085f-41aa-846e-87bdd56c9ee7
ms.openlocfilehash: f6ed0f2482ecbcdaa4d50034e0d08381768847a2
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221752"
---
# <a name="_mm_stream_si64x"></a>_mm_stream_si64x

**Sezione specifica Microsoft**

Genera l'istruzione MOVNTI. Scrive i dati nell' *origine* in una posizione di memoria specificata dalla *destinazione*, senza inquinare le cache.

## <a name="syntax"></a>Sintassi

```C
void _mm_stream_si64x(
   __int64 * Destination,
   __int64 Source
);
```

### <a name="parameters"></a>Parametri

*Destinazione*\
out Puntatore alla posizione in cui scrivere i dati di origine.

*Source*\
in Dati da scrivere.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_mm_stream_si64x`|X64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```C
// _mm_stream_si64x.c
// processor: x64

#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_mm_stream_si64x)

int main()
{
    __int64 val = 0xFFFFFFFFFFFFI64;
    __int64 a[10];

    memset(a, 0, sizeof(a));
    _mm_stream_si64x(a+1, val);
    printf_s( "%I64x %I64x %I64x %I64x", a[0], a[1], a[2], a[3]);
}
```

```Output
0 ffffffffffff 0 0
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
