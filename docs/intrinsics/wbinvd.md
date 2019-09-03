---
title: __wbinvd
ms.date: 09/02/2019
f1_keywords:
- __wbinvd
helpviewer_keywords:
- __wbinvd intrinsic
- wbinvd instruction
ms.assetid: 628d0981-39e5-49e1-bd43-706d123af121
ms.openlocfilehash: fe888ef578f0c2e077911537d401890b63372a0b
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219380"
---
# <a name="__wbinvd"></a>__wbinvd

**Sezione specifica Microsoft**

Genera l'istruzione Write back e Invalidate cache`wbinvd`().

## <a name="syntax"></a>Sintassi

```C
void __wbinvd(void);
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__wbinvd`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa funzione è disponibile solo in modalità kernel con un livello di privilegio (CPL) pari a 0 e la routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
