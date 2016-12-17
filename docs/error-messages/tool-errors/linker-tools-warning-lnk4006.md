---
title: "Avviso degli strumenti del linker LNK4006 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4006"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4006"
ms.assetid: 3a637d17-1676-4ea6-bd8b-290137d28d3b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4006
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

simbolo già definito in oggetto; seconda definizione ignorata  
  
 Il `symbol` specificato, visualizzato nel formato decorato, ha più definizioni.  Quando viene visualizzato questo avviso, l'oggetto `symbol` verrà aggiunto due volte, ma verrà utilizzato solo il primo formato.  
  
 Questo avviso viene generato quando si tenta di unire due librerie di importazione in una.  
  
 Se si ricompila la libreria di runtime del linguaggio C, è possibile ignorare questo messaggio.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  L'oggetto `symbol` dato può essere una funzione di package, creata dalla compilazione con [\/Gy](../../build/reference/gy-enable-function-level-linking.md).  Questo simbolo è stato incluso in più file, ma modificato tra le compilazioni.  Ricompilare tutti i file che includono l'oggetto `symbol`.  
  
2.  È possibile che l'oggetto `symbol` specificato sia stato definito in modo diverso in due oggetti membro in diverse librerie.  
  
3.  È possibile che un assoluto sia stato definito due volte, con due valori diversi.  
  
4.  Se il messaggio di errore viene generato quando si combinano le librerie, l'oggetto `symbol` è già esistente nella libreria in cui si esegue l'aggiunta.