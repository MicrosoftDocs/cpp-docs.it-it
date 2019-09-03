---
title: __readcr0
ms.date: 09/02/2019
f1_keywords:
- __readcr0
helpviewer_keywords:
- __readcr0 intrinsic
ms.assetid: 25bdb093-d83c-48d7-9c0f-224de8e2c61c
ms.openlocfilehash: 8f3abc7177fa2e648c02eab498d04bcada96bb06
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221274"
---
# <a name="__readcr0"></a>__readcr0

**Sezione specifica Microsoft**

Legge il registro CR0 e ne restituisce il valore.

## <a name="syntax"></a>Sintassi

```C
unsigned long __readcr0(void);  /* X86 */
unsigned __int64 __readcr0(void);  /* X64 */
```

## <a name="return-value"></a>Valore restituito

Valore nel registro CR0.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readcr0`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La funzione intrinseca è disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
