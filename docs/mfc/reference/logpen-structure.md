---
title: Struttura LOGPEN | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- LOGPEN
dev_langs:
- C++
helpviewer_keywords:
- LOGPEN structure
ms.assetid: a89e8690-6b61-4af5-990c-7c82da24f3b0
caps.latest.revision: 12
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: f3868d2ac6a7b18cfe43f7da8865aed0a3ecf88d
ms.lasthandoff: 02/24/2017

---
# <a name="logpen-structure"></a>Struttura LOGPEN
Il `LOGPEN` struttura definisce il tipo, spessore e il colore di un oggetto pen, un oggetto utilizzato per disegnare linee e bordi. Il [CPen::CreatePenIndirect](../../mfc/reference/cpen-class.md#createpenindirect) funzione Usa il `LOGPEN` struttura.  
  
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
  
- **PS_SOLID** crea una penna a tinta unita.  
  
- **PS_DASH** crea una penna tratteggiata. (Valido solo quando la larghezza della penna è 1.)  
  
- **PS_DOT** crea un oggetto pen punteggiato. (Valido solo quando la larghezza della penna è 1.)  
  
- **PS_DASHDOT** crea un oggetto pen con trattini e punti alternati. (Valido solo quando la larghezza della penna è 1.)  
  
- **PS_DASHDOTDOT** crea un oggetto pen con trattini e punti doppio alternati. (Valido solo quando la larghezza della penna è 1.)  
  
- **PS_NULL** crea un oggetto pen null.  
  
- **PS_INSIDEFRAME** crea un oggetto pen che disegna una linea all'interno del fotogramma di forme chiuse prodotti da funzioni GDI output che specificano un rettangolo di delimitazione (ad esempio, il **ellisse**, **rettangolo**, `RoundRect`, `Pie`, e `Chord` funzioni membro). Quando questo stile viene utilizzato con GDI output funzioni che non si specifica un rettangolo di delimitazione (ad esempio, il `LineTo` funzione membro), l'area di disegno della penna non è limitata da un frame.  
  
     Se dispone di un oggetto pen il **PS_INSIDEFRAME** stile e il colore che non corrisponde a un colore nella tabella colori logica, la penna disegnata con un colore retinato. Il **PS_SOLID** stile penna non può essere utilizzato per creare un oggetto pen con un colore retinato. Il **PS_INSIDEFRAME** stile è identico a **PS_SOLID** se la larghezza della penna è minore o uguale a 1.  
  
     Quando il **PS_INSIDEFRAME** stile viene utilizzato con oggetti GDI prodotti dalle funzioni di diverso da **ellisse**, **rettangolo**, e `RoundRect`, la riga non può essere completamente all'interno del frame specificato.  
  
 *lopnWidth*  
 Specifica la larghezza della penna, in unità logiche. Se il **lopnWidth** membro è 0, la penna è 1 pixel su dispositivi raster indipendentemente dalla modalità di mapping corrente.  
  
 *lopnColor*  
 Specifica il colore della penna.  
  
## <a name="remarks"></a>Note  
 Il **y** valore di [punto](../../mfc/reference/point-structure1.md) struttura per il **lopnWidth** membro non viene utilizzato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CPen::CreatePenIndirect](../../mfc/reference/cpen-class.md#createpenindirect)


