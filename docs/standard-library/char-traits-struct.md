---
title: "Struct char_traits | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::char_traits"
  - "std.char_traits"
  - "iosfwd/std::char_traits"
  - "char_traits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "char_traits (classe)"
  - "char_traits (struct)"
ms.assetid: 568e59f0-4521-4207-9223-9dcf6a16d620
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# Struct char_traits
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La struct char\_traits descrive gli attributi associati a un carattere.  
  
## Sintassi  
  
```  
template <  
   class CharType  
> struct char_traits;  
```  
  
#### Parametri  
 `CharType`  
 Tipo di dati elemento.  
  
## Note  
 La struct del modello descrive vari tratti di caratteri per il tipo **CharType**.  La classe modello [basic\_string](../standard-library/basic-string-class.md) nonché diverse classi modello iostream, inclusa [basic\_ios](../standard-library/basic-ios-class.md), usano queste informazioni per modificare elementi di tipo **CharType**.  Un elemento di questo tipo non deve richiedere una costruzione o una distruzione esplicita.  Deve fornire un costruttore predefinito, un costruttore di copia e un operatore di assegnazione con la semantica prevista.  Una copia bit per bit deve avere lo stesso effetto di un'assegnazione.  Nessuna delle funzioni membro di struct char\_traits può generare eccezioni.  
  
### Typedef  
  
|||  
|-|-|  
|[char\_type](../Topic/char_traits::char_type.md)|Tipo di carattere.|  
|[int\_type](../Topic/char_traits::int_type.md)|Un tipo Integer che può rappresentare un carattere di tipo `char_type` o un carattere EOF.|  
|[off\_type](../Topic/char_traits::off_type.md)|Un tipo Integer che può rappresentare offset tra posizioni in un flusso.|  
|[pos\_type](../Topic/char_traits::pos_type.md)|Un tipo Integer che può rappresentare posizioni in un flusso.|  
|[state\_type](../Topic/char_traits::state_type.md)|Tipo che rappresenta lo stato di conversione per caratteri multibyte in un flusso.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[assign](../Topic/char_traits::assign.md)|Assegna un valore del carattere a un altro.|  
|[compare](../Topic/char_traits::compare.md)|Confronta un numero specificato di caratteri in due stringhe.|  
|[copy](../Topic/char_traits::copy.md)|Copia un numero specificato di caratteri da una stringa a un'altra.  Deprecato.  Usare invece [char\_traits::\_Copy\_s](../Topic/char_traits::_Copy_s.md).|  
|[\_Copy\_s](../Topic/char_traits::_Copy_s.md)|Copia un numero specificato di caratteri da una stringa a un'altra.|  
|[eof](../Topic/char_traits::eof.md)|Restituisce il carattere EOF.|  
|[eq](../Topic/char_traits::eq.md)|Verifica se due caratteri `char_type` sono uguali.|  
|[eq\_int\_type](../Topic/char_traits::eq_int_type.md)|Verifica se due caratteri rappresentati come `int_type` sono uguali.|  
|[find](../Topic/char_traits::find.md)|Cerca la prima occorrenza di un carattere specificato in un intervallo di caratteri.|  
|[length](../Topic/char_traits::length.md)|Restituisce la lunghezza di una stringa.|  
|[lt](../Topic/char_traits::lt.md)|Verifica se un carattere è minore di un altro.|  
|[move](../Topic/char_traits::move.md)|Copia un numero specificato di caratteri in una sequenza in un'altra sequenza possibile di sovrapposizione.  Deprecato.  Usare invece [char\_traits::\_Move\_s](../Topic/char_traits::_Move_s.md).|  
|[\_Move\_s](../Topic/char_traits::_Move_s.md)|Copia un numero specificato di caratteri in una sequenza in un'altra sequenza possibile di sovrapposizione.|  
|[not\_eof](../Topic/char_traits::not_eof.md)|Verifica se un carattere è il carattere EOF.|  
|[to\_char\_type](../Topic/char_traits::to_char_type.md)|Converte un carattere `int_type` in quello `char_type` corrispondente e restituisce il risultato.|  
|[to\_int\_type](../Topic/char_traits::to_int_type.md)|Converte un carattere `char_type` in quello `int_type` corrispondente e restituisce il risultato.|  
  
## Requisiti  
 **Intestazione:** \<string\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)