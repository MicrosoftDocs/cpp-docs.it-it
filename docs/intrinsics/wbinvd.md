---
title: __wbinvd
ms.date: 11/04/2016
f1_keywords:
- __wbinvd
helpviewer_keywords:
- __wbinvd intrinsic
- wbinvd instruction
ms.assetid: 628d0981-39e5-49e1-bd43-706d123af121
ms.openlocfilehash: 0f775ba94c2dee1c2568e66b09fa1ffb31f512bb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50482537"
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