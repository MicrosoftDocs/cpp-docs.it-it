---
title: "Classi di routing dei comandi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.command"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "comandi (routing), classi"
  - "MFC, comandi (routing)"
ms.assetid: 4b50e689-2c54-4e6c-90f0-37333e22b2a1
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classi di routing dei comandi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando l'utente interagisce con l'applicazione scegliendo i menu o sui pulsanti della barra di controllo con il mouse, l'applicazione invia messaggi dall'oggetto dell'effetto a un oggetto appropriato di destinazione comando.  Le classi di destinazione comando derivate da `CCmdTarget` includono [CWinApp](../mfc/reference/cwinapp-class.md), [CWnd](../mfc/reference/cwnd-class.md), [CDocTemplate](../mfc/reference/cdoctemplate-class.md), [CDocument](../mfc/reference/cdocument-class.md), [CView](../mfc/reference/cview-class.md) e le classi derivate da esse.  Il framework supporta il routing di comandi automatico in modo da poter gestire attualmente i controlli dalla maggior parte oggetto appropriato attivo nell'applicazione.  
  
 Un oggetto di classe `CCmdUI` vengono passati ai gestori dell'interfaccia utente del comando di aggiornamento delle destinazioni comando \([ON\_UPDATE\_COMMAND\_UI](../Topic/ON_UPDATE_COMMAND_UI.md)\) per consentire di aggiornare lo stato dell'interfaccia utente per un determinato comando, ad esempio verificare o rimuovere il controllo dalle voci di menu.  Per chiamare le funzioni membro dell'oggetto di `CCmdUI` per aggiornare lo stato dell'oggetto dell'interfaccia utente.  Questo processo è identico sia l'oggetto dell'interfaccia utente associato un determinato comando è una voce di menu o un pulsante o entrambi.  
  
 [CCmdTarget](../mfc/reference/ccmdtarget-class.md)  
 Funge da classe base per tutte le classi di oggetti che possono ricevere e risposta ai messaggi.  
  
 [CCmdUI](../mfc/reference/ccmdui-class.md)  
 Fornisce un'interfaccia di programmazione per aggiornare gli oggetti dell'interfaccia utente quali le voci di menu e pulsanti delle barre di controllo.  L'oggetto di destinazione comando abilita, disabilita, controllare e\/o deselezionare l'oggetto dell'interfaccia utente a questo oggetto.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)