---
title: '&lt;regex&gt;'
ms.date: 11/04/2016
f1_keywords:
- <regex>
helpviewer_keywords:
- regex header
ms.assetid: 5dd4ef74-6063-4dbc-b692-1960bb736f0b
ms.openlocfilehash: 9d7f84ac47979cf398ae1f94e4d01ba0915da299
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217532"
---
# <a name="ltregexgt"></a>&lt;regex&gt;

Definisce un modello di classe per analizzare le [espressioni regolari (C++)](../standard-library/regular-expressions-cpp.md)e diversi modelli e funzioni di classe per cercare il testo corrispondente a un oggetto di espressione regolare.

## <a name="syntax"></a>Sintassi

```cpp
#include <regex>
```

## <a name="remarks"></a>Osservazioni

Per creare un oggetto di espressione regolare, usare il modello di classe [Basic_regex classe](../standard-library/basic-regex-class.md) o una delle relative specializzazioni, [Regex](../standard-library/regex-typedefs.md#regex) e [wregex](../standard-library/regex-typedefs.md#wregex), insieme ai flag di sintassi di tipo [regex_constants:: syntax_option_type](../standard-library/regex-constants-class.md#syntax_option_type).

Per eseguire la ricerca di corrispondenze a un oggetto di espressione regolare, usare le funzioni modello [regex_match](../standard-library/regex-functions.md#regex_match) e [regex_search](../standard-library/regex-functions.md#regex_search), insieme ai flag di corrispondenza di tipo [regex_constants:: match_flag_type](../standard-library/regex-constants-class.md#match_flag_type). Queste funzioni restituiscono risultati usando il modello di [classe Match_results Class](../standard-library/match-results-class.md) e le relative specializzazioni, [cmatch](../standard-library/regex-typedefs.md#cmatch), [wcmatch](../standard-library/regex-typedefs.md#wcmatch), [smatch](../standard-library/regex-typedefs.md#smatch)e [wsmatch](../standard-library/regex-typedefs.md#wsmatch), insieme al modello di classe [sub_match classe](../standard-library/sub-match-class.md) e alle relative specializzazioni, [csub_match](../standard-library/regex-typedefs.md#csub_match), [wcsub_match](../standard-library/regex-typedefs.md#wcsub_match), [ssub_match](../standard-library/regex-typedefs.md#ssub_match)e [wssub_match](../standard-library/regex-typedefs.md#wssub_match).

Per sostituire il testo che corrisponde a un oggetto di espressione regolare, usare la funzione di modello [regex_replace](../standard-library/regex-functions.md#regex_replace), insieme ai flag di corrispondenza di tipo [regex_constants:: match_flag_type](../standard-library/regex-constants-class.md#match_flag_type).

Per eseguire l'iterazione di più corrispondenze di un oggetto di espressione [regolare, usare](../standard-library/regex-typedefs.md#wsregex_token_iterator)i modelli di classe [regex_iterator classe](../standard-library/regex-iterator-class.md) e la [Classe regex_token_iterator](../standard-library/regex-token-iterator-class.md) o una delle relative specializzazioni, [cregex_iterator](../standard-library/regex-typedefs.md#cregex_iterator), [sregex_iterator](../standard-library/regex-typedefs.md#sregex_iterator), [wcregex_iterator](../standard-library/regex-typedefs.md#wcregex_iterator) [, wsregex_iterator, cregex_token_iterator](../standard-library/regex-typedefs.md#wsregex_iterator) [, sregex_token_iterator](../standard-library/regex-typedefs.md#cregex_token_iterator) [, wcregex_token_iterator](../standard-library/regex-typedefs.md#sregex_token_iterator) [o wsregex_token_iterator,](../standard-library/regex-typedefs.md#wcregex_token_iterator)insieme ai flag di corrispondenza di tipo [regex_constants:: match_flag_type](../standard-library/regex-constants-class.md#match_flag_type).

Per modificare i dettagli della grammatica delle espressioni regolari, scrivere una classe che implementi i tratti dell'espressione regolare.

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[basic_regex](../standard-library/basic-regex-class.md)|Esegue il wrapping di un'espressione regolare.|
|[match_results](../standard-library/match-results-class.md)|Contiene una sequenza delle sottocorrispondenze.|
|[regex_constants](../standard-library/regex-constants-class.md)|Contiene diverse costanti.|
|[regex_error](../standard-library/regex-error-class.md)|Segnala un'espressione regolare non valida.|
|[regex_iterator](../standard-library/regex-iterator-class.md)|Esegue l'iterazione attraverso le corrispondenze.|
|[regex_traits](../standard-library/regex-traits-class.md)|Descrive le caratteristiche degli elementi per la corrispondenza.|
|[regex_traits\<char>](../standard-library/regex-traits-char-class.md)|Descrive le caratteristiche di **`char`** per la corrispondenza.|
|[regex_traits<wchar_t>](../standard-library/regex-traits-wchar-t-class.md)|Descrive le caratteristiche di **`wchar_t`** per la corrispondenza.|
|[regex_token_iterator](../standard-library/regex-token-iterator-class.md)|Esegue l'iterazione attraverso le sottocorrispondenze.|
|[sub_match](../standard-library/sub-match-class.md)|Descrive una sottocorrispondenza.|

### <a name="type-definitions"></a>Definizioni dei tipi

|||
|-|-|
|[cmatch](../standard-library/regex-typedefs.md#cmatch)|Definizione del tipo per **`char`** `match_results` .|
|[cregex_iterator](../standard-library/regex-typedefs.md#cregex_iterator)|Definizione del tipo per **`char`** `regex_iterator` .|
|[cregex_token_iterator](../standard-library/regex-typedefs.md#cregex_token_iterator)|Definizione del tipo per **`char`** `regex_token_iterator` .|
|[csub_match](../standard-library/regex-typedefs.md#csub_match)|Definizione del tipo per **`char`** `sub_match` .|
|[Regex](../standard-library/regex-typedefs.md#regex)|Definizione del tipo per **`char`** `basic_regex` .|
|[smatch](../standard-library/regex-typedefs.md#smatch)|Definizione dei tipi per `string` `match_results`.|
|[sregex_iterator](../standard-library/regex-typedefs.md#sregex_iterator)|Definizione dei tipi per `string` `regex_iterator`.|
|[sregex_token_iterator](../standard-library/regex-typedefs.md#sregex_token_iterator)|Definizione dei tipi per `string` `regex_token_iterator`.|
|[ssub_match](../standard-library/regex-typedefs.md#ssub_match)|Definizione dei tipi per `string` `sub_match`.|
|[wcmatch](../standard-library/regex-typedefs.md#wcmatch)|Definizione del tipo per **`wchar_t`** `match_results` .|
|[wcregex_iterator](../standard-library/regex-typedefs.md#wcregex_iterator)|Definizione del tipo per **`wchar_t`** `regex_iterator` .|
|[wcregex_token_iterator](../standard-library/regex-typedefs.md#wcregex_token_iterator)|Definizione del tipo per **`wchar_t`** `regex_token_iterator` .|
|[wcsub_match](../standard-library/regex-typedefs.md#wcsub_match)|Definizione del tipo per **`wchar_t`** `sub_match` .|
|[wregex](../standard-library/regex-typedefs.md#wregex)|Definizione del tipo per **`wchar_t`** `basic_regex` .|
|[wsmatch](../standard-library/regex-typedefs.md#wsmatch)|Definizione dei tipi per `wstring` `match_results`.|
|[wsregex_iterator](../standard-library/regex-typedefs.md#wsregex_iterator)|Definizione dei tipi per `wstring` `regex_iterator`.|
|[wsregex_token_iterator](../standard-library/regex-typedefs.md#wsregex_token_iterator)|Definizione dei tipi per `wstring` `regex_token_iterator`.|
|[wssub_match](../standard-library/regex-typedefs.md#wssub_match)|Definizione dei tipi per `wstring` `sub_match`.|

### <a name="functions"></a>Funzioni

|Funzione|Descrizione|
|-|-|
|[regex_match](../standard-library/regex-functions.md#regex_match)|Corrisponde esattamente a un'espressione regolare.|
|[regex_replace](../standard-library/regex-functions.md#regex_replace)|Sostituisce espressioni regolari corrispondenti.|
|[regex_search](../standard-library/regex-functions.md#regex_search)|Cerca una corrispondenza dell'espressione regolare.|
|[scambio](../standard-library/regex-functions.md#swap)|Scambia gli oggetti `basic_regex` o `match_results`.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore = =](../standard-library/regex-operators.md#op_eq_eq)|Confronto tra vari oggetti, uguali.|
|[operatore! =](../standard-library/regex-operators.md#op_neq)|Confronto tra vari oggetti, non uguali.|
|[operatore<](../standard-library/regex-operators.md#op_lt)|Confronto tra vari oggetti, minore di.|
|[operatore\<=](../standard-library/regex-operators.md#op_gt_eq)|Confronto tra vari oggetti, minore o uguale a.|
|[operatore>](../standard-library/regex-operators.md#op_gt)|Confronto tra vari oggetti, maggiore di.|
|[operatore>=](../standard-library/regex-operators.md#op_gt_eq)|Confronto tra vari oggetti, maggiore o uguale a.|
|[operatore<<](../standard-library/regex-operators.md#op_lt_lt)|Inserisce una `sub_match` in un flusso.|

## <a name="see-also"></a>Vedere anche

[Espressioni regolari (C++)](../standard-library/regular-expressions-cpp.md)\
[Classe regex_constants](../standard-library/regex-constants-class.md)\
[Classe regex_error](../standard-library/regex-error-class.md)\
[\<regex>funzioni](../standard-library/regex-functions.md)\
[Classe regex_iterator](../standard-library/regex-iterator-class.md)\
[\<regex>operatori](../standard-library/regex-operators.md)\
[Classe regex_token_iterator](../standard-library/regex-token-iterator-class.md)\
[Classe regex_traits](../standard-library/regex-traits-class.md)\
[\<regex>typedef](../standard-library/regex-typedefs.md)
