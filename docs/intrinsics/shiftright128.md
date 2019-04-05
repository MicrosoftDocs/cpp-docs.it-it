---
title: __shiftright128
ms.date: 11/04/2016
f1_keywords:
- __shiftright128
helpviewer_keywords:
- __shiftright128 intrinsic
ms.assetid: 5419a6c4-0de1-43fb-b314-4faa5b2d051f
ms.openlocfilehash: b721abc9be22709fdc221951e2012300d6b96762
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59030102"
---
# <a name="shiftright128"></a>__shiftright128

**Sezione specifica Microsoft**

Sposta una quantità di 128 bit, rappresentata come due quantità di 64 bit `LowPart` e `HighPart`, a destra di un numero di bit specificato da `Shift` e restituisce i 64 bit meno significativi del risultato.

## <a name="syntax"></a>Sintassi

```
unsigned __int64 __shiftright128(
   unsigned __int64 LowPart,
   unsigned __int64 HighPart,
   unsigned char Shift
);
```

#### <a name="parameters"></a>Parametri

*LowPart*<br/>
[in] 64 bit meno significativi della quantità di 128 bit da spostare.

*HighPart*<br/>
[in] I 64 bit alti della quantità di 128 bit da spostare.

*Shift*<br/>
[in] Il numero di bit da spostare.

## <a name="return-value"></a>Valore restituito

I 64 bit meno significativi del risultato.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__shiftright128`|X64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Il valore `Shift` è sempre modulo 64 in modo che, ad esempio, se si chiama `__shiftright128(0, 1, 64)`, la funzione sposterà la parte più significativa di `0` bit a destra e restituirà la parte meno significativa di `0` e non di `1`, come ci si aspetterebbe altrimenti.

## <a name="example"></a>Esempio

Per un esempio, vedere [__shiftleft128](../intrinsics/shiftleft128.md).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__shiftleft128](../intrinsics/shiftleft128.md)<br/>
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)