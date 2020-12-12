---
description: 'Altre informazioni su: __writecr3'
title: __writecr3
ms.date: 09/02/2019
f1_keywords:
- _writecr3
helpviewer_keywords:
- _writecr3 intrinsic
ms.assetid: 959d49fa-69d5-47cf-88d2-7688367fe38f
ms.openlocfilehash: fa4555b2fe4a67dcb3669f8ae20ea0e2d76c8984
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97313112"
---
# <a name="__writecr3"></a>__writecr3

**Specifico di Microsoft**

Scrive il valore nel `Data` Registro CR3.

## <a name="syntax"></a>Sintassi

```C
void writecr3(
   unsigned __int64 Data
);
```

### <a name="parameters"></a>Parametri

*Dati*\
in Valore da scrivere nel registro CR3.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__writecr3`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Questo intrinseco è disponibile solo in modalità kernel e la routine è disponibile solo come intrinseco.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
