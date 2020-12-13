---
description: 'Altre informazioni su: _div64'
title: _div64
ms.date: 09/02/2019
f1_keywords:
- _div64
helpviewer_keywords:
- _div64 intrinsic
ms.openlocfilehash: 4c9c8f02f7092c12d5734f96346897e2eca9898a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337064"
---
# <a name="_div64"></a>_div64

La funzione `_div64` intrinseca divide un intero a 64 bit da un Integer a 32 bit. Il valore restituito include il quoziente e la funzione intrinseca restituisce il resto tramite un parametro del puntatore. `_div64` è **specifico di Microsoft**.

## <a name="syntax"></a>Sintassi

```C
int _div64(
   __int64 dividend,
   int divisor,
   int* remainder
);
```

### <a name="parameters"></a>Parametri

*dividendo* \
in Intero a 64 bit da dividere.

*divisore* \
in Intero a 32 bit per cui dividere.

*resto* \
out Bit Integer a 32 bit del resto.

## <a name="return-value"></a>Valore restituito

Bit 32 del quoziente.

## <a name="remarks"></a>Commenti

La funzione `_div64` intrinseca divide il *dividendo* per *divisore*. Archivia il resto nell'intero a 32 bit a cui punta il *resto* e restituisce i 32 bit del quoziente.

La funzione `_div64` intrinseca è disponibile a partire da Visual Studio 2019 RTM.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|Intestazione|
|---------------|------------------|------------|
|`_div64`|x86, x64|\<immintrin.h>|

## <a name="see-also"></a>Vedi anche

[_udiv64](udiv64.md) \
[Intrinseci del compilatore](compiler-intrinsics.md)
