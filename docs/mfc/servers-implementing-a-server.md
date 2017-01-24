---
title: "Server: implementazione di un server | Microsoft Docs"
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
  - "applicazioni server OLE, implementazione di server OLE"
  - "server, implementazione"
ms.assetid: 5bd57e8e-3b23-4f23-9597-496fac2d24b5
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Server: implementazione di un server
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato il codice scritto dalla Creazione guidata applicazione MFC per creare un'applicazione server di modifica visiva.  Se non si utilizza la procedura guidata, elenchi di questo articolo le aree in cui è necessario scrivere il codice per implementare un'applicazione server.  
  
 Se si utilizza la creazione guidata applicazione MFC per creare una nuova applicazione server, fornisce una quantità significativa di codice specifico del server per l'utente.  Se si aggiunge la funzionalità server di modifica visiva a un'applicazione esistente, è necessario duplicare il codice scritto dalla creazione guidata applicazione e fornisce prima di aggiungere il resto del codice server necessario.  
  
 Il codice server della procedura guidata applicazione sono inclusi immettere diverse categorie:  
  
-   Definizione di risorse server:  
  
    -   La risorsa menu utilizzata quando il server che sta modificando un elemento incorporato in una finestra.  
  
    -   Le risorse della barra degli strumenti e del menu utilizzare quando il server è attivo sul posto.  
  
     Per ulteriori informazioni su queste risorse, vedere [Menu e risorse: Aggiunta di server](../mfc/menus-and-resources-server-additions.md).  
  
-   Definendo una classe dell'elemento derivata da `COleServerItem`.  Per ulteriori informazioni sugli elementi server, vedere [Server: Elementi server](../mfc/servers-server-items.md).  
  
-   Modificare la classe base della classe di documento in `COleServerDoc`.  Per ulteriori informazioni, vedere [Server: Implementare i documenti server](../mfc/servers-implementing-server-documents.md).  
  
-   Definizione della classe della finestra cornice derivata da `COleIPFrameWnd`.  Per ulteriori informazioni, vedere [Server: Implementare le finestre cornici sul posto](../mfc/servers-implementing-in-place-frame-windows.md).  
  
-   Creando una voce per l'applicazione server nel database di registrazione e registrare in windows la nuova istanza server con il sistema OLE.  Per informazioni su questo argomento, vedere [Registrazione](../mfc/registration.md).  
  
-   Inizializzazione e avviando l'applicazione server.  Per informazioni su questo argomento, vedere [Registrazione](../mfc/registration.md).  
  
 Per ulteriori informazioni, vedere [COleServerItem](../mfc/reference/coleserveritem-class.md), [COleServerDoc](../mfc/reference/coleserverdoc-class.md) e [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md)*in riferimenti alla libreria di classi*.  
  
## Vedere anche  
 [Server](../mfc/servers.md)   
 [Contenitori](../mfc/containers.md)   
 [Menu e risorse \(OLE\)](../mfc/menus-and-resources-ole.md)   
 [Registrazione](../mfc/registration.md)