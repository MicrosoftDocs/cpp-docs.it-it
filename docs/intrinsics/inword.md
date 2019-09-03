---
title: __inword
ms.date: 09/02/2019
f1_keywords:
- __indword_cpp
- __indword
helpviewer_keywords:
- in instruction
- __inword intrinsic
ms.assetid: 5c617edd-6709-40a1-aad2-40d5e39283c6
ms.openlocfilehash: cfb6e5a11bed5feec3435ab604d22b8f532d3400
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217521"
---
# <a name="__inword"></a>__inword

**Sezione specifica Microsoft**

Legge i dati dalla porta specificata utilizzando l' `in` istruzione.

## <a name="syntax"></a>Sintassi

```C
unsigned short __inword(
   unsigned short Port
);
```

### <a name="parameters"></a>Parametri

*Porta*\
in Porta da cui leggere.

## <a name="return-value"></a>Valore restituito

Parola di dati letti.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__inword`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
