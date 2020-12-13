---
description: 'Altre informazioni su: _udiv128'
title: _udiv128
ms.date: 04/17/2019
f1_keywords:
- _udiv128
helpviewer_keywords:
- _udiv128 intrinsic
ms.openlocfilehash: f88546a179106f4291fcaeb865f1aad9e67c4045
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333646"
---
# <a name="_udiv128"></a>_udiv128

La funzione `_udiv128` intrinseca divide un Unsigned Integer a 128 bit da un Unsigned Integer a 64 bit. Il valore restituito include il quoziente e la funzione intrinseca restituisce il resto tramite un parametro del puntatore. `_udiv128` è **specifico di Microsoft**.

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

*resto* \
out Bit Integer a 64 bit del resto.

## <a name="return-value"></a>Valore restituito

Bit 64 del quoziente.

## <a name="remarks"></a>Commenti

Passare i bit 64 superiori del dividendo a 128 bit in *highDividend* e i 64 bit inferiori in *lowDividend*. La funzione intrinseca divide questo valore per *divisore*. Archivia il resto nel Unsigned Integer a 64 bit a cui punta il *resto* e restituisce i 64 bit del quoziente.

La funzione `_udiv128` intrinseca è disponibile a partire da Visual Studio 2019 RTM.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|Intestazione|
|---------------|------------------|------------|
|`_udiv128`|x64|\<immintrin.h>|

## <a name="see-also"></a>Vedi anche

[_div128](div128.md) \
[Intrinseci del compilatore](compiler-intrinsics.md)
