---
title: __readcr2
ms.date: 09/02/2019
f1_keywords:
- __readcr2
helpviewer_keywords:
- __readcr2 intrinsic
ms.assetid: d02c97d8-1953-46e7-a79e-a781e2c5bf27
ms.openlocfilehash: 482f4548a692d6aa3b65fbc42caabda29bb393c1
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217102"
---
# <a name="__readcr2"></a>__readcr2

**Sezione specifica Microsoft**

Legge il registro CR2 e ne restituisce il valore.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 __readcr2(void);
```

## <a name="return-value"></a>Valore restituito

Valore nel registro CR2.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readcr2`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La funzione intrinseca è disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
