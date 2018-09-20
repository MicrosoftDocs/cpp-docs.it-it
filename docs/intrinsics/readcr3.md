---
title: __readcr3 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __readcr3
dev_langs:
- C++
helpviewer_keywords:
- __readcr3 intrinsic
ms.assetid: e24392c3-cad7-4788-8f31-94bf2e9e0053
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: aa5e068d7e99e4d0dda1d68d9bfa68890379c728
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46448181"
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