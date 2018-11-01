---
title: Struttura POINT
ms.date: 10/12/2018
f1_keywords:
- POINT
- LPPOINT
helpviewer_keywords:
- LPPOINT structure [MFC]
- POINT structure [MFC]
ms.assetid: 965736d8-4e53-41b6-9b8b-6961992dd21f
ms.openlocfilehash: c53f250b714c66e74a12432b879cbc4bcc1fd88d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50646901"
---
# <a name="point-structure"></a>Struttura POINT

Il `POINT` struttura definisce x*-* e y di un punto.

## <a name="syntax"></a>Sintassi

```
typedef struct tagPOINT {
    LONG x;
    LONG y;
} POINT;
```

#### <a name="parameters"></a>Parametri

*x*<br/>
Specifica la coordinata x di un punto.

*y*<br/>
Specifica la coordinata y di un punto.

## <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#37](../../mfc/codesnippet/cpp/point-structure1_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** WINDEF. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CPoint](../../atl-mfc-shared/reference/cpoint-class.md)
