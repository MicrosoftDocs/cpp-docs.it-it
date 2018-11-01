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
ms.openlocfilehash: 85498fd85f5401ad123794cc9aaed2b278db867c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50475361"
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