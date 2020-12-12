---
description: 'Altre informazioni su: __writecr8'
title: __writecr8
ms.date: 09/02/2019
f1_keywords:
- _writecr8
helpviewer_keywords:
- _writecr8 intrinsic
ms.assetid: 6f8bd632-dddb-4335-971e-1acee24aa2b9
ms.openlocfilehash: b9c642d92cd5d5cfb861dbff3d159b5c98a1aa5d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331893"
---
# <a name="__writecr8"></a>__writecr8

**Specifico di Microsoft**

Scrive il valore nel `Data` Registro Cr8.

## <a name="syntax"></a>Sintassi

```C
void writecr8(
   unsigned __int64 Data
);
```

### <a name="parameters"></a>Parametri

*Dati*\
in Valore da scrivere nel registro CR8.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__writecr8`|x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

La `__writecr8` funzione intrinseca è disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
