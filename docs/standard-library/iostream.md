---
title: "&lt;iostream&gt; | Microsoft Docs"
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
  - "std.<iostream>"
  - "std::<iostream>"
  - "<iostream>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iostream (intestazione)"
ms.assetid: de5d39e1-7e77-4b55-bcd1-7c77b41515c8
caps.latest.revision: 23
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;iostream&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dichiara gli oggetti che controllano la lettura e la scrittura nei flussi standard.  Si tratta spesso dell'unica intestazione che è necessario includere per eseguire operazioni di input e output da un programma C\+\+.  
  
## Sintassi  
  
```  
  
#include <iostream>  
  
```  
  
## Note  
 Gli oggetti rientrano in due gruppi:  
  
-   [cin](../Topic/cin.md), [cout](../Topic/cout.md), [cerr](../Topic/cerr.md) e [clog](../Topic/clog.md) sono orientati ai byte, eseguendo trasferimenti convenzionali un byte alla volta.  
  
-   [wcin](../Topic/wcin.md), [wcout](../Topic/wcout.md), [wcerr](../Topic/wcerr.md) e [wclog](../Topic/wclog.md) sono orientamenti ai caratteri "wide", eseguendo la conversione da e verso i caratteri "wide" che il programma modifica internamente.  
  
 Quando si eseguono determinate operazioni in un flusso, come l'input standard, non è possibile eseguire le operazioni di un orientamento diverso nello stesso flusso.  Pertanto, un programma non può funzionare in modo intercambiabile, ad esempio, in [cin](../Topic/cin.md) e [wcin](../Topic/wcin.md).  
  
 Tutti gli oggetti dichiarati in questa intestazione condividono una particolare proprietà: è possibile presupporre che vengano costruiti prima di qualsiasi oggetto standard definito, in un'unità di conversione che include \<iostream\>.  Allo stesso modo, si può presupporre che questi oggetti non vengono eliminati prima dei distruttori degli oggetti statici definiti.  I flussi di output vengono, tuttavia, scaricati durante la chiusura del programma. Di conseguenza, è possibile leggere o scrivere nei flussi standard prima dell'avvio del programma e dopo la chiusura dello stesso.  
  
 Questa garanzia non è tuttavia universale.  Un costruttore statico potrebbe chiamare una funzione in un'altra unità di conversione.  La funzione chiamata non può presumere che gli oggetti dichiarati in questa intestazione siano stati costruiti, dato l'ordine incerto in cui le unità di conversione partecipano alla costruzione statica.  Per usare questi oggetti in tale contesto, è innanzitutto necessario costruire un oggetto della classe [ios\_base::Init](../Topic/ios_base::Init.md).  
  
### Oggetti dei flussi globali  
  
|||  
|-|-|  
|[cerr](../Topic/cerr.md)|Specifica il flusso globale `cerr`.|  
|[cin](../Topic/cin.md)|Specifica il flusso globale `cin`.|  
|[clog](../Topic/clog.md)|Specifica il flusso globale `clog`.|  
|[cout](../Topic/cout.md)|Specifica il flusso globale `cout`.|  
|[wcerr](../Topic/wcerr.md)|Specifica il flusso globale `wcerr`.|  
|[wcin](../Topic/wcin.md)|Specifica il flusso globale `wcin`.|  
|[wclog](../Topic/wclog.md)|Specifica il flusso globale `wclog`.|  
|[wcout](../Topic/wcout.md)|Specifica il flusso globale `wcout`.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)