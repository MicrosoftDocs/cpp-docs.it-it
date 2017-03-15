---
title: "Aggiunta di un gestore messaggi ATL | Microsoft Docs"
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
  - "ATL, gestori messaggi"
  - "ATL, finestre"
  - "message handlers [C++]"
  - "message handling [C++], ATL message handler"
  - "windows [C++], ATL"
ms.assetid: cdea38a1-0d9b-4f8d-bbd5-b4f063fb3eeb
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Aggiunta di un gestore messaggi ATL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per aggiungere un gestore messaggi \(una funzione membro che gestisce i messaggi di Windows a un controllo, è necessario innanzitutto selezionare il controllo in Visualizzazione classi.  Aprire la finestra **Proprietà**, selezionare l'icona **Messaggi** e fare clic sul controllo a discesa nella casella opposto al messaggio richiesto.  Si aggiungerà una dichiarazione del gestore messaggi nel file di intestazione e in una struttura di implementazioni del controllo del gestore nel file CPP del controllo.  Aggiunge la mappa messaggi e aggiungere una voce al gestore.  
  
 L'aggiunta di un gestore di messaggi in ATL è simile all'aggiungere un gestore messaggi a una classe MFC.  Vedere [Aggiunta di un gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md) per ulteriori informazioni.  
  
 Le condizioni seguenti si applicano solo a aggiungere un gestore messaggi ATL:  
  
-   I gestori messaggi alla stessa convenzione di denominazione di MFC.  
  
-   Nuove voci della mappa messaggi aggiunti nella mappa messaggi principale.  La procedura guidata non riconosce le mappe messaggi alternate e concatenare.  
  
## Vedere anche  
 [Implementing a Window](../atl/implementing-a-window.md)