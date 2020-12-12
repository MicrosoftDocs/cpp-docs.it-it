---
description: 'Altre informazioni su: __writecr0'
title: __writecr0
ms.date: 09/02/2019
f1_keywords:
- _writecr0
helpviewer_keywords:
- _writecr0 intrinsic
ms.assetid: a143d08d-0333-4e1b-91b4-4acb2ae91b5a
ms.openlocfilehash: 9a4cf4f30b5663b875ca27416b698eb8477938d4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97313099"
---
# <a name="__writecr0"></a>__writecr0

**Specifico di Microsoft**

Scrive il valore nel `Data` registro registro CR0.

## <a name="syntax"></a>Sintassi

```C
void writecr0(
   unsigned __int64 Data
);
```

### <a name="parameters"></a>Parametri

*Dati*\
in Valore da scrivere nel registro registro CR0.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__writecr0`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Questo intrinseco è disponibile solo in modalità kernel e la routine è disponibile solo come intrinseco.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
