---
title: __writecr3
ms.date: 11/04/2016
f1_keywords:
- _writecr3
helpviewer_keywords:
- _writecr3 intrinsic
ms.assetid: 959d49fa-69d5-47cf-88d2-7688367fe38f
ms.openlocfilehash: 88467e4fb39abc9526e47a73f998d630470111a9
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59037367"
---
# <a name="writecr3"></a>__writecr3

**Sezione specifica Microsoft**

Scrive il valore `Data` alla CR3 registrate.

## <a name="syntax"></a>Sintassi

```
void writecr3(
   unsigned __int64 Data
);
```

#### <a name="parameters"></a>Parametri

*Dati*<br/>
[in] Valore da scrivere nel registro CR3.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__writecr3`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questo intrinseco è disponibile solo in modalità kernel e la routine è disponibile solo come intrinseco.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)