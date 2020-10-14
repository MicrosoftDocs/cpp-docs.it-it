---
title: _Static_assert parola chiave e static_assert macro (C11)
description: Descrive la parola chiave C11 _Static_assert e la macro C11 static_assert.
ms.date: 10/13/2020
f1_keywords:
- static_assert_c
- _Static_assert
helpviewer_keywords:
- assertions [C], _Static_assert, static_assert
ms.openlocfilehash: dbe49b1dcbb8dd4e0d9df678f4456bc605e01c3f
ms.sourcegitcommit: 651348f8cd92ab0d52f09e9225a7eb41562559db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/14/2020
ms.locfileid: "92061019"
---
# <a name="_static_assert-keyword-and-static_assert-macro-c11"></a>_Static_assert parola chiave e static_assert macro (C11)

Esegue il test di un'asserzione in fase di compilazione. Se l'espressione costante specificata è **`false`** , il compilatore Visualizza il messaggio specificato e la compilazione ha esito negativo con l'errore C2338. in caso contrario, non si verifica alcun effetto. Novità di C11.

**`_Static_assert`** è una parola chiave introdotta in C11.
**`static_assert`** è una macro, introdotta in C11, che esegue il mapping alla **`_Static_assert`** parola chiave.

## <a name="syntax"></a>Sintassi

```C
_Static_assert(constant-expression, string-literal);
static_assert(constant-expression, string-literal);
```

### <a name="parameters"></a>Parametri

*espressione costante*\
Espressione costante integrale che può essere valutata in fase di compilazione. Se l'espressione è zero (false), Visualizza il parametro di *valore letterale stringa* e la compilazione ha esito negativo con un errore. Se l'espressione è diversa da zero (true), non si verifica alcun effetto.

*valore letterale stringa*\
Messaggio visualizzato se *Constant-Expression* restituisce zero (false). Il messaggio deve essere eseguito utilizzando il [set di caratteri di base](../c-language/ascii-character-set.md) del compilatore. I caratteri non possono essere [caratteri wide o multibyte](../c-language/multibyte-and-wide-characters.md).

## <a name="remarks"></a>Commenti

La **`_Static_assert`** parola chiave e la **`static_assert`** macro testano un'asserzione software in fase di compilazione. Possono essere usati nell'ambito globale o della funzione.

Al contrario, le [funzioni macro ASSERT e _assert e _wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md) testano un'asserzione software in fase di esecuzione e comportano un costo in fase di esecuzione.

**Comportamento specifico di Microsoft**

In C, quando non si include `<assert.h>` , il compilatore Microsoft Visual C/C++ considera **`static_assert`** come una parola chiave mappata a **`_Static_assert`** . **`static_assert`** L'uso di è preferibile perché lo stesso codice funzionerà sia in C che in C++.

## <a name="example-of-a-compile-time-assert"></a>Esempio di asserzione in fase di compilazione

Nell'esempio seguente **`static_assert`** **`_Static_assert`** vengono usati e per verificare il numero di elementi presenti in un'enumerazione e che i numeri interi sono a 32 bit.

```C
// requires /std:c11 or higher
#include <assert.h>

enum Items
{
    A,
    B,
    C,
    LENGTH
};

int main()
{
    // _Static_assert is a C11 keyword
    _Static_assert(LENGTH == 3, "Expected Items enum to have three elements");

    // Preferred: static_assert maps to _Static_Assert and is compatible with C++
    static_assert(sizeof(int) == 4, "Expecting 32 bit integers"); 

    return 0;
}
```

## <a name="requirements"></a>Requisiti

|Macro|Intestazione obbligatoria|
|-------------|---------------------|
|**`static_assert`**|\<assert.h>|

## <a name="see-also"></a>Vedere anche

[_STATIC_ASSERT macro](../c-runtime-library/reference/static-assert-macro.md)\
funzioni macro e [_assert e _wassert Assert](../c-runtime-library/reference/assert-macro-assert-wassert.md) 
 [/STD (specifica la versione standard del linguaggio)](../build/reference/std-specify-language-standard-version.md)