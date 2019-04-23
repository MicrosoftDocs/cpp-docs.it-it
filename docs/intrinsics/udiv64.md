---
title: _udiv64
ms.date: 04/17/2019
f1_keywords:
- _udiv64
helpviewer_keywords:
- _udiv64 intrinsic
ms.openlocfilehash: 73a29b180eeda49a9a25e9e568d25c7563234fad
ms.sourcegitcommit: 2ce88de75e7681220ae09a0ab13056f22f357a46
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2019
ms.locfileid: "59982450"
---
# <a name="udiv64"></a>_udiv64

Il `_udiv64` intrinseco divide un intero senza segno a 64 bit da un intero senza segno a 32 bit. Il valore restituito contiene il quoziente e la funzione intrinseca restituisce il resto tramite un parametro del puntatore. `_udiv64` viene **specifico di Microsoft**.

## <a name="syntax"></a>Sintassi

```C
unsigned int _udiv64(
   unsigned __int64 dividend,
   unsigned int divisor,
   unsigned int* remainder
);
```

### <a name="parameters"></a>Parametri

*dividend*<br/>
[in] Intero senza segno a 64 bit da dividere.

*divisor*<br/>
[in] Intero senza segno a 32 bit per cui dividere.

*remainder*<br/>
[out] Il resto intero senza segno a 32 bit.

## <a name="return-value"></a>Valore restituito

32 bit del quoziente.

## <a name="remarks"></a>Note

Il `_udiv64` divide intrinseci *dividendo* da *divisore*. Archivia il resto nell'intero senza segno a 32 bit a cui punta *resto*e restituisce i 32 bit del quoziente.

Il `_udiv64` intrinseco è stato introdotto nella versione RTM di Visual Studio 2019.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|Intestazione|
|---------------|------------------|------------|
|`_udiv64`|x86, x64|\<immintrin.h>|

## <a name="see-also"></a>Vedere anche

[_div64](div64.md) \
[Intrinseci del compilatore](compiler-intrinsics.md)
