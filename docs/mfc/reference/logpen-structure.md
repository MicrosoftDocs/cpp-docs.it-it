---
title: Struttura LOGPEN | Documenti Microsoft
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
ms.openlocfilehash: 4c0e07ce3a38eaca54e860ebe821924c0f564c69
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33374150"
---
# <a name="logpen-structure"></a>Struttura LOGPEN
Il `LOGPEN` struttura definisce stile, la larghezza e il colore di un oggetto pen, un oggetto utilizzato per disegnare linee e i bordi. Il [CPen::CreatePenIndirect](../../mfc/reference/cpen-class.md#createpenindirect) funzione Usa il `LOGPEN` struttura.  
  
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
 Specifica il tipo della penna. Questo membro può essere uno dei valori seguenti:  
  
- **PS_SOLID** crea un oggetto pen a tinta unita.  
  
- **PS_DASH** crea una penna tratteggiata. (Valido solo quando la larghezza della penna è 1.)  
  
- **PS_DOT** crea un oggetto pen punteggiato. (Valido solo quando la larghezza della penna è 1.)  
  
- **PS_DASHDOT** crea un oggetto pen con alternati trattini e punti. (Valido solo quando la larghezza della penna è 1.)  
  
- **PS_DASHDOTDOT** crea un oggetto pen con trattini e punti doppi alternati. (Valido solo quando la larghezza della penna è 1.)  
  
- **PS_NULL** crea un oggetto pen null.  
  
- **PS_INSIDEFRAME** crea un oggetto pen che disegna una linea all'interno della cornice di forme chiuse prodotta dalle funzioni di output GDI che specificano un rettangolo di delimitazione (ad esempio, il **ellisse**, **rettangolo**, `RoundRect`, `Pie`, e `Chord` funzioni membro). Quando questo stile viene utilizzato con GDI output funzioni che non si specifica un rettangolo di delimitazione (ad esempio, il `LineTo` funzione membro), l'area di disegno della penna non è limitato da un frame.  
  
     Se dispone di un oggetto pen il **PS_INSIDEFRAME** stile e il colore che non corrisponde a un colore nella tabella logica colore, la penna è tracciata con un colore retinato. Il **PS_SOLID** penna stile non può essere utilizzato per creare un oggetto pen con un colore retinato. Il **PS_INSIDEFRAME** stile è identico a **PS_SOLID** se la larghezza della penna è minore o uguale a 1.  
  
     Quando il **PS_INSIDEFRAME** stile viene utilizzato con gli oggetti GDI prodotti da funzioni di diverso da **ellisse**, **rettangolo**, e `RoundRect`, la riga potrebbe non essere completamente all'interno del frame specificato.  
  
 *lopnWidth*  
 Specifica la larghezza della penna, in unità logiche. Se il **lopnWidth** membro è 0, la penna è 1 pixel su dispositivi raster indipendentemente dalla modalità di mapping corrente.  
  
 *lopnColor*  
 Specifica il colore della penna.  
  
## <a name="remarks"></a>Note  
 Il **y** valore il [punto](../../mfc/reference/point-structure1.md) struttura per il **lopnWidth** membro non viene utilizzato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CPen::CreatePenIndirect](../../mfc/reference/cpen-class.md#createpenindirect)

