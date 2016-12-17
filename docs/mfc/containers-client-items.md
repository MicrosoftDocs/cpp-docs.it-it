---
title: "Contenitori: elementi client | Microsoft Docs"
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
  - "elementi e contenitori OLE client"
  - "contenitori OLE, elementi client"
ms.assetid: 231528b5-0744-4f83-8897-083bf55ed087
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Contenitori: elementi client
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato il significato degli elementi client e da cosa le classi dell'applicazione dovrebbero derivare i relativi elementi client.  
  
 Gli elementi client sono elementi di dati che appartengono a un'altra applicazione in cui sono contenuti, oppure ai quali viene fatto riferimento dal documento di un'applicazione contenitore OLE.  Gli elementi client con dati contenuti nel documento sono incorporati; quelli con dati archiviati in un'altra posizione a cui fa riferimento il documento contenitore sono collegati.  
  
 La classe document in un'applicazione OLE è derivata dalla classe [COleDocument](../mfc/reference/coledocument-class.md) anziché da **CDocument**.  La classe `COleDocument` eredita da **CDocument** tutte le funzionalità necessarie per utilizzare l'architettura documento\/visualizzazione su cui le applicazioni MFC sono basate.  `COleDocument` definisce anche un'interfaccia che riguarda un documento come raccolta di oggetti `CDocItem`.  Numerose funzioni membro `COleDocument` vengono fornite per l'aggiunta, recupero ed eliminazione di elementi della raccolta.  
  
 Ogni applicazione contenitore deve derivare almeno una classe da `COleClientItem`.  Gli oggetti della classe rappresentano elementi incorporati, o collegati, nel documento OLE.  Questi oggetti esistono per la durata del documento in cui sono contenuti, a meno che non vengano eliminati dal documento.  
  
 `CDocItem` rappresenta la classe base per `COleClientItem` e `COleServerItem`.  Gli oggetti di classi derivate da questi due agiscono come intermediari tra l'elemento OLE e le applicazioni client e server, rispettivamente.  Ogni volta che un nuovo elemento OLE verrà aggiunto al documento, il framework MFC aggiunge un nuovo oggetto `COleClientItem`dell'applicazione client \- classe derivata alla raccolta del documento di oggetti `CDocItem`.  
  
## Vedere anche  
 [Contenitori](../mfc/containers.md)   
 [Contenitori: file composti](../mfc/containers-compound-files.md)   
 [Contenitori: problemi dell'interfaccia utente](../mfc/containers-user-interface-issues.md)   
 [Contenitori: funzionalità avanzate](../mfc/containers-advanced-features.md)   
 [COleClientItem Class](../mfc/reference/coleclientitem-class.md)   
 [COleServerItem Class](../mfc/reference/coleserveritem-class.md)