---
description: 'Altre informazioni su: ctype_base Class'
title: Classe ctype_base
ms.date: 11/04/2016
f1_keywords:
- locale/std::ctype_base
helpviewer_keywords:
- ctype_base class
ms.assetid: ccffe891-d7ab-4d22-baf8-8eb6d438a96d
ms.openlocfilehash: 430e6fbf77842e61e662fd3024a54b418f487748
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324682"
---
# <a name="ctype_base-class"></a>Classe ctype_base

La classe funge da classe base per i facet del modello di classe [CType](../standard-library/ctype-class.md). Classe base della classe ctype utilizzata per definire i tipi di enumerazione utilizzati per classificare o verificare i caratteri singolarmente o all'interno di intervalli completi.

## <a name="syntax"></a>Sintassi

```cpp
struct ctype_base : public locale::facet
{
    enum
    {
        alnum,
        alpha,
        cntrl,
        digit,
        graph,
        lower,
        print,
        punct,
        space,
        upper,
        xdigit
    };
    typedef short mask;

    ctype_base( size_t _Refs = 0 );
    ~ctype_base();
};
```

## <a name="remarks"></a>Osservazioni

Definisce una maschera di enumerazione. Ogni costante di enumerazione caratterizza un modo diverso per classificare i caratteri, come definito dalle funzioni con nomi simili dichiarati nell'intestazione \<ctype.h> . Le costanti sono:

- **space** (funzione [isspace](../standard-library/locale-functions.md#isspace))

- **print** (funzione [isprint](../standard-library/locale-functions.md#isprint))

- **cntrl** (funzione [iscntrl](../standard-library/locale-functions.md#iscntrl))

- **upper** (funzione [isupper](../standard-library/locale-functions.md#isupper))

- **lower** (funzione [islower](../standard-library/locale-functions.md#islower))

- **digit** (funzione [isdigit](../standard-library/locale-functions.md#isdigit))

- **punct** (funzione [ispunct](../standard-library/locale-functions.md#ispunct))

- **xdigit** (funzione [isxdigit](../standard-library/locale-functions.md#isxdigit))

- **alpha** (funzione [isalpha](../standard-library/locale-functions.md#isalpha))

- **alnum** (function [isalnum](../standard-library/locale-functions.md#isalnum))

- **graph** (funzione [isgraph](../standard-library/locale-functions.md#isgraph))

È possibile caratterizzare una combinazione di classificazioni usando "o" con queste costanti. In particolare, è sempre vero che **alnum** = = ( **Alpha** &#124; **digit** \) e **Graph** \= \= \( **alnum** &#124; **punct**).

## <a name="requirements"></a>Requisiti

**Intestazione:**\<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
