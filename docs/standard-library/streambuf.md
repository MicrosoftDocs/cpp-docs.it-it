---
title: "&lt; streambuf &gt; | Microsoft Docs"
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
  - "std::<streambuf>"
  - "<streambuf>"
  - "streambuf/std::<streambuf>"
  - "std.<streambuf>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "streambuf (intestazione)"
ms.assetid: 4365b25c-5831-488b-b9c2-867bfe961b89
caps.latest.revision: 19
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt; streambuf &gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Includere l'intestazione standard iostream \<streambuf\> per definire la classe modello [basic\_streambuf](../standard-library/basic-streambuf-class.md), che è alla base del funzionamento delle classi iostream. Questa intestazione viene in genere inclusa automaticamente da altre intestazioni iostream. Raramente è necessario che sia inclusa direttamente dall'utente.  
  
## Sintassi  
  
```  
  
#include <streambuf>  
  
```  
  
### Typedef  
  
|||  
|-|-|  
|[streambuf](../Topic/streambuf.md)|Una specializzazione di `basic_streambuf` che usa `char` come parametri modello.|  
|[wstreambuf](../Topic/wstreambuf.md)|Una specializzazione di `basic_streambuf` che usa `wchar_t` come parametri modello.|  
  
### Classi  
  
|||  
|-|-|  
|[Classe basic\_streambuf](http://msdn.microsoft.com/it-it/d9c706ba-ce01-43e0-b0b2-a558fc53ea8d)|La classe modello descrive una classe base astratta per la derivazione di un buffer di flusso, che controlla la trasmissione di elementi verso e da una rappresentazione specifica di un flusso.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)