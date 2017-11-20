---
title: Contesti di dispositivo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- OnPrepareDC method [MFC]
- windows [MFC], and device context
- drawing [MFC], device context
- CClientDC class [MFC], and GetDC method [MFC]
- drawing [MFC], in mouse and device contexts
- CDC class [MFC], objects
- device contexts [MFC]
- client areas
- CMetaFileDC class [MFC], and OnPrepareDC method [MFC]
- GDI objects [MFC], device contexts
- graphic objects [MFC], device contexts
- frame windows [MFC], device contexts
- metafiles and device contexts
- EndPaint method [MFC]
- printers [MFC], device contexts
- mouse [MFC], drawing and device contexts
- BeginPaint method, CPaintDC
- CPaintDC class [MFC], device context for painting
- windows [MFC], drawing directly into
- client areas, and device context
- device contexts [MFC], CDC class [MFC]
- user interface [MFC], device contexts
- device-independent drawing
- GetDC method and CClientDC class [MFC]
- CClientDC class [MFC], and ReleaseDC method [MFC]
- ReleaseDC method [MFC]
- device contexts [MFC], about device contexts
- drawing [MFC], directly into windows
- painting and device context
ms.assetid: d0cd51f1-f778-4c7e-bf50-d738d10433c7
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 641ea3d50be4d739b19ea8e53424cc311016362b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="device-contexts"></a>Contesti di dispositivo
Un contesto di dispositivo è una struttura di dati di Windows che contiene informazioni sugli attributi di disegnati di un dispositivo, ad esempio una visualizzazione o una stampante. Tutte le chiamate di disegnare vengono effettuate tramite un oggetto contesto di dispositivo, che incapsula le API di Windows per disegno di linee, forme e testo. Contesti di dispositivo consentono disegno indipendente dal dispositivo in Windows. Contesti di dispositivo possono essere utilizzati per disegnare sullo schermo, alla stampante o in un metafile.  
  
 [CPaintDC](../mfc/reference/cpaintdc-class.md) oggetti incapsulano il linguaggio comune di Windows, la chiamata di `BeginPaint` funzione, nel contesto di dispositivo di disegno, quindi chiamare il `EndPaint` (funzione). Il `CPaintDC` chiamate al costruttore `BeginPaint` per l'utente e il distruttore chiama `EndPaint`. Il processo semplificato consiste nel creare il [CDC](../mfc/reference/cdc-class.md) dell'oggetto, creare e quindi eliminare il `CDC` oggetto. In framework, gran parte di questo processo è automatizzata. In particolare, il `OnDraw` funzione vengono passati un `CPaintDC` già preparata (tramite `OnPrepareDC`), e si disegna semplicemente al suo interno. Viene eliminato dal framework e il contesto di dispositivo sottostante viene rilasciato al Windows al momento della restituzione della chiamata al `OnDraw` (funzione).  
  
 [CClientDC](../mfc/reference/cclientdc-class.md) oggetti incapsulano l'utilizzo di un contesto di dispositivo che rappresenta solo l'area client di una finestra. Il `CClientDC` chiamate al costruttore il `GetDC` funzione e il distruttore chiama il `ReleaseDC` (funzione). [Gli oggetti CWindowDC](../mfc/reference/cwindowdc-class.md) oggetti incapsulano un contesto di dispositivo che rappresenta l'intera finestra, incluso il relativo frame.  
  
 [CMetaFileDC](../mfc/reference/cmetafiledc-class.md) oggetti incapsulano disegno in un metafile di Windows. Al contrario di `CPaintDC` passato a `OnDraw`, in questo caso, è necessario chiamare [OnPrepareDC](../mfc/reference/cview-class.md#onpreparedc) manualmente.  
  
## <a name="mouse-drawing"></a>Disegno con il mouse  
 La maggior parte di disegno in un programma di framework e pertanto la maggior parte del lavoro contesto di dispositivo, viene eseguita la visualizzazione `OnDraw` funzione membro. Tuttavia, è possibile utilizzare ancora gli oggetti di contesto di dispositivo per altri scopi. Ad esempio, per fornire commenti e suggerimenti di rilevamento per lo spostamento del mouse in una vista, è necessario disegnare direttamente nella visualizzazione senza attendere `OnDraw` da chiamare.  
  
 In tal caso, è possibile utilizzare un [CClientDC](../mfc/reference/cclientdc-class.md) oggetto contesto di dispositivo da disegnare direttamente nella visualizzazione.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Contesti di dispositivo (definizione)](http://msdn.microsoft.com/library/windows/desktop/dd183553)  
  
-   [Disegno in una visualizzazione](../mfc/drawing-in-a-view.md)  
  
-   [Interpretazione dell'input utente attraverso una visualizzazione](../mfc/interpreting-user-input-through-a-view.md)  
  
-   [Linee e curve](http://msdn.microsoft.com/library/windows/desktop/dd145028)  
  
-   [Forme piene](http://msdn.microsoft.com/library/windows/desktop/dd162714)  
  
-   [Tipi di carattere e testo](http://msdn.microsoft.com/library/windows/desktop/dd144819)  
  
-   [Colori](http://msdn.microsoft.com/library/windows/desktop/dd183450)  
  
-   [Spazi di coordinate e trasformazioni](http://msdn.microsoft.com/library/windows/desktop/dd183475)  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)

