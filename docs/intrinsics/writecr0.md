---
title: __writecr0
ms.date: 11/04/2016
f1_keywords:
- _writecr0
helpviewer_keywords:
- _writecr0 intrinsic
ms.assetid: a143d08d-0333-4e1b-91b4-4acb2ae91b5a
ms.openlocfilehash: 24d9ffe0e07269fedf19f90a7c66a07e3c5e7d3e
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59039381"
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