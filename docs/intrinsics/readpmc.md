---
title: __readpmc
ms.date: 11/04/2016
f1_keywords:
- __readpmc
helpviewer_keywords:
- Read Performance Monitoring Counters instruction
- __readpmc intrinsic
- rdpmc instruction
ms.assetid: 14ed45a6-28b6-4635-8437-a597c04b43d4
ms.openlocfilehash: f0a7d11ca7aed4aee1d78b8e9e7133f3d70a984f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50582091"
---
# <a name="readpmc"></a>__readpmc

**Sezione specifica Microsoft**

Genera il `rdpmc` istruzione, che legge il contatore specificato da di monitoraggio delle prestazioni `counter`.

## <a name="syntax"></a>Sintassi

```
unsigned __int64 __readpmc( 
   unsigned long counter 
);
```

#### <a name="parameters"></a>Parametri

*counter*<br/>
[in] Il contatore delle prestazioni da leggere.

## <a name="return-value"></a>Valore restituito

Il valore del contatore delle prestazioni specificato.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readpmc`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questa funzione intrinseca è disponibile in solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)