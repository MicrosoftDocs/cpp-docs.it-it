---
title: "TN070: nomi delle classi di finestre MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.classes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TN070"
  - "nomi delle classi di finestra"
ms.assetid: 90617912-dd58-4a7c-9082-ced71736d7cd
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# TN070: nomi delle classi di finestre MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Le finestre di MFC utilizzano un nome di classe creati in modo dinamico che riflette le funzionalità della finestra.  MFC genera dinamicamente i nomi delle classi per le finestre, le visualizzazioni e le finestre popup prodotte dall'applicazione.  Le finestre di dialogo e i comandi prodotti da un'applicazione MFC hanno il nome di fornito per la classe di finestra in questione.  
  
 È possibile sostituire il nome della classe dinamica fornita registrando una propria classe della finestra e utilizzandola nell'override di [PreCreateWindow](../Topic/CWnd::PreCreateWindow.md).  I nomi delle classi MFC forniti corrispondenti hanno uno dei due formati seguenti:  
  
```  
Afx:%x:%x  
Afx:%x:%x:%x:%x:%x  
```  
  
 Le cifre esadecimali che sostituiscono i caratteri di `%x` vengono compilate dai dati dalla struttura di [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576).  MFC utilizza questa tecnica che consente di condividere più classi C\+\+ che richiedono le strutture identiche di **WNDCLASS** la stessa classe della finestra registrata.  A differenza della maggior parte delle applicazioni semplici Win32, le applicazioni MFC hanno un solo **WNDPROC**, pertanto è possibile condividere facilmente le strutture di **WNDCLASS** per risparmiare tempo e memoria.  I valori sostituibili per i caratteri di `%x` indicati in precedenza sono le seguenti:  
  
-   **WNDCLASS.hInstance**  
  
-   **WNDCLASS.style**  
  
-   **WNDCLASS.hCursor**  
  
-   **WNDCLASS.hbrBackground**  
  
-   **WNDCLASS.hIcon**  
  
 Il primo form \(`Afx:%x:%x`\) viene utilizzato quando **hCursor**, **hbrBackground** e **hIcon** sono qualsiasi **NULL**.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)   
 [TN020: convenzioni di numerazione e denominazione ID](../mfc/tn020-id-naming-and-numbering-conventions.md)