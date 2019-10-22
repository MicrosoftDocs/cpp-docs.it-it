---
title: '&lt;string&gt;'
ms.date: 11/04/2016
f1_keywords:
- string/std::<string>
- <string>
helpviewer_keywords:
- string header
ms.assetid: a2fb9d00-d7ae-4170-bfea-2dc337aa37cf
ms.openlocfilehash: 0b8ca5744418860cc6b4868dda9174ae2eb68a98
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72685885"
---
# <a name="ltstringgt"></a>&lt;string&gt;

Definisce il modello di classe del contenitore `basic_string` e diversi modelli di supporto.

Per altre informazioni su `basic_string`, vedere [Classe basic_string](../standard-library/basic-string-class.md)

## <a name="syntax"></a>Sintassi

```cpp
#include <string>
```

## <a name="remarks"></a>Note

Il linguaggio C++ e la libreria standard C++ supportano due tipi di stringhe:

- Matrici di caratteri con terminazione Null spesso definite stringhe C.

- oggetti modello di classe, di tipo `basic_string`, che gestiscono tutti gli argomenti di modello di tipo **char**.

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[string](../standard-library/string-typedefs.md#string)|Tipo che descrive una specializzazione del modello di classe `basic_string` con gli elementi di tipo **char** come `string`.|
|[wstring](../standard-library/string-typedefs.md#wstring)|Tipo che descrive una specializzazione del modello di classe `basic_string` con elementi di tipo **wchar_t** come `wstring`.|
|[u16string](../standard-library/string-typedefs.md#u16string)|Tipo che descrive una specializzazione del modello di classe `basic_string` in base agli elementi di tipo `char16_t`.|
|[u32string](../standard-library/string-typedefs.md#u32string)|Tipo che descrive una specializzazione del modello di classe `basic_string` in base agli elementi di tipo `char32_t`.|

### <a name="operators"></a>Operatori

|??|Descrizione|
|-|-|
|[operator+](../standard-library/string-operators.md#op_add)|Concatena due oggetti stringa.|
|[operator!=](../standard-library/string-operators.md#op_neq)|Verifica se l'oggetto stringa a sinistra dell'operatore non è uguale all'oggetto stringa a destra.|
|[operator==](../standard-library/string-operators.md#op_eq_eq)|Verifica se l'oggetto stringa a sinistra dell'operatore è uguale all'oggetto stringa a destra.|
|[operator<](../standard-library/string-operators.md#op_lt)|Verifica se l'oggetto stringa a sinistra dell'operatore è minore dell'oggetto stringa a destra.|
|[operator<=](../standard-library/string-operators.md#op_lt_eq)|Verifica se l'oggetto stringa a sinistra dell'operatore è minore o uguale all'oggetto stringa a destra.|
|[operator<\<](../standard-library/string-operators.md#op_lt_lt)|Funzione di modello che inserisce una stringa nel flusso di output.|
|[operator>](../standard-library/string-operators.md#op_gt)|Verifica se l'oggetto stringa a sinistra dell'operatore è maggiore dell'oggetto stringa a destra.|
|[operator>=](../standard-library/string-operators.md#op_gt_eq)|Verifica se l'oggetto stringa a sinistra dell'operatore è maggiore o uguale all'oggetto stringa a destra.|
|[operator>>](../standard-library/string-operators.md#op_gt_gt)|Funzione di modello che estrae una stringa dal flusso di input.|

### <a name="specialized-template-functions"></a>Funzioni di modello specializzate

|||
|-|-|
|hash|Genera un hash di una stringa.|
|[swap](../standard-library/string-functions.md#swap)|Scambia le matrici di caratteri di due stringhe.|
|[stod](../standard-library/string-functions.md#stod)|Converte una sequenza di caratteri in un **valore Double**.|
|[stof](../standard-library/string-functions.md#stof)|Converte una sequenza di caratteri in un valore **float**.|
|[stoi](../standard-library/string-functions.md#stoi)|Converte una sequenza di caratteri in un Integer.|
|[stold](../standard-library/string-functions.md#stold)|Converte una sequenza di caratteri in un **valore long double**.|
|[stoll](../standard-library/string-functions.md#stoll)|Converte una sequenza di caratteri in un **Long Long**.|
|[stoul](../standard-library/string-functions.md#stoul)|Converte una sequenza di caratteri in un oggetto **Long senza segno**.|
|[stoull](../standard-library/string-functions.md#stoull)|Converte una sequenza di caratteri in un **Long Long senza segno**.|
|[to_string](../standard-library/string-functions.md#to_string)|Converte un valore in un valore `string`.|
|[to_wstring](../standard-library/string-functions.md#to_wstring)|Converte un valore in un valore `string` di tipo wide.|

### <a name="functions"></a>Funzioni

|Funzione|Descrizione|
|-|-|
|[Modello getline](../standard-library/string-functions.md#getline)|Estrarre stringhe dal flusso di input riga per riga.|

### <a name="classes"></a>Classi

|Class|Descrizione|
|-|-|
|[Classe basic_string](../standard-library/basic-string-class.md)|Modello di classe che descrive gli oggetti che possono archiviare una sequenza di oggetti arbitrari di tipo carattere.|
|[Struct char_traits](../standard-library/char-traits-struct.md)|Modello di classe che descrive gli attributi associati a un carattere di tipo CharType|

### <a name="specializations"></a>Specializzazioni

|||
|-|-|
|[Struct char_traits\<char>](../standard-library/char-traits-char-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits`\<CharType> in un elemento di tipo `char`.|
|[Struct char_traits<wchar_t>](../standard-library/char-traits-wchar-t-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits`\<CharType> in un elemento di tipo `wchar_t`.|
|[Struct char_traits<char16_t>](../standard-library/char-traits-char16-t-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits`\<CharType> in un elemento di tipo `char16_t`.|
|[Struct char_traits<char32_t>](../standard-library/char-traits-char32-t-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits`\<CharType> in un elemento di tipo `char32_t`.|

## <a name="requirements"></a>Requisiti

- **Intestazione:** \<string>

- **Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
