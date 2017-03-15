---
title: "I/O console e porta | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.io"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "I/O [CRT], console"
  - "I/O [CRT], porta"
  - "routine I/O, console e porta I/O"
  - "porte, routine I/O"
  - "routine"
  - "routine, console e porta I/O"
ms.assetid: 0eee1c92-9b3d-41e0-a43a-257e546eeec8
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# I/O console e porta
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Queste routine leggono e scrivono nella console o nella porta specificata.  Le routine della console I\/O non sono compatibili con il flusso I\/O o con le routine della libreria I\/O a basso livello.  La console o la porta non devono essere aperte o chiuse prima che vengano eseguite operazioni di I\/O, pertanto non esistono routine aperte o chiuse in questa categoria.  Nei sistemi operativi Windows, l'output di queste funzioni è sempre diretto alla console e non può essere reindirizzato.  
  
### Routine della porta I\/O e della console  
  
|Routine|Utilizzo|  
|-------------|--------------|  
|[\_cgets, \_cgetws](../c-runtime-library/cgets-cgetws.md), [\_cgets\_s, \_cgetws\_s](../c-runtime-library/reference/cgets-s-cgetws-s.md)|Leggere una stringa dalla console|  
|[\_cprintf, \_cwprintf](../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md), [\_cprintf\_s, \_cprintf\_s\_l, \_cwprintf\_s, \_cwprintf\_s\_l](../c-runtime-library/reference/cprintf-s-cprintf-s-l-cwprintf-s-cwprintf-s-l.md)|Scrivere dati formattati sulla console|  
|[\_cputs](../c-runtime-library/reference/cputs-cputws.md)|Scrivere una stringa alla console.|  
|[\_cscanf, \_cwscanf](../c-runtime-library/reference/cscanf-cscanf-l-cwscanf-cwscanf-l.md), [\_cscanf\_s, \_cscanf\_s\_l, \_cwscanf\_s, \_cwscanf\_s\_l](../c-runtime-library/reference/cscanf-s-cscanf-s-l-cwscanf-s-cwscanf-s-l.md)|Leggere dati formattati dalla console|  
|[\_getch, \_getwch](../c-runtime-library/reference/getch-getwch.md)|Leggere un carattere dalla console|  
|[\_getche, \_getwche](../c-runtime-library/reference/getch-getwch.md)|Leggere un carattere dalla console e stamparlo|  
|[\_inp](../c-runtime-library/inp-inpw-inpd.md)|Leggere un byte dalla porta I\/O specificata|  
|[\_inpd](../c-runtime-library/inp-inpw-inpd.md)|Leggere una parola double dalla porta I\/O specificata|  
|[\_inpw](../c-runtime-library/inp-inpw-inpd.md)|Leggere una parola di 2 byte dalla porta I\/O specificata|  
|[\_kbhit](../c-runtime-library/reference/kbhit.md)|Controllare la sequenza di tasti alla console prima di tentare di leggere dalla console|  
|[\_outp](../c-runtime-library/outp-outpw-outpd.md)|Scrivere un byte sulla porta I\/O specificata|  
|[\_outpd](../c-runtime-library/outp-outpw-outpd.md)|Scrivere una parola double sulla porta I\/O specificata|  
|[\_outpw](../c-runtime-library/outp-outpw-outpd.md)|Scrivere una parola double sulla porta I\/O specificata|  
|[\_putch, \_putwch](../c-runtime-library/reference/putch-putwch.md)|Scrivere un carattere alla console|  
|[\_ungetch, \_ungetwch](../c-runtime-library/reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)|Non leggere l'ultimo carattere dalla console così sarà il prossimo carattere da leggere|  
  
## Vedere anche  
 [Input e output](../c-runtime-library/input-and-output.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)