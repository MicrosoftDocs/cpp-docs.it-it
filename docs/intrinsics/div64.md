---
title: _div64
ms.date: 09/02/2019
f1_keywords:
- _div64
helpviewer_keywords:
- _div64 intrinsic
ms.openlocfilehash: 1d05c5d6e25540a5de1b2f8231697c9a738759ce
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216769"
---
# <a name="_div64"></a>_div64

La `_div64` funzione intrinseca divide un intero a 64 bit da un Integer a 32 bit. Il valore restituito include il quoziente e la funzione intrinseca restituisce il resto tramite un parametro del puntatore. `_div64`è **specifico di Microsoft**.

## <a name="syntax"></a>Sintassi

```C
int _div64(
   __int64 dividend,
   int divisor,
   int* remainder
);
```

### <a name="parameters"></a>Parametri

*dividend* \
in Intero a 64 bit da dividere.

*divisore* \
in Intero a 32 bit per cui dividere.

*remainder* \
out Bit Integer a 32 bit del resto.

## <a name="return-value"></a>Valore restituito

Bit 32 del quoziente.

## <a name="remarks"></a>Note

La `_div64` funzione intrinseca divide il dividendo per divisore. Archivia il resto nell'intero a 32 bit a cui punta il *resto*e restituisce i 32 bit del quoziente.

La `_div64` funzione intrinseca è disponibile a partire da Visual Studio 2019 RTM.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|Intestazione|
|---------------|------------------|------------|
|`_div64`|x86, x64|\<immintrin.h>|

## <a name="see-also"></a>Vedere anche

[_udiv64](udiv64.md) \
[Intrinseci del compilatore](compiler-intrinsics.md)
