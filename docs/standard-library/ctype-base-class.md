---
title: Classe ctype_base | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- locale/std::ctype_base
dev_langs:
- C++
helpviewer_keywords:
- ctype_base class
ms.assetid: ccffe891-d7ab-4d22-baf8-8eb6d438a96d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3def685a8cd108666b3e1b8be9314fc7585a9837
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33844894"
---
# <a name="ctypebase-class"></a>Classe ctype_base

La classe serve da classe base per i facet della classe modello [ctype](../standard-library/ctype-class.md). Classe base della classe ctype utilizzata per definire i tipi di enumerazione utilizzati per classificare o verificare i caratteri singolarmente o all'interno di intervalli completi.

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

## <a name="remarks"></a>Note

Definisce una maschera di enumerazione. Ogni costante di enumerazione caratterizza un modo diverso per classificare i caratteri, come definito dalle funzioni con nomi simili dichiarati nell'intestazione di \<ctype.h>. Le costanti sono:

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

È possibile caratterizzare una combinazione di classificazioni usando "o" con queste costanti. In particolare, è sempre true che **alnum** = = ( **alpha** &#124; **cifra** \) e **grafico** \= \= \( **alnum** &#124; **punct**).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
