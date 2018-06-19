---
title: OLE in MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC, OLE and
- OLE items
- OLE applications [MFC], about OLE
- OLE [MFC]
- OLE containers [MFC], about OLE
- applications [OLE], about OLE
- OLE component object model (COM)
ms.assetid: 5193479d-1239-4697-aea4-e82f92c707ab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ef23f0b7e031c6866b7792bca61c5e4d5bd470da
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33353628"
---
# <a name="ole-in-mfc"></a>OLE in MFC
Questi articoli illustrano i principi fondamentali della programmazione con OLE utilizzando MFC. MFC fornisce il modo più semplice per scrivere programmi che utilizzano OLE:  
  
-   Per utilizzare visual modifica (sul posto attivazione OLE).  
  
-   Per funzionare come contenitori OLE o server.  
  
-   Per implementare la funzionalità di trascinamento e rilascio.  
  
-   Per funzionare con i dati di data e ora.  
  
-   Per gestire i dati dello stato di MFC moduli, inclusi esportati i punti di ingresso DLL (funzione), punti di ingresso all'interfaccia OLE/COM e punti di ingresso di routine di finestra.  
  
 È inoltre possibile utilizzare [automazione](../mfc/automation.md).  
  
> [!NOTE]
>  Il termine che OLE indica le tecnologie associate al collegamento e incorporamento, tra cui contenitori OLE, i server OLE, elementi OLE, l'attivazione sul posto (o modifica visiva), Tracker, trascinamento della selezione e l'unione dei menu. Il termine Active si applica il modello COM (Component Object) e gli oggetti basati su COM, ad esempio i controlli ActiveX. Automazione OLE è ora denominata automazione.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Sfondo OLE](../mfc/ole-background.md)  
 OLE vengono fornite informazioni concettuali sulle modalità di funzionamento.  
  
 [Attivazione](../mfc/activation-cpp.md)  
 Viene descritto il ruolo dell'attivazione nella modifica di elementi OLE.  
  
 [Contenitori](../mfc/containers.md)  
 Vengono forniti i collegamenti per l'utilizzo di contenitori in OLE.  
  
 [Oggetti dati e origini dati](../mfc/data-objects-and-data-sources-ole.md)  
 Vengono forniti collegamenti ad argomenti che illustrano l'utilizzo del `COleDataObject` e `COleDataSource` classi.  
  
 [Trascinamento della selezione](../mfc/drag-and-drop-ole.md)  
 Viene illustrato l'utilizzo di copia e Incolla con OLE.  
  
 [Menu e risorse OLE](../mfc/menus-and-resources-ole.md)  
 Viene illustrato l'utilizzo di menu e risorse nelle applicazioni OLE MFC documento.  
  
 [Registrazione](../mfc/registration.md)  
 Descrive l'inizializzazione e installazione del server.  
  
 [Server](../mfc/servers.md)  
 Viene descritto come creare applicazioni contenitore OLE elementi (o componenti) per l'utilizzo.  
  
 [Tracker](../mfc/trackers.md)  
 Vengono fornite informazioni sulla `CRectTracker` classe che fornisce un'interfaccia grafica per consentire agli utenti di interagire con gli elementi client OLE.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [Punti di connessione](../mfc/connection-points.md)  
 Viene illustrato come implementare i punti di connessione (precedentemente noti come punti di connessione OLE) utilizzando le classi MFC `CCmdTarget` e `CConnectionPoint`.  
  
 [Componenti COM contenitore/Server](../mfc/containers-advanced-features.md)  
 Descrive i passaggi necessari per incorporare funzionalità avanzate facoltative nelle applicazioni contenitore esistenti.  
  
 [Component Object Model](http://msdn.microsoft.com/library/windows/desktop/ms694363)  
 Viene descritto l'utilizzo di OLE senza MFC.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)

