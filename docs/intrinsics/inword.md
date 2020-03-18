---
title: __inword
ms.date: 09/02/2019
f1_keywords:
- __inword_cpp
- __inword
helpviewer_keywords:
- in instruction
- __inword intrinsic
ms.assetid: 5c617edd-6709-40a1-aad2-40d5e39283c6
ms.openlocfilehash: 7daaf1abd5089716061f118e30e9534e5c5c18ee
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79440969"
---
# <a name="__inword"></a>__inword

**Sezione specifica Microsoft**

Legge i dati dalla porta specificata utilizzando l'istruzione `in`.

## <a name="syntax"></a>Sintassi

```C
unsigned short __inword(
   unsigned short Port
);
```

### <a name="parameters"></a>Parametri

\ *porta*
in Porta da cui leggere.

## <a name="return-value"></a>Valore restituito

Parola di dati letti.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architecture|
|---------------|------------------|
|`__inword`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Osservazioni

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
