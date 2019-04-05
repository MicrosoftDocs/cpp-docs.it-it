---
title: __wbinvd
ms.date: 11/04/2016
f1_keywords:
- __wbinvd
helpviewer_keywords:
- __wbinvd intrinsic
- wbinvd instruction
ms.assetid: 628d0981-39e5-49e1-bd43-706d123af121
ms.openlocfilehash: 99c7a452e063dea328e4aa1362aae8783929deb0
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59039267"
---
# <a name="wbinvd"></a>__wbinvd

**Sezione specifica Microsoft**

Genera il writeback e invalidare la Cache (`wbinvd`) (istruzione).

## <a name="syntax"></a>Sintassi

```
void __wbinvd(void);
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__wbinvd`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questa funzione di disponibile solo in modalità kernel con un livello di privilegio (CPL) pari a 0 e la routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)