---
title: "Classe basic_iostream | Microsoft Docs"
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
  - "istream/std::basic_iostream"
  - "std.basic_iostream"
  - "basic_iostream"
  - "std::basic_iostream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_iostream (classe)"
ms.assetid: 294b680b-eb49-4066-8db2-6d52dac9d6e3
caps.latest.revision: 22
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe basic_iostream
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe di flusso che può eseguire operazioni sia di input sia di output.  
  
## Sintassi  
  
```  
template <class Elem, class Tr = char_traits<Elem> >  
    class basic_iostream : public basic_istream<Elem, Tr>,  
        public basic_ostream<Elem, Tr>  
{  
public:  
    explicit basic_iostream(basic_streambuf<Elem, Tr> *_Strbuf);  
    virtual ~basic_iostream();  
};  
```  
  
## Note  
 La classe modello descrive un oggetto che controlla gli inserimenti, attraverso la propria classe base [basic\_ostream](../standard-library/basic-ostream-class.md)\<`Elem`, `Tr`\>, e le estrazioni, attraverso la propria classe base [basic\_istream](../standard-library/basic-istream-class.md)\<`Elem`, `Tr`\>.  I due oggetti condividono la classe base virtuale comune [basic\_ios](../standard-library/basic-ios-class.md)\<`Elem`, `Tr`\>.  I due oggetti gestiscono anche il buffer di un flusso comune, con elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`.  Il costruttore inizializza la propria classe base attraverso `basic_istream`\(**strbuf**\) e `basic_ostream`\(**strbuf**\).  
  
### Costruttori  
  
|||  
|-|-|  
|[basic\_iostream](../Topic/basic_iostream::basic_iostream.md)|Creare un oggetto `basic_iostream`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[swap](../Topic/basic_iostream::swap.md)|Scambia il contenuto dell'oggetto `basic_iostream` fornito con il contenuto di questo oggetto.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../Topic/basic_iostream::operator=.md)|Assegna il valore di un oggetto `basic_iostream` specificato a questo oggetto.  Si tratta di un'assegnazione di spostamento che implica un oggetto `rvalue` che non lascia alcuna copia.|  
  
## Requisiti  
 **Intestazione:** \<istream\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)