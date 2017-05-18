---
title: Struttura MINMAXINFO | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- MINMAXINFO
dev_langs:
- C++
helpviewer_keywords:
- MINMAXINFO structure
ms.assetid: be6fb578-f98a-4581-9ada-be9df308ed2f
caps.latest.revision: 10
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 772416bdac3c72f55644fa31aef23ba76a14e606
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
 Specifica la larghezza minima di rilevamento (Point) e il valore minimo di altezza (Point) della finestra di rilevamento.  
  
 *ptMaxTrackSize*  
 Specifica il massimo rilevamento larghezza (Point) e l'altezza (Point) della finestra di rilevamento.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winuser.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo)


