---
description: 'Altre informazioni su: __readcr8'
title: __readcr8
ms.date: 09/02/2019
f1_keywords:
- __readcr8
helpviewer_keywords:
- __readcr8 intrinsic
ms.assetid: fce16953-87ff-4fbe-8081-7962b97ae46c
ms.openlocfilehash: 1961f00575956c8377131cd0871e59f79db5dc1d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341022"
---
# <a name="__readcr8"></a>__readcr8

**Specifico di Microsoft**

Legge il registro CR8 e ne restituisce il valore.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 __readcr8(void);
```

## <a name="return-value"></a>Valore restituito

Valore nel registro CR8.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__readcr8`|x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

La funzione intrinseca è disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
