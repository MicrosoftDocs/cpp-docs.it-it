---
title: __writecr0 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- _writecr0
dev_langs:
- C++
helpviewer_keywords:
- _writecr0 intrinsic
ms.assetid: a143d08d-0333-4e1b-91b4-4acb2ae91b5a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5542dc1c4aeff873f14d8ab9498025c8852dfbd9
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46409311"
---
# <a name="writecr0"></a>__writecr0

**Sezione specifica Microsoft**

Scrive il valore `Data` per il registro CR0.

## <a name="syntax"></a>Sintassi

```
void writecr0( 
   unsigned __int64 Data 
);
```

#### <a name="parameters"></a>Parametri

*Dati*<br/>
[in] Valore da scrivere nel registro CR0.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__writecr0`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questo intrinseco è disponibile solo in modalità kernel e la routine è disponibile solo come intrinseco.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)