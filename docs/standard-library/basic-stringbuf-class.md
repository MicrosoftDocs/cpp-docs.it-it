---
title: "Classe basic_stringbuf | Microsoft Docs"
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
  - "basic_stringbuf"
  - "sstream/std::basic_stringbuf"
  - "std.basic_stringbuf"
  - "std::basic_stringbuf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_stringbuf (classe)"
ms.assetid: 40c85f9e-42a5-4a65-af5c-23c8e3bf8113
caps.latest.revision: 28
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe basic_stringbuf
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un buffer del flusso che controlla la trasmissione di elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`, verso e da una sequenza di elementi archiviati in un oggetto matrice.  
  
## Sintassi  
  
```  
template <class Elem, class Tr = char_traits<Elem>,   
   class Alloc = allocator<Elem>   
>  
   class basic_stringbuf : public basic_streambuf<Elem, Tr>  
```  
  
#### Parametri  
 `Alloc`  
 Classe Allocator.  
  
 `Elem`  
 Tipo di elemento di base della stringa.  
  
 `Tr`  
 Tratti di carattere specializzati sull'elemento di base della stringa.  
  
## Note  
 L'oggetto viene allocato, esteso e liberato come necessario per supportare le modifiche nella sequenza.  
  
 Un oggetto di classe basic\_stringbuf\<`Elem`, `Tr`, `Alloc`\> archivia una copia dell'argomento `ios_base::`[openmode](../Topic/ios_base::openmode.md) dal costruttore come relativa `stringbuf` modalità **mode**:  
  
-   Se `mode & ios_base::in` è diverso da zero, il buffer di input è accessibile. Per altre informazioni, vedere [Classe basic\_streambuf](../standard-library/basic-streambuf-class.md).  
  
-   Se `mode & ios_base::out` è diverso da zero, il buffer di output è accessibile.  
  
### Costruttori  
  
|||  
|-|-|  
|[basic\_stringbuf](../Topic/basic_stringbuf::basic_stringbuf.md)|Costruisce un oggetto di tipo `basic_stringbuf`.|  
  
### Typedef  
  
|||  
|-|-|  
|[allocator\_type](../Topic/basic_stringbuf::allocator_type.md)|Il tipo è un sinonimo del parametro di modello `Alloc`.|  
|[char\_type](../Topic/basic_stringbuf::char_type.md)|Associa un nome di tipo al parametro di modello `Elem`.|  
|[int\_type](../Topic/basic_stringbuf::int_type.md)|Rende questo tipo all'interno dell'ambito di `basic_filebuf` equivalente al tipo con lo stesso nome nell'ambito `Tr`.|  
|[off\_type](../Topic/basic_stringbuf::off_type.md)|Rende questo tipo all'interno dell'ambito di `basic_filebuf` equivalente al tipo con lo stesso nome nell'ambito `Tr`.|  
|[pos\_type](../Topic/basic_stringbuf::pos_type.md)|Rende questo tipo all'interno dell'ambito di `basic_filebuf` equivalente al tipo con lo stesso nome nell'ambito `Tr`.|  
|[traits\_type](../Topic/basic_stringbuf::traits_type.md)|Associa un nome di tipo al parametro di modello `Tr`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[overflow](../Topic/basic_stringbuf::overflow.md)|Una funzione virtuale protetta che può essere chiamata quando viene inserito un nuovo carattere in un buffer pieno.|  
|[pbackfail](../Topic/basic_stringbuf::pbackfail.md)|La funzione membro virtuale protetta prova a usare un elemento in un buffer di input, quindi renderlo l'elemento corrente \(a cui punta il puntatore successivo\).|  
|[seekoff](../Topic/basic_stringbuf::seekoff.md)|La funzione membro virtuale protetta prova a modificare le posizioni correnti per i flussi di controllati.|  
|[seekpos](../Topic/basic_stringbuf::seekpos.md)|La funzione membro virtuale protetta prova a modificare le posizioni correnti per i flussi di controllati.|  
|[str](../Topic/basic_stringbuf::str.md)|Imposta o recupera il testo in un buffer di stringa senza modificare la posizione di scrittura.|  
|swap||  
|[underflow](../Topic/basic_stringbuf::underflow.md)|La funzione membro virtuale protetta per estrarre l'elemento corrente dal flusso di input.|  
  
## Requisiti  
 **Intestazione:** \<sstream\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)