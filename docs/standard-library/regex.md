---
title: "&lt;regex&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<regex>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "regex (intestazione) [TR1]"
ms.assetid: 5dd4ef74-6063-4dbc-b692-1960bb736f0b
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# &lt;regex&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce una classe di modello per analizzare [Espressioni regolari \(C\+\+\)](../standard-library/regular-expressions-cpp.md) e diverse classi di modello e funzioni per cercare testo corrispondente a un oggetto di espressione regolare.  
  
## Sintassi  
  
```  
#include <regex>  
```  
  
## Note  
 Per creare un oggetto di espressione regolare, usare la classe modello [Classe basic\_regex](../standard-library/basic-regex-class.md) o una delle relative specializzazioni, [Typedef regex](../Topic/regex%20Typedef.md) e [Typedef wregex](../Topic/wregex%20Typedef.md), in combinazione con i contrassegni di sintassi di tipo [regex\_constants::syntax\_option\_type](../Topic/regex_constants::syntax_option_type.md).  
  
 Per cercare testo corrispondente a un oggetto di espressione regolare, usare le funzioni di modello [Funzione regex\_match](../Topic/regex_match%20Function.md) e [Funzione regex\_search](../Topic/regex_search%20Function.md) in combinazione con i contrassegni di corrispondenza di tipo [regex\_constants::match\_flag\_type](../Topic/regex_constants::match_flag_type.md).  Queste funzioni restituiscono i risultati usando la classe modello [Classe match\_results](../standard-library/match-results-class.md) e le relative specializzazioni, [Typedef cmatch](../Topic/cmatch%20Typedef.md), [Typedef wcmatch](../Topic/wcmatch%20Typedef.md), [Typedef smatch](../Topic/smatch%20Typedef.md) e [Typedef wsmatch](../Topic/wsmatch%20Typedef.md), assieme alla classe modello [Classe sub\_match](../standard-library/sub-match-class.md) e alle relative specializzazioni, [Typedef csub\_match](../Topic/csub_match%20Typedef.md), [Typedef wcsub\_match](../Topic/wcsub_match%20Typedef.md), [Typedef ssub\_match](../Topic/ssub_match%20Typedef.md) e [Typedef wssub\_match](../Topic/wssub_match%20Typedef.md).  
  
 Per sostituire testo corrispondente a un oggetto di espressione regolare, usare la funzione di modello [Funzione regex\_replace](../Topic/regex_replace%20Function.md) in combinazione con i contrassegni di corrispondenza di tipo [regex\_constants::match\_flag\_type](../Topic/regex_constants::match_flag_type.md).  
  
 Per eseguire l'iterazione attraversi più corrispondenze di un oggetto espressione regolare, usare le classi di modello [Classe regex\_iterator](../standard-library/regex-iterator-class.md) e [Classe regex\_token\_iterator](../standard-library/regex-token-iterator-class.md) oppure una delle relative specializzazioni, [Typedef cregex\_iterator](../Topic/cregex_iterator%20Typedef.md), [Typedef sregex\_iterator](../Topic/sregex_iterator%20Typedef.md), [Typedef wcregex\_iterator](../Topic/wcregex_iterator%20Typedef.md), [Typedef wsregex\_iterator](../Topic/wsregex_iterator%20Typedef.md), [Typedef cregex\_token\_iterator](../Topic/cregex_token_iterator%20Typedef.md), [Typedef sregex\_token\_iterator](../Topic/sregex_token_iterator%20Typedef.md), [Typedef wcregex\_token\_iterator](../Topic/wcregex_token_iterator%20Typedef.md) o [Typedef wsregex\_token\_iterator](../Topic/wsregex_token_iterator%20Typedef.md), in combinazione con i contrassegni di corrispondenza di tipo [regex\_constants::match\_flag\_type](../Topic/regex_constants::match_flag_type.md).  
  
 Per modificare i dettagli della grammatica delle espressioni regolari, scrivere una classe che implementi i tratti dell'espressione regolare.  
  
### Classi  
  
|||  
|-|-|  
|[basic\_regex](../standard-library/basic-regex-class.md)|Esegue il wrapping di un'espressione regolare.|  
|[match\_results](../standard-library/match-results-class.md)|Contiene una sequenza delle sottocorrispondenze.|  
|[regex\_constants](../standard-library/regex-constants-class.md)|Contiene diverse costanti.|  
|[regex\_error](../standard-library/regex-error-class.md)|Segnala un'espressione regolare non valida.|  
|[regex\_iterator](../standard-library/regex-iterator-class.md)|Esegue l'iterazione attraverso le corrispondenze.|  
|[regex\_traits](../standard-library/regex-traits-class.md)|Descrive le caratteristiche degli elementi per la corrispondenza.|  
|[regex\_traits\<char\>](../standard-library/regex-traits-char-class.md)|Descrive le caratteristiche di `char` per la corrispondenza.|  
|[regex\_traits\<wchar\_t\>](../standard-library/regex-traits-wchar-t-class.md)|Descrive le caratteristiche di `wchar_t` per la corrispondenza.|  
|[regex\_token\_iterator](../standard-library/regex-token-iterator-class.md)|Esegue l'iterazione attraverso le sottocorrispondenze.|  
|[sub\_match](../standard-library/sub-match-class.md)|Descrive una sottocorrispondenza.|  
  
