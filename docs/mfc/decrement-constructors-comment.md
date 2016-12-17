---
title: "// Commento sui costruttori | Microsoft Docs"
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
  - "commenti, commento sui costruttori"
  - "commenti, MFC"
  - "costruttori [C++], dichiarazione"
  - "commento sui costruttori"
  - "dichiarazioni, costruttori"
  - "dichiarazione dei costruttori, commenti del codice"
  - "costruttori di istanza, commenti del codice"
  - "MFC (file di origine), commento sui costruttori"
ms.assetid: f400774e-ba85-49ed-85b7-70ef2f7dcb2b
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# // Commento sui costruttori
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La sezione di `// Constructors` di una dichiarazione di classe MFC dichiara i costruttori \(in l C\+\+\) e tutte le funzioni di inizializzazione richieste effettivamente di utilizzare l'oggetto.  Ad esempio, `CWnd::Create` si trova nella sezione dei costruttori perché prima di utilizzare l'oggetto di `CWnd`, "deve essere completamente costruito" innanzitutto chiamato il costruttore C\+\+ quindi chiamando la funzione di **Crea**.  In genere, questi membri sono pubblici.  
  
 Ad esempio, la classe `CStdioFile` dispone di tre costruttori, uno dei quali viene visualizzato nell'elenco in [Un esempio di commenti](../mfc/an-example-of-the-comments.md).  
  
## Vedere anche  
 [Utilizzo dei file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [\/\/ Commento all'implementazione](../mfc/decrement-implementation-comment.md)   
 [\/\/ Commento sugli attributi](../mfc/decrement-attributes-comment.md)   
 [\/\/ Commento sulle operazioni](../mfc/decrement-operations-comment.md)   
 [\/\/ Commento sui sottoponibili a override](../mfc/decrement-overridables-comment.md)