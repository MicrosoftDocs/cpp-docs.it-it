---
title: __inword
ms.date: 11/04/2016
f1_keywords:
- __indword_cpp
- __indword
helpviewer_keywords:
- in instruction
- __inword intrinsic
ms.assetid: 5c617edd-6709-40a1-aad2-40d5e39283c6
ms.openlocfilehash: f7355f64eeb2ace550d272ac6a9b1414e90eb172
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59038596"
---
# <a name="inword"></a>__inword

**Sezione specifica Microsoft**

Legge i dati dalla porta specificata usando il `in` (istruzione).

## <a name="syntax"></a>Sintassi

```
unsigned short __inword(
   unsigned short Port
);
```

#### <a name="parameters"></a>Parametri

*Porta*<br/>
[in] La porta da cui leggere.

## <a name="return-value"></a>Valore restituito

La parola di dati letti.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__inword`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)