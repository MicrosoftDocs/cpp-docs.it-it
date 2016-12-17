---
title: "Mapping di messaggi Windows a classi | Microsoft Docs"
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
  - "mapping, messaggi a classe di finestra di dialogo"
  - "mappe messaggi [C++], nella classe della finestra di dialogo"
  - "mappe messaggi [C++], mapping di messaggi Windows a classi"
  - "messaggi a classe di finestra di dialogo"
  - "messaggi a classe di finestra di dialogo, mapping"
  - "MFC (finestre di dialogo), Windows (messaggi)"
  - "messaggi Windows [C++], mapping in classi di finestre di dialogo"
ms.assetid: a4c6fd1f-1d33-47c9-baa0-001755746d6d
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Mapping di messaggi Windows a classi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si desidera che la finestra di dialogo gestione dei messaggi di windows, eseguire l'override delle funzioni di gestione appropriate.  A tale scopo, utilizzare la Finestra Proprietà a [eseguire il mapping dei messaggi](../mfc/reference/mapping-messages-to-functions.md) alla classe della finestra di dialogo.  Si scrive una voce della mappa messaggi per ogni messaggio e aggiunge la funzione membro per la gestione dei messaggi nella classe.  Utilizzare l'editor del codice sorgente di Visual C\+\+ per scrivere codice nei gestori di messaggi.  
  
 È inoltre possibile eseguire l'override delle funzioni membro di [CDialog](../mfc/reference/cdialog-class.md) e delle relative classi base, in particolare [CWnd](../mfc/reference/cwnd-class.md).  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Gestione dei messaggi e il mapping](../mfc/message-handling-and-mapping.md)  
  
-   [Funzioni membro comunemente sottoposte](../mfc/commonly-overridden-member-functions.md)  
  
-   [Funzioni membro in genere aggiunte](../mfc/commonly-added-member-functions.md)  
  
## Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)