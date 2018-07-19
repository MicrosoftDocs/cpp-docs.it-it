---
title: Struttura LOGPEN | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- LOGPEN
dev_langs:
- C++
helpviewer_keywords:
- LOGPEN structure [MFC]
ms.assetid: a89e8690-6b61-4af5-990c-7c82da24f3b0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c677f86a44d24e0d0d2742d47ee1534532001528
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37338532"
---
# <a name="logpen-structure"></a>Struttura LOGPEN
Il `LOGPEN` struttura definisce lo stile, spessore e il colore di un oggetto pen, un oggetto drawing utilizzato per disegnare linee e bordi. Il [CPen::CreatePenIndirect](../../mfc/reference/cpen-class.md#createpenindirect) funzione Usa il `LOGPEN` struttura.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct tagLOGPEN {  /* lgpn */  
    UINT lopnStyle;  
    POINT lopnWidth;  
    COLORREF lopnColor;  
} LOGPEN;  
```  
  
#### <a name="parameters"></a>Parametri  
 *lopnStyle*  
 Specifica il tipo di penna. Questo membro può essere uno dei valori seguenti:  
  
- PS_SOLID crea una penna a tinta unita.  
  
- PS_DASH crea un oggetto pen tratteggiato. (Valido solo quando la larghezza della penna è 1.)  
  
- PS_DOT crea un oggetto pen punteggiato. (Valido solo quando la larghezza della penna è 1.)  
  
- PS_DASHDOT crea un oggetto pen con alternanza di trattini e punti. (Valido solo quando la larghezza della penna è 1.)  
  
- PS_DASHDOTDOT crea una penna con alternanza di trattini e punti double. (Valido solo quando la larghezza della penna è 1.)  
  
- PS_NULL crea un oggetto pen null.  
  
- PS_INSIDEFRAME crea una penna che disegna una linea all'interno del fotogramma di forme chiuse prodotta GDI output funzioni che specificano un rettangolo di delimitazione (ad esempio, il `Ellipse`, `Rectangle`, `RoundRect`, `Pie`, e `Chord` membro funzioni). Quando questo stile viene usato con GDI output funzioni che non si specifica un rettangolo di delimitazione (ad esempio, il `LineTo` funzione membro), l'area di disegno della penna non è limitato da un frame.  
  
     Se un oggetto pen dispone di un colore che corrisponde a un colore nella tabella dei colori logico e lo stile PS_INSIDEFRAME, penna viene disegnata con un colore retinato. Lo stile di penna PS_SOLID non può essere utilizzato per creare un oggetto pen con un colore retinato. Lo stile PS_INSIDEFRAME è identico a PS_SOLID se la larghezza della penna è minore o uguale a 1.  
  
     Quando lo stile PS_INSIDEFRAME viene usato con oggetti GDI prodotti da funzioni di diverso da `Ellipse`, `Rectangle`, e `RoundRect`, la riga potrebbe non essere completamente all'interno del frame specificato.  
  
 *lopnWidth*  
 Specifica lo spessore della penna, in unità logiche. Se il `lopnWidth` membro è 0, la penna è larghezza su dispositivi raster indipendentemente dalla modalità di mapping corrente pari a 1 pixel.  
  
 *lopnColor*  
 Specifica il colore della penna.  
  
## <a name="remarks"></a>Note  
 Il `y` valore nel [punto](../../mfc/reference/point-structure1.md) struttura per il `lopnWidth` membro non viene utilizzato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CPen::CreatePenIndirect](../../mfc/reference/cpen-class.md#createpenindirect)

