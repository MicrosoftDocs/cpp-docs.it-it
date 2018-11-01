---
title: Struttura RGNDATA
ms.date: 11/04/2016
f1_keywords:
- RGNDATA
helpviewer_keywords:
- RGNDATA structure [MFC]
ms.assetid: 72257c00-f440-4dca-979e-9b6b5b2d5f2f
ms.openlocfilehash: d6ee25b490aa5c7055b4e8ccf63939fbdd8dd4ac
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50638139"
---
# <a name="rgndata-structure"></a>Struttura RGNDATA

Il `RGNDATA` struttura contiene un'intestazione e una matrice di rettangoli che costituiscono un'area. I rettangoli, ordinate dall'alto verso il basso a sinistra a destra, non si sovrappongano.

## <a name="syntax"></a>Sintassi

```
typedef struct _RGNDATA { /* rgnd */
    RGNDATAHEADER rdh;
    char Buffer[1];
} RGNDATA;
```

#### <a name="parameters"></a>Parametri

*rdh*<br/>
Specifica un [RGNDATAHEADER](/windows/desktop/api/wingdi/ns-wingdi-_rgndataheader) struttura. (Per altre informazioni su questa struttura, vedere il SDK di Windows). I membri di questa struttura di specificano il tipo di area (se è rettangolare o trapezoidale), il numero di rettangoli che formano l'area, le dimensioni del buffer che contiene le strutture di rettangolo, e così via.

*Buffer*<br/>
Specifica un buffer di dimensione arbitraria che contiene il [RECT](../../mfc/reference/rect-structure1.md) le strutture che compongono l'area.

## <a name="requirements"></a>Requisiti

**Intestazione:** WinGDI. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CRgn::CreateFromData](../../mfc/reference/crgn-class.md#createfromdata)<br/>
[CRgn::GetRegionData](../../mfc/reference/crgn-class.md#getregiondata)

