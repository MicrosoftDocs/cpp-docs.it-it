---
title: Struttura NCCALCSIZE_PARAMS | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- NCCALCSIZE_PARAMS
dev_langs:
- C++
helpviewer_keywords:
- NCCALCSIZE_PARAMS structure [MFC]
ms.assetid: 3424cd9f-806a-4089-82fb-414187589edf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 07db612cb6dbde0dd762cf709ac6040bbd836c4b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33369723"
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

