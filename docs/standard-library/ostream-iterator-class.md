---
title: "Classe ostream_iterator | Microsoft Docs"
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
  - "ostream_iterator"
  - "std.ostream_iterator"
  - "std::ostream_iterator"
  - "iterator/std::ostream_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ostream_iterator (classe)"
ms.assetid: 24d842d3-9f45-4bf6-a697-62f5968f5a03
caps.latest.revision: 17
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe ostream_iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello ostream\_iterator descrive un oggetto iteratore di output che consente di scrivere elementi consecutivi nel flusso di output con l'estrazione **operator \<\<**.  
  
## Sintassi  
  
```  
  
      template <  
   class Type   
   class CharType = char  
   class Traits = char_traits<CharType>  
>  
class ostream_iterator  
```  
  
#### Parametri  
 *Tipo*  
 Il tipo di oggetto da inserire nel flusso di output.  
  
 `CharType`  
 Tipo che rappresenta il tipo di carattere per `ostream_iterator`.  Questo argomento è facoltativo e il valore predefinito è `char`*.*  
  
 `Traits`  
 Tipo che rappresenta il tipo di carattere per `ostream_iterator`.  Questo argomento è facoltativo e il valore predefinito è `char_traits`\<*CharType\>.*  
  
 La classe ostream\_iterator deve soddisfare i requisiti per un iteratore di output.  Gli algoritmi possono essere scritti direttamente nei flussi di output utilizzando un `ostream_iterator`.  
  
### Costruttori  
  
|||  
|-|-|  
|[ostream\_iterator](../Topic/ostream_iterator::ostream_iterator.md)|Costruisce `ostream_iterator` inizializzato e delimitato per scrivere nel flusso di output.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[char\_type](../Topic/ostream_iterator::char_type.md)|Tipo che fornisce il tipo di carattere di `ostream_iterator`.|  
|[ostream\_type](../Topic/ostream_iterator::ostream_type.md)|Tipo che fornisce il tipo di flusso di `ostream_iterator`.|  
|[traits\_type](../Topic/ostream_iterator::traits_type.md)|Tipo che fornisce il tipo di tratti di `ostream_iterator`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\*](../Topic/ostream_iterator::operator*.md)|Operatore di dereferenziazione utilizzato per implementare l'espressione dell'iteratore di output \*`i` \= `x`.|  
|[operator\+\+](../Topic/ostream_iterator::operator++.md)|Operatore di incremento non funzionale che restituisce `ostream_iterator` allo stesso oggetto a cui ha puntato prima che venisse chiamata l'operazione.|  
|[operator\=](../Topic/ostream_iterator::operator=.md)|Operatore di assegnazione utilizzato per implementare l'espressione dell'iteratore di output \*`i` \= `x` per la scrittura in un flusso di output.|  
  
## Requisiti  
 **Intestazione:** \<iterator\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<iterator\>](../standard-library/iterator.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)