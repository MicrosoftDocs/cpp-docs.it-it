---
title: _CRT_DISABLE_PERFCRIT_LOCKS
ms.date: 11/04/2016
f1_keywords:
- _CRT_DISABLE_PERFCRIT_LOCKS
- CRT_DISABLE_PERFCRIT_LOCKS
helpviewer_keywords:
- CRT_DISABLE_PERFCRIT_LOCKS constant
- _CRT_DISABLE_PERFCRIT_LOCKS constant
ms.assetid: 36cc2d86-cdb1-4b2b-a03c-c0d3818e7c6f
ms.openlocfilehash: 475cc57b5b47f5abf8c268db3acf9e727ce6a743
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50593462"
---
# <a name="crtdisableperfcritlocks"></a>_CRT_DISABLE_PERFCRIT_LOCKS

Disabilita il blocco con particolari requisiti di prestazioni nelle operazioni di I/O.

## <a name="syntax"></a>Sintassi

```
#define _CRT_DISABLE_PERFCRIT_LOCKS
```

## <a name="remarks"></a>Note

La definizione di questo simbolo può migliorare le prestazioni dei programmi con vincoli di I/O a thread singolo forzando tutte le operazioni di I/O ad assumere un modello di I/O a thread singolo. Per altre informazioni, vedere [Prestazioni librerie multithread](../c-runtime-library/multithreaded-libraries-performance.md).

## <a name="see-also"></a>Vedere anche

[Costanti globali](../c-runtime-library/global-constants.md)