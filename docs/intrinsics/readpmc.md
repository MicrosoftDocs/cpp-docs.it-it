---
title: __readpmc
ms.date: 09/02/2019
f1_keywords:
- __readpmc
helpviewer_keywords:
- Read Performance Monitoring Counters instruction
- __readpmc intrinsic
- rdpmc instruction
ms.assetid: 14ed45a6-28b6-4635-8437-a597c04b43d4
ms.openlocfilehash: af0f1874d991771423ddebfedd4624cd0b71760f
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221031"
---
# <a name="__readpmc"></a>__readpmc

**Sezione specifica Microsoft**

Genera l' `rdpmc` istruzione, che legge il contatore di monitoraggio delle prestazioni specificato dal *contatore*.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 __readpmc(
   unsigned long counter
);
```

### <a name="parameters"></a>Parametri

*Counter*\
in Contatore delle prestazioni da leggere.

## <a name="return-value"></a>Valore restituito

Valore del contatore delle prestazioni specificato.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readpmc`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La funzione intrinseca è disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
