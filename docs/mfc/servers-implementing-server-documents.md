---
title: "Server: implementazione di documenti server | Microsoft Docs"
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
  - "applicazioni server OLE, implementazione di server OLE"
  - "applicazioni server OLE, gestione di documenti su server"
  - "documenti server, implementazione"
  - "server, documenti server"
ms.assetid: cca1451a-ad09-47ed-b56e-bccd78fc86d1
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Server: implementazione di documenti server
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo illustra le azioni che è necessario eseguire per implementare correttamente un documento server se non si è specificata l'opzione del server OLE nella creazione guidata applicazione.  
  
#### Per definire una classe document server  
  
1.  Derivare la classe del documento da `COleServerDoc` anziché **CDocument**.  
  
2.  Creare una classe server dell'elemento derivata da `COleServerItem`.  
  
3.  Implementare la funzione membro di `OnGetEmbeddedItem` della classe del documento server.  
  
     `OnGetEmbeddedItem` viene chiamato quando l'utente di un'applicazione contenitore crea o modifica un elemento incorporato.  Deve restituire un elemento che rappresenta l'intero documento.  Deve trattarsi di un oggetto del `COleServerItem`\- classe derivata.  
  
4.  Eseguire l'override della funzione membro di `Serialize` per serializzare il contenuto del documento.  Non è necessario serializzare l'elenco degli elementi server a meno che non si usandoli per rappresentare i dati nativi nel documento.  Per ulteriori informazioni, vedere *implementing gli elementi server* nell'articolo [Server: Elementi server](../mfc/servers-server-items.md).  
  
 Quando un documento server viene creato, il framework automaticamente registrato il documento con le DLL di sistema OLE.  Ciò consente alle DLL di identificare i documenti server.  
  
 Per ulteriori informazioni, vedere [COleServerItem](../mfc/reference/coleserveritem-class.md) e [COleServerDoc](../mfc/reference/coleserverdoc-class.md)*in riferimenti alla libreria di classi*.  
  
## Vedere anche  
 [Server](../mfc/servers.md)   
 [Server: elementi server](../mfc/servers-server-items.md)   
 [Server: implementazione di un server](../mfc/servers-implementing-a-server.md)   
 [Server: implementazione di finestre cornice sul posto](../mfc/servers-implementing-in-place-frame-windows.md)