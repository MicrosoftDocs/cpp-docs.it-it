---
title: "// Commento all&#39;implementazione | Microsoft Docs"
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
  - "commenti, commenti all'implementazione"
  - "commenti, MFC"
  - "commenti all'implementazione in file di origine MFC"
  - "MFC (file di origine), commento all'implementazione"
ms.assetid: 4d799c07-8e71-4a6b-90ab-8282d6ff48ce
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# // Commento all&#39;implementazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La sezione di `// Implementation` è la parte importante di qualsiasi dichiarazione di classe MFC.  
  
 Il case di questa sezione tutti i dettagli di implementazione.  Sia le variabili membro che le funzioni membro possono essere visualizzati in questa sezione.  Tutto in questa riga potrebbe subire modifiche nelle versioni future di MFC.  A meno che non sia possibile evitarlo, non deve basarsi sui dettagli nella riga di `// Implementation`.  Inoltre, i membri dichiarati nella riga di implementazione non documentati, anche se una determinata implementazione è discussa nelle note tecniche.  Override di funzioni virtuali nella classe base risiedono in questa sezione, indipendentemente dalla sezione la funzione di classe base è definita in, perché il fatto che una funzione di override l'implementazione della classe base è considerato un dettaglio di implementazione.  In genere, questi membri sono protetti non sempre, ma.  
  
 Avviso da `CStdioFile` che vengono elencati sotto [Un esempio di commenti](../mfc/an-example-of-the-comments.md) che i membri dichiarati nel commento di `// Implementation` possono essere dichiarati come **public**, `protected`, o `private`.  È consigliabile utilizzare solo con cautela questi membri, poiché potrebbero cambiare in futuro.  La dichiarazione del gruppo di membri quali **public** può essere necessaria per l'implementazione della libreria di classi funzioni correttamente.  Tuttavia, questo non significa che è possibile utilizzare i membri dichiarati così.  
  
> [!NOTE]
>  È possibile trovare i commenti dei tipi rimanenti sopra o sotto il commento di `// Implementation`.  In entrambi i casi, vengono descritti i tipi di membri dichiarati in esse.  Se si verificano nel commento di `// Implementation`, occorre considerare che i membri possono subire modifiche nelle versioni future di MFC.  
  
## Vedere anche  
 [Utilizzo dei file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [Esempio dei commenti](../mfc/an-example-of-the-comments.md)   
 [\/\/ Commento sui costruttori](../mfc/decrement-constructors-comment.md)   
 [\/\/ Commento sugli attributi](../mfc/decrement-attributes-comment.md)   
 [\/\/ Commento sulle operazioni](../mfc/decrement-operations-comment.md)   
 [\/\/ Commento sui sottoponibili a override](../mfc/decrement-overridables-comment.md)