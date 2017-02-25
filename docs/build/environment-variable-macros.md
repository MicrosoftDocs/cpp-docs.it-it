---
title: "Macro di variabili di ambiente | Microsoft Docs"
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
helpviewer_keywords: 
  - "variabili di ambiente, macro in NMAKE"
  - "macro, variabili di ambiente"
  - "NMAKE (programma), macro di variabili di ambiente"
ms.assetid: f8e96635-0906-47b0-9f56-12a6fdf5e347
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Macro di variabili di ambiente
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

NMAKE eredita le definizioni di macro per le variabili di ambiente esistenti prima dell'avvio della sessione.  Se è stata impostata una variabile nell'ambiente del sistema operativo, questa sarà disponibile come macro NMAKE.  I nomi ereditati vengono convertiti in maiuscole.  L'ereditarietà ha luogo prima della pre\-elaborazione.  Utilizzare l'opzione \/E per fare in modo che le macro ereditate dalle variabili di ambiente eseguano l'override delle macro con lo stesso nome nel makefile.  
  
 Le macro di variabili di ambiente possono essere ridefinite nella sessione. In questo modo, verrà modificata la variabile di ambiente corrispondente.  Le variabili di ambiente possono essere modificate anche con il comando SET.  Utilizzando tale comando per modificare una variabile di ambiente in una sessione, non viene tuttavia modificata la macro corrispondente.  
  
 Di seguito è riportato un esempio.  
  
```  
PATH=$(PATH);\nonesuch  
  
all:  
    echo %PATH%  
```  
  
 In questo esempio la modifica di `PATH` determina anche la modifica della corrispondente variabile di ambiente `PATH` e l'aggiunta di `\nonesuch` al percorso.  
  
 Se una variabile di ambiente viene definita come stringa mediante una sintassi non corretta in un makefile, non verrà creata alcuna macro né generato alcun messaggio di avviso.  Se il valore di una variabile contiene un simbolo di dollaro \($\), esso viene interpretato come inizio di una chiamata di macro.  L'utilizzo della macro può generare un comportamento imprevisto.  
  
## Vedere anche  
 [Macro speciali di NMAKE](../build/special-nmake-macros.md)