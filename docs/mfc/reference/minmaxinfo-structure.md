---
title: Struttura MINMAXINFO | Microsoft Docs
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
ms.openlocfilehash: cf9a6e6a1397b9361df5372af09be8e61d997e62
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37337814"
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
 *ptReserved*  
 Riservato per uso interno.  
  
 *ptMaxSize*  
 Specifica la larghezza ingrandita (Point) e l'altezza ingrandita (Point) della finestra.  
  
 *ptMaxPosition*  
 Specifica la posizione del lato sinistro della finestra ingrandita (Point) e la posizione della parte superiore della finestra ingrandita (Point).  
  
 *ptMinTrackSize*  
 Specifica la larghezza minima di rilevamento (Point) e il valore minimo altezza (Point) della finestra di rilevamento.  
  
 *ptMaxTrackSize*  
 Specifica il numero massimo di rilevamento larghezza (Point) e la massima altezza (Point) della finestra di rilevamento.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winuser.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo)

