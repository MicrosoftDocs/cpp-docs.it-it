---
title: __readcr0
ms.date: 11/04/2016
f1_keywords:
- __readcr0
helpviewer_keywords:
- __readcr0 intrinsic
ms.assetid: 25bdb093-d83c-48d7-9c0f-224de8e2c61c
ms.openlocfilehash: 8ba6fac2e26011e53432b8252b793198bab3936a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50589956"
---
# <a name="readcr0"></a>__readcr0

**Sezione specifica Microsoft**

Legge il registro CR0 e ne restituisce il valore.

## <a name="syntax"></a>Sintassi

```
unsigned long __readcr0(void);  /* X86 */
unsigned __int64 __readcr0(void);  /* X64 */

```

## <a name="return-value"></a>Valore restituito

Valore nel registro CR0.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readcr0`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questo intrinseco è disponibile solo in modalità kernel e la routine è disponibile solo come intrinseco.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)