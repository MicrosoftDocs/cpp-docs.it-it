---
title: Struttura SYSTEMTIME
ms.date: 11/04/2016
f1_keywords:
- SYSTEMTIME
helpviewer_keywords:
- SYSTEMTIME structure [MFC]
ms.assetid: 9aaef4d6-de79-4fa1-8158-86b245ef5bff
ms.openlocfilehash: b46482a9f4eb0165b72d74cb7d69e96e2a15e953
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50559049"
---
# <a name="systemtime-structure"></a>Struttura SYSTEMTIME

Il `SYSTEMTIME` struttura rappresenta una data e ora utilizzando singoli membri per il mese, giorno, anno, giorno della settimana, ora, minuto, secondo e millisecondo.

## <a name="syntax"></a>Sintassi

```
typedef struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
} SYSTEMTIME;
```

#### <a name="parameters"></a>Parametri

*wYear*<br/>
L'anno corrente.

*wMonth*<br/>
Il mese corrente; Gennaio è 1.

*Desiderato*<br/>
Il giorno corrente della settimana; Domenica è 0, lunedì è 1 e così via.

*wDay*<br/>
Il giorno corrente del mese.

*wHour*<br/>
L'ora corrente.

*wMinute*<br/>
Il minuto corrente.

*wSecond*<br/>
Il secondo corrente.

*wMilliseconds*<br/>
Il millisecondo corrente.

## <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#39](../../mfc/codesnippet/cpp/systemtime-structure1_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** winbase. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Costruttori CTime::](../../atl-mfc-shared/reference/ctime-class.md#ctime)

