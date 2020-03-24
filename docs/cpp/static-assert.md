---
title: static_assert
ms.date: 07/29/2019
f1_keywords:
- static_assert_cpp
helpviewer_keywords:
- assertions [C++], static_assert
- static_assert
ms.assetid: 28dd3668-e78c-4de8-ba68-552084743426
ms.openlocfilehash: a3336e9e41e3dc6804c2398d3ef815ba8c471e50
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80160905"
---
# <a name="static_assert"></a>static_assert

Verifica un'asserzione software in fase di compilazione. Se l'espressione costante specificata è FALSE, il compilatore Visualizza il messaggio specificato, se ne viene fornito uno, e la compilazione ha esito negativo con errore C2338; in caso contrario, la dichiarazione non ha alcun effetto.

## <a name="syntax"></a>Sintassi

```
static_assert( constant-expression, string-literal );

static_assert( constant-expression ); // C++17 (Visual Studio 2017 and later)
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*espressione costante*|Espressione costante integrale che può essere convertita in un valore booleano.<br /><br /> Se l'espressione valutata è zero (false), viene visualizzato il parametro *stringa-Literal* e la compilazione ha esito negativo con un errore. Se l'espressione è diversa da zero (true), la dichiarazione di **static_assert** non ha alcun effetto.|
|*string-literal*|Messaggio che viene visualizzato se il parametro *Constant-Expression* è zero. Il messaggio è una stringa di caratteri nel [set di caratteri di base](../c-language/ascii-character-set.md) del compilatore. ovvero non [caratteri multibyte o Wide](../c-language/multibyte-and-wide-characters.md).|

## <a name="remarks"></a>Osservazioni

Il parametro *Constant-Expression* di una dichiarazione di **static_assert** rappresenta un' *asserzione software*. Un'asserzione software specifica una condizione che si prevede abbia valore True in un particolare punto del programma. Se la condizione è true, la Dichiarazione **static_assert** non ha alcun effetto. Se la condizione è false, l'asserzione ha esito negativo, il compilatore Visualizza il messaggio nel parametro *stringa-valore letterale* e la compilazione ha esito negativo con un errore. In Visual Studio 2017 e versioni successive, il parametro di valore letterale stringa è facoltativo.

Il **static_assert** Dichiarazione verifica un'asserzione software in fase di compilazione. Al contrario, le [funzioni macro ASSERT e _assert e _wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md) testano un'asserzione software in fase di esecuzione e comportano un costo in fase di esecuzione nello spazio o nel tempo. La dichiarazione di **static_assert** è particolarmente utile per il debug dei modelli perché gli argomenti di modello possono essere inclusi nel parametro *Constant-Expression* .

Il compilatore esamina la dichiarazione di **static_assert** per gli errori di sintassi quando viene rilevata la dichiarazione. Il compilatore valuta immediatamente il parametro *Constant-Expression* se non dipende da un parametro di modello. In caso contrario, il compilatore valuta il parametro *Constant-Expression* quando viene creata un'istanza del modello. Di conseguenza, il compilatore potrebbe generare un messaggio di diagnostica una volta quando la dichiarazione viene rilevata e nuovamente quando viene creata un'istanza del modello.

È possibile usare la parola chiave **static_assert** nello spazio dei nomi, nella classe o nell'ambito del blocco. La parola chiave **static_assert** è tecnicamente una dichiarazione, anche se non introduce il nuovo nome nel programma, perché può essere utilizzata nell'ambito dello spazio dei nomi.

## <a name="description"></a>Descrizione

Nell'esempio seguente la dichiarazione di **static_assert** ha un ambito dello spazio dei nomi. Poiché il compilatore riconosce la dimensione di tipo `void *`, l'espressione viene valutata immediatamente.

## <a name="example"></a>Esempio

```cpp
static_assert(sizeof(void *) == 4, "64-bit code generation is not supported.");
```

## <a name="description"></a>Descrizione

Nell'esempio seguente la dichiarazione di **static_assert** ha un ambito di classe. Il **static_assert** verifica che un parametro di modello sia un tipo di *dati Plain Old* (POD). Il compilatore esamina la dichiarazione di **static_assert** quando viene dichiarata, ma non valuta il parametro *Constant-Expression* fino a quando non viene creata un'istanza del modello di classe di `basic_string` in `main()`.

## <a name="example"></a>Esempio

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

## <a name="description"></a>Descrizione

Nell'esempio seguente, la dichiarazione di **static_assert** presenta un ambito del blocco. Il **static_assert** verifica che la dimensione della struttura VMPage sia uguale alla PageSize della memoria virtuale del sistema.

## <a name="example"></a>Esempio

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

## <a name="see-also"></a>Vedere anche

[Asserzione e messaggi specificati dall'utente (C++)](../cpp/assertion-and-user-supplied-messages-cpp.md)<br/>
[Direttiva #error (C/C++)](../preprocessor/hash-error-directive-c-cpp.md)<br/>
[assert Macro, _assert, _wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md)<br/>
[Modelli](../cpp/templates-cpp.md)<br/>
[Set di caratteri ASCII](../c-language/ascii-character-set.md)<br/>
[Dichiarazioni e definizioni](declarations-and-definitions-cpp.md)
