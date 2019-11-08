---
title: Panoramica del preprocessore sperimentale MSVC
description: Il preprocessore MSVC è in fase di aggiornamento per la conformità con CC++ /standard.
ms.date: 11/06/2019
helpviewer_keywords:
- preprocessor, experimental
ms.openlocfilehash: 446603b34d9309c256afba9abd7234ae2ab16f5c
ms.sourcegitcommit: 2362d15b5eb18d27773c3f7522da3d0eed9e2571
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/07/2019
ms.locfileid: "73797176"
---
# <a name="msvc-experimental-preprocessor-overview"></a>Panoramica del preprocessore sperimentale MSVC

Il preprocessore Microsoft C++ è attualmente in fase di aggiornamento per migliorare la conformità agli standard, correggere i bug di lunga durata e modificare alcuni comportamenti ufficialmente non definiti. Sono inoltre state aggiunte nuove funzionalità di diagnostica per avvisare in caso di errori nelle definizioni delle macro.

Queste modifiche nello stato corrente sono disponibili tramite l'opzione del compilatore [/Experimental: preprocessore](../build/reference/experimental-preprocessor.md) in visual studio 2017 o visual studio 2019. Il comportamento predefinito del preprocessore rimane identico a quello delle versioni precedenti.

## <a name="new-predefined-macro"></a>Nuova macro predefinita

È possibile rilevare il preprocessore utilizzato in fase di compilazione. Verificare il valore della macro predefinita [\_MSVC\_tradizionale](predefined-macros.md) per indicare se il preprocessore tradizionale è in uso. Questa macro viene impostata in modo incondizionato dalle versioni del compilatore che la supportano, indipendentemente dal preprocessore che viene richiamato. Il valore è 1 per il preprocessore tradizionale. È 0 per il preprocessore sperimentale conforme:

```cpp
#if defined(_MSVC_TRADITIONAL) && _MSVC_TRADITIONAL
// Logic using the traditional preprocessor
#else
// Logic using cross-platform compatible preprocessor
#endif
```

```cpp
#if defined(_MSVC_TRADITIONAL) && _MSVC_TRADITIONAL
// Logic using the traditional preprocessor
#else
// Logic using cross-platform compatible preprocessor
#endif
```

## <a name="behavior-changes-in-the-experimental-preprocessor"></a>Modifiche del comportamento nel preprocessore sperimentale

Il lavoro iniziale sul preprocessore sperimentale è stato incentrato sul fatto che tutte le espansioni delle macro sono conformi per consentire l'uso del compilatore MSVC con le librerie attualmente bloccate a causa dei comportamenti tradizionali. Di seguito è riportato un elenco di alcune delle modifiche di rilievo più comuni eseguite durante il test del preprocessore aggiornato con progetti reali.

### <a name="macro-comments"></a>Commenti macro

Il preprocessore tradizionale è basato sui buffer di caratteri anziché sui token del preprocessore. Questo consente un comportamento insolito, ad esempio il seguente Trick del commento per il preprocessore che non funzionerà con il preprocessore conforme:

```cpp
#if DISAPPEAR
#define DISAPPEARING_TYPE /##/
#else
#define DISAPPEARING_TYPE int
#endif

// myVal disappears when DISAPPEARING_TYPE is turned into a comment
DISAPPEARING_TYPE myVal;
```

La correzione conforme agli standard consiste nel dichiarare `int myVal` all'interno delle direttive `#ifdef/#endif` appropriate:

```cpp
#define MYVAL 1

#ifdef MYVAL
int myVal;
#endif
```

### <a name="lval"></a>L # Val

Il preprocessore tradizionale combina erroneamente un prefisso di stringa al risultato dell'operatore [per (#)](stringizing-operator-hash.md) :

```cpp
 #define DEBUG_INFO(val) L"debug prefix:" L#val
//                                       ^
//                                       this prefix

const wchar_t *info = DEBUG_INFO(hello world);
```

In questo caso il prefisso `L` non è necessario perché i valori letterali stringa adiacenti vengono combinati in seguito all'espansione della macro. La correzione compatibile con le versioni precedenti consiste nel modificare la definizione nel modo seguente:

```cpp
#define DEBUG_INFO(val) L"debug prefix:" #val
//                                       ^
//                                       no prefix
```

