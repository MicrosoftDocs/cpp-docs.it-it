---
title: _udiv128
ms.date: 04/17/2019
f1_keywords:
- _udiv128
helpviewer_keywords:
- _udiv128 intrinsic
ms.openlocfilehash: 0e66bbe978199f47134aa288bdd2bac4eb3e332a
ms.sourcegitcommit: 2ce88de75e7681220ae09a0ab13056f22f357a46
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2019
ms.locfileid: "59982440"
---
# <a name="udiv128"></a>_udiv128

Il `_udiv128` intrinseco divide un intero senza segno a 128 bit da un intero senza segno a 64 bit. Il valore restituito contiene il quoziente e la funzione intrinseca restituisce il resto tramite un parametro del puntatore. `_udiv128` viene **specifico di Microsoft**.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 _udiv128(
   unsigned __int64 highDividend,
   unsigned __int64 lowDividend,
   unsigned __int64 divisor,
   unsigned __int64 *remainder
);
```

### <a name="parameters"></a>Parametri

*highDividend* \
[in] I 64 bit alti del dividendo.

*lowDividend* \
[in] I 64 bit bassi del dividendo.

*divisor* \
[in] Integer a 64 bit per cui dividere.

*remainder* \
[out] I bit di integer a 64 bit del resto.

## <a name="return-value"></a>Valore restituito

I 64 bit del quoziente.

## <a name="remarks"></a>Note

Passare a 64 bit superiori del dividendo 128 bit nel *highDividend*e i 64 bit in basso *lowDividend*. La funzione intrinseca divide questo valore per *divisore*. Archivia il resto nell'intero senza segno a 64 bit a cui punta *resto*e restituisce i 64 bit del quoziente.

Il `_udiv128` intrinseco è stato introdotto nella versione RTM di Visual Studio 2019.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|Intestazione|
|---------------|------------------|------------|
|`_udiv128`|X64|\<immintrin.h>|

## <a name="see-also"></a>Vedere anche

[_div128](div128.md) \
[Intrinseci del compilatore](compiler-intrinsics.md)
