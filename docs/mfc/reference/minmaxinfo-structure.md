---
title: Struttura MINMAXINFO | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: MINMAXINFO
dev_langs: C++
helpviewer_keywords: MINMAXINFO structure [MFC]
ms.assetid: be6fb578-f98a-4581-9ada-be9df308ed2f
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 997e00d8d4fd70281f2dbfeeecbc9d5823c5050a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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

