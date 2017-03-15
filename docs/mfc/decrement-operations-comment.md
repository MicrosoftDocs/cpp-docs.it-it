---
title: "// Commento sulle operazioni | Microsoft Docs"
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
  - "MFC (file di origine), commento sulle operazioni"
  - "commento sulle operazioni in file di origine MFC"
ms.assetid: f3bff48d-26be-4db6-8435-9e4d079838c9
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# // Commento sulle operazioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La sezione di `// Operations` di una dichiarazione di classe MFC contiene le funzioni membro che è possibile chiamare l'oggetto per farvi si apportano operazioni o si eseguono azioni \(eseguire operazioni\).  Queste funzioni vengono**const** in genere perché in genere non hanno effetti collaterali.  Possono essere virtuali o non virtuali a seconda delle esigenze di classe.  In genere, questi membri sono pubblici.  
  
 Nell'elenco di esempio da classe `CStdioFile`, in [Un esempio di commenti](../mfc/an-example-of-the-comments.md), l'elenco comprende due funzioni membro in questo commento: `ReadString` e `WriteString`.  
  
 Come con attributi, operazioni possono essere ulteriormente suddiviso.  
  
## Vedere anche  
 [Utilizzo dei file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [Esempio dei commenti](../mfc/an-example-of-the-comments.md)   
 [\/\/ Commento all'implementazione](../mfc/decrement-implementation-comment.md)   
 [\/\/ Commento sui costruttori](../mfc/decrement-constructors-comment.md)   
 [\/\/ Commento sugli attributi](../mfc/decrement-attributes-comment.md)   
 [\/\/ Commento sui sottoponibili a override](../mfc/decrement-overridables-comment.md)