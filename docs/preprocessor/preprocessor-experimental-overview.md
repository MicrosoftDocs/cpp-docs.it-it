---
title: Panoramica di MSVC nuovo preprocessore
description: È in corso l'aggiornamento del preprocessore MSVC per la conformità con gli standard C/C++.
ms.date: 09/10/2020
helpviewer_keywords:
- preprocessor, experimental
- preprocessor, new
ms.openlocfilehash: 5327a8148f78a07e222fae7fb92e6ed741d12011
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924581"
---
# <a name="msvc-new-preprocessor-overview"></a>Panoramica di MSVC nuovo preprocessore

::: moniker range="msvc-140"

Visual Studio 2015 usa il preprocessore tradizionale, che non è conforme a C++ standard o C99. A partire da Visual Studio 2019 versione 16,5, il nuovo supporto per il preprocessore per lo standard C++ 20 è completo della funzionalità. Queste modifiche sono disponibili tramite l'opzione del compilatore [/Zc: preprocessore](../build/reference/zc-preprocessor.md) . Una versione sperimentale del nuovo preprocessore è disponibile a partire da Visual Studio 2017 versione 15,8 e successive con l'opzione del compilatore [/Experimental: Preprocessor](../build/reference/experimental-preprocessor.md) . Altre informazioni sull'uso del nuovo preprocessore in Visual Studio 2017 e Visual Studio 2019 sono disponibili. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo selettore della **versione** . Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end

::: moniker range=">=msvc-150"

Stiamo aggiornando il preprocessore Microsoft C++ per migliorare la conformità agli standard, correggere i bug di lunga durata e modificare alcuni comportamenti ufficialmente non definiti. È stata anche aggiunta la nuova diagnostica per avvisare gli errori nelle definizioni delle macro.

A partire da Visual Studio 2019 versione 16,5, il supporto del preprocessore per lo standard C++ 20 è il completamento delle funzionalità. Queste modifiche sono disponibili tramite l'opzione del compilatore [/Zc: preprocessore](../build/reference/zc-preprocessor.md) . Una versione sperimentale del nuovo preprocessore è disponibile nelle versioni precedenti a partire da Visual Studio 2017 versione 15,8. È possibile abilitarlo usando l'opzione del compilatore [/Experimental: Preprocessor](../build/reference/experimental-preprocessor.md) . Il comportamento predefinito del preprocessore rimane identico a quello delle versioni precedenti.

## <a name="new-predefined-macro"></a>Nuova macro predefinita

È possibile rilevare il preprocessore utilizzato in fase di compilazione. Controllare il valore della macro predefinita [`_MSVC_TRADITIONAL`](predefined-macros.md) per indicare se il preprocessore tradizionale è in uso. Questa macro viene impostata in modo incondizionato dalle versioni del compilatore che la supportano, indipendentemente dal preprocessore che viene richiamato. Il valore è 1 per il preprocessore tradizionale. È 0 per il preprocessore conforme.

```cpp
#if defined(_MSVC_TRADITIONAL) && _MSVC_TRADITIONAL
// Logic using the traditional preprocessor
#else
// Logic using cross-platform compatible preprocessor
#endif
```

## <a name="behavior-changes-in-the-new-preprocessor"></a>Modifiche del comportamento nel nuovo preprocessore

Il lavoro iniziale sul nuovo preprocessore è stato incentrato sul fatto che tutte le espansioni della macro sono conformi allo standard. Consente di usare il compilatore MSVC con le librerie che attualmente sono bloccate dai comportamenti tradizionali. Il preprocessore aggiornato è stato testato in progetti reali. Ecco alcune delle modifiche di rilievo più comuni rilevate:

### <a name="macro-comments"></a>Commenti macro

Il preprocessore tradizionale è basato sui buffer di caratteri anziché sui token del preprocessore. Consente un comportamento insolito, ad esempio il seguente Trick del commento per il preprocessore, che non funziona con il preprocessore conforme:

```cpp
#if DISAPPEAR
#define DISAPPEARING_TYPE /##/
#else
#define DISAPPEARING_TYPE int
#endif

// myVal disappears when DISAPPEARING_TYPE is turned into a comment
DISAPPEARING_TYPE myVal;
```

La correzione conforme agli standard consiste nel dichiarare `int myVal` all'interno delle `#ifdef/#endif` direttive appropriate:

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

In questo caso, il `L` prefisso non è necessario perché i valori letterali stringa adiacenti vengono combinati in seguito all'espansione della macro. La correzione compatibile con le versioni precedenti consiste nel modificare la definizione:

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

- Utilizzare la concatenazione di stringhe di `L""` e `#str` per aggiungere il prefisso. I valori letterali stringa adiacenti vengono combinati dopo l'espansione della macro:

   ```cpp
   #define STRING1(str) L""#str
   ```

- Aggiungere il prefisso dopo che `#str` è in sequenza con l'espansione della macro aggiuntiva

   ```cpp
   #define WIDE(str) L##str
   #define STRING2(str) WIDE(#str)
   ```

- Usare l'operatore di concatenazione `##` per combinare i token. L'ordine delle operazioni per `##` e non `#` è specificato, anche se tutti i compilatori sembrano valutare l' `#` operatore prima `##` in questo caso.

   ```cpp
   #define STRING3(str) L## #str
   ```

### <a name="warning-on-invalid-"></a>Avviso non valido \#\#

Quando l' [operatore di incollamento dei token (# #)](token-pasting-operator-hash-hash.md) non genera un singolo token di pre-elaborazione valido, il comportamento non è definito. Il preprocessore tradizionale non riesce a combinare i token in modo invisibile all'utente. Il nuovo preprocessore corrisponde al comportamento della maggior parte degli altri compilatori ed emette una diagnostica.

