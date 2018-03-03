---
title: Struttura PAINTSTRUCT | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- PAINTSTRUCT
dev_langs:
- C++
helpviewer_keywords:
- PAINTSTRUCT structure [MFC]
ms.assetid: 81ce4993-3e89-43b2-8c98-7946f1314d24
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 92583bba3dca60caa2895966a87571dc60805475
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="paintstruct-structure"></a>Struttura PAINTSTRUCT
Il `PAINTSTRUCT` struttura contiene informazioni che possono essere usate per disegnare l'area client di una finestra.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct tagPAINTSTRUCT {  
    HDC hdc;  
    BOOL fErase;  
    RECT rcPaint;  
    BOOL fRestore;  
    BOOL fIncUpdate;  
    BYTE rgbReserved[16];  
} PAINTSTRUCT;  
```  
  
#### <a name="parameters"></a>Parametri  
 *HDC*  
 Identifica il contesto di visualizzazione da utilizzare per il disegno.  
  
 *fErase*  
 Specifica se deve essere ridisegnato lo sfondo. Non è 0 se l'applicazione deve essere ridisegnata lo sfondo. L'applicazione è responsabile per disegnare lo sfondo, se una classe finestra di Windows viene creata senza un pennello di sfondo (vedere la descrizione del **hbrBackground** appartenente il [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) struttura in Windows SDK).  
  
 *rcPaint*  
 Specifica l'angolo superiore sinistro e inferiore destro angoli del rettangolo in cui è richiesto il disegno.  
  
 *fRestore*  
 Membro riservato. Viene utilizzata internamente da Windows.  
  
 *fIncUpdate*  
 Membro riservato. Viene utilizzata internamente da Windows.  
  
 *rgbReserved [16]*  
 Membro riservato. Riservato blocco di memoria utilizzata internamente da Windows.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winuser.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CPaintDC::m_ps](../../mfc/reference/cpaintdc-class.md#m_ps)

