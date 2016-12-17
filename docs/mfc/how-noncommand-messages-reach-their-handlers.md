---
title: "Come i messaggi Noncommand raggiungono i relativi gestori | Microsoft Docs"
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
  - "gestione dei messaggi [C++], Noncommand (messaggi)"
  - "messaggi [C++], routing"
  - "Noncommand (messaggi)"
  - "messaggi Windows [C++], routing"
ms.assetid: e7df8aef-9fae-41f4-9c11-881d8465f602
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Come i messaggi Noncommand raggiungono i relativi gestori
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

A differenza dei comandi, i messaggi standard di windows non vengano indirizzate attraverso le destinazioni di una catena di comando ma in genere vengono gestiti dalla finestra in cui le finestre invia il messaggio.  La finestra potrebbe essere una finestra cornice principale, finestra figlio MDI, un controllo standard, una finestra di dialogo, una visualizzazione, o un altro tipo di finestra figlio.  
  
 In fase di esecuzione, ogni finestra di windows è associata a un oggetto della finestra \(derivato direttamente o indirettamente da `CWnd`\) con le proprie mappa messaggi e funzioni di gestione collegate.  Il framework utilizza la mappa messaggi \- relative a un comando \- associare i messaggi in arrivo ai gestori.  
  
## Vedere anche  
 [Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)