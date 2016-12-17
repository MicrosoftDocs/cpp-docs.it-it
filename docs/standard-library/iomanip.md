---
title: "&lt; iomanip &gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "iomanip/std::<iomanip>"
  - "std::<iomanip>"
  - "<iomanip>"
  - "std.<iomanip>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iomanip (intestazione)"
ms.assetid: 3681c346-4763-4037-bba4-cf0dc3447974
caps.latest.revision: 21
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt; iomanip &gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Includere l'intestazione standard `iostreams``<iomanip>` per definire diversi manipolatori che accettano un solo argomento.  
  
## Sintassi  
  
```  
  
#include <iomanip>  
  
```  
  
## Note  
 Ognuna di questi manipolatori restituisce un tipo non specificato, denominato da **T1** a **T10**, che esegue sottopone a overload sia `basic_istream`\<**Elem**, **Tr**\>`::`[operator\>\>](../Topic/operator%3E%3E%20\(%3Cistream%3E\).md) sia `basic_ostream`\<**Elem**, **Tr**\>`::`[operatore\<\<](../Topic/operator%3C%3C%20\(%3Costream%3E\).md).  
  
### Manipolatori  
  
|||  
|-|-|  
|[get\_money](../Topic/%3Ciomanip%3E%20get_money.md)|Ottiene un importo monetario, facoltativamente in formato internazionale.|  
|[get\_time](../Topic/%3Ciomanip%3E%20get_time.md)|Ottiene un'ora in una struttura di ora usando un formato specificato.|  
|[put\_money](../Topic/%3Ciomanip%3E%20put_money.md)|Fornisce un importo monetario, facoltativamente in formato internazionale.|  
|[put\_time](../Topic/%3Ciomanip%3E%20put_time.md)|Fornisce un'ora in una struttura di ora e una stringa di formato da usare.|  
|[quoted](../Topic/quoted.md)|Abilita pratiche sequenze di andata e ritorno delle stringhe con operatori di inserimento ed estrazione.|  
|[resetiosflags](../Topic/resetiosflags.md)|Cancella i flag specificati.|  
|[setbase](../Topic/setbase.md)|Imposta la base per i valori integer.|  
|[setfill](../Topic/setfill.md)|Imposta il carattere che verrà usato per riempire gli spazi in una visualizzazione giustificata a destra.|  
|[setiosflags](../Topic/setiosflags.md)|Imposta i flag specificati.|  
|[setprecision](../Topic/setprecision.md)|Imposta la precisione per i valori a virgola mobile.|  
|[setw](../Topic/setw.md)|Specifica la larghezza del campo di visualizzazione.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)