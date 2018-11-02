---
title: Struttura FILETIME
ms.date: 11/04/2016
f1_keywords:
- FILETIME
helpviewer_keywords:
- FILETIME structure [MFC]
ms.assetid: e09557e2-b6d7-4dd5-a5b9-6328bca88595
ms.openlocfilehash: f70792b83637018e707b6ee48d1b169f28d46d71
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50514933"
---
# <a name="filetime-structure"></a>Struttura FILETIME

Il `FILETIME` struttura è un valore a 64 bit che rappresenta il numero di intervalli di 100 nanosecondi dal 1 ° gennaio 1601.

## <a name="syntax"></a>Sintassi

```
typedef struct _FILETIME {
    DWORD dwLowDateTime;   /* low 32 bits */
    DWORD dwHighDateTime;  /* high 32 bits */
} FILETIME, *PFILETIME, *LPFILETIME;
```

#### <a name="parameters"></a>Parametri

*relativo membro dwLowDateTime*<br/>
Specifica la bassa 32 bit dell'ora del file.

*FILETIME*<br/>
Specifica il valore alto 32 bit dell'ora del file.

## <a name="requirements"></a>Requisiti

**Intestazione:** WINDEF. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Costruttori CTime::](../../atl-mfc-shared/reference/ctime-class.md#ctime)

