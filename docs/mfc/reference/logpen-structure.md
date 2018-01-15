---
title: Struttura LOGPEN | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: LOGPEN
dev_langs: C++
helpviewer_keywords: LOGPEN structure [MFC]
ms.assetid: a89e8690-6b61-4af5-990c-7c82da24f3b0
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b7bfa598a59f62c11dbda13356559816b5bd47ad
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
  
- **PS_SOLID** crea una penna a tinta unita.  
  
- **PS_DASH** crea una penna tratteggiata. (Valido solo quando la larghezza della penna è 1.)  
  
- **PS_DOT** crea una penna tratteggiata. (Valido solo quando la larghezza della penna è 1.)  
  
- **PS_DASHDOT** crea un oggetto pen con alternati trattini e punti. (Valido solo quando la larghezza della penna è 1.)  
  
- **PS_DASHDOTDOT** crea un oggetto pen con trattini e punti doppio alternati. (Valido solo quando la larghezza della penna è 1.)  
  
- **PS_NULL** crea una penna null.  
  
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

