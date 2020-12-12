---
description: 'Altre informazioni su: regex_error Class'
title: Classe regex_error
ms.date: 09/10/2018
f1_keywords:
- regex/std::regex_error
- regex/std::regex_error::code
helpviewer_keywords:
- regex_error class
ms.assetid: 3333a1a3-ca6f-4612-84b2-1b4c7e3db5a4
ms.openlocfilehash: a6e2ace44c7463cbe43d000d3dabb9cf9f7d6676
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97250504"
---
# <a name="regex_error-class"></a>Classe regex_error

Segnala un oggetto basic_regex non valido.

## <a name="syntax"></a>Sintassi

```cpp
class regex_error
: public std::runtime_error
```

## <a name="remarks"></a>Osservazioni

La classe descrive un oggetto eccezione generato per segnalare un errore nella costruzione o nell'uso di un oggetto `basic_regex` .

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[regex_error](#regex_error)|Costruisce l'oggetto.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[code](#code)|Restituisce il codice di errore.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<regex>

**Spazio dei nomi:** std

## <a name="example"></a>Esempio

```cpp
// std__regex__regex_error.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

int main()
    {
    std::regex_error paren(std::regex_constants::error_paren);

    try
        {
        std::regex rx("(a");
        }
    catch (const std::regex_error& rerr)
        {
        std::cout << "regex error: "
            << (rerr.code() == paren.code() ? "unbalanced parentheses" : "")
            << std::endl;
        }
    catch (...)
        {
        std::cout << "unknown exception" << std::endl;
        }

    return (0);
    }
```

```Output
regex error: unbalanced parentheses
```

## <a name="regex_errorcode"></a><a name="code"></a> regex_error:: code

Restituisce il codice di errore.

```cpp
regex_constants::error_code code() const;
```

### <a name="remarks"></a>Commenti

La funzione membro restituisce il valore passato al costruttore dell'oggetto.

## <a name="regex_errorregex_error"></a><a name="regex_error"></a> regex_error:: regex_error

Costruisce l'oggetto.

```cpp
regex_error(regex_constants::error_code error);
```

### <a name="parameters"></a>Parametri

*errore*\
Codice di errore.

### <a name="remarks"></a>Commenti

Il costruttore crea un oggetto che include l' *errore* del valore.

## <a name="see-also"></a>Vedi anche

[\<regex>](../standard-library/regex.md)\
[Classe regex_constants](../standard-library/regex-constants-class.md)\
[\<regex> funzioni](../standard-library/regex-functions.md)\
[Classe regex_iterator](../standard-library/regex-iterator-class.md)\
[\<regex> operatori](../standard-library/regex-operators.md)\
[Classe regex_token_iterator](../standard-library/regex-token-iterator-class.md)\
[Classe regex_traits](../standard-library/regex-traits-class.md)\
[\<regex> typedef](../standard-library/regex-typedefs.md)
