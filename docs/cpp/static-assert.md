---
description: 'Altre informazioni su: static_assert'
title: static_assert
ms.date: 07/29/2019
f1_keywords:
- static_assert_cpp
helpviewer_keywords:
- assertions [C++], static_assert
- static_assert
ms.assetid: 28dd3668-e78c-4de8-ba68-552084743426
ms.openlocfilehash: 76383aacf67f0e8bcc12880674afa17f9fce3603
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97317987"
---
# <a name="static_assert"></a>static_assert

Verifica un'asserzione software in fase di compilazione. Se l'espressione costante specificata è **`false`** , il compilatore Visualizza il messaggio specificato, se ne viene fornito uno, e la compilazione ha esito negativo con l'errore C2338. in caso contrario, la dichiarazione non ha alcun effetto.

## <a name="syntax"></a>Sintassi

```
static_assert( constant-expression, string-literal );

static_assert( constant-expression ); // C++17 (Visual Studio 2017 and later)
```

### <a name="parameters"></a>Parametri

*espressione costante*\
Espressione costante integrale che può essere convertita in un valore booleano. Se l'espressione valutata è zero (false), viene visualizzato il parametro *stringa-Literal* e la compilazione ha esito negativo con un errore. Se l'espressione è diversa da zero (true), la **`static_assert`** dichiarazione non ha alcun effetto.

*valore letterale stringa*\
Messaggio che viene visualizzato se il parametro *Constant-Expression* è zero. Il messaggio è una stringa di caratteri nel [set di caratteri di base](../c-language/ascii-character-set.md) del compilatore. ovvero non [caratteri multibyte o Wide](../c-language/multibyte-and-wide-characters.md).

## <a name="remarks"></a>Commenti

Il parametro *Constant-Expression* di una **`static_assert`** dichiarazione rappresenta un' *asserzione software*. Un'asserzione software specifica una condizione che si prevede abbia valore True in un particolare punto del programma. Se la condizione è true, la **`static_assert`** dichiarazione non ha alcun effetto. Se la condizione è false, l'asserzione ha esito negativo, il compilatore Visualizza il messaggio nel parametro *stringa-valore letterale* e la compilazione ha esito negativo con un errore. In Visual Studio 2017 e versioni successive, il parametro di valore letterale stringa è facoltativo.

La **`static_assert`** Dichiarazione verifica un'asserzione software in fase di compilazione. Al contrario, le [funzioni macro ASSERT e _assert e _wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md) testano un'asserzione software in fase di esecuzione e comportano un costo in fase di esecuzione nello spazio o nel tempo. La **`static_assert`** dichiarazione è particolarmente utile per il debug dei modelli perché gli argomenti di modello possono essere inclusi nel parametro *Constant-Expression* .

Il compilatore esamina la **`static_assert`** dichiarazione per gli errori di sintassi quando viene rilevata la dichiarazione. Il compilatore valuta immediatamente il parametro *Constant-Expression* se non dipende da un parametro di modello. In caso contrario, il compilatore valuta il parametro *Constant-Expression* quando viene creata un'istanza del modello. Di conseguenza, il compilatore potrebbe generare un messaggio di diagnostica una volta quando la dichiarazione viene rilevata e nuovamente quando viene creata un'istanza del modello.

È possibile usare la **`static_assert`** parola chiave nello spazio dei nomi, nella classe o nell'ambito del blocco. La **`static_assert`** parola chiave è tecnicamente una dichiarazione, anche se non introduce il nuovo nome nel programma, perché può essere utilizzata nell'ambito dello spazio dei nomi.

## <a name="description-of-static_assert-with-namespace-scope"></a>Descrizione di `static_assert` con ambito dello spazio dei nomi

Nell'esempio seguente la **`static_assert`** dichiarazione ha un ambito dello spazio dei nomi. Poiché il compilatore riconosce la dimensione di tipo `void *`, l'espressione viene valutata immediatamente.

## <a name="example-static_assert-with-namespace-scope"></a>Esempio: `static_assert` con ambito spazio dei nomi

```cpp
static_assert(sizeof(void *) == 4, "64-bit code generation is not supported.");
```

## <a name="description-of-static_assert-with-class-scope"></a>Descrizione di `static_assert` con ambito classe

Nell'esempio seguente la **`static_assert`** dichiarazione ha ambito di classe. **`static_assert`** Verifica che un parametro di modello sia un tipo di *dati Plain Old* (POD). Il compilatore esamina la **`static_assert`** dichiarazione quando viene dichiarata, ma non valuta il parametro *Constant-Expression* fino a quando non `basic_string` viene creata un'istanza del modello di classe in `main()` .

## <a name="example-static_assert-with-class-scope"></a>Esempio: `static_assert` con ambito della classe

```cpp
#include <type_traits>
#include <iosfwd>
namespace std {
template <class CharT, class Traits = std::char_traits<CharT> >
class basic_string {
    static_assert(std::is_pod<CharT>::value,
                  "Template argument CharT must be a POD type in class template basic_string");
    // ...
    };
}

struct NonPOD {
    NonPOD(const NonPOD &) {}
    virtual ~NonPOD() {}
};

int main()
{
    std::basic_string<char> bs;
}
```

## <a name="description-of-static_assert-with-block-scope"></a>Descrizione dell' `static_assert` ambito con blocco

Nell'esempio seguente la **`static_assert`** dichiarazione presenta un ambito del blocco. **`static_assert`** Verifica che la dimensione della struttura VMPage sia uguale alla PageSize della memoria virtuale del sistema.

## <a name="example-static_assert-at-block-scope"></a>Esempio: `static_assert` nell'ambito del blocco

```cpp
#include <sys/param.h> // defines PAGESIZE
class VMMClient {
public:
    struct VMPage { // ...
           };
    int check_pagesize() {
    static_assert(sizeof(VMPage) == PAGESIZE,
        "Struct VMPage must be the same size as a system virtual memory page.");
    // ...
    }
// ...
};
```

## <a name="see-also"></a>Vedi anche

[Asserzione e messaggi forniti dall'utente (C++)](../cpp/assertion-and-user-supplied-messages-cpp.md)<br/>
[Direttiva #error (C/C++)](../preprocessor/hash-error-directive-c-cpp.md)<br/>
[Macro ASSERT, _assert, _wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md)<br/>
[Modelli](../cpp/templates-cpp.md)<br/>
[Set di caratteri ASCII](../c-language/ascii-character-set.md)<br/>
[Dichiarazioni e definizioni](declarations-and-definitions-cpp.md)
