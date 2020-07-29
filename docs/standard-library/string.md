---
title: '&lt;string&gt;'
ms.date: 11/04/2016
f1_keywords:
- string/std::<string>
- <string>
helpviewer_keywords:
- string header
ms.assetid: a2fb9d00-d7ae-4170-bfea-2dc337aa37cf
ms.openlocfilehash: 68b1865fd9c45c3782917edba273083dac086548
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212124"
---
# <a name="ltstringgt"></a>&lt;string&gt;

Definisce il modello di classe del contenitore `basic_string` e diversi modelli di supporto.

Per altre informazioni su `basic_string`, vedere [Classe basic_string](../standard-library/basic-string-class.md)

## <a name="syntax"></a>Sintassi

```cpp
#include <string>
```

## <a name="remarks"></a>Osservazioni

Il linguaggio C++ e la libreria standard C++ supportano due tipi di stringhe:

- Matrici di caratteri con terminazione Null spesso definite stringhe C.

- oggetti modello di classe, di tipo `basic_string` , che gestiscono tutti gli **`char`** argomenti di modello simili a.

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[string](../standard-library/string-typedefs.md#string)|Tipo che descrive una specializzazione del modello di classe `basic_string` con elementi di tipo **`char`** come `string` .|
|[wstring](../standard-library/string-typedefs.md#wstring)|Tipo che descrive una specializzazione del modello di classe `basic_string` con elementi di tipo **`wchar_t`** come `wstring` .|
|[u16string](../standard-library/string-typedefs.md#u16string)|Tipo che descrive una specializzazione del modello di classe `basic_string` in base a elementi di tipo **`char16_t`** .|
|[u32string](../standard-library/string-typedefs.md#u32string)|Tipo che descrive una specializzazione del modello di classe `basic_string` in base a elementi di tipo **`char32_t`** .|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore +](../standard-library/string-operators.md#op_add)|Concatena due oggetti stringa.|
|[operatore! =](../standard-library/string-operators.md#op_neq)|Verifica se l'oggetto stringa a sinistra dell'operatore non è uguale all'oggetto stringa a destra.|
|[operatore = =](../standard-library/string-operators.md#op_eq_eq)|Verifica se l'oggetto stringa a sinistra dell'operatore è uguale all'oggetto stringa a destra.|
|[operatore<](../standard-library/string-operators.md#op_lt)|Verifica se l'oggetto stringa a sinistra dell'operatore è minore dell'oggetto stringa a destra.|
|[operatore<=](../standard-library/string-operators.md#op_lt_eq)|Verifica se l'oggetto stringa a sinistra dell'operatore è minore o uguale all'oggetto stringa a destra.|
|[operatore<\<](../standard-library/string-operators.md#op_lt_lt)|Funzione di modello che inserisce una stringa nel flusso di output.|
|[operatore>](../standard-library/string-operators.md#op_gt)|Verifica se l'oggetto stringa a sinistra dell'operatore è maggiore dell'oggetto stringa a destra.|
|[operatore>=](../standard-library/string-operators.md#op_gt_eq)|Verifica se l'oggetto stringa a sinistra dell'operatore è maggiore o uguale all'oggetto stringa a destra.|
|[operatore>>](../standard-library/string-operators.md#op_gt_gt)|Funzione di modello che estrae una stringa dal flusso di input.|

### <a name="specialized-template-functions"></a>Funzioni di modello specializzate

|||
|-|-|
|hash|Genera un hash di una stringa.|
|[scambio](../standard-library/string-functions.md#swap)|Scambia le matrici di caratteri di due stringhe.|
|[stod](../standard-library/string-functions.md#stod)|Converte una sequenza di caratteri in un oggetto **`double`** .|
|[stof](../standard-library/string-functions.md#stof)|Converte una sequenza di caratteri in un oggetto **`float`** .|
|[Stoi](../standard-library/string-functions.md#stoi)|Converte una sequenza di caratteri in un Integer.|
|[stold](../standard-library/string-functions.md#stold)|Converte una sequenza di caratteri in un oggetto **`long double`** .|
|[stoll](../standard-library/string-functions.md#stoll)|Converte una sequenza di caratteri in un oggetto **`long long`** .|
|[stoul](../standard-library/string-functions.md#stoul)|Converte una sequenza di caratteri in un oggetto **`unsigned long`** .|
|[stoull](../standard-library/string-functions.md#stoull)|Converte una sequenza di caratteri in un oggetto **`unsigned long long`** .|
|[to_string](../standard-library/string-functions.md#to_string)|Converte un valore in un valore `string`.|
|[to_wstring](../standard-library/string-functions.md#to_wstring)|Converte un valore in un valore `string` di tipo wide.|

### <a name="functions"></a>Funzioni

|Funzione|Descrizione|
|-|-|
|[Modello getline](../standard-library/string-functions.md#getline)|Estrarre stringhe dal flusso di input riga per riga.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe basic_string](../standard-library/basic-string-class.md)|Modello di classe che descrive gli oggetti che possono archiviare una sequenza di oggetti arbitrari di tipo carattere.|
|[Struct char_traits](../standard-library/char-traits-struct.md)|Modello di classe che descrive gli attributi associati a un carattere di tipo CharType|

### <a name="specializations"></a>Specializzazioni

|||
|-|-|
|[\<char>Struct char_traits](../standard-library/char-traits-char-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits` \<CharType> per un elemento di tipo **`char`** .|
|[Struct char_traits<wchar_t>](../standard-library/char-traits-wchar-t-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits` \<CharType> per un elemento di tipo **`wchar_t`** .|
|[Struct char_traits<char16_t>](../standard-library/char-traits-char16-t-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits` \<CharType> per un elemento di tipo **`char16_t`** .|
|[Struct char_traits<char32_t>](../standard-library/char-traits-char32-t-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits` \<CharType> per un elemento di tipo **`char32_t`** .|

## <a name="requirements"></a>Requisiti

- **Intestazione:**\<string>

- **Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
