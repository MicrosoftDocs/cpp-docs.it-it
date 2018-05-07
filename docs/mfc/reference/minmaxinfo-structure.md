---
title: Struttura MINMAXINFO | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- MINMAXINFO
dev_langs:
- C++
helpviewer_keywords:
- MINMAXINFO structure [MFC]
ms.assetid: be6fb578-f98a-4581-9ada-be9df308ed2f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 12161938f96e5044ae48f9eb5cf380fbc3840d3f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="minmaxinfo-structure"></a>Struttura MINMAXINFO
Il `MINMAXINFO` struttura contiene informazioni sulle dimensioni di una finestra ingrandita e posizione e le dimensioni minime e massime di rilevamento.  
  
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
 *ptReserved*  
 Riservato per uso interno.  
  
 *ptMaxSize*  
 Specifica la larghezza ingrandita (Point) e l'altezza ingrandita (Point) della finestra.  
  
 `ptMaxPosition`  
 Specifica la posizione del lato sinistro della finestra ingrandita (Point) e la posizione della parte superiore della finestra ingrandita (Point).  
  
 *ptMinTrackSize*  
 Specifica la larghezza minima di rilevamento (Point) e il valore minimo (Point) di altezza della finestra di rilevamento.  
  
 *ptMaxTrackSize*  
 Specifica il numero massimo di rilevamento larghezza (Point) e il numero massimo di rilevamento (Point) di altezza della finestra.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winuser.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo)

