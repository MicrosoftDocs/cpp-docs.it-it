---
title: __readcr4
ms.date: 09/02/2019
f1_keywords:
- __readcr4
helpviewer_keywords:
- __readcr4 intrinsic
ms.assetid: b841a27b-fe0d-4ee9-b76b-f91d3eb061fa
ms.openlocfilehash: 4d43b5204d412de40284f89cfd4d74f1c1f9d86d
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216726"
---
# <a name="__readcr4"></a>__readcr4

**Sezione specifica Microsoft**

Legge il registro CR4 e ne restituisce il valore.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 __readcr4(void);
```

## <a name="return-value"></a>Valore restituito

Valore nel registro CR4.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readcr4`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La funzione intrinseca è disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
