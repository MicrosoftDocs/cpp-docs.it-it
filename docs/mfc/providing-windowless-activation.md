---
title: "Attivazione senza finestra | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attivazione [C++], controlli ActiveX MFC"
  - "attivazione [C++], senza finestra"
  - "controlli ActiveX MFC [C++], opzioni attivazione"
  - "attivazione senza finestra di controlli ActiveX MFC"
ms.assetid: 094903b5-c344-42fa-96ff-ce01e16891c5
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Attivazione senza finestra
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il codice di creazione della finestra \(ovvero tutto ciò che si verifica quando si chiama **CreateWindow**\) è dispendioso da eseguire.  Un controllo che gestisce una finestra sullo schermo deve gestire i messaggi per la finestra.  I controlli privi di finestra sono pertanto più veloci dei controlli con finestre.  
  
 Un ulteriore vantaggio dei controlli privi di finestra è che, a differenza dei controlli con finestre, i controlli privi di finestra supportano il disegno trasparente e le aree non rettangolari dello schermo.  Un esempio comune di un controllo trasparente è un controllo di testo con uno sfondo trasparente.  I controlli disegnano il testo ma non lo sfondo, in modo che qualsiasi cosa è sotto il vesto viene mostrata attraverso.  I nuovi form utilizzano spesso i controlli non rettangolari, quali le frecce e pulsanti rotondi.  
  
 Spesso, un controllo non necessita di una finestra propria e, invece, può utilizzare i servizi della finestra del suo contenitore, purché il contenitore sia stato scritto per supportare oggetti senza finestra.  I controlli privi di finestra sono compatibili con i contenitori precedenti.  Nei contenitori meno recenti non creati per supportare i controlli privi di finestra, i controlli privi di finestra creano una finestra quando attivi.  
  
 Poiché i controlli privi di finestra non dispongono di finestre proprie, il contenitore \(che dispone di una finestra\) è responsabile di fornire servizi che sarebbero altrimenti forniti dalla finestra propria del controllo.  Ad esempio, se il controllo deve di eseguire una query sullo stato attivo della tastiera, di acquisire il mouse o di ottenere un contesto di dispositivo, queste operazioni vengono gestite dal contenitore.  Il contenitore indirizza i messaggi di input dell'utente inviati dalla finestra al controllo senza finestra appropriato, tramite l'interfaccia `IOleInPlaceObjectWindowless`. \(Vedere *ActiveX SDK* per una descrizione di questa interfaccia.\) Funzioni membro `COleControl` invocano questi servizi dal contenitore.  
  
 Per fare in modo che il controllo utilizzi l'attivazione senza finestra, includere il flag **windowlessActivate** nel set di flag restituiti da [COleControl::GetControlFlags](../Topic/COleControl::GetControlFlags.md).  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/CPP/providing-windowless-activation_1.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#6](../mfc/codesnippet/CPP/providing-windowless-activation_2.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/CPP/providing-windowless-activation_3.cpp)]  
  
 Il codice per includere questo flag viene generato automaticamente se si seleziona l'opzione **Attivazione senza finestra** nella pagina [Impostazioni controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) di Creazione guidata controllo ActiveX MFC.  
  
 Se l'attivazione senza finestra è abilitata, il contenitore delegherà i messaggi di input all'interfaccia `IOleInPlaceObjectWindowless` del controllo.  L'implementazione di `COleControl` di questa interfaccia invia i messaggi tramite la mappa messaggi del controllo, dopo avere modificato le coordinate del mouse in modo appropriato.  È possibile elaborare i messaggi quali messaggi comuni della finestra, aggiungendo le voci corrispondenti alla mappa messaggi.  Nei gestori per questi messaggi, evitare di utilizzare la variabile membro `m_hWnd` \(o qualsiasi altra funzione membro che la utilizzi\) senza prima verificare che il suo valore non sia **NULL**.  
  
 `COleControl` fornisce funzioni membro che richiamano la cattura del mouse, lo stato attivo della tastiera e altri servizi della finestra dal contenitore in base alle esigenze, tra cui:  
  
-   [GetFocus](../Topic/COleControl::GetFocus.md), [SetFocus](../Topic/COleControl::SetFocus.md)  
  
-   [GetCapture](../Topic/COleControl::GetCapture.md), [SetCapture](../Topic/COleControl::SetCapture.md), [ReleaseCapture](../Topic/COleControl::ReleaseCapture.md)  
  
-   [GetDC](../Topic/COleControl::GetDC.md), [ReleaseDC](../Topic/COleControl::ReleaseDC.md)  
  
-   [InvalidateRgn](../Topic/COleControl::InvalidateRgn.md)  
  
-   [ScrollWindow](../Topic/COleControl::ScrollWindow.md)  
  
-   [GetClientRect](../Topic/COleControl::GetClientRect.md)  
  
 Nei controlli privi di finestra, è sempre opportuno utilizzare le funzioni membro `COleControl` anziché le funzioni membro corrispondenti `CWnd` o le funzioni correlate all'API Win32.  
  
 Si può volere che un controllo senza finestra sia la destinazione di un'operazione di trascinamento della selezione OLE.  In genere, questo richiede che la finestra del controllo sia stata registrata come destinazione di trascinamento.  Poiché il controllo non ha finestra propria, il contenitore utilizza la propria finestra come destinazione di trascinamento.  Il controllo fornisce un'implementazione dell'interfaccia `IDropTarget` a cui il contenitore può delegare le chiamate al momento giusto.  Per esporre questa interfaccia al contenitore, eseguire l'override di [COleControl::GetWindowlessDropTarget](../Topic/COleControl::GetWindowlessDropTarget.md).  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFC_AxOpt#8](../mfc/codesnippet/CPP/providing-windowless-activation_4.cpp)]  
  
## Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)