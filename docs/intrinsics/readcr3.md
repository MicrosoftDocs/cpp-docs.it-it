---
title: __readcr3
ms.date: 11/04/2016
f1_keywords:
- __readcr3
helpviewer_keywords:
- __readcr3 intrinsic
ms.assetid: e24392c3-cad7-4788-8f31-94bf2e9e0053
ms.openlocfilehash: 8b5839d233154b6ddb69d2bbe0b13497c3b66305
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59031115"
---
# <a name="readcr3"></a>__readcr3

**Sezione specifica Microsoft**

Legge il registro CR3 e restituisce il relativo valore.

## <a name="syntax"></a>Sintassi

```
unsigned __int64 __readcr3(void);
```

## <a name="return-value"></a>Valore restituito

Il valore del registro CR3.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readcr3`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questo intrinseco è disponibile solo in modalità kernel e la routine è disponibile solo come intrinseco.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)