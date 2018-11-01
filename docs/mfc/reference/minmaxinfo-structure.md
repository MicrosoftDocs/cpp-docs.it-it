---
title: Struttura MINMAXINFO
ms.date: 11/04/2016
f1_keywords:
- MINMAXINFO
helpviewer_keywords:
- MINMAXINFO structure [MFC]
ms.assetid: be6fb578-f98a-4581-9ada-be9df308ed2f
ms.openlocfilehash: 11f55b1756623626769e21c006543b6993607b08
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50517845"
---
# <a name="minmaxinfo-structure"></a>Struttura MINMAXINFO

Il `MINMAXINFO` struttura contiene informazioni sulle dimensioni di una finestra ingrandita e posizione e dimensioni minime e massime di rilevamento.

## <a name="syntax"></a>Sintassi

```
typedef struct tagMINMAXINFO {
    POINT ptReserved;
    POINT ptMaxSize;
    POINT ptMaxPosition;
    POINT ptMinTrackSize;
    POINT ptMaxTrackSize;
} MINMAXINFO;
```

#### <a name="parameters"></a>Parametri

*ptReserved*<br/>
Riservato per uso interno.

*ptMaxSize*<br/>
Specifica la larghezza ingrandita (Point) e l'altezza ingrandita (Point) della finestra.

*ptMaxPosition*<br/>
Specifica la posizione del lato sinistro della finestra ingrandita (Point) e la posizione della parte superiore della finestra ingrandita (Point).

*ptMinTrackSize*<br/>
Specifica la larghezza minima di rilevamento (Point) e il valore minimo altezza (Point) della finestra di rilevamento.

*ptMaxTrackSize*<br/>
Specifica il numero massimo di rilevamento larghezza (Point) e la massima altezza (Point) della finestra di rilevamento.

## <a name="requirements"></a>Requisiti

**Intestazione:** winuser.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CWnd::OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo)

