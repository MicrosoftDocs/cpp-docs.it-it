---
title: __writecr8
ms.date: 09/02/2019
f1_keywords:
- _writecr8
helpviewer_keywords:
- _writecr8 intrinsic
ms.assetid: 6f8bd632-dddb-4335-971e-1acee24aa2b9
ms.openlocfilehash: c8df13c15b5cd8a51b77d65ad930a1852809ee30
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219245"
---
# <a name="__writecr8"></a>__writecr8

**Sezione specifica Microsoft**

Scrive il valore `Data` nel registro Cr8.

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

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__writecr8`|X64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La `__writecr8` funzione intrinseca è disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
