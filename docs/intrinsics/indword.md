---
title: __indword
ms.date: 09/02/2019
f1_keywords:
- __indword_cpp
- __indword
helpviewer_keywords:
- in instruction
- __indword intrinsic
ms.assetid: 1068d686-586e-4e36-b962-d1d7c3315260
ms.openlocfilehash: 790b65c8a565124df92b82b7ea17174788086a96
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70222112"
---
# <a name="__indword"></a>__indword

**Sezione specifica Microsoft**

Legge una doppia parola di dati dalla porta specificata utilizzando l' `in` istruzione.

## <a name="syntax"></a>Sintassi

```C
unsigned long __indword(
   unsigned short Port
);
```

### <a name="parameters"></a>Parametri

*Porta*\
in Porta da cui leggere.

## <a name="return-value"></a>Valore restituito

Parola letta dalla porta.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__indword`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
