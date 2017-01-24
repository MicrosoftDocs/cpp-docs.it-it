---
title: "Utilizzo della compilazione di debug per il controllo della sovrascrittura di memoria | Microsoft Docs"
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
  - "memoria, sovrascrittura"
ms.assetid: 1345eb4d-24ba-4595-b1cc-2da66986311e
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Utilizzo della compilazione di debug per il controllo della sovrascrittura di memoria
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per utilizzare la build di debug per controllare la sovrascrittura di memoria, è necessario in primo luogo compilare nuovamente il progetto per il debug.  Spostarsi quindi all'inizio della funzione `InitInstance` dell'applicazione e aggiungere la riga seguente:  
  
```  
afxMemDF |= checkAlwaysMemDF;  
```  
  
 L'allocatore di memoria di debug inserisce byte di protezione attorno a tutte le allocazioni di memoria.  Questi byte di protezione risultano tuttavia efficaci solo nel senso che se, controllandoli, vi si riscontrano modifiche, significa che si è verificata una sovrascrittura di memoria.  In caso contrario il ricorso ai byte di protezione si limita a offrire un buffer che può consentire di limitare i danni di una sovrascrittura di memoria.  
  
 Con l'attivazione di `checkAlwaysMemDF` si imposta la chiamata della funzione `AfxCheckMemory` da parte di MFC ogni volta che viene effettuata una chiamata a **new** o **delete**.  Se viene rilevata una sovrascrittura di memoria, verrà generato un messaggio TRACE del seguente tipo:  
  
```  
Damage Occurred! Block=0x5533  
```  
  
 Se viene visualizzato uno di questi messaggi, è necessario eseguire il codice un'istruzione alla volta per determinare dove si è verificato il problema.  Per isolare con maggior precisione il punto in cui ha avuto luogo la sovrascrittura di memoria, è possibile effettuare personalmente chiamate esplicite a `AfxCheckMemory`.  Di seguito è riportato un esempio.  
  
```  
ASSERT(AfxCheckMemory());  
    DoABunchOfStuff();  
    ASSERT(AfxCheckMemory());  
```  
  
 Se la prima istruzione ASSERT ha esito positivo e la seconda no, significa che la sovrascrittura di memoria deve essersi verificata nella funzione tra le due chiamate.  
  
 A seconda della natura dell'applicazione, è possibile appurare che `afxMemDF` causi un'esecuzione del programma talmente lenta che non sia nemmeno possibile eseguirne il test.  La variabile `afxMemDF` fa sì che venga chiamata `AfxCheckMemory` per ciascuna chiamata di new e delete.  In questo caso,è consigliabile inserire punti opportuni per le chiamate a `AfxCheckMemory`\( \) come illustrato in precedenza e tentare di isolare la sovrascrittura di memoria in questo modo.  
  
## Vedere anche  
 [Correzione dei problemi della build di rilascio](../../build/reference/fixing-release-build-problems.md)