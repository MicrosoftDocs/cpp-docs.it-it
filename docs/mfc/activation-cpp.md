---
title: "Attivazione (C++) | Microsoft Docs"
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
  - "attivazione di oggetti"
  - "attivazione [C++]"
  - "attivazione [C++], elementi OLE incorporati"
  - "documenti, OLE"
  - "oggetti incorporati"
  - "attivazione sul posto"
  - "attivazione sul posto, elementi collegati e incorporati"
  - "OLE [C++], attivazione"
  - "OLE [C++], modifica"
  - "OLE [C++], attivazione sul posto"
  - "attivazione OLE"
  - "elementi OLE, modifica visiva"
  - "applicazioni server OLE, attivazione"
  - "modifica visiva"
  - "modifica visiva, attivazione"
ms.assetid: ed8357d9-e487-4aaa-aa6b-2edc4de25dfa
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Attivazione (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato il ruolo di attivazione di modifica visiva degli elementi OLE.  Dopo che un utente ha incorporato un elemento OLE in un documento contenitore, potrebbe avere la necessità di utilizzarli.  A tale scopo, l'utente fa doppio clic sull'elemento, che attiva tale elemento.  L'attività più frequente per l'attivazione sta cambiando.  Molti elementi OLE correnti, quando vengono attivati per la modifica, determinano i menu e le barre degli strumenti della finestra cornice corrente verrà modificato in base a quelli che appartengono all'applicazione server che ha creato l'elemento.  Questo comportamento, noto come attivazione sul posto, consente di modificare qualsiasi elemento incorporato in un documento composto senza abbandonare la finestra del documento contenitore.  
  
 È anche possibile modificare gli elementi OLE incorporati in una finestra separata.  Ciò si verifica se il contenitore o l'applicazione server non supporta l'attivazione sul posto.  In questo caso, quando l'utente fa doppio clic su un elemento incorporato, l'applicazione server è attivata in una finestra separata e l'elemento incorporato viene visualizzato come proprio documento.  L'utente modifichi l'elemento in questa finestra.  Quando la modifica è completo, l'utente chiude l'applicazione server e restituisce all'applicazione contenitore.  
  
 In alternativa, l'utente potrà scegliere "apri modifica" con il comando **\<oggetto\> comando Apri** nel menu **Modifica**.  Verrà visualizzato l'oggetto in una finestra separata.  
  
> [!NOTE]
>  Modificare gli elementi incorporati in una finestra separata era comportamento standard nella versione 1 OLE e alcune applicazioni OLE possono supportare solo questo stile della modifica.  
  
 L'attivazione sul posto promuove un approccio basato su documenti sulla creazione del documento.  L'utente può considerare un documento composto come singola entità, funzionante su senza passare tra le applicazioni.  Tuttavia, l'attivazione sul posto viene utilizzata solo per gli elementi incorporati, non per gli elementi collegati: devono essere modificati in una finestra separata.  Questo perché un elemento collegato è effettivamente archiviato in una posizione diversa.  La modifica di un elemento collegato è compresa nel contesto dei dati, ovvero, in cui sono memorizzati.  Modificare un elemento collegato in una finestra separata e riproposta all'utente che i dati appartengono a un altro documento.  
  
 MFC non supporta l'attivazione sul posto annidata.  Se si sviluppa un'applicazione contenitore\/server e tale contenitore\/server è incorporato in un altro contenitore e attivata in sul posto, non può sul posto attivare gli oggetti incorporati all'interno.  
  
 Quanto accade in un elemento incorporato quando l'utente fa doppio clic su dipende dai verbi definiti per l'elemento.  Per informazioni, vedere [Attivazione seguenti: Verbi](../mfc/activation-verbs.md).  
  
## Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)   
 [Contenitori](../mfc/containers.md)   
 [Server](../mfc/servers.md)