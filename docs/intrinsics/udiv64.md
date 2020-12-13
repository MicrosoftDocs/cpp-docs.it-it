---
description: 'Altre informazioni su: _udiv64'
title: _udiv64
ms.date: 09/02/2019
f1_keywords:
- _udiv64
helpviewer_keywords:
- _udiv64 intrinsic
ms.openlocfilehash: 21f383cd78885ab8d3d8bb66a87623a73b59ff95
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333635"
---
# <a name="_udiv64"></a>_udiv64

La funzione `_udiv64` intrinseca divide un Unsigned Integer a 64 bit da un Unsigned Integer a 32 bit. Il valore restituito include il quoziente e la funzione intrinseca restituisce il resto tramite un parametro del puntatore. `_udiv64` è **specifico di Microsoft**.

## <a name="syntax"></a>Sintassi

```C
unsigned int _udiv64(
   unsigned __int64 dividend,
   unsigned int divisor,
   unsigned int* remainder
);
```

### <a name="parameters"></a>Parametri

*dividendo*\
in Unsigned Integer a 64 bit da dividere.

*divisore*\
in Unsigned Integer a 32 bit per cui dividere.

*resto*\
out Il resto Unsigned Integer a 32 bit.

## <a name="return-value"></a>Valore restituito

Bit 32 del quoziente.

## <a name="remarks"></a>Commenti

La funzione `_udiv64` intrinseca divide il *dividendo* per *divisore*. Archivia il resto nel Unsigned Integer a 32 bit a cui punta il *resto* e restituisce i 32 bit del quoziente.

La funzione `_udiv64` intrinseca è disponibile a partire da Visual Studio 2019 RTM.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|Intestazione|
|---------------|------------------|------------|
|`_udiv64`|x86, x64|\<immintrin.h>|

## <a name="see-also"></a>Vedi anche

[_div64](div64.md) \
[Intrinseci del compilatore](compiler-intrinsics.md)
