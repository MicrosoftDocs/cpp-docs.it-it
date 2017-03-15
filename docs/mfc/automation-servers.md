---
title: "Server di automazione | Microsoft Docs"
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
  - "server di automazione"
  - "COM (componenti), server di automazione"
  - "mappe di invio, server di automazione"
  - "server, automazione"
ms.assetid: 523fd155-51ce-4f91-b986-b74bdbdd7d92
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Server di automazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'automazione fa sì che l'applicazione modificare gli oggetti implementati in un'altra applicazione, o esporre oggetti in modo da poter essere modificati.  Un server di automazione è un'applicazione che espone gli oggetti programmabili \(chiamati oggetti ActiveX\) ad altre applicazioni \(chiamate [Client di automazione](../mfc/automation-clients.md)\).  I server di automazione sono talvolta denominati componenti di automazione.  
  
 Esporre gli oggetti di automazione consente ai client per automatizzare alcune procedure accedendo direttamente agli oggetti e le funzionalità fornite dal server rende disponibile.  Esporre oggetti è utile quando le applicazioni forniscono funzionalità risulta utile per altre applicazioni.  Ad esempio, un elaboratore di testi potrebbe esporre la funzionalità di controllo ortografico in modo utilizzabile da altri programmi.  L'esposizione degli oggetti consente ai fornitori per migliorare le funzionalità delle applicazioni tramite la funzionalità preparata di altre applicazioni.  
  
 Questi oggetti ActiveX presentano proprietà e metodi come come interfaccia esterna.  Le proprietà sono denominate attributi dell'oggetto ActiveX.  Le proprietà sono come membri dati della classe c\+\+.  I metodi sono funzioni che operano a oggetti di automazione.  I metodi sono analoghe alle funzioni membro pubbliche della classe c\+\+.  
  
> [!NOTE]
>  Anche se le proprietà sono come membri dati C\+\+, non sono accessibili direttamente.  Per fornire l'accesso trasparente, installare una variabile interna nell'oggetto ActiveX con una coppia di ottenere\/funzioni del membro del gruppo di accedervi.  
  
 Esponendo la funzionalità dell'applicazione tramite un'interfaccia comune e definita chiaramente, automazione consente di compilare applicazioni in un unico linguaggio di programmazione generale come Microsoft Visual Basic anziché in diversi, macr\-linguaggio specifici.  
  
##  <a name="_core_support_for_automation_servers"></a> Supporto per i server di automazione  
 Visual C\+\+ e il framework MFC forniscono un ampio supporto per i server di automazione.  Gestire gran lunga l'overhead legate alla creazione di server di automazione, pertanto è possibile concentrare l'attenzione su della funzionalità dell'applicazione.  
  
 Il meccanismo principale del framework per l'automazione della mappa è send, un set di macro che si espande nelle dichiarazioni e chiama necessario per esporre metodi e proprietà per OLE.  L'aspetto tipici di una mappa di invio l'aspetto seguente:  
  
 [!code-cpp[NVC_MFCAutomation#1](../mfc/codesnippet/CPP/automation-servers_1.cpp)]  
  
 La Finestra Proprietà e la Visualizzazione classi consentono di gestire le mappe di invio.  Quando si aggiunge un nuovo metodo o proprietà a una classe, Visual C\+\+ aggiunge `DISP_FUNCTION` o una macro corrispondente di `DISP_PROPERTY` con parametri che indicano il nome della classe, i nomi esterni e interni del metodo o la proprietà e i tipi di dati.  
  
 La finestra di dialogo **Add Class** semplifica inoltre la dichiarazione di classi di automazione e la gestione delle relative proprietà e operazioni.  Quando si utilizza la finestra di dialogo aggiungi classe per aggiungere una classe Al progetto, specificare la classe di base.  Se la classe base consente all'automazione, controlli di visualizzata la finestra di dialogo aggiungi classe utilizzate per specificare se la nuova classe deve supportare l'automazione, se è "creabile OLE" ovvero se gli oggetti della classe possono essere creati in una richiesta da un client COM\) e il nome esterno per il client COM utilizzare.  
  
 La finestra di dialogo **Add Class** crea quindi una dichiarazione di classe, incluse le macro appropriate per le funzionalità che OLE specificato.  Inoltre aggiunge codice di base per l'implementazione delle funzioni membro della classe.  
  
 La Creazione guidata applicazione MFC semplifica delle procedure al togliersi l'applicazione server di automazione da zero.  Se si seleziona la casella di controllo **Automazione** dalla pagina di **Funzionalità avanzate**, la Creazione guidata applicazione MFC aggiunto alla funzione di `InitInstance` dell'applicazione le chiamate richieste di registrare gli oggetti di automazione e di eseguire l'applicazione come server di automazione.  
  
### Scegliere l'argomento con cui si desidera procedere  
  
-   [Informazioni sui client di automazione](../mfc/automation-clients.md)  
  
-   [Acquisire ulteriori informazioni su CCmdTarget classe](../mfc/reference/ccmdtarget-class.md)  
  
-   [Ulteriori informazioni sulla classe COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md)  
  
## Vedere anche  
 [automazione](../mfc/automation.md)   
 [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md)