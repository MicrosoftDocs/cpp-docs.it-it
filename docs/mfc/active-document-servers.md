---
title: "Server documenti attivi | Microsoft Docs"
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
  - "server documenti attivi [C++]"
  - "documenti attivi [C++], server"
  - "server [C++], documento attivo"
ms.assetid: 131fec1e-02a0-4305-a7ab-903b911232a7
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Server documenti attivi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I server di documenti attivi come documenti host di Word, Excel o PowerPoint di altri tipi di applicazione sono denominati documenti attivi.  A differenza degli oggetti incorporati OLE \(che sono semplicemente mostrati nella pagina di un altro documento\), documenti attivi forniscono l'interfaccia completa e completano la funzionalità nativa dell'applicazione server che li crea.  Gli utenti possono creare documenti utilizzando l'intera potenza delle loro applicazioni preferite \(se hanno attivato documento attivo\), ma possono considerare il progetto risultante come una sola entità.  
  
 I documenti attivi possono avere più pagine e sono sempre attivi sul posto.  Parte di controllo dei documenti attivi dell'interfaccia utente, uniscono i propri menu con i menu **File** e **Aiuto** del contenitore.  Occupa l'intera area di modifica del contenitore e controllano le visualizzazioni e il layout della pagina della stampante \(margini, piè di pagina, e così via\).  
  
 MFC implementa i server di documenti attivi con le interfacce documento\/visualizzazione, le mappe di invio di comando, la stampa, la gestione dei menu e la gestione del Registro.  I requisiti specifici di programmazione sono trattati in [documenti attivi](../mfc/active-documents.md).  
  
 MFC supporta i documenti attivi con la classe [CDocObjectServer](../mfc/reference/cdocobjectserver-class.md), derivata da [CCmdTarget](../mfc/reference/ccmdtarget-class.md) e da [CDocObjectServerItem](../mfc/reference/cdocobjectserveritem-class.md), derivata da [COleServerItem](../mfc/reference/coleserveritem-class.md).  MFC supporta i contenitori di documenti attivi con la classe [COleDocObjectItem](../mfc/reference/coledocobjectitem-class.md), derivata da [COleClientItem](../mfc/reference/coleclientitem-class.md).  
  
 `CDocObjectServer` esegue il mapping delle interfacce del documento attivo e inizializza e attiva un documento attivo.  MFC fornisce inoltre le macro per la gestione del routing dei comandi nei documenti attivi.  Per l'utilizzo di documenti attivi nell'applicazione, importare AfxDocOb.h nel file StdAfx.h.  
  
 Un server MFC regolare aggancia la propria classe derivata `COleServerItem`.  La Creazione guidata di un'applicazione MFC genera questa classe automaticamente se si seleziona la casella di controllo **Server completo** o **Mini\-server** per fornire il supporto del documento composito del server dell'applicazione.  Se inoltre si seleziona la casella di controllo **Server documenti attivi**, la Creazione guidata di applicazione MFC genera una classe derivata da `CDocObjectServerItem`.  
  
 La classe `COleDocObjectItem` consente a un contenitore OLE di diventare un contenitore di documenti attivi.  È possibile utilizzare la Creazione guidata di applicazione MFC per creare un contenitore di documenti attivi selezionando la casella di controllo **Contenitore documento attivo** nella pagina di supporto del documento composito della Creazione guidata applicazione MFC.  Per ulteriori informazioni, vedere [Creare un'applicazione contenitore di documenti attivi](../mfc/creating-an-active-document-container-application.md).  
  
## Vedere anche  
 [Contenimento dei documenti attivi](../mfc/active-document-containment.md)