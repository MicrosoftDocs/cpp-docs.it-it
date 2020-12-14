---
description: 'Altre informazioni su: __readpmc'
title: __readpmc
ms.date: 09/02/2019
f1_keywords:
- __readpmc
helpviewer_keywords:
- Read Performance Monitoring Counters instruction
- __readpmc intrinsic
- rdpmc instruction
ms.assetid: 14ed45a6-28b6-4635-8437-a597c04b43d4
ms.openlocfilehash: ceff8522d4895f69a47cf429e59d267c671e3a66
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294132"
---
# <a name="__readpmc"></a>__readpmc

**Specifico di Microsoft**

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

|Intrinsic|Architettura|
|---------------|------------------|
|`__readpmc`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

La funzione intrinseca è disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
