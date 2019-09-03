---
title: __writecr4
ms.date: 09/02/2019
f1_keywords:
- _writecr4
helpviewer_keywords:
- _writecr4 intrinsic
ms.assetid: ab7651d7-b86b-4be7-a0a0-7263099c70fc
ms.openlocfilehash: 1afdadcdfdbf1060c87e3865dd5597b0b9a2ea6b
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219263"
---
# <a name="__writecr4"></a>__writecr4

**Sezione specifica Microsoft**

Scrive il valore `Data` nel registro CR4.

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

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__writecr4`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questo intrinseco è disponibile solo in modalità kernel e la routine è disponibile solo come intrinseco.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
