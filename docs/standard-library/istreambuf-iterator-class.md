---
title: "Classe istreambuf_iterator | Microsoft Docs"
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
  - "istreambuf_iterator"
  - "std.istreambuf_iterator"
  - "std::istreambuf_iterator"
  - "streambuf/std::istreambuf_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "istreambuf_iterator (classe)"
ms.assetid: 39002da2-61a6-48a5-9d0c-5df8271f6038
caps.latest.revision: 19
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe istreambuf_iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello istreambuf\_iterator descrive un oggetto iteratore di input che estrae gli elementi dei caratteri da un buffer del flusso di input, a cui accede tramite un oggetto archiviato di tipo puntatore a \<`basic_streambuf`**CharType**, **Traits**\>.  
  
## Sintassi  
  
```  
  
      template <   
   class CharType  
   class Traits = char_traits<CharType>  
>  
class istreambuf_iterator  
: public iterator<input_iterator_tag, CharType, typename Traits::off_type, CharType *, CharType&>  
```  
  
#### Parametri  
 `CharType`  
 Tipo che rappresenta il tipo di carattere per istreambuf\_iterator.  
  
 `Traits`  
 Tipo che rappresenta il tipo di carattere per istreambuf\_iterator.  Questo argomento è facoltativo e il valore predefinito è `char_traits`\<*CharType\>.*  
  
## Note  
 La classe istreambuf\_iterator deve soddisfare i requisiti per un iteratore di input.  
  
 Dopo la costruzione o l'incremento di un oggetto della classe istreambuf\_iterator con un puntatore archiviato diverso da Null, l'oggetto tenta in modo efficace di estrarre e archiviare un oggetto di tipo **CharType** dal flusso di input associato.  L'estrazione può essere tuttavia ritardata fino a quando l'oggetto non viene dereferenziato o copiato.  Se l'estrazione ha esito negativo, l'oggetto sostituisce il puntatore archiviato con un puntatore Null, creando così un indicatore di fine della sequenza.  
  
### Costruttori  
  
|||  
|-|-|  
|[istreambuf\_iterator](../Topic/istreambuf_iterator::istreambuf_iterator.md)|Costruisce un `istreambuf_iterator` inizializzato per leggere i caratteri dal flusso di input.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[char\_type](../Topic/istreambuf_iterator::char_type.md)|Tipo che fornisce il tipo di carattere di `ostreambuf_iterator`.|  
|[int\_type](../Topic/istreambuf_iterator::int_type.md)|Tipo che fornisce un tipo Integer per `istreambuf_iterator`.|  
|[istream\_type](../Topic/istreambuf_iterator::istream_type.md)|Tipo che fornisce il tipo di flusso di `istream_iterator`.|  
|[streambuf\_type](../Topic/istreambuf_iterator::streambuf_type.md)|Tipo che fornisce il tipo di flusso di `istreambuf_iterator`.|  
|[traits\_type](../Topic/istream_iterator::traits_type.md)|Tipo che fornisce il tipo di tratti di `istream_iterator`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[equal](../Topic/istreambuf_iterator::equal.md)|Test per verificare l'uguaglianza tra due iteratori del buffer del flusso di input.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\*](../Topic/istreambuf_iterator::operator*.md)|L'operatore di dereferenziazione restituisce il carattere successivo del flusso.|  
|[operator\+\+](../Topic/istreambuf_iterator::operator++.md)|Restituisce il carattere successivo del flusso di input oppure copia l'oggetto prima di incrementarlo e restituisce la copia.|  
|[operator\-\>](../Topic/istreambuf_iterator::operator-%3E.md)|Restituisce il valore di un numero, se presente.|  
  
## Requisiti  
 **Intestazione:** \<iterator\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Struct iterator](../standard-library/iterator-struct.md)   
 [\<iterator\>](../standard-library/iterator.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)