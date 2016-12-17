---
title: "Attivazione: verbi | Microsoft Docs"
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
  - "attivazione [C++], verbi"
  - "verbo di modifica"
  - "OLE [C++], attivazione"
  - "OLE [C++], modifica"
  - "attivazione OLE"
  - "verbo primario"
  - "verbi"
ms.assetid: eb56ff23-1de8-43ad-abeb-dc7346ba7b70
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Attivazione: verbi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo illustra il gioco principale e secondario di ruolo di verbi in [attivazione](../mfc/activation-cpp.md) oLE.  
  
 In genere, fare doppio clic su un elemento incorporato consente all'utente di modificare.  Tuttavia, alcuni elementi non si comportano in questo modo.  Ad esempio, fare doppio clic su un elemento creato con l'applicazione della registrazione di suoni non si apre il server in una finestra separata; invece, riproduce il suono.  
  
 Lo scopo di questa differenza di comportamento prevede che gli elementi della registrazione di suoni "hanno un verbo primario diverso." Il verbo primario è l'azione eseguita quando l'utente fa doppio clic su un elemento OLE.  Per la maggior parte dei tipi di elementi OLE, il verbo primario consiste nella modifica, che viene avviato il server che ha creato l'elemento.  Per alcuni tipi di elementi, quali gli elementi della registrazione di suoni, il verbo primario è gioco.  
  
 Molti tipi di elementi OLE supportano solo un verbo e la modifica è maggior parte di tale comune.  Tuttavia, alcuni tipi di elementi supportano i verbi più.  Ad esempio, modifica di supporto degli elementi della registrazione di suoni verbo secondario.  
  
 Un altro verbo spesso utilizzato è aperto.  Il verbo aperto è identica alla modifica, a meno che l'applicazione server sia attivata in una finestra separata.  Il verbo deve essere utilizzato quando l'applicazione contenitore o l'applicazione server non supporta l'attivazione sul posto.  
  
 Tutti i verbi diverso dal verbo primari devono essere richiamati tramite un comando di sottomenu quando l'elemento è selezionato.  Questo sottomenu contiene tutti i verbi supportati dall'elemento e in genere viene raggiunto dal comando *typename* **comando Oggetto** nel menu **Modifica**.  Per informazioni sul comando di **Object***typename*, vedere l'articolo [Menu e risorse: Aggiunta del contenitore](../mfc/menus-and-resources-container-additions.md).  
  
 I verbi che un'applicazione server supporta vengono elencati nel database di registrazione di windows.  Se l'applicazione server è scritta con la libreria MFC, registrerà automaticamente tutti i verbi quando il server viene avviato.  In caso contrario, è necessario immetterli durante la fase di inizializzazione dell'applicazione server.  Per ulteriori informazioni, vedere l'articolo [Registrazione](../mfc/registration.md).  
  
## Vedere anche  
 [Attivazione](../mfc/activation-cpp.md)   
 [Contenitori](../mfc/containers.md)   
 [Server](../mfc/servers.md)