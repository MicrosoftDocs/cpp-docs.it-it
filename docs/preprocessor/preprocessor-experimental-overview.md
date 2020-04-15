---
title: Panoramica del preprocessore sperimentale MSVC
description: Il preprocessore MSVC è in fase di conformità con gli standard C/C.
ms.date: 02/09/2020
helpviewer_keywords:
- preprocessor, experimental
ms.openlocfilehash: 00c34ef75270e505d3781cf7eedf4d8aba95ee6e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81337489"
---
# <a name="msvc-experimental-preprocessor-overview"></a>Panoramica del preprocessore sperimentale MSVC

::: moniker range="vs-2015"

Visual Studio 2015 utilizza il preprocessore tradizionale, che non è conforme al linguaggio standard di C. Un preprocessore sperimentale è disponibile in Visual Studio 2017 e Visual Studio 2019 utilizzando l'opzione del compilatore [/experimental:preprocessor.](../build/reference/experimental-preprocessor.md) Ulteriori informazioni sull'utilizzo del nuovo preprocessore in Visual Studio 2017 e Visual Studio 2019 sono disponibili. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo Selettore **versione.** Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end

::: moniker range=">=vs-2017"

Stiamo aggiornando il preprocessore di Microsoft C, per migliorare la conformità agli standard, correggere i bug di lunga data e modificare alcuni comportamenti ufficialmente indefiniti. Abbiamo anche aggiunto una nuova diagnostica per avvisare in caso di errori nelle definizioni di macro.

Queste modifiche sono disponibili utilizzando l'opzione del compilatore [/experimental:preprocessore](../build/reference/experimental-preprocessor.md) in Visual Studio 2017 o Visual Studio 2019. Il comportamento predefinito del preprocessore rimane lo stesso delle versioni precedenti.

A partire da Visual Studio 2019 versione 16.5, il supporto sperimentale per il preprocessore per lo standard C .

## <a name="new-predefined-macro"></a>Nuova macro predefinita

È possibile rilevare quale preprocessore è in uso in fase di compilazione. Controllare il valore della [ \_\_](predefined-macros.md) macro predefinita MSVC TRADITIONAL per stabilire se il preprocessore tradizionale è in uso. Questa macro viene impostata incondizionatamente dalle versioni del compilatore che la supportano, indipendentemente dal preprocessore richiamato. Il valore è 1 per il preprocessore tradizionale. È 0 per il preprocessore conforme.

```cpp
#if defined(_MSVC_TRADITIONAL) && _MSVC_TRADITIONAL
// Logic using the traditional preprocessor
#else
// Logic using cross-platform compatible preprocessor
#endif
```

## <a name="behavior-changes-in-the-experimental-preprocessor"></a>Modifiche del comportamento nel preprocessore sperimentaleBehavior changes in the experimental preprocessor

Il lavoro iniziale sul preprocessore sperimentale si è concentrato sul rendere tutte le espansioni delle macro conformi allo standard. Consente di utilizzare il compilatore MSVC con librerie attualmente bloccate dai comportamenti tradizionali. Abbiamo testato il preprocessore aggiornato su progetti del mondo reale. Ecco alcuni dei cambiamenti di interruzione più comuni che abbiamo trovato:

### <a name="macro-comments"></a>Commenti macro

Il preprocessore tradizionale si basa su buffer di caratteri anziché su token del preprocessore. Consente comportamenti insoliti, ad esempio il seguente trucco di commento del preprocessore, che non funziona con il preprocessore conforme:

```cpp
#if DISAPPEAR
#define DISAPPEARING_TYPE /##/
#else
#define DISAPPEARING_TYPE int
#endif

// myVal disappears when DISAPPEARING_TYPE is turned into a comment
DISAPPEARING_TYPE myVal;
```

La correzione conforme agli standard `int myVal` è `#ifdef/#endif` quella di dichiarare all'interno delle direttive appropriate:

```cpp
#define MYVAL 1

#ifdef MYVAL
int myVal;
#endif
```

### <a name="lval"></a>L'lval

Il preprocessore tradizionale combina in modo non corretto un prefisso di stringa con il risultato dell'operatore di [stringizing (Sezione ):](stringizing-operator-hash.md)

```cpp
 #define DEBUG_INFO(val) L"debug prefix:" L#val
//                                       ^
//                                       this prefix

const wchar_t *info = DEBUG_INFO(hello world);
```

