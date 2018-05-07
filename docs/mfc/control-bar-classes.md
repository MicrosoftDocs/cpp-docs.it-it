---
title: Classi di barre di controllo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.control
dev_langs:
- C++
helpviewer_keywords:
- control bars [MFC], classes
ms.assetid: 11009103-cad8-4309-85ce-3d2e858e1818
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4974b7ba3b71e60b8edf2a73ea5f06fab64ddfb7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="control-bar-classes"></a>Classi di barre di controllo
Barre di controllo sono collegate a una finestra cornice. Contengono pulsanti, i riquadri di stato o un modello di finestra di dialogo. Barre di controllo mobile, l'acronimo di tavolozze, vengono implementate mediante l'aggiunta di un [CMiniFrameWnd](../mfc/reference/cminiframewnd-class.md) oggetto.  
  
## <a name="framework-control-bars"></a>Barre di controllo Framework  
 Queste barre di controllo sono parte integrante del framework MFC. Sono più facile da utilizzare e più potente di barre di controllo di Windows in quanto sono integrate con il framework. La maggior parte delle applicazioni MFC utilizzano queste barre di controllo anziché le barre di controllo di Windows.  
  
 [CControlBar](../mfc/reference/ccontrolbar-class.md)  
 La classe base per le barre di controllo MFC elencate in questa sezione. Una barra di controllo è una finestra allineata al bordo di una finestra cornice. La barra di controllo contiene uno `HWND`-basato su controlli figlio o non basato su un `HWND`, ad esempio i pulsanti della barra degli strumenti.  
  
 [CDialogBar](../mfc/reference/cdialogbar-class.md)  
 Barra di controllo basato su un modello di finestra di dialogo.  
  
 [CReBar](../mfc/reference/crebar-class.md)  
 Supporta una barra degli strumenti che può contenere altre finestre figlio sotto forma di controlli.  
  
 [CToolBar](../mfc/reference/ctoolbar-class.md)  
 Finestre di controllo della barra degli strumenti che contengono pulsanti di comando bitmap non basato su un `HWND`. La maggior parte delle applicazioni MFC utilizzano questa classe anziché `CToolBarCtrl`.  
  
 [CStatusBar](../mfc/reference/cstatusbar-class.md)  
 La classe base per finestre di controllo della barra di stato. La maggior parte delle applicazioni MFC utilizzano questa classe anziché `CStatusBarCtrl`.  
  
## <a name="windows-control-bars"></a>Barre di controllo di Windows  
 Queste barre di controllo sono thin wrapper per i controlli di Windows corrispondenti. Poiché non sono integrati con il framework, sono più difficili da utilizzare rispetto alle barre di controllo elencate in precedenza. La maggior parte delle applicazioni di MFC utilizzano le barre di controllo elencate in precedenza.  
  
 [CRebarCtrl](../mfc/reference/crebarctrl-class.md)  
 Implementa il controllo di interno il `CRebar` oggetto.  
  
 [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)  
 Una finestra in orizzontale, in genere è suddivisa in riquadri, in cui un'applicazione può visualizzare le informazioni sullo stato.  
  
 [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)  
 Fornisce la funzionalità del controllo barra degli strumenti comune di Windows.  
  
## <a name="related-classes"></a>Classi correlate  
 [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md)  
 Una piccola finestra popup che consente di visualizzare una singola riga di testo che descrive lo scopo di uno strumento in un'applicazione.  
  
 [CDockState](../mfc/reference/cdockstate-class.md)  
 Gestisce l'archiviazione permanente dei dati sullo stato per le barre di controllo di ancoraggio.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

