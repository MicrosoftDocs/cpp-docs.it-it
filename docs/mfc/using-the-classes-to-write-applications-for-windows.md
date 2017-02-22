---
title: "Utilizzo delle classi per la creazione di applicazioni per Windows | Microsoft Docs"
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
  - "applicazioni [OLE], framework applicazione MFC"
  - "applicazioni di database [C++], creazione"
  - "MFC [C++], sviluppo di applicazioni"
  - "MFC (controlli ActiveX), creazione"
  - "applicazioni OLE [C++], framework applicazione MFC"
  - "applicazioni Windows [C++], framework applicazione MFC"
ms.assetid: 73f63470-857d-43dd-9a54-b38b7be0f1b7
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Utilizzo delle classi per la creazione di applicazioni per Windows
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Accetta raccolta, le classi della libreria MFC \(Microsoft Foundation Class \(MFC\) "costituiscono un framework di applicazione," su cui si compila un'applicazione in sistema operativo Windows.  A un livello molto generale, il framework definisce la struttura di un'applicazione e fornisce un'implementazione standard dell'interfaccia utente che possono essere posizionate nello schema.  Il processo il programmatore consiste nel compilare il resto dello scheletro, ovvero le operazioni specifiche all'applicazione.  È possibile ottenere un vantaggio acquisito all'inizio di una gara utilizzando la Creazione guidata applicazione MFC per creare i file di un'applicazione molto approfondita iniziali.  Si utilizzano gli editor di risorse di Microsoft Visual C\+\+ per progettare gli elementi dell'interfaccia utente visivamente, i controlli di Visualizzazione classi connettere gli elementi per la codifica e la libreria di classi per implementare la logica specifica dell'applicazione.  
  
 Versione 3,51 le versioni 3,0 e successive di programmazione supporti del framework MFC per le piattaforme Win32, compreso Microsoft Windows 95 e versioni successive e Windows NT e successive.  Il supporto MFC Win32 include il multithreading.  Utilizzare la versione 1,5*x* per eseguire la programmazione a 16 bit.  
  
 La famiglia di articoli elencati i cenni preliminari sul framework applicazione.  Anche esplora oggetti principali che costituiscono l'applicazione e come vengono creati.  Tra gli argomenti trattati in questi articoli sono i seguenti:  
  
-   [Il framework](../mfc/framework-mfc.md).  
  
-   Suddivisione del lavoro tra il framework e il codice, come descritto in [Compilazione in Framework](../mfc/building-on-the-framework.md).  
  
-   [La classe application](../mfc/cwinapp-the-application-class.md), che incapsula funzionalità a livello di applicazione.  
  
-   Come [modelli di documento](../mfc/document-templates-and-the-document-view-creation-process.md) crea e gestisce i documenti e le visualizzazioni e le finestre collegati.  
  
-   Classe [CWnd](../mfc/window-objects.md), la classe base radice di tutte le finestre.  
  
-   [Oggetti grafici](../mfc/graphic-objects.md), come penne e pennelli.  
  
 Altre parti del framework includono:  
  
-   [Oggetti Window: Panoramica](../mfc/window-objects.md)  
  
-   [Gestione dei messaggi e il mapping](../mfc/message-handling-and-mapping.md)  
  
-   [CObject, la classe base radice in MFC](../mfc/using-cobject.md)  
  
-   [L'architettura documento\/visualizzazione](../mfc/document-view-architecture.md)  
  
-   [Finestre di dialogo](../mfc/dialog-boxes.md)  
  
-   [Controlli](../mfc/controls-mfc.md)  
  
-   [Barre di controllo](../mfc/control-bars.md)  
  
-   [OLE](../mfc/ole-in-mfc.md)  
  
-   [Gestione della memoria](../mfc/memory-management.md)  
  
     Oltre a fornire un vantaggio in applicazioni di scrittura del sistema operativo Windows, MFC rende molto più semplice scrivere applicazioni che specificamente utilizzano OLE che collega e che incorpora la tecnologia.  È possibile rendere all'applicazione un contenitore di modifica visiva OLE, il server di modifica visiva OLE o entrambe, e aggiungere l'automazione in modo da poter utilizzare gli oggetti dall'applicazione o addirittura determinarlo altre applicazioni in modalità remota.  
  
-   [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)  
  
     Il kit \(CDK\) di sviluppo di controlli OLE è completamente integrata con il framework.  La famiglia dell'articolo vengono forniti cenni preliminari sullo sviluppo di controlli ActiveX con MFC. \(Controlli ActiveX in precedenza sono stati definiti controlli OLE.\)  
  
-   [La programmazione di database](../data/data-access-programming-mfc-atl.md)  
  
     MFC fornisce anche due set di classi di database che semplificano le applicazioni di accesso ai dati di scrittura.  Mediante le classi di database ODBC, è possibile connettersi al database tramite un driver ODBC \(open database connectivity\), i record selezionati dalle tabelle e per registrare informazioni visualizzate in un form sullo schermo.  Utilizzo di classi di \(DAO\) dell'oggetto di accesso ai dati, è possibile lavorare con database tramite il motore di database Microsoft Jet o origini dati esterne \(non Jet\), incluse le origini dati ODBC.  
  
     Inoltre, MFC supporta è abilitato per la scrittura di applicazioni che utilizzano il formato Unicode e set di caratteri multibyte \(MBCS\), in particolare i set di caratteri \(DBCS\) a byte doppio.  
  
 Per una descrizione generale alla documentazione MFC, vedere [Argomenti generali di MFC](../mfc/general-mfc-topics.md).  
  
## Vedere anche  
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)