---
title: '/Experimental: preprocessore (Abilita modalità di conformità del preprocessore)'
description: "Usare l'opzione del compilatore/Experimental: preprocessore per abilitare il supporto del compilatore sperimentale per un preprocessore conforme standard."
ms.date: 09/03/2019
f1_keywords:
- preprocessor
- /experimental:preprocessor
helpviewer_keywords:
- preprocessor conformance
- /experimental:preprocessor
- Enable preprocessor conformance mode
ms.openlocfilehash: 3055cfa2a32d1d668dbe0c51b5542415b5bb0af4
ms.sourcegitcommit: fd0f8839da5c6a3663798a47c6b0bb6e63b518bd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2019
ms.locfileid: "70294438"
---
# <a name="experimentalpreprocessor-enable-preprocessor-conformance-mode"></a>/Experimental: preprocessore (Abilita modalità di conformità del preprocessore)

Questa opzione Abilita un preprocessore sperimentale basato su token che è conforme agli standard C++ 11, incluse le funzionalità del preprocessore C99.

## <a name="syntax"></a>Sintassi

> **/Experimental: preprocessore** [ **-** ]

## <a name="remarks"></a>Note

Usare l'opzione del compilatore **/Experimental: preprocessore** per abilitare il preprocessore conforme sperimentale. È possibile usare **/Experimental: Preprocessor-** option per specificare in modo esplicito il preprocessore tradizionale.

L'opzione **/Experimental: Preprocessor** è disponibile a partire da Visual Studio 2017 versione 15,8.

È possibile rilevare il preprocessore utilizzato in fase di compilazione. Controllare il valore della macro [ \_predefinita\_MSVC tradizionale](../../preprocessor/predefined-macros.md) per stabilire se il preprocessore tradizionale è in uso. Questa macro viene impostata in modo incondizionato dalle versioni del compilatore che la supportano, indipendentemente dal preprocessore che viene richiamato. Il valore è 1 per il preprocessore tradizionale. È 0 per il preprocessore sperimentale conforme:

```cpp
#if defined(_MSVC_TRADITIONAL) && _MSVC_TRADITIONAL
// Logic using the traditional preprocessor
#else
// Logic using cross-platform compatible preprocessor
#endif
```

### <a name="behavior-changes-in-the-experimental-preprocessor"></a>Modifiche del comportamento nel preprocessore sperimentale

Di seguito sono riportate alcune delle modifiche di rilievo più comuni rilevate quando è abilitata la modalità di conformità del preprocessore:

#### <a name="macro-comments"></a>Commenti macro

Il preprocessore tradizionale usa i buffer di caratteri invece dei token del preprocessore. Questo consente un comportamento insolito, ad esempio questo trucco per i commenti del preprocessore, che non funziona con il preprocessore conforme:

```cpp
#if DISAPPEAR
#define DISAPPEARING_TYPE /##/
#else
#define DISAPPEARING_TYPE int
#endif

// myVal disappears when DISAPPEARING_TYPE is turned into a comment
// To make standards compliant, wrap the following line with the appropriate #if/#endif
DISAPPEARING_TYPE myVal;
```

#### <a name="string-prefixes-lval"></a>Prefissi di stringa (L # Val)

Il preprocessore tradizionale combina erroneamente un prefisso di stringa al risultato dell' [operatore per (#)](../../preprocessor/stringizing-operator-hash.md):

```cpp
#define DEBUG_INFO(val) L"debug prefix:" L#val
//                                       ^
//                                       this prefix

const wchar_t *info = DEBUG_INFO(hello world);
```

Il `L` prefisso non è necessario in questo caso, perché i valori letterali stringa adiacenti vengono combinati dopo l'espansione della macro. La correzione compatibile con le versioni precedenti consiste nel modificare la definizione in:

```cpp
#define DEBUG_INFO(val) L"debug prefix:" #val
//                                       ^
//                                       no prefix
```

Questo problema è disponibile anche in praticità macro che "stringize" l'argomento a un valore letterale stringa a caratteri "wide":

```cpp
// The traditional preprocessor creates a single wide string literal token
#define STRING(str) L#str

// Potential fixes:
// Use string concatenation of L"" and #str to add prefix
// This works because adjacent string literals are combined after macro expansion
#define STRING1(str) L""#str

// Add the prefix after #str is stringized with additional macro expansion
#define WIDE(str) L##str
#define STRING2(str) WIDE(#str)

// Use concatenation operator ## to combine the tokens.
// The order of operations for ## and # is unspecified, although all compilers
// checked perform the # operator before ## in this case.
#define STRING3(str) L## #str
```

#### <a name="warning-on-invalid"></a>Avviso non valido ##

Quando l' [operatore di incollamento dei token (# #)](../../preprocessor/token-pasting-operator-hash-hash.md) non genera un singolo token di pre-elaborazione valido, il comportamento non è definito. Il preprocessore tradizionale non riesce a combinare i token in modo invisibile all'utente. Il nuovo preprocessore corrisponde al comportamento della maggior parte degli altri compilatori ed emette una diagnostica.

```cpp
// The ## is unnecessary and doesn't result in a single preprocessing token.
#define ADD_STD(x) std::##x

// Declare a std::string
ADD_STD(string) s;
```

#### <a name="comma-elision-in-variadic-macros"></a>Elissa virgola nelle macro Variadic

Si consideri l'esempio seguente:

