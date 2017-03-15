---
title: "// Commento sugli attributi | Microsoft Docs"
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
  - "commenti ad attributi in file di origine MFC"
  - "commenti, Attributes"
  - "MFC (file di origine), Attributes (commento)"
  - "commento ad attributi pubblici"
ms.assetid: 96388e11-42df-4994-aedf-decd152961a7
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# // Commento sugli attributi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La sezione di `// Attributes` di una dichiarazione di classe MFC contiene attributi pubblici o le proprietà dell'oggetto.  In genere questi sono variabili membro, o get\/set di funzioni.  Recupero e funzioni "set" possono non essere virtuali.  Recupero iniziale delle funzioni sono generalmente **const**, perché in molti casi non hanno effetti collaterali.  Questi membri vengono generalmente pubblici; gli attributi protetti e privati in genere nella sezione di implementazione.  
  
 Nell'elenco di esempio da classe `CStdioFile`, in [Un esempio di commenti](../mfc/an-example-of-the-comments.md), l'elenco include una variabile membro, `m_pStream`.  Classificare gli elenchi di `CDC` quasi 20 membri in questo commento.  
  
> [!NOTE]
>  Le classi grandi dimensioni, come `CDC` e `CWnd`, possono avere tanti membri dalla semplice elencare tutti gli attributi in un gruppo non verrebbe aggiunto a molto maggiore chiarezza.  In tali casi, la libreria di classi utilizza altre note come intestazioni ulteriormente per delineare i membri.  Ad esempio, `CDC` utilizza `// Device-Context Functions`, `// Drawing Tool Functions`, `// Drawing Attribute Functions` e così via.  I gruppi che rappresentano gli attributi seguiranno la sintassi comune sopra descritta.  Molte classi OLE dispone di una sezione di implementazione chiamata `// Interface Maps`.  
  
## Vedere anche  
 [Utilizzo dei file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [Esempio dei commenti](../mfc/an-example-of-the-comments.md)   
 [\/\/ Commento all'implementazione](../mfc/decrement-implementation-comment.md)   
 [\/\/ Commento sui costruttori](../mfc/decrement-constructors-comment.md)   
 [\/\/ Commento sulle operazioni](../mfc/decrement-operations-comment.md)   
 [\/\/ Commento sui sottoponibili a override](../mfc/decrement-overridables-comment.md)