---
description: 'Altre informazioni su: __readcr4'
title: __readcr4
ms.date: 09/02/2019
f1_keywords:
- __readcr4
helpviewer_keywords:
- __readcr4 intrinsic
ms.assetid: b841a27b-fe0d-4ee9-b76b-f91d3eb061fa
ms.openlocfilehash: 3e1d3999f488d4b7c155fd2c475a2070f29f6cda
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341035"
---
# <a name="__readcr4"></a>__readcr4

**Specifico di Microsoft**

Legge il registro CR4 e ne restituisce il valore.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 __readcr4(void);
```

## <a name="return-value"></a>Valore restituito

Valore nel registro CR4.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__readcr4`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

La funzione intrinseca è disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
