---
title: _udiv64
ms.date: 09/02/2019
f1_keywords:
- _udiv64
helpviewer_keywords:
- _udiv64 intrinsic
ms.openlocfilehash: 6dabbc94260ef578eb1a58a1b289b4a4654decdd
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219684"
---
# <a name="_udiv64"></a>_udiv64

La `_udiv64` funzione intrinseca divide un Unsigned Integer a 64 bit da un Unsigned Integer a 32 bit. Il valore restituito include il quoziente e la funzione intrinseca restituisce il resto tramite un parametro del puntatore. `_udiv64`è **specifico di Microsoft**.

## <a name="syntax"></a>Sintassi

```C
unsigned int _udiv64(
   unsigned __int64 dividend,
   unsigned int divisor,
   unsigned int* remainder
);
```

### <a name="parameters"></a>Parametri

*dividend*\
in Unsigned Integer a 64 bit da dividere.

*divisore*\
in Unsigned Integer a 32 bit per cui dividere.

*remainder*\
out Il resto Unsigned Integer a 32 bit.

## <a name="return-value"></a>Valore restituito

Bit 32 del quoziente.

## <a name="remarks"></a>Note

La `_udiv64` funzione intrinseca divide il dividendo per divisore. Archivia il resto nel Unsigned Integer a 32 bit a cui punta il *resto*e restituisce i 32 bit del quoziente.

La `_udiv64` funzione intrinseca è disponibile a partire da Visual Studio 2019 RTM.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|Intestazione|
|---------------|------------------|------------|
|`_udiv64`|x86, x64|\<immintrin.h>|

## <a name="see-also"></a>Vedere anche

[_div64](div64.md) \
[Intrinseci del compilatore](compiler-intrinsics.md)
