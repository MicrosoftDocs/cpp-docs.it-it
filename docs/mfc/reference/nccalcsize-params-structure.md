---
title: Struttura NCCALCSIZE_PARAMS | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- NCCALCSIZE_PARAMS
dev_langs:
- C++
helpviewer_keywords:
- NCCALCSIZE_PARAMS structure [MFC]
ms.assetid: 3424cd9f-806a-4089-82fb-414187589edf
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 76a0a16ff0a2c90c6dd6060badc2c79dde1af231
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nccalcsizeparams-structure"></a>Struttura NCCALCSIZE_PARAMS
Il `NCCALCSIZE_PARAMS` struttura contiene informazioni che un'applicazione può utilizzare durante l'elaborazione di `WM_NCCALCSIZE` messaggio per calcolare la dimensione, posizione e il contenuto valido dell'area client di una finestra.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct tagNCCALCSIZE_PARAMS {  
    RECT rgrc[3];  
    PWINDOWPOS lppos;  
} NCCALCSIZE_PARAMS;  
```  
  
#### <a name="parameters"></a>Parametri  
 *rgrc*  
 Specifica una matrice di rettangoli. La prima riga contiene le coordinate di una finestra che sono stati spostati o ridimensionato. Il secondo contiene le coordinate della finestra prima che è stata spostata o ridimensionata. Il terzo contiene le coordinate dell'area client di una finestra prima che è stata spostata o ridimensionata. Se la finestra è una finestra figlio, le coordinate sono relative all'area client della finestra padre. Se la finestra è una finestra di primo livello, le coordinate sono rispetto allo schermo.  
  
 *lppos*  
 Punta a un [WINDOWPOS](../../mfc/reference/windowpos-structure1.md) struttura che contiene i valori di dimensioni e la posizione specificati nell'operazione che ha causato la finestra da spostare o ridimensionare.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winuser.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize)