### Definizioni dei tipi  
  
|||  
|-|-|  
|[cmatch](../Topic/cmatch%20Typedef.md)|Definizione dei tipi per `char``match_results`.|  
|[cregex\_iterator](../Topic/cregex_iterator%20Typedef.md)|Definizione dei tipi per `char``regex_iterator`.|  
|[cregex\_token\_iterator](../Topic/cregex_token_iterator%20Typedef.md)|Definizione dei tipi per `char``regex_token_iterator`.|  
|[csub\_match](../Topic/csub_match%20Typedef.md)|Definizione dei tipi per `char``sub_match`.|  
|[regex](../Topic/regex%20Typedef.md)|Definizione dei tipi per `char``basic_regex`.|  
|[smatch](../Topic/smatch%20Typedef.md)|Definizione dei tipi per `string``match_results`.|  
|[sregex\_iterator](../Topic/sregex_iterator%20Typedef.md)|Definizione dei tipi per `string``regex_iterator`.|  
|[sregex\_token\_iterator](../Topic/sregex_token_iterator%20Typedef.md)|Definizione dei tipi per `string``regex_token_iterator`.|  
|[ssub\_match](../Topic/ssub_match%20Typedef.md)|Definizione dei tipi per `string``sub_match`.|  
|[wcmatch](../Topic/wcmatch%20Typedef.md)|Definizione dei tipi per `wchar_t``match_results`.|  
|[wcregex\_iterator](../Topic/wcregex_iterator%20Typedef.md)|Definizione dei tipi per `wchar_t``regex_iterator`.|  
|[wcregex\_token\_iterator](../Topic/wcregex_token_iterator%20Typedef.md)|Definizione dei tipi per `wchar_t``regex_token_iterator`.|  
|[wcsub\_match](../Topic/wcsub_match%20Typedef.md)|Definizione dei tipi per `wchar_t``sub_match`.|  
|[wregex](../Topic/wregex%20Typedef.md)|Definizione dei tipi per `wchar_t``basic_regex`.|  
|[wsmatch](../Topic/wsmatch%20Typedef.md)|Definizione dei tipi per `wstring``match_results`.|  
|[wsregex\_iterator](../Topic/wsregex_iterator%20Typedef.md)|Definizione dei tipi per `wstring``regex_iterator`.|  
|[wsregex\_token\_iterator](../Topic/wsregex_token_iterator%20Typedef.md)|Definizione dei tipi per `wstring``regex_token_iterator`.|  
|[wssub\_match](../Topic/wssub_match%20Typedef.md)|Definizione dei tipi per `wstring``sub_match`.|  
  
### Funzioni  
  
|||  
|-|-|  
|[regex\_match](../Topic/regex_match%20Function.md)|Corrisponde esattamente a un'espressione regolare.|  
|[regex\_replace](../Topic/regex_replace%20Function.md)|Sostituisce espressioni regolari corrispondenti.|  
|[regex\_search](../Topic/regex_search%20Function.md)|Cerca una corrispondenza dell'espressione regolare.|  
|[swap](../Topic/swap%20Function%20%3Cregex%3E.md)|Scambia gli oggetti `basic_regex` o `match_results`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\=\=](../Topic/operator==%20%3Cregex%3E.md)|Confronto tra vari oggetti, uguali.|  
|[operator\!\=](../Topic/operator!=%20%3Cregex%3E.md)|Confronto tra vari oggetti, non uguali.|  
|[operatore \<](../Topic/operator%3C%20%3Cregex%3E.md)|Confronto tra vari oggetti, minore di.|  
|[operatore \<\=](../Topic/operator%3C=%20%3Cregex%3E.md)|Confronto tra vari oggetti, minore o uguale a.|  
|[operatore \>](../Topic/operator%3E%20%3Cregex%3E.md)|Confronto tra vari oggetti, maggiore di.|  
|[operatore \>\=](../Topic/operator%3E=%20%3Cregex%3E.md)|Confronto tra vari oggetti, maggiore o uguale a.|  
|[operatore \<\<](../Topic/operator%3C%3C%20%3Cregex%3E.md)|Inserisce una `sub_match` in un flusso.|  
  
## Vedere anche  
 [Espressioni regolari \(C\+\+\)](../standard-library/regular-expressions-cpp.md)