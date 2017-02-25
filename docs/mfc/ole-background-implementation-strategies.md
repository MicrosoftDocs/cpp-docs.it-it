---
title: "Sfondo OLE: strategie di implementazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applicazioni [OLE], implementazione OLE"
  - "OLE [C++], strategia di sviluppo"
  - "applicazioni OLE [C++], implementazione OLE"
ms.assetid: 0875ddae-99df-488c-82c6-164074a81058
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Sfondo OLE: strategie di implementazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

A seconda dell'applicazione, esistono quattro strategie di implementazione possibili per l'aggiunta del supporto OLE:  
  
-   Si scrive una nuova applicazione.  
  
     Questa situazione richiede in genere il minor lavoro.  Si esegue la Creazione guidata applicazione MFC e si seleziona il Supporto Funzionalità Avanzate o Documento Composto per creare una struttura applicazione.  Per informazioni su queste opzioni e su cosa fanno, vedere l'articolo [Creare un programma EXE MFC](../mfc/reference/mfc-application-wizard.md).  
  
-   Si dispone di un programma creato con la versione 2,0 o superiore della libreria MFC che non supporta OLE.  
  
     Creare una nuova applicazione con la Creazione guidata applicazione MFC come menzionato in precedenza quindi copiare e incollare il codice dalla nuova applicazione nell'applicazione esistente.  Questa tecnica funziona per i server, i contenitori o le applicazioni automatiche.  Vedere l'esempio MFC [SCRIBBLE](../top/visual-cpp-samples.md) per un esempio di questa strategia.  
  
-   Si dispone di un programma della libreria MFC che implementa il supporto OLE di versione 1,0.  
  
     Vedere [Nota tecnica 41 MFC](../mfc/tn041-mfc-ole1-migration-to-mfc-ole-2.md) per questa strategia di conversione.  
  
-   Si dispone di un'applicazione che non è stata scritta utilizzando le classi Microsoft Foundation che può aver implementare il supporto OLE oppure no.  
  
     Questa situazione richiede il lavoro maggiore.  Un approccio consiste nel creare una nuova applicazione, come descritto nella prima strategia e quindi copiare e incollare il codice esistente in essa.  Se il codice esistente è scritto in C, potrebbe quindi essere necessario modificarlo in modo da poterlo compilare come codice C\+\+.  Se il codice C chiama le API di Windows, allora non è necessario modificarlo per utilizzare le classi di Microsoft Foundation.  Questo approccio richiederà probabilmente alcune ristrutturazioni del programma per supportare l'architettura documento\/visualizzazione utilizzata nelle versioni 2,0 e superiori delle classi di Microsoft Foundation.  Per ulteriori informazioni su questa architettura, vedere [Nota tecnica 25](../mfc/tn025-document-view-and-frame-creation.md).  
  
 Una volta scelta una strategia, è consigliabile leggere gli articoli [Server](../mfc/servers.md) o [Contenitori](../mfc/containers.md) \(a seconda del tipo di applicazione che si sta scrivendo\) o esaminare i programmi di esempio, oppure entrambi.  Gli esempi OLE MFC [OCLIENT](../top/visual-cpp-samples.md) e [HIERSVR](../top/visual-cpp-samples.md) mostrano come implementare i vari aspetti di contenitori e server, rispettivamente.  In vari punti in questi articoli, verrà fatto riferimento ad alcune funzioni riportate in questi esempi come esempi delle tecniche che vengono trattate.  
  
## Vedere anche  
 [Sfondo OLE](../mfc/ole-background.md)   
 [Contenitori: implementazione di un contenitore](../mfc/containers-implementing-a-container.md)   
 [Server: implementazione di un server](../mfc/servers-implementing-a-server.md)   
 [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md)