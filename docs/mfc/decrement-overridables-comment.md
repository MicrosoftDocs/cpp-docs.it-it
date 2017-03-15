---
title: "// Commento sui sottoponibili a override | Microsoft Docs"
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
  - "commenti, MFC"
  - "MFC (file di origine), commenti a sottoponibili a override"
  - "commenti a sottoponibili a override in file di origine MFC"
  - "override, commenti a sottoponibili a override in file di origine MFC"
ms.assetid: 8968dea5-0d94-451f-bcb2-991580e65ba2
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# // Commento sui sottoponibili a override
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La sezione di `// Overridables` di una dichiarazione di classe MFC contiene le funzioni virtuali che è possibile eseguire l'override in una classe derivata quando è necessario modificare il comportamento della classe base.  In genere vengono denominate iniziare con " ON ", anche se non è strettamente necessario.  Le funzioni di seguito sono progettate per essere sottoposto a override e spesso implementano o forniscono un buon grado di ordinamento "di callback" o "hook." In genere, questi membri sono protetti.  
  
 In MFC stessa, le funzioni virtuali pure vengono sempre inseriti in questa sezione.  Una funzione virtuale pura in C\+\+ è una del form:  
  
 `virtual void OnDraw( ) = 0;`  
  
 Nell'elenco di esempio da classe `CStdioFile`, in [Un esempio di commenti](../mfc/an-example-of-the-comments.md), l'elenco non include sezione dei overridables.  Classificare **CDocument**, invece, elenchi su 10 funzioni membro sottoponibili a override.  
  
 In alcune classi, è inoltre possibile visualizzare il commento `// Advanced Overridables`.  Queste funzioni vengono che solo i programmatori avanzati devono tentare per eseguire l'override.  Non sarà probabilmente mai eseguire eseguirne l'override.  
  
> [!NOTE]
>  Le convenzioni riportate in questo articolo vengono eseguiti correttamente, in genere per metodi e proprietà di automazione \(precedentemente nota come automazione OLE\).  I metodi di automazione sono simili alle operazioni di MFC.  Proprietà di automazione sono simili agli attributi di MFC.  Eventi di automazione \(supportati per i controlli ActiveX, precedentemente noto come controlli OLE\) sono simili alle funzioni membro overridable MFC.  
  
## Vedere anche  
 [Utilizzo dei file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [Esempio dei commenti](../mfc/an-example-of-the-comments.md)   
 [\/\/ Commento all'implementazione](../mfc/decrement-implementation-comment.md)   
 [\/\/ Commento sui costruttori](../mfc/decrement-constructors-comment.md)   
 [\/\/ Commento sugli attributi](../mfc/decrement-attributes-comment.md)   
 [\/\/ Commento sulle operazioni](../mfc/decrement-operations-comment.md)