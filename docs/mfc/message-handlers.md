---
title: "Gestori di messaggi | Microsoft Docs"
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
  - "comandi (gestione), gestori messaggi"
  - "gestori"
  - "gestori, comando"
  - "gestori, messaggio"
  - "gestori messaggi"
  - "gestione dei messaggi, funzioni del gestore messaggi"
ms.assetid: 51bc4e76-dbe3-4cc2-b026-3199d56b2fa9
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Gestori di messaggi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In MFC, *una funzione di gestione* dedicata elabora ogni messaggio separato.  Le funzioni del gestore di messaggi sono funzioni membro di una classe.  Questa documentazione utilizza i termini *funzione membro per la gestione dei messaggi*, *funzione del gestore dei messaggi*, *gestore messaggi* e *gestore* indifferentemente.  Alcuni tipi di gestori messaggi vengono chiamati gestori comando "."  
  
 La scrittura dei gestori di messaggi rappresenta una notevole percentuale del lavoro nella scrittura di un'applicazione del framework.  La famiglia dell'articolo viene descritto il funzionamento del meccanismo di elaborazione dei messaggi.  
  
 Attività che il gestore per un messaggio fare?  Scegliere qualsiasi si desidera eseguito in risposta al messaggio.  È possibile creare gestori utilizzando la Finestra Proprietà della classe e infine compilare il codice del gestore utilizzando l'editor del codice sorgente.  
  
 È possibile utilizzare tutte le funzionalità di Microsoft Visual C\+\+ e MFC per creare i gestori.  Per un elenco di tutte le classi, vedere [Cenni preliminari sulla libreria di classi](../mfc/class-library-overview.md) nel *Riferimento MFC*.  
  
## Vedere anche  
 [Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)