In questo caso, il `L` prefisso non è necessario perché i valori letterali stringa adiacenti vengono combinati comunque dopo l'espansione della macro. La correzione compatibile con le versioni precedenti consiste nel modificare la definizione:

```cpp
#define DEBUG_INFO(val) L"debug prefix:" #val
//                                       ^
//                                       no prefix
```

Lo stesso problema si riscontra anche nelle macro di convenienza che "stringize" l'argomento a un valore letterale stringa ampia:

```cpp
 // The traditional preprocessor creates a single wide string literal token
#define STRING(str) L#str
```

È possibile risolvere il problema in vari modi:

- Utilizzare la concatenazione di stringhe di `L""` e `#str` per aggiungere prefisso. I valori letterali stringa adiacenti vengono combinati dopo l'espansione della macro:Adjacent string literals are combined after macro expansion:

   ```cpp
   #define STRING1(str) L""#str
   ```

- Aggiungere il `#str` prefisso dopo è stringa con ulteriore espansione macro

   ```cpp
   #define WIDE(str) L##str
   #define STRING2(str) WIDE(#str)
   ```

- Usare l'operatore `##` di concatenazione per combinare i token. L'ordine delle `##` `#` operazioni per e non è specificato, `#` anche `##` se tutti i compilatori sembrano valutare l'operatore prima in questo caso.

   ```cpp
   #define STRING3(str) L## #str
   ```

### <a name="warning-on-invalid-"></a>Avvertenza su non valida\#\#

Quando [l'operatore](token-pasting-operator-hash-hash.md) di incollamento di token (Sezione ) non genera un singolo token di pre-elaborazione valido, il comportamento non è definito. Il preprocessore tradizionale non riesce automaticamente a combinare i token. Il nuovo preprocessore corrisponde al comportamento della maggior parte degli altri compilatori e genera una diagnostica.

```cpp
// The ## is unnecessary and does not result in a single preprocessing token.
#define ADD_STD(x) std::##x
// Declare a std::string
ADD_STD(string) s;
```

### <a name="comma-elision-in-variadic-macros"></a>Elisione da virgola in macro variediche

Il preprocessore MSVC tradizionale rimuove `__VA_ARGS__` sempre le virgole prima delle sostituzioni vuote. Il preprocessore sperimentale segue più da vicino il comportamento di altri compilatori multipiattaforma popolari. Affinché la virgola venga rimossa, l'argomento variadic deve essere mancante `##` (non solo vuoto) e deve essere contrassegnato con un operatore. Prendere in considerazione gli esempi seguenti:

```cpp
void func(int, int = 2, int = 3);
// This macro replacement list has a comma followed by __VA_ARGS__
#define FUNC(a, ...) func(a, __VA_ARGS__)
int main()
{
    // In the traditional preprocessor, the
    // following macro is replaced with:
    // func(10,20,30)
    FUNC(10, 20, 30);

    // A conforming preprocessor replaces the
    // following macro with: func(1, ), which
    // results in a syntax error.
    FUNC(1, );
}
```

Nell'esempio seguente, nella `FUNC2(1)` chiamata all'argomento variadic manca la macro richiamata. Nella chiamata `FUNC2(1, )` all'argomento variadic è vuoto, ma non manca (notare la virgola nell'elenco di argomenti).

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

Nel prossimo standard di C, 20, questo `__VA_OPT__`problema è stato risolto aggiungendo . Il supporto sperimentale per il preprocessore per è disponibile a partire da Visual Studio 2019 versione 16.5.Experimental preprocessor support for `__VA_OPT__` is available starting in Visual Studio 2019 version 16.5.

### <a name="c20-variadic-macro-extension"></a>L'estensione di una macro variadica C

L'elisione dell'argomento macro variadic c'è 20:

```cpp
#define FUNC(a, ...) __VA_ARGS__ + a
int main()
  {
  int ret = FUNC(0);
  return ret;
  }
```

Questo codice non è conforme prima dello standard di C. In MSVC, il preprocessore sperimentale estende il comportamento di**`/std:c++14`** C- 20 alle modalità standard del linguaggio inferiore ( , **`/std:c++17`**). Questa estensione corrisponde al comportamento di altri principali compilatori multipiattaforma di C .

### <a name="macro-arguments-are-unpacked"></a>Gli argomenti macro sono "decompressi"

