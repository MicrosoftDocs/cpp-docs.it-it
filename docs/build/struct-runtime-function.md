---
title: "struct RUNTIME_FUNCTION | Microsoft Docs"
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
ms.assetid: 84386527-d3aa-41c5-871d-78e3e1913704
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# struct RUNTIME_FUNCTION
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La gestione delle eccezioni basata su tabella richiede una voce di tabella per tutte le funzioni che allocano spazio dello stack o chiamano un'altra funzione, ad esempio le funzioni non foglia.  Di seguito è indicato il formato di queste voci di tabella:  
  
|||  
|-|-|  
|ULONG|Indirizzo iniziale della funzione|  
|ULONG|Indirizzo finale della funzione|  
|ULONG|Indirizzo di UNWIND\_INFO|  
  
 La struttura RUNTIME\_FUNCTION deve essere allineata in memoria a livello di DWORD.  Tutti gli indirizzi sono relativi rispetto all'immagine, ovvero sono offset a 32 bit dall'indirizzo iniziale dell'immagine contenente la voce della tabella delle funzioni.  Queste voci vengono ordinate e inserite nella sezione .pdata di un'immagine PE32\+.  Per le funzioni generate dinamicamente \(compilatori JIT\), il runtime per il supporto di queste funzioni deve utilizzare RtlInstallFunctionTableCallback o RtlAddFunctionTable per fornire queste informazioni al sistema operativo.  In caso contrario, la gestione delle eccezioni e il debug dei processi non saranno affidabili.  
  
## Vedere anche  
 [Dati di rimozione per la gestione delle eccezioni, supporto del debugger](../build/unwind-data-for-exception-handling-debugger-support.md)