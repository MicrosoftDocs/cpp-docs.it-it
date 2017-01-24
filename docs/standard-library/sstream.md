---
title: "&lt;sstream&gt; | Microsoft Docs"
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
  - "std.<sstream>"
  - "std::<sstream>"
  - "<sstream>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sstream (intestazione)"
ms.assetid: 56f55bc5-549d-4e7f-aaad-99e0ffa49c9e
caps.latest.revision: 20
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;sstream&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce diverse classi modello che supportano le operazioni di iostream su sequenze archiviate in un oggetto array allocato.  Tali sequenze facilmente vengono convertite da e verso oggetti della classe modello [basic\_string](../standard-library/basic-string-class.md).  
  
## Sintassi  
  
```  
namespace std {  
template<class CharType,  
    class Traits = char_traits<CharType>,  
    class Allocator = allocator<CharType> >  
    class basic_stringbuf;  
typedef basic_stringbuf<char> stringbuf;  
typedef basic_stringbuf<wchar_t> wstringbuf;  
  
template<class CharType,  
    class Traits = char_traits<CharType>,  
    class Allocator = allocator<CharType> >  
    class basic_istringstream;  
typedef basic_istringstream<char> istringstream;  
typedef basic_istringstream<wchar_t> wistringstream;  
  
template<class CharType,  
    class Traits = char_traits<CharType>,  
    class Allocator = allocator<CharType> >  
    class basic_ostringstream;  
typedef basic_ostringstream<char> ostringstream;  
typedef basic_ostringstream<wchar_t> wostringstream;  
  
template<class CharType,  
    class Traits = char_traits<CharType>,  
    class Allocator = allocator<CharType> >  
    class basic_stringstream;  
typedef basic_stringstream<char> stringstream;  
typedef basic_stringstream<wchar_t> wstringstream;  
  
        // TEMPLATE FUNCTIONS  
template<class CharType, class Traits, class Allocator>  
    void swap(  
        basic_stringbuf<CharType, Traits, Allocator>& _Left,  
        basic_stringbuf<CharType, Traits, Allocator>& _Right  
    );   
template<class CharType, class Traits, class Allocator>  
    void swap(  
        basic_istringstream<CharType, Traits, Allocator>& _Left,  
        basic_istringstream<CharType, Traits, Allocator>& _Right  
    );  
template<class CharType, class Traits, class Allocator>  
    void swap(  
        basic_ostringstream<CharType, Traits, Allocator>& _Left,  
        basic_ostringstream<CharType, Traits, Allocator>& _Right  
    );  
template<class CharType, class Traits, class Allocator>  
    void swap (  
        basic_stringstream<CharType, Traits, Allocator>& _Left,  
        basic_stringstream<CharType, Traits, Allocator>& _Right  
    );  
}  // namespace std  
  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`_Left`|Riferimento a un oggetto di `sstream`.|  
|`_Right`|Riferimento a un oggetto di `sstream`.|  
  
## Note  
 Oggetti di tipo `char *` possono utilizzare le funzionalità di [\<strstream\>](../standard-library/strstream.md) per trasmettere.  Tuttavia, `<strstream>` è deprecato e l'utilizzo di `<sstream>` è opportuno.  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[istringstream](../Topic/istringstream.md)|Crea un tipo specializzato `basic_istringstream` su un parametro di modello di `char`.|  
|[ostringstream](../Topic/ostringstream.md)|Crea un tipo specializzato `basic_ostringstream` su un parametro di modello di `char`.|  
|[stringbuf](../Topic/stringbuf.md)|Crea un tipo specializzato `basic_stringbuf` su un parametro di modello di `char`.|  
|[stringstream](../Topic/stringstream.md)|Crea un tipo specializzato `basic_stringstream` su un parametro di modello di `char`.|  
|[wistringstream](../Topic/wistringstream.md)|Crea un tipo specializzato `basic_istringstream` su un parametro di modello di `wchar_t`.|  
|[wostringstream](../Topic/wostringstream.md)|Crea un tipo specializzato `basic_ostringstream` su un parametro di modello di `wchar_t`.|  
|[wstringbuf](../Topic/wstringbuf.md)|Crea un tipo specializzato `basic_stringbuf` su un parametro di modello di `wchar_t`.|  
|[wstringstream](../Topic/wstringstream.md)|Crea un tipo specializzato `basic_stringstream` su un parametro di modello di `wchar_t`.|  
  
### Manipolatori  
  
|||  
|-|-|  
|[scambio](../Topic/%3Csstream%3E%20swap.md)|Scambia i valori tra due oggetti di `sstream`.|  
  
### Classi  
  
|||  
|-|-|  
|[basic\_stringbuf](../standard-library/basic-stringbuf-class.md)|Viene descritto un buffer del flusso che controlla la trasmissione degli elementi di tipo **Elem**, in cui i tratti di carattere sono determinati dalla classe **Tr**, in e da una sequenza di elementi archiviati in un oggetto matrice.|  
|[basic\_istringstream](../standard-library/basic-istringstream-class.md)|Viene descritto un oggetto che l'estrazione dei controlli degli elementi e degli oggetti codificati da un buffer del flusso di classe [basic\_stringbuf](../standard-library/basic-stringbuf-class.md)\<**Elem**, **Tr**, `Alloc`\>, con elementi di tipo **Elem**, in cui i tratti di carattere sono determinati dalla classe **Tr** e i cui elementi sono allocati da un allocatore di classe `Alloc`.|  
|[basic\_ostringstream](../standard-library/basic-ostringstream-class.md)|Viene descritto un oggetto che inserimento dei controlli degli elementi e degli oggetti codificati in un buffer del flusso di classe [basic\_stringbuf](../standard-library/basic-stringbuf-class.md)\<**Elem**, **Tr**, `Alloc`\>, con elementi di tipo **Elem**, in cui i tratti di carattere sono determinati dalla classe **Tr** e i cui elementi sono allocati da un allocatore di classe `Alloc`.|  
|[basic\_stringstream](../standard-library/basic-stringstream-class.md)|Viene descritto un oggetto che inserimento dei controlli e l'estrazione degli elementi e degli oggetti codificati utilizzando un buffer del flusso di classe [basic\_stringbuf](../standard-library/basic-stringbuf-class.md)\<**Elem**, **Tr**, `Alloc`\>, con elementi di tipo **Elem**, in cui i tratti di carattere sono determinati dalla classe **Tr** e i cui elementi sono allocati da un allocatore di classe `Alloc`.|  
  
## Requisiti  
  
-   sstream \<di**Intestazione:** \>  
  
-   **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)