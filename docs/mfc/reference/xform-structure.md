---
title: Struttura XFORM
ms.date: 11/04/2016
f1_keywords:
- XFORM
helpviewer_keywords:
- XFORM structure [MFC]
ms.assetid: 4fb4ef5b-05d2-4884-82d1-1cb8f7be6302
ms.openlocfilehash: 621a01accf3c323f8098da68667f06f48b9d169b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50457253"
---
# <a name="xform-structure"></a>Struttura XFORM

Il `XFORM` struttura ha il formato seguente:

## <a name="syntax"></a>Sintassi

```
typedef struct  tagXFORM {  /* xfrm */
    FLOAT eM11;
    FLOAT eM12;
    FLOAT eM21;
    FLOAT eM22;
    FLOAT eDx;
    FLOAT eDy;
} XFORM;
```

## <a name="remarks"></a>Note

Il `XFORM` struttura consente di specificare un spazio globale alla trasformazione spazio nella pagina. Il `eDx` e `eDy` membri specificano i componenti di traduzione orizzontali e verticali, rispettivamente. Nella tabella seguente viene illustrato come vengono utilizzati gli altri membri, a seconda dell'operazione:

|Operazione|eM11|eM12|eM21|eM22|
|---------------|----------|----------|----------|----------|
|`Rotation`|Coseno dell'angolo di rotazione|Seno dell'angolo di rotazione|Negativo seno dell'angolo di rotazione|Coseno dell'angolo di rotazione|
|`Scaling`|Componente di scalabilità orizzontale|Nothing|Nothing|Componente verticale di ridimensionamento|
|`Shear`|Nothing|Costante proporzionalità orizzontale|Costante proporzionalità verticale|Nothing|
|`Reflection`|Componente orizzontale di reflection|Nothing|Nothing|Componente verticale di reflection|

## <a name="requirements"></a>Requisiti

**Intestazione:** WinGDI. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CRgn::CreateFromData](../../mfc/reference/crgn-class.md#createfromdata)

