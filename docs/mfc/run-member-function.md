---
title: "Funzione membro Run | Microsoft Docs"
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
  - "CWinApp (classe), Run"
  - "message pump in CWinApp::Run"
  - "messaggi, cicli"
  - "Run (metodo), messaggi ed elaborazione durante l'inattività"
  - "WinMain (metodo)"
  - "WinMain (metodo), chiamate CWinApp::Run"
ms.assetid: 24ab7597-2354-495b-9a20-2c8ccc7385b3
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Funzione membro Run
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'applicazione del framework passa la maggior parte del tempo nella funzione membro [Run](../Topic/CWinApp::Run.md) della classe [CWinApp](../mfc/reference/cwinapp-class.md).  Dopo l'inizializzazione, `WinMain` chiama **Run** per elaborare il ciclo di messaggi.  
  
 **Run** scorre un ciclo di messaggi, controlla la coda di messaggi per messaggi disponibili.  Se il messaggio è disponibile, **Run** lo invia per l'azione.  Se non è disponibile, come spesso accade, **Run** chiama `OnIdle` per apportare nel tempo di inattività le elaborazioni richieste dall'utente o dal framework.  Se non sono presenti messaggi o elaborazioni nel tempo di inattività, l'applicazione resta in attesa fino al verificarsi di qualcosa.  Quando l'applicazione termina, **Run** chiama `ExitInstance`.  Nella figura [Funzione membro di OnIdle](../mfc/onidle-member-function.md) viene mostrata la sequenza di azioni nel ciclo di messaggi.  
  
 L'invio del messaggio dipende dal tipo di messaggio.  Per ulteriori informazioni, vedere [Messaggi e controlli in Framework](../mfc/messages-and-commands-in-the-framework.md).  
  
## Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)