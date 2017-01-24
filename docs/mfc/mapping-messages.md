---
title: "Mapping dei messaggi | Microsoft Docs"
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
  - "mapping dei comandi"
  - "comandi, connessione a funzioni di gestione"
  - "comandi, mapping"
  - "mapping, comandi"
  - "mapping, messaggi"
  - "gestione dei messaggi, connessione a funzioni di gestione"
  - "mappe messaggi, informazioni sulle mappe messaggi"
  - "messaggi, mapping"
ms.assetid: 996f0652-0698-4b8c-b893-cdaa836d9d0f
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Mapping dei messaggi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ogni classe del framework che può ricevere messaggi o comandi presenta propri "mappa messaggi." Il framework utilizza le mappe messaggi per connettere i messaggi e i controlli alle relative funzioni di gestione.  Qualsiasi classe derivata dalla classe `CCmdTarget` può avere una mappa messaggi.  Altri articoli sono illustrati i messaggi e descritte le modalità di utilizzo.  
  
 Nonostante il nome "mappa messaggi," le mappe messaggi gestione dei messaggi che i controlli \- tutte e tre le categorie di messaggi elencati in [Categorie del messaggio](../mfc/message-categories.md).  
  
## Vedere anche  
 [Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)