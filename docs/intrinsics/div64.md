---
title: _div64
ms.date: 04/17/2019
f1_keywords:
- _div64
helpviewer_keywords:
- _div64 intrinsic
ms.openlocfilehash: a221cc7cf0655a41873c6777aecd8a9b27131b74
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62264114"
---
# <a name="div64"></a>_div64

Il `_div64` intrinseco divide un numero intero a 64 bit da un numero intero a 32 bit. Il valore restituito contiene il quoziente e la funzione intrinseca restituisce il resto tramite un parametro del puntatore. `_div64` viene **specifico di Microsoft**.

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
[in] Integer a 64 bit da dividere.

*divisor* \
[in] Integer a 32 bit per cui dividere.

*remainder* \
[out] I bit di integer a 32 bit del resto.

## <a name="return-value"></a>Valore restituito

32 bit del quoziente.

## <a name="remarks"></a>Note

Il `_div64` divide intrinseci *dividendo* da *divisore*. Archivia la parte restante nel valore integer a 32 bit a cui punta *resto*e restituisce i 32 bit del quoziente.

Il `_div64` intrinseco è stato introdotto nella versione RTM di Visual Studio 2019.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|Intestazione|
|---------------|------------------|------------|
|`_div64`|x86, x64|\<immintrin.h>|

## <a name="see-also"></a>Vedere anche

[_udiv64](udiv64.md) \
[Intrinseci del compilatore](compiler-intrinsics.md)
