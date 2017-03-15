---
title: "Classi di barre di controllo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.control"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "barre di controllo, classi"
ms.assetid: 11009103-cad8-4309-85ce-3d2e858e1818
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classi di barre di controllo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le barre di controllo sono incluse in una finestra frame.  Contengono pulsanti, riquadri di stato, o un modello di finestra di dialogo.  Le barre di controllo mobili, anche chiamate caselle di strumenti, sono implementate allegandole a un oggetto [CMiniFrameWnd](../mfc/reference/cminiframewnd-class.md).  
  
## Barre di controllo Framework  
 Le barre di controllo sono parte integrante del framework MFC.  Sono più semplici e più efficaci delle barre di controllo Windows poiché sono integrate con il framework.  La maggior parte delle applicazioni MFC utilizzano queste barre di controllo anziché le barre di controllo Windows.  
  
 [CControlBar](../mfc/reference/ccontrolbar-class.md)  
 La classe base per le barre di controllo MFC elencate in questa sezione.  Una barra di controllo rappresenta una finestra allineata al bordo della finestra frame.  La barra di controllo contiene controlli figlio o controlli `HWND` basati o non basati su un `HWND`, ad esempio pulsanti della barra degli strumenti.  
  
 [CDialogBar](../mfc/reference/cdialogbar-class.md)  
 Una barra di controllo basata su un modello di finestra di dialogo.  
  
 [CReBar](../mfc/reference/crebar-class.md)  
 Supporta una barra degli strumenti che può contenere finestre figlio aggiuntive sotto forma di controlli  
  
 [CToolBar](../mfc/reference/ctoolbar-class.md)  
 Finestre di controllo toolbar che contengono pulsanti di comando bitmap non basati su un `HWND`.  La maggior parte delle applicazioni MFC utilizzano questa classe anziché `CToolBarCtrl`.  
  
 [CStatusBar](../mfc/reference/cstatusbar-class.md)  
 La classe base per le finestre di controllo della barra di stato.  La maggior parte delle applicazioni MFC utilizzano questa classe anziché `CStatusBarCtrl`.  
  
## Barre di controllo di Windows  
 Le barre di controllo sono wrapper per rilevare i controlli Windows corrispondenti.  Poiché non è integrato con il framework, sono più difficili da utilizzare delle barre di controllo elencate in precedenza.  La maggior parte delle applicazioni MFC utilizzano barre di controllo elencate in precedenza.  
  
 [CRebarCtrl](../mfc/reference/crebarctrl-class.md)  
 Implementazione del controllo interno dell'oggetto `CRebar`.  
  
 [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)  
 Una finestra orizzontale, in genere suddivisa in riquadri, nella quale un'applicazione può visualizzare le informazioni sullo stato.  
  
 [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)  
 Fornisce la funzionalità del controllo barra degli strumenti comune di Windows.  
  
## Classi correlate  
 [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md)  
 Una piccola finestra popup che visualizza una sola riga di testo che descrive lo scopo di uno strumento in un'applicazione.  
  
 [CDockState](../mfc/reference/cdockstate-class.md)  
 Gestisce l'archivio permanente dei dati sullo stato dell'ancoraggio per le barre di controllo.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)