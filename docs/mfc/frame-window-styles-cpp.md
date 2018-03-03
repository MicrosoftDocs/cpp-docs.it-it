---
title: Stili frame-Window (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- window styles [MFC]
- PreCreateWindow method, setting window styles
- windows [MFC], MFC
- frame windows [MFC], styles
- MFC, frame windows
- styles [MFC], windows
ms.assetid: fc5058c1-eec8-48d8-9f76-3fc01cfa53f7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a5bdc0204c538f476c791657d8b29a28b7baedd4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="frame-window-styles-c"></a>Stili Frame-Window (C++)
Finestre cornice con il framework adatti per la maggior parte dei programmi, ma è possibile ottenere maggiore flessibilità di utilizzo delle funzioni avanzate [PreCreateWindow](../mfc/reference/cwnd-class.md#precreatewindow) e la funzione globale MFC [AfxRegisterWndClass ](../mfc/reference/application-information-and-management.md#afxregisterwndclass). `PreCreateWindow`è una funzione membro di `CWnd`.  
  
 Se si applica il **WS_HSCROLL** e **WS_VSCROLL** stili alla finestra cornice principale, questi vengono applicati per la **MDICLIENT** finestra in modo che gli utenti possono scorrere il **MDICLIENT** area.  
  
 Se la finestra **FWS_ADDTOTITLE** bit di stile è impostato (ovvero per impostazione predefinita), la visualizzazione indica la finestra cornice il titolo da visualizzare nella barra del titolo della finestra in base al nome della visualizzazione documento.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Gestione di finestre figlio MDI (MDICLIENT)](../mfc/managing-mdi-child-windows.md), la finestra all'interno di una finestra cornice MDI che contiene le finestre figlio MDI  
  
-   [Modifica degli stili di una finestra creata da MFC](../mfc/changing-the-styles-of-a-window-created-by-mfc.md)  
  
-   [Stili finestra](../mfc/reference/styles-used-by-mfc.md#window-styles)  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre cornice](../mfc/frame-windows.md)

