---
title: "&lt; istream &gt; | Microsoft Docs"
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
  - "istream/std::<istream>"
  - "std.<istream>"
  - "<istream>"
  - "std::<istream>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "istream (intestazione)"
ms.assetid: efcf24e4-05d1-4719-ab0b-9e7ebe845d89
caps.latest.revision: 20
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt; istream &gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce la classe modello basic\_istream, che media le estrazioni per intestazioni iostream, e la classe modello basic\_iostream, che media gli inserimenti e le estrazioni. L'intestazione definisce anche un manipolatore correlato. Questo file di intestazione viene in genere incluso automaticamente per l'utente da un'altra intestazione iostream. Raramente è necessario includerli direttamente.  
  
## Sintassi  
  
```  
  
#include <istream>  
  
```  
  
### Typedef  
  
|||  
|-|-|  
|[iostream](../Topic/iostream.md)|Tipo `basic_iostream` specializzato in `char`.|  
|[istream](../Topic/istream.md)|Tipo `basic_istream` specializzato in `char`.|  
|[wiostream](../Topic/wiostream.md)|Tipo `basic_iostream` specializzato in **wchar**.|  
|[wistream](../Topic/wistream.md)|Tipo `basic_istream` specializzato in **wchar**.|  
  
### Manipolatori  
  
|||  
|-|-|  
|[ws](../Topic/ws.md)|Ignora gli spazi nel flusso.|  
|[swap](../Topic/%3Cistream%3E%20swap.md)|Scambia due oggetti flusso.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\>\>](../Topic/operator%3E%3E%20\(%3Cistream%3E\).md)|Estrae caratteri e stringhe dal flusso.|  
  
### Classi  
  
|||  
|-|-|  
|[basic\_iostream](../standard-library/basic-iostream-class.md)|Classe di flusso che può eseguire operazioni sia di input sia di output.|  
|[basic\_istream](../standard-library/basic-istream-class.md)|La classe modello descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer di flusso con elementi di tipo **Elem**, chiamato anche [char\_type](../Topic/basic_ios::char_type.md), i cui tratti di carattere vengono determinati dalla classe **Tr**, chiamata anche [traits\_type](../Topic/basic_ios::traits_type.md).|  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)