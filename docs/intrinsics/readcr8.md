---
title: __readcr8
ms.date: 09/02/2019
f1_keywords:
- __readcr8
helpviewer_keywords:
- __readcr8 intrinsic
ms.assetid: fce16953-87ff-4fbe-8081-7962b97ae46c
ms.openlocfilehash: 525775fde4cb96cecfcabef878780d5a2aa6743a
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221241"
---
# <a name="__readcr8"></a>__readcr8

**Sezione specifica Microsoft**

Legge il registro CR8 e ne restituisce il valore.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 __readcr8(void);
```

## <a name="return-value"></a>Valore restituito

Valore nel registro CR8.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readcr8`|X64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La funzione intrinseca è disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
