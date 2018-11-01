---
title: Struttura RECT
ms.date: 11/04/2016
f1_keywords:
- LPRECT
- RECT
helpviewer_keywords:
- RECT structure [MFC]
- LPRECT structure [MFC]
ms.assetid: 1b3160de-64e9-40d1-89eb-af3e0fd6acf0
ms.openlocfilehash: 1cb997fc0f1ec89eabf5e4d2c2c5ccb15e3bafec
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50549012"
---
# <a name="rect-structure"></a>Struttura RECT

La struttura `RECT` definisce le coordinate degli angoli in alto a sinistra e in basso a destra di un rettangolo.

## <a name="syntax"></a>Sintassi

```
typedef struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
} RECT;
```

## <a name="members"></a>Membri

`left`<br/>
Specifica la coordinata x dell'angolo superiore sinistro di un rettangolo.

`top`<br/>
Specifica la coordinata y dell'angolo superiore sinistro di un rettangolo.

`right`<br/>
Specifica la coordinata x dell'angolo inferiore destro di un rettangolo.

`bottom`<br/>
Specifica la coordinata y dell'angolo inferiore destro di un rettangolo.

## <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#38](../../mfc/codesnippet/cpp/rect-structure1_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** WINDEF. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CRect](../../atl-mfc-shared/reference/crect-class.md)