Lo stesso problema si trova anche nelle macro di praticità che "stringize" l'argomento a un valore letterale stringa "wide":

```cpp
 // The traditional preprocessor creates a single wide string literal token
#define STRING(str) L#str
```

È possibile risolvere il problema in diversi modi:

- Utilizzare la concatenazione di stringhe di `L""` e `#str` per aggiungere il prefisso. Questa operazione funziona perché i valori letterali stringa adiacenti vengono combinati dopo l'espansione della macro:

   ```cpp
   #define STRING1(str) L""#str
   ```

- Aggiungere il prefisso dopo che `#str` è stato associato a un'espansione della macro aggiuntiva

   ```cpp
   #define WIDE(str) L##str
   #define STRING2(str) WIDE(#str)
   ```

- Usare l'operatore di concatenazione `##` per combinare i token. L'ordine delle operazioni per `##` e `#` non è specificato, anche se tutti i compilatori sembrano valutare l'operatore `#` prima `##` in questo caso.

   ```cpp
   #define STRING3(str) L## #str
   ```

### <a name="warning-on-invalid-"></a>Avviso su \#non valido \#

Quando l' [operatore di incollamento dei token (# #)](token-pasting-operator-hash-hash.md) non genera un singolo token di pre-elaborazione valido, il comportamento non è definito. Il preprocessore tradizionale non riuscirà a combinare i token in modo invisibile all'utente. Il nuovo preprocessore troverà una corrispondenza tra il comportamento della maggior parte degli altri compilatori e la generazione di una diagnostica.

```cpp
// The ## is unnecessary and does not result in a single preprocessing token.
#define ADD_STD(x) std::##x
// Declare a std::string
ADD_STD(string) s;
```

### <a name="comma-elision-in-variadic-macros"></a>Elissa virgola nelle macro Variadic

Il preprocessore MSVC tradizionale rimuove sempre le virgole prima delle sostituzioni `__VA_ARGS__` vuote. Il preprocessore sperimentale segue in modo più accurato il comportamento di altri compilatori multipiattaforma diffusi. Per rimuovere la virgola, l'argomento Variadic deve essere mancante (non solo vuoto) e deve essere contrassegnato con un operatore `##`. Si consideri l'esempio seguente:

```cpp
void func(int, int = 2, int = 3);
// This macro replacement list has a comma followed by __VA_ARGS__
#define FUNC(a, ...) func(a, __VA_ARGS__)
int main()
{
    // In the traditional preprocessor, the following macro is replaced with:
    // func(10,20,30)
    FUNC(10, 20, 30);

    // A conforming preprocessor will replace the following macro with: func(1, ), which will result in a syntax error.
    FUNC(1, );
}
```

Nell'esempio seguente, nella chiamata a `FUNC2(1)` l'argomento Variadic non è presente nella macro evocata. Nella chiamata a `FUNC2(1, )` l'argomento Variadic è vuoto, ma non mancante (si noti la virgola nell'elenco di argomenti).

```cpp
#define FUNC2(a, ...) func(a , ## __VA_ARGS__)
int main()
{
   // Expands to func(1)
   FUNC2(1);

   // Expands to func(1, )
   FUNC2(1, );
}
```

Nel prossimo standard C + + 2A questo problema è stato risolto aggiungendo `__VA_OPT__`, che non è ancora implementato.

### <a name="macro-arguments-are-unpacked"></a>Gli argomenti della macro sono "decompressi"

Nel preprocessore tradizionale, se una macro invia uno degli argomenti a un'altra macro dipendente, l'argomento non viene "decompresso" quando viene sostituito. Questa ottimizzazione, in genere, non viene osservata, ma può causare un comportamento insolito:

```cpp
// Create a string out of the first argument, and the rest of the arguments.
#define TWO_STRINGS( first, ... ) #first, #__VA_ARGS__
#define A( ... ) TWO_STRINGS(__VA_ARGS__)
const char* c[2] = { A(1, 2) };

// Conformant preprocessor results:
// const char c[2] = { "1", "2" };

// Traditional preprocessor results, all arguments are in the first string:
// const char c[2] = { "1, 2", };
```

