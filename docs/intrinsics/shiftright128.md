---
description: 'Altre informazioni su: __shiftright128'
title: __shiftright128
ms.date: 09/02/2019
f1_keywords:
- __shiftright128
helpviewer_keywords:
- __shiftright128 intrinsic
ms.assetid: 5419a6c4-0de1-43fb-b314-4faa5b2d051f
ms.openlocfilehash: 71f8a0d9b740ebfef5e930715e07d1ec31950269
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97306976"
---
# <a name="__shiftright128"></a>__shiftright128

**Specifico di Microsoft**

Sposta una quantità di 128 bit, rappresentata come due quantità di 64 bit `LowPart` e `HighPart`, a destra di un numero di bit specificato da `Shift` e restituisce i 64 bit meno significativi del risultato.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 __shiftright128(
   unsigned __int64 LowPart,
   unsigned __int64 HighPart,
   unsigned char Shift
);
```

### <a name="parameters"></a>Parametri

*LowPart*\
in Bit 64 bassi della quantità di 128 bit da spostare.

*HighPart*\
in Bit 64 alti della quantità di 128 bit da spostare.

*MAIUSC*\
in Numero di bit da spostare.

## <a name="return-value"></a>Valore restituito

I 64 bit meno significativi del risultato.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__shiftright128`|x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Il valore `Shift` è sempre modulo 64 in modo che, ad esempio, se si chiama `__shiftright128(0, 1, 64)`, la funzione sposterà la parte più significativa di `0` bit a destra e restituirà la parte meno significativa di `0` e non di `1`, come ci si aspetterebbe altrimenti.

## <a name="example"></a>Esempio

Per un esempio, vedere [__shiftleft128](../intrinsics/shiftleft128.md).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[__shiftleft128](../intrinsics/shiftleft128.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
