---
title: Attivazione senza finestra | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- windowless activation of MFC ActiveX controls
- activation [MFC], MFC ActiveX controls
- MFC ActiveX controls [MFC], activate options
- activation [MFC], windowless
ms.assetid: 094903b5-c344-42fa-96ff-ce01e16891c5
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: eb33f1dd9f8be8cb06cdfcc2aeecb653c2762410
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="providing-windowless-activation"></a>Attivazione senza finestra
Codice di creazione finestre (ovvero tutto ciò che accade quando si chiama **CreateWindow**) è dispendioso da eseguire. Un controllo che gestisce una finestra sullo schermo deve gestire i messaggi per la finestra. I controlli privi di finestra sono quindi più veloci dei controlli con finestre.  
  
 Un ulteriore vantaggio offerto dai controlli privi di finestra è che, a differenza di quelli con finestre, supportano il disegno trasparente e le aree non rettangolari dello schermo. Un esempio comune di un controllo trasparente è un controllo di testo con uno sfondo trasparente. I controlli disegnano il testo ma non lo sfondo, pertanto tutto ciò che si trova sotto il testo è visibile. I nuovi form utilizzano spesso controlli non rettangolari, quali le frecce e i pulsanti rotondi.  
  
 Spesso, un controllo non necessita di una finestra propria e, invece, può utilizzare i servizi di finestra del contenitore a cui appartiene, purché il contenitore sia stato scritto per supportare oggetti senza finestra. I controlli privi di finestra sono compatibili con le versioni precedenti di contenitori. Nei contenitori meno recenti non scritti per supportare i controlli privi di finestra, i controlli privi di finestra creano una finestra quando attivi.  
  
 Poiché i controlli privi di finestra non dispongono di finestre proprie, il contenitore (che dispone di una finestra) è responsabile di fornire servizi che sarebbero altrimenti forniti dalla finestra propria del controllo. Ad esempio, se il controllo deve eseguire una query sullo stato attivo della tastiera, acquisire il mouse o ottenere un contesto di dispositivo, queste operazioni vengono gestite dal contenitore. Il contenitore indirizza i messaggi di input dell'utente inviati alla finestra al controllo senza finestra appropriato tramite l'interfaccia `IOleInPlaceObjectWindowless`. (Vedere il *ActiveX SDK* per una descrizione di questa interfaccia.) `COleControl` questi servizi dal contenitore di richiamare le funzioni membro.  
  
 Per rendere il controllo di utilizzare l'attivazione senza finestra, includere il **windowlessActivate** flag nel set di flag restituiti da [COleControl:: GetControlFlags](../mfc/reference/colecontrol-class.md#getcontrolflags). Ad esempio:  
  
 [!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/cpp/providing-windowless-activation_1.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#6](../mfc/codesnippet/cpp/providing-windowless-activation_2.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/cpp/providing-windowless-activation_3.cpp)]  
  
 Il codice per includere questo flag viene generato automaticamente se si seleziona il **attivazione senza finestra** opzione il [le impostazioni di controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina della creazione guidata controllo ActiveX MFC.  
  
 Se l'attivazione senza finestra è abilitata, il contenitore delegherà i messaggi di input all'interfaccia `IOleInPlaceObjectWindowless` del controllo. L'implementazione di `COleControl` di questa interfaccia invia i messaggi attraverso la mappa messaggi del controllo, dopo avere modificato le coordinate del mouse in modo appropriato. È possibile elaborare i messaggi come comuni messaggi di finestra, aggiungendo le voci corrispondenti alla mappa messaggi. Nei gestori per questi messaggi, evitare di utilizzare il `m_hWnd` variabile membro (o qualsiasi funzione membro che lo utilizza) senza prima verificare che il relativo valore non è **NULL**.  
  
 `COleControl` fornisce funzioni membro che richiamano la cattura del mouse, lo stato attivo della tastiera e altri servizi della finestra dal contenitore in base alle esigenze, tra cui:  
  
-   [GetFocus](../mfc/reference/colecontrol-class.md#getfocus), [SetFocus](../mfc/reference/colecontrol-class.md#setfocus)  
  
-   [GetCapture](../mfc/reference/colecontrol-class.md#getcapture), [SetCapture](../mfc/reference/colecontrol-class.md#setcapture), [ReleaseCapture](../mfc/reference/colecontrol-class.md#releasecapture)  
  
-   [GetDC](../mfc/reference/colecontrol-class.md#getdc), [ReleaseDC](../mfc/reference/colecontrol-class.md#releasedc)  
  
-   [InvalidateRgn](../mfc/reference/colecontrol-class.md#invalidatergn)  
  
-   [ScrollWindow](../mfc/reference/colecontrol-class.md#scrollwindow)  
  
-   [GetClientRect](../mfc/reference/colecontrol-class.md#getclientrect)  
  
 Nei controlli privi di finestra è sempre opportuno utilizzare le funzioni membro `COleControl` anziché le funzioni membro `CWnd` corrispondenti o le funzioni API Win32 correlate.  
  
 È possibile impostare un controllo senza finestra in modo che funga da destinazione di un'operazione di trascinamento e rilascio OLE. In genere, ciò richiede che la finestra del controllo sia stata registrata come obiettivo di rilascio. Poiché il controllo non ha una finestra propria, il contenitore utilizza la propria finestra come obiettivo di rilascio. Il controllo fornisce un'implementazione dell'interfaccia `IDropTarget` a cui il contenitore può delegare le chiamate al momento giusto. Per esporre questa interfaccia per il contenitore, eseguire l'override [COleControl:: GetWindowlessDropTarget](../mfc/reference/colecontrol-class.md#getwindowlessdroptarget). Ad esempio:  
  
 [!code-cpp[NVC_MFC_AxOpt#8](../mfc/codesnippet/cpp/providing-windowless-activation_4.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)

