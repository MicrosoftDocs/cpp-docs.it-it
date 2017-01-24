---
title: "Utilizzo dei file di origine MFC | Microsoft Docs"
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
  - "MFC (file di origine)"
  - "MFC, file di origine"
  - "accesso a membro privato"
  - "accesso a membro protetto"
  - "membri pubblici"
  - "file di origine"
  - "file di origine, MFC"
ms.assetid: 3230e8fb-3b69-4ddf-9538-365ac7ea5e72
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo dei file di origine MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria Microsoft Foundation Class \(MFC\) fornisce il codice sorgente completo.  I file di intestazione \(.h\) sono nella directory \\atlmfc\\include; i file di implementazione \(.cpp\) sono nella directory \\atlmfc\\src\\mfc.  
  
 Questa famiglia di articoli illustra le convenzioni che MFC utilizza per commentare le diverse parti di ogni classe, il significato di questi commenti e ciò che ci si aspetta di trovare in ogni sezione.  Le procedure guidate di Visual C\+\+ utilizzano simili convenzioni per le classi create automaticamente e probabilmente si utilizzeranno queste convenzioni utili anche per il proprio codice.  
  
 Si potrebbe avere familiarità con le parole chiave di C\+\+ **public**, `protected` e `private`.  Guardando i file di intestazione MFC, si noterà che ogni classe potrebbe averne più di uno.  Ad esempio, le variabili membro e le funzioni pubbliche potrebbero essere espresse in più parole chiave **public**.  Questo perché MFC separa le variabili membro e le funzioni in base al loro utilizzo, non dal tipo di accesso consentito.  MFC utilizza `private` sporadicamente; anche gli elementi considerati dettagli di implementazione in genere sono protected e spesso sono public.  Sebbene l'accesso ai dettagli di implementazione sia sconsigliato, MFC affida la decisione allo sviluppatore.  
  
 In entrambi i file sorgenti di MFC e nei file che la Creazione guidata applicazione MFC crea, è possibile trovare commenti simili all'interno delle dichiarazioni di classe \(in genere nell'ordine indicato\):  
  
 `// Constructors`  
  
 `// Attributes`  
  
 `// Operations`  
  
 `// Overridables`  
  
 `// Implementation`  
  
 Gli argomenti trattati in questa serie di articoli includono:  
  
-   [Esempio dei commenti](../mfc/an-example-of-the-comments.md)  
  
-   [\/\/ Commento all'implementazione](../mfc/decrement-implementation-comment.md)  
  
-   [\/\/ Commento sui costruttori](../mfc/decrement-constructors-comment.md)  
  
-   [\/\/ Commento all'attributo .](../mfc/decrement-attributes-comment.md)  
  
-   [\/\/ Commento alle operazioni](../mfc/decrement-operations-comment.md)  
  
-   [\/\/ Commento sui sottoponibili a override](../mfc/decrement-overridables-comment.md)  
  
## Vedere anche  
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)