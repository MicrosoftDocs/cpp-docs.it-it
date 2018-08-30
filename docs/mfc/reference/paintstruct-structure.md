---
title: Struttura PAINTSTRUCT | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- PAINTSTRUCT
dev_langs:
- C++
helpviewer_keywords:
- PAINTSTRUCT structure [MFC]
ms.assetid: 81ce4993-3e89-43b2-8c98-7946f1314d24
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dddf9c117f2366496609f8bdf4ffc2f069f66ace
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43199573"
---
# <a name="paintstruct-structure"></a>Struttura PAINTSTRUCT
Il `PAINTSTRUCT` struttura contiene informazioni che possono essere utilizzate per disegnare l'area client di una finestra.  
  
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
 Specifica se lo sfondo deve essere ridisegnato. Non è 0 se l'applicazione deve essere ridisegnata lo sfondo. L'applicazione è responsabile per disegnare lo sfondo se viene creata una classe di finestre Windows senza un pennello di sfondo (vedere la descrizione della `hbrBackground` membro della [WNDCLASS](https://msdn.microsoft.com/library/windows/desktop/ms633576) struttura nel SDK di Windows).  
  
 *rcPaint*  
 Specifica l'angolo superiore sinistro e inferiore destro angoli del rettangolo in cui viene richiesto il disegno.  
  
 *fRestore*  
 Membro riservato. Viene usato internamente da Windows.  
  
 *fIncUpdate*  
 Membro riservato. Viene usato internamente da Windows.  
  
 *rgbReserved [16]*  
 Membro riservato. Riservato blocco di memoria usata internamente da Windows.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winuser.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CPaintDC::m_ps](../../mfc/reference/cpaintdc-class.md#m_ps)