Quando si espande `A()`, il preprocessore tradizionale trasmette tutti gli argomenti inclusi nel pacchetto `__VA_ARGS__` al primo argomento di TWO_STRINGS, che lascia l'argomento Variadic di `TWO_STRINGS` vuoto. In questo modo il risultato di `#first` sarà "1,2" anziché solo "1". Se si sta seguendo la procedura più stretta, è possibile che si stiano chiedendo cosa sia successo al risultato di `#__VA_ARGS__` nell'espansione del preprocessore tradizionale: se il parametro Variadic è vuoto, è necessario che venga generato un valore letterale stringa vuoto `""`. A causa di un problema separato, il token letterale stringa vuota non è stato generato.

### <a name="rescanning-replacement-list-for-macros"></a>Ripetizione dell'analisi dell'elenco di sostituzione per le macro

Dopo la sostituzione di una macro, i token risultanti vengono nuovamente analizzati per gli identificatori di macro aggiuntivi che devono essere sostituiti. L'algoritmo utilizzato dal preprocessore tradizionale per la ripetizione dell'analisi non è conforme, come illustrato in questo esempio in base al codice effettivo:

```cpp
#define CAT(a,b) a ## b
#define ECHO(...) __VA_ARGS__
// IMPL1 and IMPL2 are implementation details
#define IMPL1(prefix,value) do_thing_one( prefix, value)
#define IMPL2(prefix,value) do_thing_two( prefix, value)

// MACRO chooses the expansion behavior based on the value passed to macro_switch
#define DO_THING(macro_switch, b) CAT(IMPL, macro_switch) ECHO(( "Hello", b))
DO_THING(1, "World");

// Traditional preprocessor:
// do_thing_one( "Hello", "World");
// Conformant preprocessor:
// IMPL1 ( "Hello","World");
```

Sebbene questo esempio sembri un po' artificioso, si verifica che si verifichi il codice reale. Per vedere cosa accade, è possibile suddividere l'espansione iniziando con `DO_THING`:

1. `DO_THING(1, "World")` si espande `CAT(IMPL, 1) ECHO(("Hello", "World"))`
1. `CAT(IMPL, 1)` si espande fino a `IMPL ## 1` che si espande `IMPL1`
1. Ora i token sono in questo stato: `IMPL1 ECHO(("Hello", "World"))`
1. Il preprocessore trova l'identificatore di macro simile a una funzione `IMPL1`, ma non è seguito da un `(`, quindi non viene considerato una chiamata di macro simile a una funzione. 
1. Passa ai token seguenti e trova la macro simile a una funzione `ECHO` richiamata: `ECHO(("Hello", "World"))`, che si espande in `("Hello", "World")`
1. `IMPL1` non viene mai considerata per l'espansione, quindi il risultato completo delle espansioni è: `IMPL1("Hello", "World");`

La macro può essere modificata per comportarsi nello stesso modo nel preprocessore sperimentale e nel preprocessore tradizionale mediante l'aggiunta di un altro livello di riferimento indiretto:

```cpp
#define CAT(a,b) a##b
#define ECHO(...) __VA_ARGS__
// IMPL1 and IMPL2 are macros implementation details
#define IMPL1(prefix,value) do_thing_one( prefix, value)
#define IMPL2(prefix,value) do_thing_two( prefix, value)
#define CALL(macroName, args) macroName args
#define DO_THING_FIXED(a,b) CALL( CAT(IMPL, a), ECHO(( "Hello",b)))
DO_THING_FIXED(1, "World");

// macro expands to:
// do_thing_one( "Hello", "World");
```

## <a name="incomplete-features"></a>Funzionalità incomplete

Il preprocessore sperimentale è prevalentemente completo, sebbene la logica della direttiva per il preprocessore continui a tornare al comportamento tradizionale. Di seguito è riportato un elenco parziale delle funzionalità incomplete:

- Supporto per `_Pragma`
- Funzionalità di c++ 20
- Bug di blocco Boost: gli operatori logici nelle espressioni costanti del preprocessore non sono implementati completamente nel nuovo preprocessore. In alcune direttive `#if` il nuovo preprocessore può eseguire il fallback al preprocessore tradizionale. L'effetto è evidente solo quando le macro che sono incompatibili con il preprocessore tradizionale vengono espanse, cosa che può verificarsi quando si compilano slot per il preprocessore Boost.
