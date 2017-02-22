---
title: "&lt;strstream&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.<strstream>"
  - "std::<strstream>"
  - "<strstream>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "strstream (intestazione)"
ms.assetid: eaa9d0d4-d217-4f28-8a68-9b9ad7b1c0f5
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# &lt;strstream&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce diverse classi che supportano operazioni iostream su sequenze archiviate in una matrice allocata di oggetti `char`.  Queste sequenze vengono facilmente convertite in e da stringhe C.  
  
## Sintassi  
  
```  
  
#include <strstream>  
  
```  
  
## Note  
 Gli oggetti di tipo `strstream` funzionano con `char` \*, che sono stringhe C.  Usare [\<sstream\>](../standard-library/sstream.md) per usare oggetti di tipo [basic\_string](../standard-library/basic-string-class.md).  
  
> [!NOTE]
>  Le classi in `<strstream>` sono deprecate.  Al loro posto, provare a usare le classi in `<sstream>`.  
  
### Classi  
  
|||  
|-|-|  
|[Classe strstreambuf](../standard-library/strstreambuf-class.md)|La classe descrive un buffer del flusso che controlla la trasmissione di elementi da e verso una sequenza di elementi archiviati in un oggetto matrice `char`.|  
|[Classe istrstream](../standard-library/istrstream-class.md)|La classe descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).|  
|[Classe ostrstream](../standard-library/ostrstream-class.md)|La classe descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).|  
|[Classe strstream](../standard-library/strstream-class.md)|La classe descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).|  
  
## Vedere anche  
 [\<strstream\>](../standard-library/strstream.md)   
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)