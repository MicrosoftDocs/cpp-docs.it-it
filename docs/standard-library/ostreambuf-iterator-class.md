---
title: "Classe ostreambuf_iterator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.ostreambuf_iterator"
  - "streambuf/std::ostreambuf_iterator"
  - "ostreambuf_iterator"
  - "std::ostreambuf_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ostreambuf_iterator (classe)"
ms.assetid: dad1e624-2f45-4e94-8887-a885e95f9071
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# Classe ostreambuf_iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello ostreambuf\_iterator descrive un oggetto iteratore di output che consente di scrivere gli elementi dei caratteri successivi nel flusso di output con l'estrazione **operator\>\>**.  Gli `ostreambuf_iterator` differiscono da quelli della [classe ostream\_iterator](../standard-library/ostream-iterator-class.md) per il fatto che dispongono di caratteri anziché di un tipo generico in corrispondenza del tipo di oggetto inserito nel flusso di output.  
  
## Sintassi  
  
```  
  
      template <   
   class CharType = char  
   class Traits = char_traits<CharType>  
>  
```  
  
#### Parametri  
 `CharType`  
 Tipo che rappresenta il tipo di carattere per ostreambuf\_iterator.  Questo argomento è facoltativo e il valore predefinito è `char`*.*  
  
 `Traits`  
 Tipo che rappresenta il tipo di carattere per ostreambuf\_iterator.  Questo argomento è facoltativo e il valore predefinito è `char_traits`\<*CharType\>.*  
  
## Note  
 La classe ostreambuf\_iterator deve soddisfare i requisiti per un iteratore di output.  Gli algoritmi possono essere scritti direttamente nei flussi di output utilizzando un `ostreambuf_iterator`.  La classe fornisce un iteratore del flusso di basso livello che consente l'accesso al flusso I\/O non elaborato \(non formattato\) sotto forma di caratteri e la possibilità di ignorare le conversioni dei caratteri e del buffer associate agli iteratori del flusso di alto livello.  
  
### Costruttori  
  
|||  
|-|-|  
|[ostreambuf\_iterator](../Topic/ostreambuf_iterator::ostreambuf_iterator.md)|Costruisce un `ostreambuf_iterator` inizializzato per scrivere i caratteri nel flusso di output.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[char\_type](../Topic/ostreambuf_iterator::char_type.md)|Tipo che fornisce il tipo di carattere di `ostreambuf_iterator`.|  
|[ostream\_type](../Topic/ostreambuf_iterator::ostream_type.md)|Tipo che fornisce il tipo di flusso di `ostream_iterator`.|  
|[streambuf\_type](../Topic/ostreambuf_iterator::streambuf_type.md)|Tipo che fornisce il tipo di flusso di `ostreambuf_iterator`.|  
|[traits\_type](../Topic/ostreambuf_iterator::traits_type.md)|Tipo che fornisce il tipo di tratti di `ostream_iterator`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[failed](../Topic/ostreambuf_iterator::failed.md)|Verifica l'esito negativo di un inserimento nel buffer del flusso di output.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\*](../Topic/ostreambuf_iterator::operator*.md)|Operatore di dereferenziazione utilizzato per implementare l'espressione dell'iteratore di output \*`i` \= `x`.|  
|[operator\+\+](../Topic/ostreambuf_iterator::operator++.md)|Operatore di incremento non funzionale che restituisce `ostreambuf_iterator` allo stesso oggetto a cui ha puntato prima che venisse chiamata l'operazione.|  
|[operator\=](../Topic/ostreambuf_iterator::operator=.md)|L'operatore inserisce un carattere nel buffer del flusso associato.|  
  
## Requisiti  
 **Intestazione:** \<iterator\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<iterator\>](../standard-library/iterator.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)