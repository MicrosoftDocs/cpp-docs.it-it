---
title: "Classe istream_iterator | Microsoft Docs"
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
  - "iterator/std::istream_iterator"
  - "std.istream_iterator"
  - "std::istream_iterator"
  - "istream_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "istream_iterator (classe)"
ms.assetid: fb52a8cd-7f71-48d1-b73e-4b064e2a8d16
caps.latest.revision: 18
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe istream_iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un oggetto iteratore di input.  Estrae gli oggetti della classe `Type` da un flusso di input, a cui accede tramite un oggetto archiviato di tipo `pointer` a `basic_istream`\<`CharType`, `Traits`\>.  
  
## Sintassi  
  
```  
template<class Type,  
    class CharType = char,  
    class Traits = char_traits<CharType>,  
    class Distance = ptrdiff_t,  
> class istream_iterator  
 : public iterator<  
        input_iterator_tag,  
        Type,   
        Distance,   
        const Type *,  
        const Type&  
    >;  
```  
  
#### Parametri  
 `Type`  
 Tipo di oggetto da estrarre dal flusso di input.  
  
 `CharType`  
 Tipo che rappresenta il tipo di carattere per `istream_iterator`.  Questo argomento è facoltativo e il valore predefinito è `char`.  
  
 `Traits`  
 Tipo che rappresenta il tipo di carattere per `istream_iterator`.  Questo argomento è facoltativo e il valore predefinito è `char_traits`\<`CharType`\>.  
  
 `Distance`  
 Tipo integrale con segno che rappresenta il tipo di differenza per `istream_iterator`.  Questo argomento è facoltativo e il valore predefinito è `ptrdiff_t`.  
  
 Dopo la costruzione o l'incrementazione di un oggetto della classe istream\_iterator con un puntatore archiviato diverso da Null, l'oggetto tenta di estrarre e archiviare un oggetto di tipo `Type` dal flusso di input associato.  Se l'estrazione ha esito negativo, l'oggetto sostituisce il puntatore archiviato con un puntatore Null, creando così un indicatore di fine della sequenza.  
  
### Costruttori  
  
|||  
|-|-|  
|[istream\_iterator](../Topic/istream_iterator::istream_iterator.md)|Costruisce un iteratore di fine flusso come `istream_iterator` predefinito o un `istream_iterator` inizializzato nel tipo di flusso dell'iteratore da cui legge.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[char\_type](../Topic/istream_iterator::char_type.md)|Tipo che fornisce il tipo di carattere di `istream_iterator`.|  
|[istream\_type](../Topic/istream_iterator::istream_type.md)|Tipo che fornisce il tipo di flusso di `istream_iterator`.|  
|[traits\_type](../Topic/istream_iterator::traits_type.md)|Tipo che fornisce il tipo di tratti di `istream_iterator`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\*](../Topic/istream_iterator::operator*.md)|L'operatore di dereferenziazione restituisce l'oggetto archiviato di tipo `Type` a cui punta `istream_iterator`.|  
|[operator\-\>](../Topic/istream_iterator::operator-%3E.md)|Restituisce il valore di un numero, se presente.|  
|[operator\+\+](../Topic/istream_iterator::operator++.md)|Estrae un oggetto incrementato dal flusso di input oppure copia tale oggetto prima di incrementarlo e restituisce la copia.|  
  
## Requisiti  
 **Intestazione:** \<iterator\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Struct input\_iterator\_tag](../standard-library/input-iterator-tag-struct.md)   
 [Struct iterator](../standard-library/iterator-struct.md)   
 [\<iterator\>](../standard-library/iterator.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)