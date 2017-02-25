---
title: "Collegamenti in nomi con ambito file | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dichiarazioni [C++], esterno"
  - "collegamento esterno, regole di collegamento ambito"
  - "ambito file [C++]"
  - "collegamento [C++], regole di collegamento ambito"
  - "nomi [C++], regole di collegamento ambito"
  - "ambito [C++], regole di collegamento"
  - "static (modificatore), ambito file"
  - "ambito file e nomi statici"
  - "variabili statiche, dichiarazioni esterne"
ms.assetid: 38d3fa5e-1861-466e-a590-84b86f7b184e
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Collegamenti in nomi con ambito file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le regole seguenti di collegamento vengono applicate ai nomi \(ad eccezione di `typedef` e dei nomi dell'enumeratore\) con ambito file:  
  
-   Se il nome è dichiarato in modo esplicito come **static**, dispone di un collegamento interno e identifica un elemento del programma all'interno della propria unità di conversione.  
  
-   I nomi dell'enumeratore e i nomi `typedef` non dispongono di collegamento.  
  
-   Tutti gli altri nomi con ambito file non dispongono di collegamento esterno.  
  
 **Sezione specifica Microsoft**  
  
-   Se un nome di funzione con ambito file è dichiarato in modo esplicito come **inline**, dispone di collegamento esterno se viene creata un'istanza o viene fatto riferimento al suo indirizzo.  Pertanto, è possibile che una funzione con ambito file includa un collegamento interno o esterno.  
  
 **Fine sezione specifica Microsoft**  
  
 La classe dispone di collegamento interno se:  
  
-   Non usa funzionalità C\+\+ \(ad esempio controllo dell'accesso ai membri, funzioni membro, costruttori, distruttori e così via\).  
  
-   Non è usato nella dichiarazione di un altro nome con collegamento esterno.  Questo vincolo significa che gli oggetti del tipo classe passati alle funzioni con collegamento esterno fanno in modo che la classe disponga di un collegamento esterno.  
  
## Vedere anche  
 [Programma e collegamento](../cpp/program-and-linkage-cpp.md)