```cpp
// The ## is unnecessary and does not result in a single preprocessing token.
#define ADD_STD(x) std::##x
// Declare a std::string
ADD_STD(string) s;
```

### <a name="comma-elision-in-variadic-macros"></a>Elissa virgola nelle macro Variadic

Il preprocessore MSVC tradizionale rimuove sempre le virgole prima delle `__VA_ARGS__` sostituzioni vuote. Il nuovo preprocessore segue in modo più accurato il comportamento di altri compilatori multipiattaforma diffusi. Per rimuovere la virgola, l'argomento Variadic deve essere mancante (non solo vuoto) e deve essere contrassegnato con un `##` operatore. Si consideri l'esempio seguente:

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

Nell'esempio seguente, nella chiamata all' `FUNC2(1)` argomento Variadic non è presente nella macro richiamata. Nella chiamata all' `FUNC2(1, )` argomento Variadic è vuoto, ma non è presente (si noti la virgola nell'elenco di argomenti).

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

Nel prossimo standard C++ 20, questo problema è stato risolto aggiungendo `__VA_OPT__` . Il nuovo supporto per il preprocessore per  `__VA_OPT__` è disponibile a partire da Visual Studio 2019 versione 16,5.

### <a name="c20-variadic-macro-extension"></a>Estensione macro c++ 20 Variadic

Il nuovo preprocessore supporta l'argomento macro Variadic di C++ 20.

```cpp
#define FUNC(a, ...) __VA_ARGS__ + a
int main()
  {
  int ret = FUNC(0);
  return ret;
  }
```

Questo codice non è conforme allo standard C++ 20. In MSVC il nuovo preprocessore estende questo comportamento C++ 20 alle modalità standard del linguaggio più basso ( **`/std:c++14`** , **`/std:c++17`** ). Questa estensione corrisponde al comportamento di altri compilatori C++ multipiattaforma principali.

### <a name="macro-arguments-are-unpacked"></a>Gli argomenti della macro sono "decompressi"

Nel preprocessore tradizionale, se una macro invia uno degli argomenti a un'altra macro dipendente, l'argomento non viene "decompresso" quando viene inserito. Questa ottimizzazione, in genere, non viene osservata, ma può causare un comportamento insolito:

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

Quando `A()` si espande, il preprocessore tradizionale trasmette tutti gli argomenti inclusi nel pacchetto nel `__VA_ARGS__` primo argomento di TWO_STRINGS, che lascia vuoto l'argomento Variadic `TWO_STRINGS` . Questo fa sì che il risultato di `#first` sia "1,2" anziché solo "1". Se si sta seguendo attentamente, è possibile che si stiano chiedendo cosa sia successo al risultato di `#__VA_ARGS__` nell'espansione del preprocessore tradizionale: se il parametro Variadic è vuoto, è necessario che venga generato un valore letterale stringa vuoto `""` . Un problema separato mantiene la generazione del token letterale stringa vuoto.

### <a name="rescanning-replacement-list-for-macros"></a>Ripetizione dell'analisi dell'elenco di sostituzione per le macro

Dopo la sostituzione di una macro, i token risultanti vengono sottoposti a scansione per la sostituzione di identificatori di macro aggiuntivi. L'algoritmo utilizzato dal preprocessore tradizionale per eseguire la ripetizione dell'analisi non è conforme, come illustrato in questo esempio in base al codice effettivo:

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

Sebbene questo esempio possa sembrare un po' escogitato, lo abbiamo visto in codice reale.

Per vedere cosa succede, possiamo suddividere l'espansione a partire da `DO_THING` :

1. `DO_THING(1, "World")` si espande fino a `CAT(IMPL, 1) ECHO(("Hello", "World"))`
1. `CAT(IMPL, 1)` si espande in `IMPL ## 1` , che si espande in `IMPL1`
1. Ora i token sono in questo stato: `IMPL1 ECHO(("Hello", "World"))`
1. Il preprocessore trova l'identificatore macro di tipo funzione `IMPL1` . Poiché non è seguito da un oggetto `(` , non viene considerata una chiamata di macro simile a una funzione.
1. Il preprocessore passa ai token seguenti. Trova la macro simile a una funzione `ECHO` che viene richiamata: `ECHO(("Hello", "World"))` , che si espande in `("Hello", "World")`
1. `IMPL1` non viene mai considerato di nuovo per l'espansione, quindi il risultato completo delle espansioni è: `IMPL1("Hello", "World");`

Per modificare la macro in modo che si comporti nello stesso modo sia nel nuovo preprocessore che nel preprocessore tradizionale, aggiungere un altro livello di riferimento indiretto:

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

## <a name="incomplete-features-before-165"></a>Funzionalità incomplete prima del 16,5

A partire da Visual Studio 2019 versione 16,5, il nuovo preprocessore è dotato di funzionalità complete per C++ 20. Nelle versioni precedenti di Visual Studio, il nuovo preprocessore è prevalentemente completo, sebbene la logica di una direttiva per il preprocessore continui a riportare il comportamento tradizionale. Ecco un elenco parziale delle funzionalità incomplete nelle versioni di Visual Studio precedenti alla 16,5:

- Supporto per `_Pragma`
- Funzionalità di c++ 20
- Bug di blocco Boost: gli operatori logici nelle espressioni costanti del preprocessore non sono implementati completamente nel nuovo preprocessore prima della versione 16,5. In alcune `#if` direttive, il nuovo preprocessore può eseguire il fallback al preprocessore tradizionale. L'effetto è evidente solo quando le macro incompatibili con il preprocessore tradizionale vengono espanse. Questo può verificarsi quando si compilano slot per il preprocessore Boost.

::: moniker-end
