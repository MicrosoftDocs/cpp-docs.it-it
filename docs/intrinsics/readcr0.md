---
description: 'Altre informazioni su: __readcr0'
title: __readcr0
ms.date: 09/02/2019
f1_keywords:
- __readcr0
helpviewer_keywords:
- __readcr0 intrinsic
ms.assetid: 25bdb093-d83c-48d7-9c0f-224de8e2c61c
ms.openlocfilehash: b8a7b98042e5e5dbff5236c27b97d8378d72ed6f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97257407"
---
# <a name="__readcr0"></a>__readcr0

**Specifico di Microsoft**

Legge il registro CR0 e ne restituisce il valore.

## <a name="syntax"></a>Sintassi

```C
unsigned long __readcr0(void);  /* X86 */
unsigned __int64 __readcr0(void);  /* X64 */
```

## <a name="return-value"></a>Valore restituito

Valore nel registro CR0.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__readcr0`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

La funzione intrinseca è disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
