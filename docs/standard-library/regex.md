---
title: '&lt;regex&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <regex>
dev_langs:
- C++
helpviewer_keywords:
- regex header
ms.assetid: 5dd4ef74-6063-4dbc-b692-1960bb736f0b
caps.latest.revision: 23
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 248e9ba676b906af62f6804f4939e04158a8e2ef
ms.openlocfilehash: 4e172f8bf72fd528027c333cf411a307aa97d786
ms.lasthandoff: 02/24/2017

---
# <a name="ltregexgt"></a>&lt;regex&gt;
Definisce una classe di modello per analizzare [espressioni regolari di C++](../standard-library/regular-expressions-cpp.md) e diverse classi modello e funzioni per cercare testo corrispondente a un oggetto di espressione regolare.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <regex>  
```  
  
## <a name="remarks"></a>Note  
 Per creare un oggetto di espressione regolare, usare la classe modello [classe basic_regex](../standard-library/basic-regex-class.md) o una delle relative specializzazioni, [regex](../standard-library/regex-typedefs.md#regex_typedef) e [wregex](../standard-library/regex-typedefs.md#wregex_typedef), in combinazione con i contrassegni di sintassi di tipo [regex_constants::syntax_option_type](../standard-library/regex-constants-class.md#regex_constants__syntax_option_type).  
  
 Per cercare testo corrispondente a un oggetto di espressione regolare, usare le funzioni modello [regex_match](../standard-library/regex-functions.md#regex_match_function) e [regex_search](../standard-library/regex-functions.md#regex_search_function) in combinazione con i contrassegni di corrispondenza di tipo [regex_constants::match_flag_type](../standard-library/regex-constants-class.md#regex_constants__match_flag_type). Queste funzioni restituiscono risultati usando la classe modello [classe match_results](../standard-library/match-results-class.md) e le relative specializzazioni, [cmatch](../standard-library/regex-typedefs.md#cmatch_typedef), [wcmatch](../standard-library/regex-typedefs.md#wcmatch_typedef), [smatch](../standard-library/regex-typedefs.md#smatch_typedef) e [wsmatch](../standard-library/regex-typedefs.md#wsmatch_typedef), in combinazione con la classe modello [classe sub_match](../standard-library/sub-match-class.md) e alle relative specializzazioni, [csub_match](../standard-library/regex-typedefs.md#csub_match_typedef), [wcsub_match](../standard-library/regex-typedefs.md#wcsub_match_typedef), [ssub_match](../standard-library/regex-typedefs.md#ssub_match_typedef) e [wssub_match](../standard-library/regex-typedefs.md#wssub_match_typedef).  
  
 Per sostituire testo corrispondente a un oggetto di espressione regolare, usare la funzione modello [funzione regex_replace](../standard-library/regex-functions.md#regex_replace_function) in combinazione con i contrassegni di corrispondenza di tipo [regex_constants::match_flag_type](../standard-library/regex-constants-class.md#regex_constants__match_flag_type).  
  
 Per eseguire l'iterazione attraverso più corrispondenze di un oggetto espressione regolare, usare le classi modello [classe regex_iterator](../standard-library/regex-iterator-class.md) e [classe regex_token_iterator](../standard-library/regex-token-iterator-class.md) oppure una delle relative specializzazioni, [cregex_iterator](../standard-library/regex-typedefs.md#cregex_iterator_typedef), [sregex_iterator](../standard-library/regex-typedefs.md#sregex_iterator_typedef), [wcregex_iterator](../standard-library/regex-typedefs.md#wcregex_iterator_typedef), [wsregex_iterator](../standard-library/regex-typedefs.md#wsregex_iterator_typedef), [cregex_token_iterator](../standard-library/regex-typedefs.md#cregex_token_iterator_typedef), [sregex_token_iterator](../standard-library/regex-typedefs.md#sregex_token_iterator_typedef), [wcregex_token_iterator](../standard-library/regex-typedefs.md#wcregex_token_iterator_typedef) o [wsregex_token_iterator](../standard-library/regex-typedefs.md#wsregex_token_iterator_typedef), in combinazione con i contrassegni di corrispondenza di tipo [regex_constants::match_flag_type](../standard-library/regex-constants-class.md#regex_constants__match_flag_type).  
  
 Per modificare i dettagli della grammatica delle espressioni regolari, scrivere una classe che implementi i tratti dell'espressione regolare.  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[basic_regex](../standard-library/basic-regex-class.md)|Esegue il wrapping di un'espressione regolare.|  
|[match_results](../standard-library/match-results-class.md)|Contiene una sequenza delle sottocorrispondenze.|  
|[regex_constants](../standard-library/regex-constants-class.md)|Contiene diverse costanti.|  
|[regex_error](../standard-library/regex-error-class.md)|Segnala un'espressione regolare non valida.|  
|[regex_iterator](../standard-library/regex-iterator-class.md)|Esegue l'iterazione attraverso le corrispondenze.|  
|[regex_traits](../standard-library/regex-traits-class.md)|Descrive le caratteristiche degli elementi per la corrispondenza.|  
|[regex_traits\<char>](../standard-library/regex-traits-char-class.md)|Descrive le caratteristiche di `char` per la corrispondenza.|  
|[regex_traits<wchar_t>](../standard-library/regex-traits-wchar-t-class.md)|Descrive le caratteristiche di `wchar_t` per la corrispondenza.|  
|[regex_token_iterator](../standard-library/regex-token-iterator-class.md)|Esegue l'iterazione attraverso le sottocorrispondenze.|  
|[sub_match](../standard-library/sub-match-class.md)|Descrive una sottocorrispondenza.|  
  
### <a name="type-definitions"></a>Definizioni dei tipi  
  
|||  
|-|-|  
|[cmatch](../standard-library/regex-typedefs.md#cmatch_typedef)|Definizione dei tipi per `char``match_results`.|  
|[cregex_iterator](../standard-library/regex-typedefs.md#cregex_iterator_typedef)|Definizione dei tipi per `char``regex_iterator`.|  
|[cregex_token_iterator](../standard-library/regex-typedefs.md#cregex_token_iterator_typedef)|Definizione dei tipi per `char``regex_token_iterator`.|  
|[csub_match](../standard-library/regex-typedefs.md#csub_match_typedef)|Definizione dei tipi per `char``sub_match`.|  
|[regex](../standard-library/regex-typedefs.md#regex_typedef)|Definizione dei tipi per `char``basic_regex`.|  
|[smatch](../standard-library/regex-typedefs.md#smatch_typedef)|Definizione dei tipi per `string``match_results`.|  
|[sregex_iterator](../standard-library/regex-typedefs.md#sregex_iterator_typedef)|Definizione dei tipi per `string``regex_iterator`.|  
|[sregex_token_iterator](../standard-library/regex-typedefs.md#sregex_token_iterator_typedef)|Definizione dei tipi per `string``regex_token_iterator`.|  
|[ssub_match](../standard-library/regex-typedefs.md#ssub_match_typedef)|Definizione dei tipi per `string``sub_match`.|  
|[wcmatch](../standard-library/regex-typedefs.md#wcmatch_typedef)|Definizione dei tipi per `wchar_t``match_results`.|  
|[wcregex_iterator](../standard-library/regex-typedefs.md#wcregex_iterator_typedef)|Definizione dei tipi per `wchar_t``regex_iterator`.|  
|[wcregex_token_iterator](../standard-library/regex-typedefs.md#wcregex_token_iterator_typedef)|Definizione dei tipi per `wchar_t``regex_token_iterator`.|  
|[wcsub_match](../standard-library/regex-typedefs.md#wcsub_match_typedef)|Definizione dei tipi per `wchar_t``sub_match`.|  
|[wregex](../standard-library/regex-typedefs.md#wregex_typedef)|Definizione dei tipi per `wchar_t``basic_regex`.|  
|[wsmatch](../standard-library/regex-typedefs.md#wsmatch_typedef)|Definizione dei tipi per `wstring``match_results`.|  
|[wsregex_iterator](../standard-library/regex-typedefs.md#wsregex_iterator_typedef)|Definizione dei tipi per `wstring``regex_iterator`.|  
|[wsregex_token_iterator](../standard-library/regex-typedefs.md#wsregex_token_iterator_typedef)|Definizione dei tipi per `wstring``regex_token_iterator`.|  
|[wssub_match](../standard-library/regex-typedefs.md#wssub_match_typedef)|Definizione dei tipi per `wstring``sub_match`.|  
  
### <a name="functions"></a>Funzioni  
  
|||  
|-|-|  
|[regex_match](../standard-library/regex-functions.md#regex_match_function)|Corrisponde esattamente a un'espressione regolare.|  
|[regex_replace](../standard-library/regex-functions.md#regex_replace_function)|Sostituisce espressioni regolari corrispondenti.|  
|[regex_search](../standard-library/regex-functions.md#regex_search_function)|Cerca una corrispondenza dell'espressione regolare.|  
|[swap](../standard-library/regex-functions.md#swap_function)|Scambia gli oggetti `basic_regex` o `match_results`.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator==](../standard-library/regex-operators.md#operator_eq_eq)|Confronto tra vari oggetti, uguali.|  
|[operator!=](../standard-library/regex-operators.md#operator_neq)|Confronto tra vari oggetti, non uguali.|  
|[operator<](../standard-library/regex-operators.md#operator_lt_)|Confronto tra vari oggetti, minore di.|  
|[operator\<=](../standard-library/regex-operators.md#operator_lt__eq)|Confronto tra vari oggetti, minore o uguale a.|  
|[operator>](../standard-library/regex-operators.md#operator_gt_)|Confronto tra vari oggetti, maggiore di.|  
|[operator>=](../standard-library/regex-operators.md#operator_gt__eq)|Confronto tra vari oggetti, maggiore o uguale a.|  
|[operator<<](../standard-library/regex-operators.md#operator_lt__lt_)|Inserisce una `sub_match` in un flusso.|  
  
## <a name="see-also"></a>Vedere anche  
[Espressioni regolari (C++)](../standard-library/regular-expressions-cpp.md)  
[Classe regex_constants](../standard-library/regex-constants-class.md)  
[Classe regex_error](../standard-library/regex-error-class.md)  
[Funzioni \<regex>](../standard-library/regex-functions.md)  
[Classe regex_iterator](../standard-library/regex-iterator-class.md)  
[Operatori \<regex>](../standard-library/regex-operators.md)  
[Classe regex_token_iterator](../standard-library/regex-token-iterator-class.md)  
[Classe regex_traits](../standard-library/regex-traits-class.md)  
[Typedef \<regex>](../standard-library/regex-typedefs.md)  




