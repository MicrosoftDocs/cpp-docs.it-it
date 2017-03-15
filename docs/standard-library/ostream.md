---
title: "&lt;ostream&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.<ostream>"
  - "<ostream>"
  - "ostream/std::<ostream>"
  - "std::<ostream>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ostream (intestazione)"
ms.assetid: 90c3b6fb-57cd-4ae7-99b8-8512f24a67d2
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# &lt;ostream&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce la classe modello [basic\_ostream](../standard-library/basic-ostream-class.md), che funge da intermediario per iostream.  L'intestazione definisce anche diversi manipolatori correlati.  Questa intestazione viene in genere inclusa automaticamente da altre intestazioni iostream.  Raramente è necessario che sia inclusa direttamente dall'utente.  
  
## Sintassi  
  
```  
  
#include <ostream>  
  
```  
  
### Typedef  
  
|||  
|-|-|  
|[ostream](../Topic/ostream.md)|Crea un tipo da `basic_ostream` specializzato su `char` e `char_traits` specializzato su `char`.|  
|[wostream](../Topic/wostream.md)|Crea un tipo da `basic_ostream` specializzato su `wchar_t` e `char_traits` specializzato su `wchar_t`.|  
  
### Manipolatori  
  
|||  
|-|-|  
|[endl](../Topic/endl.md)|Termina una riga e scarica il buffer.|  
|[estremità](../Topic/ends%20\(Standard%20C++%20Library\).md)|Termina una stringa.|  
|[flush](../Topic/flush%20\(Standard%20C++%20Library\).md)|Scarica il buffer.|  
||Scambia il valori del parametro oggetto `basic_ostream` a sinistra con quelli del parametro oggetto `basic_ostream` a destra.|  
  
### Operatori  
  
|||  
|-|-|  
|[operatore \<\<](../Topic/operator%3C%3C%20\(%3Costream%3E\).md)|Scrive vari tipi nel flusso.|  
  
### Classi  
  
|||  
|-|-|  
|[basic\_ostream](../standard-library/basic-ostream-class.md)|La classe modello descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)