```cpp
void func(int, int = 2, int = 3);
// This macro replacement list has a comma followed by __VA_ARGS__
#define FUNC(a, ...) func(a, __VA_ARGS__)
int main()
{
    // The following macro is replaced with:
    // func(10,20,30)
    FUNC(10, 20, 30);

    // A conforming preprocessor replaces the following macro with:
    // func(1, );
    // which results in a syntax error.
    FUNC(1, );
}
```

Tutti i compilatori principali hanno un'estensione per il preprocessore che consente di risolvere questo problema. Il preprocessore MSVC tradizionale rimuove sempre le virgole prima `__VA_ARGS__` delle sostituzioni vuote. Il preprocessore aggiornato segue in modo più accurato il comportamento di altri compilatori multipiattaforma diffusi. Per rimuovere la virgola, l'argomento Variadic deve essere mancante, non solo vuoto e deve essere contrassegnato con un `##` operatore:

```cpp
#define FUNC2(a, ...) func(a , ## __VA_ARGS__)
int main()
{
    // The variadic argument is missing in the macro being evoked
    // The comma is removed and replaced with:
    // func(1)
    FUNC2(1);

    // The variadic argument is empty, but not missing. (Notice the
    // comma in the argument list.) The comma isn't removed
    // when the macro is replaced:
    // func(1, )
    FUNC2(1, );
}
```

Nel prossimo standard C + + 2A questo problema è stato risolto aggiungendo `__VA_OPT__`, che non è ancora implementato.

#### <a name="macro-arguments-are-unpacked"></a>Gli argomenti macro sono "decompressi"

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

Quando si `A()`espande, il preprocessore tradizionale trasmette tutti gli argomenti inclusi nel pacchetto nel `__VA_ARGS__` primo argomento di `TWO_STRINGS`. L'argomento Variadic di `TWO_STRINGS` è vuoto, che fa sì che il `#first` risultato di `"1, 2"` sia anziché semplicemente `"1"`. Ci si potrebbe chiedere che cosa è successo al risultato `#__VA_ARGS__` di nell'espansione del preprocessore tradizionale. Se il parametro Variadic è vuoto, verrà generato un valore letterale stringa vuoto "". A causa di un problema separato, il token letterale stringa vuota non è stato generato.

#### <a name="rescanning-replacement-list-for-macros"></a>Ripetizione dell'analisi dell'elenco di sostituzione per le macro

Dopo la sostituzione di una macro, i token risultanti vengono sottoposti a scansione per la sostituzione di identificatori di macro aggiuntivi. L'algoritmo di ripetizione dell'analisi usato dal preprocessore tradizionale non è conforme, come illustrato in questo esempio in base al codice effettivo:

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

Per vedere cosa accade in questo esempio, si suddivide l'espansione a partire da `DO_THING`:

`DO_THING(1, "World")` ->
`CAT(IMPL, 1) ECHO(("Hello", "World"))`

In secondo luogo, il CAT è espanso:

`CAT(IMPL, 1)` -> `IMPL ## 1` -> `IMPL1`

Che inserisce i token in questo stato:

`IMPL1 ECHO(("Hello", "World"))`

Il preprocessore trova l'identificatore `IMPL1`di macro simile a una funzione, ma non è seguito da un "(", quindi non è considerato una chiamata di macro simile a una funzione. Passa ai token seguenti e trova la macro `ECHO` simile a una funzione richiamata:

`ECHO(("Hello", "World"))` -> `("Hello", "World")`

`IMPL1`non viene mai considerato di nuovo per l'espansione, quindi il risultato completo delle espansioni è:

`IMPL1("Hello", "World");`

La macro può essere modificata per comportarsi nello stesso modo sia nel preprocessore sperimentale che nel preprocessore tradizionale. La soluzione consiste nell'aggiungere un altro livello di riferimento indiretto:

```cpp
#define CAT(a,b) a##b
#define ECHO(...) __VA_ARGS__

// IMPL1 and IMPL2 are macros implementation details
#define IMPL1(prefix,value) do_thing_one( prefix, value)
#define IMPL2(prefix,value) do_thing_two( prefix, value)

#define CALL(macroName, args) macroName args
#define DO_THING_FIXED(a,b) CALL( CAT(IMPL, a), ECHO(( "Hello",b)))

DO_THING_FIXED(1, "World");
// macro expanded to:
// do_thing_one( "Hello", "World");
```

### <a name="conformance-mode-conformance"></a>Conformità modalità di conformità

Il preprocessore sperimentale non è ancora completo e la logica della direttiva per il preprocessore continua a tornare al comportamento tradizionale. Di seguito è riportato un elenco parziale delle funzionalità incomplete:

- Supporto per`_Pragma`
- Funzionalità di c++ 20
- Miglioramenti diagnostici aggiuntivi
- Opzioni per controllare l'output in/E e/P
- Aumenta il bug di blocco: Gli operatori logici nelle espressioni costanti del preprocessore non sono implementati completamente nel nuovo preprocessore. In alcune `#if` direttive, il nuovo preprocessore può eseguire il fallback al preprocessore tradizionale. L'effetto è evidente solo quando le macro che sono incompatibili con il preprocessore tradizionale vengono espanse, cosa che può verificarsi quando si compilano slot per il preprocessore Boost.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **Proprietà di configurazione** > **C/C++**  > **Riga di comando**.

1. Modificare la proprietà **Opzioni aggiuntive** per includere **/Experimental: preprocessore** , quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](zc-conformance.md)
