---
title: "Illustrazione del routing dei comandi | Microsoft Docs"
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
  - "comandi (gestione), routing di comandi"
  - "comandi (routing), OnCmdMsg (gestore)"
  - "MFC, comandi (routing)"
ms.assetid: 4b7b4741-565f-4878-b076-fd85c670f87f
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Illustrazione del routing dei comandi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per illustrare, si consideri un messaggio di comando da una cancella qualsiasi voce del menu Modifica di un'applicazione MDI.  Si supponga che la funzione di gestione per questo comando sia per essere una funzione membro della classe document dell'applicazione.  Di seguito viene illustrato come il comando raggiunge il relativo gestore dopo che l'utente sceglie la voce di menu:  
  
1.  La finestra cornice principale riceve il messaggio di comando per primo.  
  
2.  La finestra cornice principale MDI fornisce attualmente alla finestra figlio MDI attiva la possibilità di gestire il comando.  
  
3.  Il routing standard di una finestra cornice figlio MDI fornisce il proprio punto di vista una probabilità al comando prima di archiviare la propria mappa messaggi.  
  
4.  La visualizzazione controlli della propria mappa messaggi prima e non, cercando gestore, le route il seguente comando al documento collegato.  
  
5.  Il documento controlla la mappa messaggi e cerca un gestore.  Questa funzione membro documento viene chiamata e interruzioni di routing.  
  
 Se il documento non è un gestore, dopo indirizzerebbe il comando al modello di documento.  Immettere il comando restituisce la visualizzazione e nella finestra cornice.  Infine, la finestra cornice controllerebbe la mappa messaggi.  Se il controllo ha esito negativo, anche il comando verrebbe indirizzato della finestra cornice principale MDI e quindi all'oggetto applicazione \- la destinazione finale dei controlli non gestiti.  
  
## Vedere anche  
 [Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)