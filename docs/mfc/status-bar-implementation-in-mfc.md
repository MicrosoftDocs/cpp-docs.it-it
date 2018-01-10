---
title: Implementazione della barra di stato in MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: COldStatusBar
dev_langs: C++
helpviewer_keywords:
- status bars [MFC], implementing in MFC
- CStatusBarCtrl class [MFC], and MFC status bars
- CStatusBar class [MFC], and CStatusBarCtrl class [MFC]
- CStatusBarCtrl class [MFC], and CStatusBar class [MFC]
- status bars [MFC], backward compatibility
- status bars [MFC], old with COldStatusBar class [MFC]
- COldStatusBar class [MFC]
- status bars [MFC], and CStatusBarCtrl class
- CStatusBar class [MFC], and MFC status bars
- status indicators
- status bars [MFC], Windows 95 implementation
ms.assetid: be5cd876-38e3-4d5c-b8cb-16d57a16a142
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4d81982e23f100fe75d6cc5769cd19359bfaa6f5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="status-bar-implementation-in-mfc"></a>Implementazione della barra di stato in MFC
Oggetto [CStatusBar](../mfc/reference/cstatusbar-class.md) oggetto è una barra di controllo con una riga di riquadri di output di testo. I riquadri di output vengono comunemente utilizzati come righe di messaggio e come indicatori di stato. Ad esempio le righe di messaggio della Guida di menu che descrivono brevemente il comando di menu selezionata e gli indicatori mostrano lo stato di BLOC SCORR, BLOC NUM e altri tasti.  
  
 A partire dalla versione 4.0 di MFC, le barre di stato vengono implementate utilizzando classe [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md), che incapsula un controllo comune barra di stato. Per garantire la compatibilità con le versioni precedenti, MFC mantiene precedente implementazione di barre di stato nella classe **COldStatusBar**. Viene descritta la documentazione per le versioni precedenti di MFC **COldStatusBar** in `CStatusBar`.  
  
 [CStatusBar:: GetStatusBarCtrl](../mfc/reference/cstatusbar-class.md#getstatusbarctrl), una funzione membro nuovo alla versione 4.0 di MFC, consente di sfruttare supporto del controllo comune di Windows per funzionalità aggiuntive e personalizzazione della barra di stato. `CStatusBar`funzioni membro consentono la maggior parte delle funzionalità dei controlli comuni di Windows; Tuttavia, quando si chiama `GetStatusBarCtrl`, è possibile assegnare le barre di stato più le caratteristiche di una barra di stato. Quando si chiama `GetStatusBarCtrl`, verrà restituito un riferimento a un `CStatusBarCtrl` oggetto. Per modificare il controllo barra di stato, è possibile utilizzare tale riferimento.  
  
 Nella figura seguente mostra una barra di stato che consente di visualizzare gli indicatori diversi.  
  
 ![Barra di stato](../mfc/media/vc37dy1.gif "vc37dy1")  
Barra di stato  
  
 Ad esempio la barra degli strumenti, l'oggetto della barra di stato è incorporato nella relativa finestra cornice padre e viene creato automaticamente quando la finestra cornice viene costruita. La barra di stato, ad esempio tutte le barre di controllo, viene eliminata automaticamente anche quando il frame padre viene eliminato definitivamente.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Aggiornamento del testo di un riquadro della barra di stato](../mfc/updating-the-text-of-a-status-bar-pane.md)  
  
-   Classi MFC [CStatusBar](../mfc/reference/cstatusbar-class.md) e [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)  
  
-   [Barre di controllo](../mfc/control-bars.md)  
  
-   [Barre di finestra di dialogo](../mfc/dialog-bars.md)  
  
-   [Barre degli strumenti (implementazione della barra degli strumenti MFC)](../mfc/mfc-toolbar-implementation.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Barre di stato](../mfc/status-bars.md)

