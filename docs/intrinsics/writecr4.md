---
description: 'Altre informazioni su: __writecr4'
title: __writecr4
ms.date: 09/02/2019
f1_keywords:
- _writecr4
helpviewer_keywords:
- _writecr4 intrinsic
ms.assetid: ab7651d7-b86b-4be7-a0a0-7263099c70fc
ms.openlocfilehash: 711a6dff42f3805886865d09b4638479173bc64e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97313086"
---
# <a name="__writecr4"></a>__writecr4

**Specifico di Microsoft**

Scrive il valore nel `Data` Registro CR4.

## <a name="syntax"></a>Sintassi

```C
void writecr4(
   unsigned __int64 Data
);
```

### <a name="parameters"></a>Parametri

*Dati*\
in Valore da scrivere nel registro CR4.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__writecr4`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Questo intrinseco è disponibile solo in modalità kernel e la routine è disponibile solo come intrinseco.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
