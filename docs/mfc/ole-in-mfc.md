---
title: "OLE in MFC | Microsoft Docs"
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
  - "applicazioni [OLE], informazioni su OLE"
  - "MFC [C++], OLE e"
  - "OLE [C++]"
  - "applicazioni OLE [C++], informazioni su OLE"
  - "modello COM OLE"
  - "contenitori OLE, informazioni su OLE"
  - "elementi OLE"
ms.assetid: 5193479d-1239-4697-aea4-e82f92c707ab
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# OLE in MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questi articoli illustrati i concetti fondamentali di programmazione OLE utilizzando MFC.  MFC fornisce il modo più semplice per creare programmi che utilizzano OLE:  
  
-   Per utilizzare modifica visiva OLE \(l'attivazione sul posto\).  
  
-   Nei contenitori OLE o server.  
  
-   Per implementare la funzionalità di trascinamento della selezione.  
  
-   Per utilizzare le informazioni di data e ora.  
  
-   Per gestire i dati dello stato dei moduli MFC, inclusi i punti di ingresso esportati punti di ingresso di funzione DLL, l'interfaccia di OGGETTI e i punti di ingresso routine di finestra.  
  
 È inoltre possibile utilizzare [Automazione](../mfc/automation.md) o [L'automazione remota](../mfc/remote-automation.md) per eseguire un altro programma dal programma.  
  
> [!NOTE]
>  OLE di condizioni indicate le tecnologie associate a collegare e incorporare, inclusi i contenitori OLE, i server OLE, elementi OLE, l'attivazione sul posto \(o modifica visiva\), tracker, trascinamento della selezione e l'unione dei menu.  L'opzione attiva term si applica a COM \(Component Object Model \(COM\) e agli oggetti COM come controlli ActiveX.  L'automazione OLE è denominata Automation.  
  
## Argomenti della sezione  
 [Sfondo OLE](../mfc/ole-background.md)  
 Vengono illustrati OLE e vengono fornite informazioni concettuali sull'esecuzione.  
  
 [Attivazione](../mfc/activation-cpp.md)  
 Viene descritto il ruolo di attivazione in elementi OLE di modifica.  
  
 [Contenitori](../mfc/containers.md)  
 Vengono forniti collegamenti a utilizzare i contenitori in OLE.  
  
 [Oggetti dati e origini dati](../mfc/data-objects-and-data-sources-ole.md)  
 Vengono forniti collegamenti ad argomenti che illustrano l'utilizzo delle classi di `COleDataSource` e di `COleDataObject`.  
  
 [Trascinamento della selezione](../mfc/drag-and-drop-ole.md)  
 Viene illustrato l'utilizzo della copia e incolla tramite OLE.  
  
 [Menu e risorse OLE](../mfc/menus-and-resources-ole.md)  
 Viene illustrato l'utilizzo dei menu e risorse nelle applicazioni di documento OLE MFC.  
  
 [Registrazione](../mfc/registration.md)  
 Viene descritta l'impostazione del server e l'inizializzazione.  
  
 [Server](../mfc/servers.md)  
 Viene descritto come creare elementi OLE \(o componenti\) che verrà utilizzata dalle applicazioni contenitori.  
  
 [Tracker](../mfc/trackers.md)  
 Vengono fornite informazioni sulla classe di `CRectTracker`, che fornisce un'interfaccia grafica per consentire agli utenti di interagire con gli elementi client OLE.  
  
## Sezioni correlate  
 [Punti di connessione](../mfc/connection-points.md)  
 Viene illustrato come implementare i punti di connessione \(precedentemente noto come punti di connessione OLE\) utilizzando le classi MFC `CCmdTarget` e `CConnectionPoint`.  
  
 [componenti COM contenitore\/server](../mfc/containers-advanced-features.md)  
 Vengono descritti i passaggi necessari per includere funzionalità avanzate facoltative nelle applicazioni contenitori esistenti.  
  
 [Il modello COM \(Component Object Model\)](http://msdn.microsoft.com/library/windows/desktop/ms694363)  
 Vengono descritti tramite OLE senza MFC.  
  
## Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)