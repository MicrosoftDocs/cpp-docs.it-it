---
title: __writecr8
ms.date: 11/04/2016
f1_keywords:
- _writecr8
helpviewer_keywords:
- _writecr8 intrinsic
ms.assetid: 6f8bd632-dddb-4335-971e-1acee24aa2b9
ms.openlocfilehash: d401673e7ee6cd18b8bc05140efc3b819e48a30f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50471995"
---
# <a name="writecr8"></a>__writecr8

**Sezione specifica Microsoft**

Scrive il valore `Data` al registro CR8.

## <a name="syntax"></a>Sintassi

```
void writecr8( 
   unsigned __int64 Data 
);
```

#### <a name="parameters"></a>Parametri

*Dati*<br/>
[in] Valore da scrivere nel registro CR8.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__writecr8`|X64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questo intrinseco è disponibile solo in modalità kernel e la routine è disponibile solo come intrinseco.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)