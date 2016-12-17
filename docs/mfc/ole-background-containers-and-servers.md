---
title: "Sfondo OLE: contenitori e server | Microsoft Docs"
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
  - "contenitori, applicazioni contenitore OLE"
  - "server completo"
  - "contenitori OLE, applicazioni contenitore"
  - "applicazioni server completo OLE"
  - "applicazioni server OLE, informazioni sulle applicazioni server"
  - "applicazioni server OLE, applicazioni server ridotti"
  - "applicazioni server"
  - "applicazioni server, comunicazione con contenitori"
  - "applicazioni server, definizione"
  - "applicazioni server, server completo e server ridotto"
  - "applicazioni server, requisiti"
ms.assetid: dafbb31d-096c-4654-b774-12900d832919
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Sfondo OLE: contenitori e server
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'applicazione contenitore è un'applicazione che può includere incorporato o gli elementi collegati nei propri documenti.  I documenti gestiti da un'applicazione contenitore devono essere in grado di archiviare e visualizzare componenti OLE documento così come i dati creati dall'applicazione stessa.  Un'applicazione contenitore deve inoltre possibile consentire agli utenti a nuovi elementi inserisci o modificare elementi esistenti da applicazioni server di attivazione se necessario.  I requisiti dell'interfaccia utente di un'applicazione contenitore sono elencati nell'articolo [Contenitori: Problemi dell'interfaccia utente](../mfc/containers-user-interface-issues.md).  
  
 Un'applicazione server o un componente è un'applicazione che può creare componenti OLE di documento nelle applicazioni contenitori.  Di applicazioni server trascinamento di supporto in genere e destinazione o copiare i dati negli Appunti in modo da poter inserire un'applicazione contenitore i dati come incorporato o un elemento collegato.  Un'applicazione può essere sia da un server.  
  
 La maggior parte dei server sono applicazioni autonome o server completo; possono essere eseguite come applicazioni autonome o possono essere avviati da un'applicazione contenitore.  Un miniserver è un tipo speciale di un'applicazione server che può essere avviato solo da un contenitore.  Non può essere eseguito come applicazione autonoma.  I server di Microsoft Graph e Microsoft funzionalità sono esempi di miniservers.  
  
 I contenitori e server non possono comunicare direttamente.  Invece, comunicano tra le librerie a collegamento dinamico OLE \(DLL\) del sistema.  Queste DLL forniscono funzioni che i contenitori e la chiamata di server e contenitori e server forniscono funzioni di callback che chiamano le DLL.  
  
 Utilizzando questo il centro di comunicazione, un contenitore non deve conoscere i dettagli di implementazione dell'applicazione server.  Consente a un contenitore accettare gli elementi creati da qualsiasi server senza dovere definire i tipi di server con cui può essere eseguito.  Di conseguenza, l'utente di un'applicazione contenitore possibile sfruttare le applicazioni e dei formati dati futuri.  Se queste nuove applicazioni sono componenti OLE, pertanto un documento composto possibile includere elementi creati da tali applicazioni.  
  
## Vedere anche  
 [Sfondo OLE](../mfc/ole-background.md)   
 [Sfondo OLE: implementazione MFC](../mfc/ole-background-mfc-implementation.md)   
 [Contenitori](../mfc/containers.md)   
 [Server](../mfc/servers.md)   
 [Contenitori: elementi client](../mfc/containers-client-items.md)   
 [Server: elementi server](../mfc/servers-server-items.md)