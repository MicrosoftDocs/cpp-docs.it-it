---
title: Classe regex_error | Microsoft Docs
ms.custom: ''
ms.date: 09/10/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- regex/std::regex_error
- regex/std::regex_error::code
dev_langs:
- C++
helpviewer_keywords:
- regex_error class
ms.assetid: 3333a1a3-ca6f-4612-84b2-1b4c7e3db5a4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7358af41e1a7172daec619bec3e701ff4541fd0c
ms.sourcegitcommit: 27b5712badd09a09c499d887e2e4cf2208a28603
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2018
ms.locfileid: "44384982"
---
# <a name="regexerror-class"></a>Classe regex_error

Segnala un oggetto basic_regex non valido.

## <a name="syntax"></a>Sintassi

```cpp
class regex_error
: public std::runtime_error
```

## <a name="remarks"></a>Note

La classe descrive un oggetto eccezione generato per segnalare un errore nella costruzione o nell'uso di un oggetto `basic_regex` .

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[regex_error](#regex_error)|Costruisce l'oggetto.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[Codice](#code)|Restituisce il codice di errore.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<regex>

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

## <a name="code"></a>  regex_error::code

Restituisce il codice di errore.

```cpp
regex_constants::error_code code() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce il valore passato al costruttore dell'oggetto.

## <a name="regex_error"></a>  regex_error::regex_error

Costruisce l'oggetto.

```cpp
regex_error(regex_constants::error_code error);
```

### <a name="parameters"></a>Parametri

*Errore*<br/>
Codice di errore.

### <a name="remarks"></a>Note

Il costruttore crea un oggetto che contiene il valore *errore*.

## <a name="see-also"></a>Vedere anche

[\<regex>](../standard-library/regex.md)<br/>
[Classe regex_constants](../standard-library/regex-constants-class.md)<br/>
[Funzioni \<regex>](../standard-library/regex-functions.md)<br/>
[Classe regex_iterator](../standard-library/regex-iterator-class.md)<br/>
[Operatori \<regex>](../standard-library/regex-operators.md)<br/>
[Classe regex_token_iterator](../standard-library/regex-token-iterator-class.md)<br/>
[Classe regex_traits](../standard-library/regex-traits-class.md)<br/>
[Typedef \<regex>](../standard-library/regex-typedefs.md)<br/>
