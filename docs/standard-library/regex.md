---
title: '&lt;regex&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: <regex>
dev_langs: C++
helpviewer_keywords: regex header
ms.assetid: 5dd4ef74-6063-4dbc-b692-1960bb736f0b
caps.latest.revision: "23"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7da90e13c325380cb8aad54d1af712c1567e0420
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ltregexgt"></a>&lt;regex&gt;
Definisce una classe di modello per analizzare [espressioni regolari di C++](../standard-library/regular-expressions-cpp.md) e diverse classi modello e funzioni per cercare testo corrispondente a un oggetto di espressione regolare.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <regex>  
```  
  
## <a name="remarks"></a>Note  
 Per creare un oggetto di espressione regolare, usare la classe modello [classe basic_regex](../standard-library/basic-regex-class.md) o una delle relative specializzazioni, [regex](../standard-library/regex-typedefs.md#regex) e [wregex](../standard-library/regex-typedefs.md#wregex), in combinazione con i contrassegni di sintassi di tipo [regex_constants::syntax_option_type](../standard-library/regex-constants-class.md#syntax_option_type).  
  
 Per cercare testo corrispondente a un oggetto di espressione regolare, utilizzare le funzioni di modello [regex_match](../standard-library/regex-functions.md#regex_match) e [regex_search](../standard-library/regex-functions.md#regex_search), insieme con i contrassegni di corrispondenza di tipo [regex_constants::match_ flag_type](../standard-library/regex-constants-class.md#match_flag_type). Queste funzioni restituiscono risultati usando la classe modello [classe match_results](../standard-library/match-results-class.md) e le relative specializzazioni, [cmatch](../standard-library/regex-typedefs.md#cmatch), [wcmatch](../standard-library/regex-typedefs.md#wcmatch), [smatch](../standard-library/regex-typedefs.md#smatch) e [wsmatch](../standard-library/regex-typedefs.md#wsmatch), in combinazione con la classe modello [classe sub_match](../standard-library/sub-match-class.md) e alle relative specializzazioni, [csub_match](../standard-library/regex-typedefs.md#csub_match), [wcsub_match](../standard-library/regex-typedefs.md#wcsub_match), [ssub_match](../standard-library/regex-typedefs.md#ssub_match) e [wssub_match](../standard-library/regex-typedefs.md#wssub_match).  
  
 Per sostituire il testo che corrisponde a un oggetto di espressione regolare, utilizzare la funzione di modello [regex_replace](../standard-library/regex-functions.md#regex_replace), insieme con i contrassegni di corrispondenza di tipo [regex_constants::match_flag_type](../standard-library/regex-constants-class.md#match_flag_type).  
  
 Per eseguire l'iterazione attraverso più corrispondenze di un oggetto espressione regolare, usare le classi modello [classe regex_iterator](../standard-library/regex-iterator-class.md) e [classe regex_token_iterator](../standard-library/regex-token-iterator-class.md) oppure una delle relative specializzazioni, [cregex_iterator](../standard-library/regex-typedefs.md#cregex_iterator), [sregex_iterator](../standard-library/regex-typedefs.md#sregex_iterator), [wcregex_iterator](../standard-library/regex-typedefs.md#wcregex_iterator), [wsregex_iterator](../standard-library/regex-typedefs.md#wsregex_iterator), [cregex_token_iterator](../standard-library/regex-typedefs.md#cregex_token_iterator), [sregex_token_iterator](../standard-library/regex-typedefs.md#sregex_token_iterator), [wcregex_token_iterator](../standard-library/regex-typedefs.md#wcregex_token_iterator) o [wsregex_token_iterator](../standard-library/regex-typedefs.md#wsregex_token_iterator), in combinazione con i contrassegni di corrispondenza di tipo [regex_constants::match_flag_type](../standard-library/regex-constants-class.md#match_flag_type).  
  
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
|[cmatch](../standard-library/regex-typedefs.md#cmatch)|Definizione dei tipi per `char``match_results`.|  
|[cregex_iterator](../standard-library/regex-typedefs.md#cregex_iterator)|Definizione dei tipi per `char``regex_iterator`.|  
|[cregex_token_iterator](../standard-library/regex-typedefs.md#cregex_token_iterator)|Definizione dei tipi per `char``regex_token_iterator`.|  
|[csub_match](../standard-library/regex-typedefs.md#csub_match)|Definizione dei tipi per `char``sub_match`.|  
|[regex](../standard-library/regex-typedefs.md#regex)|Definizione dei tipi per `char``basic_regex`.|  
|[smatch](../standard-library/regex-typedefs.md#smatch)|Definizione dei tipi per `string``match_results`.|  
|[sregex_iterator](../standard-library/regex-typedefs.md#sregex_iterator)|Definizione dei tipi per `string``regex_iterator`.|  
|[sregex_token_iterator](../standard-library/regex-typedefs.md#sregex_token_iterator)|Definizione dei tipi per `string``regex_token_iterator`.|  
|[ssub_match](../standard-library/regex-typedefs.md#ssub_match)|Definizione dei tipi per `string``sub_match`.|  
|[wcmatch](../standard-library/regex-typedefs.md#wcmatch)|Definizione dei tipi per `wchar_t``match_results`.|  
|[wcregex_iterator](../standard-library/regex-typedefs.md#wcregex_iterator)|Definizione dei tipi per `wchar_t``regex_iterator`.|  
|[wcregex_token_iterator](../standard-library/regex-typedefs.md#wcregex_token_iterator)|Definizione dei tipi per `wchar_t``regex_token_iterator`.|  
|[wcsub_match](../standard-library/regex-typedefs.md#wcsub_match)|Definizione dei tipi per `wchar_t``sub_match`.|  
|[wregex](../standard-library/regex-typedefs.md#wregex)|Definizione dei tipi per `wchar_t``basic_regex`.|  
|[wsmatch](../standard-library/regex-typedefs.md#wsmatch)|Definizione dei tipi per `wstring``match_results`.|  
|[wsregex_iterator](../standard-library/regex-typedefs.md#wsregex_iterator)|Definizione dei tipi per `wstring``regex_iterator`.|  
|[wsregex_token_iterator](../standard-library/regex-typedefs.md#wsregex_token_iterator)|Definizione dei tipi per `wstring``regex_token_iterator`.|  
|[wssub_match](../standard-library/regex-typedefs.md#wssub_match)|Definizione dei tipi per `wstring``sub_match`.|  
  
### <a name="functions"></a>Funzioni  
  
|||  
|-|-|  
|[regex_match](../standard-library/regex-functions.md#regex_match)|Corrisponde esattamente a un'espressione regolare.|  
|[regex_replace](../standard-library/regex-functions.md#regex_replace)|Sostituisce espressioni regolari corrispondenti.|  
|[regex_search](../standard-library/regex-functions.md#regex_search)|Cerca una corrispondenza dell'espressione regolare.|  
|[swap](../standard-library/regex-functions.md#swap)|Scambia gli oggetti `basic_regex` o `match_results`.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator==](../standard-library/regex-operators.md#op_eq_eq)|Confronto tra vari oggetti, uguali.|  
|[operator!=](../standard-library/regex-operators.md#op_neq)|Confronto tra vari oggetti, non uguali.|  
|[operator<](../standard-library/regex-operators.md#op_lt)|Confronto tra vari oggetti, minore di.|  
|[operator\<=](../standard-library/regex-operators.md#op_gt_eq)|Confronto tra vari oggetti, minore o uguale a.|  
|[operator>](../standard-library/regex-operators.md#op_gt)|Confronto tra vari oggetti, maggiore di.|  
|[operator>=](../standard-library/regex-operators.md#op_gt_eq)|Confronto tra vari oggetti, maggiore o uguale a.|  
|[operator<<](../standard-library/regex-operators.md#op_lt_lt)|Inserisce una `sub_match` in un flusso.|  
  
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