Nel preprocessore tradizionale, se una macro inoltra uno dei relativi argomenti a un'altra macro dipendente, l'argomento non viene "decompresso" quando viene inserito. Di solito questa ottimizzazione passa inosservata, ma può portare a un comportamento insolito:

```cpp
// Create a string out of the first argument, and the rest of the arguments.
#define TWO_STRINGS( first, ... ) #first, #__VA_ARGS__
#define A( ... ) TWO_STRINGS(__VA_ARGS__)
const char* c[2] = { A(1, 2) };

// Conforming preprocessor results:
// const char c[2] = { "1", "2" };

// Traditional preprocessor results, all arguments are in the first string:
// const char c[2] = { "1, 2", };
```

Quando si `A()`espande , il preprocessore tradizionale inoltra `__VA_ARGS__` tutti gli argomenti inclusi nel primo argomento `TWO_STRINGS` di TWO_STRINGS, che lascia vuoto l'argomento variadico. Questo fa sì `#first` che il risultato di essere "1, 2" piuttosto che solo "1". Se si sta seguendo da vicino, allora ci si `#__VA_ARGS__` potrebbe chiedere cosa è successo al risultato dell'espansione del preprocessore `""`tradizionale: se il parametro variadic è vuoto dovrebbe risultare in una stringa vuota letterale . Un problema separato ha mantenuto il token letterale stringa vuota da generare.

### <a name="rescanning-replacement-list-for-macros"></a>Rianalisi dell'elenco di sostituzione per le macro

Dopo la sostituzione di una macro, i token risultanti vengono nuovamente analizzati alla ricerca di identificatori di macro aggiuntivi da sostituire. L'algoritmo utilizzato dal preprocessore tradizionale per eseguire la ripetizione non è conforme, come illustrato in questo esempio in base al codice effettivo:The algorithm used by the traditional preprocessor for doing the rescan isn't conforming, as shown in this example based on actual code:

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
// Conforming preprocessor:
// IMPL1 ( "Hello","World");
```

Anche se questo esempio può sembrare un po 'artificioso, abbiamo visto in codice del mondo reale. Per vedere cosa sta succedendo, possiamo abbattere l'espansione a partire `DO_THING`da:

1. `DO_THING(1, "World")`si espande a`CAT(IMPL, 1) ECHO(("Hello", "World"))`
1. `CAT(IMPL, 1)`si espande `IMPL ## 1`a , che si espande a`IMPL1`
1. Ora i token sono in questo stato:`IMPL1 ECHO(("Hello", "World"))`
1. Il preprocessore trova l'identificatore `IMPL1`macro di tipo funzione. Poiché non è seguito `(`da un oggetto , non è considerato una chiamata di macro simile a una funzione.
1. Il preprocessore passa ai token seguenti. Trova la macro `ECHO` di tipo funzione: `ECHO(("Hello", "World"))`, che si espande`("Hello", "World")`
1. `IMPL1`non viene mai più considerato per l'espansione, quindi il risultato completo delle espansioni è:`IMPL1("Hello", "World");`

Per modificare la macro in modo che si comporti allo stesso modo sia nel preprocessore sperimentale che nel preprocessore tradizionale, aggiungere un altro livello di riferimento indiretto:

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

## <a name="incomplete-features"></a>Caratteristiche incomplete

A partire da Visual Studio 2019 versione 16.5, il preprocessore sperimentale è completo di funzionalità per C . Nelle versioni precedenti di Visual Studio, il preprocessore sperimentale è per lo più completo, anche se una logica di direttiva del preprocessore ancora esegue il fallback al comportamento tradizionale. Ecco un elenco parziale delle funzionalità incomplete nelle versioni di Visual Studio precedenti alla versione 16.5:Here's a partial list of incomplete features in Visual Studio versions before 16.5:

- Supporto per `_Pragma`
- Caratteristiche di C-20
- Bug di blocco dell'incremento: gli operatori logici nelle espressioni costanti del preprocessore non sono completamente implementati nel nuovo preprocessore prima della versione 16.5. In `#if` alcune direttive, il nuovo preprocessore può ripiegare sul preprocessore tradizionale. L'effetto è evidente solo quando le macro non compatibili con il preprocessore tradizionale vengono espanse. Può accadere quando si creano slot del preprocessore Boost.

::: moniker-end
