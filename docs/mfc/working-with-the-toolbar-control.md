---
title: Utilizzo del controllo barra degli strumenti | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- GetToolBarCtrl method [MFC]
- toolbars [MFC], accessing common control
- CToolBarCtrl class [MFC], accessing toolbar
- toolbar controls [MFC], accessing
ms.assetid: b19409d5-3831-42c7-80ae-195c49dc9085
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 32d3cc6244bc2f928c8d1d0c6e46d1bc5a57aa3b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="working-with-the-toolbar-control"></a>Utilizzo del controllo Toolbar
In questo articolo viene illustrato come accedere il [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) sottostante un [CToolBar](../mfc/reference/ctoolbar-class.md) per un maggiore controllo sulle barre degli strumenti. Questo è un argomento avanzato.  
  
## <a name="procedures"></a>Procedure  
  
#### <a name="to-access-the-toolbar-common-control-underlying-your-ctoolbar-object"></a>Per accedere al controllo comune barra degli strumenti sottostante l'oggetto CToolBar  
  
1.  Chiamare [CToolBar:: GetToolBarCtrl](../mfc/reference/ctoolbar-class.md#gettoolbarctrl).  
  
 `GetToolBarCtrl` Restituisce un riferimento a un [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) oggetto. È possibile utilizzare il riferimento per chiamare le funzioni membro della classe del controllo barra degli strumenti.  
  
> [!CAUTION]
>  Durante la chiamata `CToolBarCtrl` **ottenere** funzioni è sicuro, prestare attenzione se si chiama il **impostare** funzioni. Questo è un argomento avanzato. Non deve in genere è necessario accedere al controllo della barra degli strumenti sottostante.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Controlli (controlli comuni di Windows)](../mfc/controls-mfc.md)  
  
-   [Nozioni fondamentali sulla barra degli strumenti](../mfc/toolbar-fundamentals.md)  
  
-   [Ancoraggio e barre degli strumenti mobili](../mfc/docking-and-floating-toolbars.md)  
  
-   [Ridimensionamento dinamico barra degli strumenti](../mfc/docking-and-floating-toolbars.md)  
  
-   [Descrizioni comandi barra degli strumenti](../mfc/toolbar-tool-tips.md)  
  
-   [Aggiornamenti della barra di stato in tempo reale](../mfc/toolbar-tool-tips.md)  
  
-   [Gestione delle notifiche delle descrizioni comandi](../mfc/handling-tool-tip-notifications.md)  
  
-   Il [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) classi  
  
-   [Gestione delle notifiche di personalizzazione](../mfc/handling-customization-notifications.md)  
  
-   [Più barre degli strumenti](../mfc/toolbar-fundamentals.md)  
  
-   [Utilizzo delle barre degli strumenti precedente](../mfc/using-your-old-toolbars.md)  
  
-   [Barre di controllo](../mfc/control-bars.md)  
  
 Per informazioni generali sull'utilizzo di controlli comuni di Windows, vedere [controlli comuni](http://msdn.microsoft.com/library/windows/desktop/bb775493).  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)

