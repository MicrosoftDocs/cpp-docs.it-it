---
title: _udiv128
ms.date: 04/17/2019
f1_keywords:
- _udiv128
helpviewer_keywords:
- _udiv128 intrinsic
ms.openlocfilehash: 5e8cc9ca3dbf19a04d07edb1d73df84f2e29a5c3
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857983"
---
# <a name="_udiv128"></a>_udiv128

La funzione intrinseca `_udiv128` divide una Unsigned Integer a 128 bit da un Unsigned Integer a 64 bit. Il valore restituito include il quoziente e la funzione intrinseca restituisce il resto tramite un parametro del puntatore. `_udiv128` è **specifico di Microsoft**.

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
in Bit 64 alti del dividendo.

*lowDividend* \
in Bit 64 bassi del dividendo.

*divisore* \
in Intero a 64 bit per cui dividere.

*remainder* \
out Bit Integer a 64 bit del resto.

## <a name="return-value"></a>Valore restituito

Bit 64 del quoziente.

## <a name="remarks"></a>Note

Passare i bit 64 superiori del dividendo a 128 bit in *highDividend*e i 64 bit inferiori in *lowDividend*. La funzione intrinseca divide questo valore per *divisore*. Archivia il resto nel Unsigned Integer a 64 bit a cui punta il *resto*e restituisce i 64 bit del quoziente.

Il `_udiv128` intrinseco è disponibile a partire da Visual Studio 2019 RTM.

## <a name="requirements"></a>Requisiti di

|Funzione intrinseca|Architettura|Header|
|---------------|------------------|------------|
|`_udiv128`|x64|\<immintrin.h>|

## <a name="see-also"></a>Vedere anche

[_div128](div128.md) \
[Intrinseci del compilatore](compiler-intrinsics.md)
