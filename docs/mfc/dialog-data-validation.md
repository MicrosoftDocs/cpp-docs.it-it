---
title: "Convalida dei dati delle finestre di dialogo | Microsoft Docs"
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
  - "convalida dei dati [C++], finestre di dialogo"
  - "convalida dei dati [C++], finestre di messaggio"
  - "DDV (convalida dei dati delle finestre di dialogo) [C++]"
  - "finestre di dialogo [C++], convalida dei dati"
  - "convalida dei dati [C++], immissione dati della finestra di dialogo"
  - "convalida dei dati [C++], finestre di messaggio"
ms.assetid: f070c309-2044-4ff2-8c92-1ec1ea84af58
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Convalida dei dati delle finestre di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile specificare la convalida oltre allo scambio di dati chiamando le funzioni di DDV, come mostrato nell'esempio in [Scambio di dati della finestra di dialogo](../mfc/dialog-data-exchange.md).  La chiamata di `DDV_MaxChars` nell'esempio convalida che la stringa immessa nel controllo casella di testo non è lunga di 20 caratteri.  La funzione di DDV in genere avvisa l'utente a una finestra di messaggio se la convalida ha esito negativo e spostare lo stato attivo sul controllo che causa il problema in modo che l'utente possa immettere nuovamente i dati.  Una funzione di DDV per un determinato controllo deve essere chiamato subito dopo che la funzione DDX per lo stesso archivia.  
  
 È anche possibile definire la propria classe DDX e le routine di DDV.  Per informazioni dettagliate questo e altri aspetti di DDX e di DDV, vedere [Nota tecnica 26 MFC](../mfc/tn026-ddx-and-ddv-routines.md).  
  
 [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) scriverà tutte le chiamate di DDV e DDX nella mappa di dati.  
  
## Vedere anche  
 [Convalida e DDX \(Dialog Data Exchange\)](../mfc/dialog-data-exchange-and-validation.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)   
 [DDX \(Dialog Data Exchange\)](../mfc/dialog-data-exchange.md)