---
title: Utilizzo del controllo barra degli strumenti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- GetToolBarCtrl method [MFC]
- toolbars [MFC], accessing common control
- CToolBarCtrl class [MFC], accessing toolbar
- toolbar controls [MFC], accessing
ms.assetid: b19409d5-3831-42c7-80ae-195c49dc9085
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 475b44b856c874064a4ccbdaf7b648342eb9c657
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="working-with-the-toolbar-control"></a>Utilizzo del controllo Toolbar
In questo articolo viene illustrato come accedere il [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) sottostante un [CToolBar](../mfc/reference/ctoolbar-class.md) per un maggiore controllo sulle barre degli strumenti. Questo è un argomento avanzato.  
  
## <a name="procedures"></a>Procedure  
  
#### <a name="to-access-the-toolbar-common-control-underlying-your-ctoolbar-object"></a>Per accedere al controllo comune barra degli strumenti sottostante l'oggetto CToolBar  
  
1.  Chiamare [CToolBar:: GetToolBarCtrl](../mfc/reference/ctoolbar-class.md#gettoolbarctrl).  
  
 `GetToolBarCtrl`Restituisce un riferimento a un [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) oggetto. È possibile utilizzare il riferimento per chiamare le funzioni membro della classe del controllo barra degli strumenti.  
  
> [!CAUTION]
>  Durante la chiamata `CToolBarCtrl` **ottenere** funzioni è sicuro, prestare attenzione se si chiama il **impostare** funzioni. Questo è un argomento avanzato. Non deve in genere è necessario accedere al controllo della barra degli strumenti sottostante.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Controlli (controlli comuni di Windows)](../mfc/controls-mfc.md)  
  
-   [Nozioni fondamentali sulla barra degli strumenti](../mfc/toolbar-fundamentals.md)  
  
-   [Ancoraggio e barre degli strumenti mobili](../mfc/docking-and-floating-toolbars.md)  
  
-   [La barra degli strumenti di ridimensionamento dinamico](../mfc/docking-and-floating-toolbars.md)  
  
-   [Descrizione comandi](../mfc/toolbar-tool-tips.md)  
  
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

