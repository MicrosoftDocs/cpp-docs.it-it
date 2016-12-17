---
title: "Recupero di dati da un oggetto Dialog | Microsoft Docs"
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
  - "acquisizione dell'input dell'utente"
  - "dati [MFC], finestre di dialogo"
  - "dati [MFC], recupero"
  - "recupero dei dati [C++], finestre di dialogo"
  - "DDX (Dialog Data Exchange) [C++]"
  - "DDX (Dialog Data Exchange) [C++], informazioni su DDX"
  - "DDX (Dialog Data Exchange) [C++], recupero di dati da un oggetto Dialog"
  - "controlli delle finestre di dialogo [C++], inizializzazione di valori"
  - "dati della finestra di dialogo [C++]"
  - "dati della finestra di dialogo [C++], recupero"
  - "finestre di dialogo [C++], recupero di dati utente"
  - "GetDlgItemText (metodo)"
  - "GetWindowText (metodo)"
  - "MFC (finestre di dialogo), recupero input utente"
  - "recupero dei dati"
  - "SetDlgItemText (metodo)"
  - "SetWindowText (metodo)"
  - "input utente [C++], recupero da finestre dialogo MFC"
ms.assetid: bdca2b61-6b53-4c2e-b426-8712c7a38ec0
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Recupero di dati da un oggetto Dialog
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il framework fornisce un modo semplice per inizializzare i valori dei controlli in una finestra di dialogo e recuperare i valori dai controlli.  L'approccio manuale più laborioso consiste nel chiamare funzioni quali le funzioni membro di `GetDlgItemText` e di `SetDlgItemText` di classe `CWnd`, che si applicano alle finestre di controllo.  Con queste funzioni, è possibile accedere a ciascun controllo singolarmente per impostare o ottenere il valore, le funzioni chiamanti come `SetWindowText` e `GetWindowText`.  L'approccio del framework sia automatizza l'inizializzazione che il recupero.  
  
 Lo scambio di dati della finestra di dialogo \(DDX\) consente di scambiare dati tra i controlli nella finestra di dialogo e delle variabili membro nell'oggetto finestra di dialogo più facilmente.  Questo scambio funziona entrambi i metodi.  Per inizializzare i controlli nella finestra di dialogo, è possibile impostare i valori dei membri dati nell'oggetto finestra di dialogo e il framework trasferirà valori nei controlli prima della finestra di dialogo visualizza.  È quindi possibile in qualsiasi momento aggiornare i membri dati della finestra di dialogo con i dati immessi dall'utente.  A questo punto, è possibile utilizzare i dati riferendoti alle variabili membro dati.  
  
 È anche possibile disporre per i valori dei controlli della finestra di dialogo da convalidare automaticamente con la convalida di dati della finestra di dialogo \(DDV\).  
  
 DDX e DDV vengono spiegate più dettagliatamente in [Scambio di dati e convalida della finestra di dialogo](../mfc/dialog-data-exchange-and-validation.md).  
  
 Per una finestra di dialogo modale, è possibile recuperare tutti i dati immessi dall'utente quando `DoModal` restituisce **IDOK** ma prima dell'oggetto finestra di dialogo eliminato.  Per una finestra di dialogo non modale, è possibile recuperare i dati dall'oggetto finestra di dialogo in qualsiasi momento chiamando `UpdateData` con l'argomento **TRUE** quindi accesso alle variabili membro di classe della finestra di dialogo.  Questo oggetto è illustrato più dettagliatamente in [Scambio di dati e convalida della finestra di dialogo](../mfc/dialog-data-exchange-and-validation.md).  
  
## Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)