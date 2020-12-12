---
description: 'Altre informazioni su: __inword'
title: __inword
ms.date: 09/02/2019
f1_keywords:
- __inword_cpp
- __inword
helpviewer_keywords:
- in instruction
- __inword intrinsic
ms.assetid: 5c617edd-6709-40a1-aad2-40d5e39283c6
ms.openlocfilehash: 8e2d698437cdb27a472872cfe24d7d0ab0a3c768
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167877"
---
# <a name="__inword"></a>__inword

**Specifico di Microsoft**

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

|Intrinsic|Architettura|
|---------------|------------------|
|`__inword`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Questa routine è disponibile solo come funzione intrinseca.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
