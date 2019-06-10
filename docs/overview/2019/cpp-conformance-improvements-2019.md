---
title: Miglioramenti della conformità di C++
ms.date: 05/16/2019
description: Microsoft C++ in Visual Studio 2019 si avvicina alla conformità completa con lo standard di linguaggio C++20.
ms.technology: cpp-language
author: mikeblome
ms.author: mblome
ms.openlocfilehash: 02b778f10ad94342c922a4e79a856cc2a7d53076
ms.sourcegitcommit: 28eae422049ac3381c6b1206664455dbb56cbfb6
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/31/2019
ms.locfileid: "66451214"
---
# <a name="c-conformance-improvements-in-visual-studio-2019-rtw-and-version-161improvements161"></a>Miglioramenti della conformità di C++ in Visual Studio 2019 RTW e versione [16.1](#improvements_161)

## <a name="improvements-in-visual-studio-2019-rtw"></a>Miglioramenti in Visual Studio 2019 RTW

Visual Studio 2019 RTW contiene i seguenti miglioramenti della conformità, correzioni di bug e modifiche funzionali nel compilatore Microsoft C++ (MSVC).

**Nota:** Le funzionalità C++20 verranno rese disponibili in modalità `/std:c++latest` fino al completamento dell'implementazione di C++20 sia per il compilatore sia per IntelliSense. In tale momento verrà introdotta la modalità del compilatore `/std:c++20`.

### <a name="improved-modules-support-for-templates-and-error-detection"></a>Supporto di moduli migliorato per i modelli e il rilevamento degli errori

I moduli ora supportano ufficialmente lo standard C++20. Il supporto aggiornato è stato aggiunto in Visual Studio 2017 versione 15.9. Per altre informazioni, vedere [Better template support and error detection in C++ Modules with MSVC 2017 version 15.9](https://devblogs.microsoft.com/cppblog/better-template-support-and-error-detection-in-c-modules-with-msvc-2017-version-15-9/) (Supporto di modelli e rilevamento errori migliorati nei moduli C++ con MSVC 2017 versione 15.9).

### <a name="modified-specification-of-aggregate-type"></a>Specificazione del tipo di aggregazione modificata

La specifica di un tipo di aggregazione è stata modificata in C++20. Vedere [Prohibit aggregates with user-declared constructors](https://wg21.link/p1008r1) (Proibire aggregazioni con costruttori dichiarati dall'utente). In Visual Studio 2019, sotto `/std:c++latest`, una classe con qualsiasi costruttore dichiarato dall'utente (ad esempio una classe che include un costruttore dichiarato `= default` o `= delete`) non è un'aggregazione. In precedenza solo i costruttori specificati dall'utente non consentivano di qualificare una classe come funzione di aggregazione. Questa modifica impone restrizioni aggiuntive sulla modalità di inizializzazione di questi tipi.

Il codice seguente viene compilato senza errori in Visual Studio 2017, ma genera gli errori C2280 e C2440 in Visual Studio 2019 sotto `/std:c++latest`:

```cpp
struct A
{
    A() = delete; // user-declared ctor
};

struct B
{
    B() = default; // user-declared ctor
    int i = 0;
};

A a{}; // ill-formed in C++20, previously well-formed
B b = { 1 }; // ill-formed in C++20, previously well-formed
```

### <a name="partial-support-for-operator-"></a>Supporto parziale per l'operatore <=>

[P0515R3](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0515r3.pdf) C++20 introduce il supporto dell'operatore di confronto a tre vie `<=>`, detto anche "operatore navicella spaziale". Visual Studio 2019 in modalità `/std:c++latest` introduce il supporto parziale per l'operatore tramite la generazione di errori per la sintassi che ora non è più consentita. Ad esempio il codice seguente viene compilato senza errori in Visual Studio 2017, ma genera diversi errori in Visual Studio 2019 sotto `/std:c++latest`:

```cpp
struct S
{
       bool operator<=(const S&) const { return true; }
};

template <bool (S::*)(const S&) const>
struct U { };
int main(int argc, char** argv)
{
       U<&S::operator<=> u; // In Visual Studio 2019 raises C2039, 2065, 2146.
}
```

Per evitare gli errori, inserire uno spazio nella riga che causa l'errore prima della parentesi finale: `U<&S::operator<= > u;`.

### <a name="references-to-types-with-mismatched-cv-qualifiers"></a>Riferimenti a tipi con elementi cv-qualifier non corrispondenti

In precedenza MSVC consentiva il binding diretto di un riferimento da un tipo con elementi cv-qualifier non corrispondenti sotto il livello principale. Questo può consentire la modifica di dati presumibilmente const referenziati dal riferimento e il compilatore ora crea un elemento temporaneo, come richiesto dallo standard. In Visual Studio 2017 il codice seguente viene compilato senza avviso. In Visual Studio 2019, il compilatore genera l'*avviso C4172: \<func:#1 "?PData@X@@QBEABQBXXZ"> restituzione indirizzo di variabile locale o temporanea*.

```cpp
struct X
{
    const void* const& PData() const
    {
        return _pv;
    }

    void* _pv;
};

int main()
{
    X x;
    auto p = x.PData(); // C4172
}
```
### <a name="reinterpretcast-from-an-overloaded-function"></a>`reinterpret_cast` da una funzione in overload

L'argomento di `reinterpret_cast` non è uno dei contesti in cui è consentito l'indirizzo di una funzione in overload. Il codice seguente viene compilato senza errori in Visual Studio 2017, ma in Visual Studio 2019 genera *C2440: impossibile convertire da 'overloaded-function' a 'fp'* :

```cpp
int f(int) { return 1; }
int f(float) { return .1f; }
using fp = int(*)(int);

int main()
{
    fp r = reinterpret_cast<fp>(&f);
}
```

Per evitare l'errore, usare un cast consentito per questo scenario:

```cpp
int f(int);
int f(float);
using fp = int(*)(int);

int main()
{
    fp r = static_cast<fp>(&f); // or just &f;
}
```

### <a name="lambda-closures"></a>Chiusure lambda

In C++14, i tipi di chiusura lambda non sono valori letterali. La conseguenza principale di questa regola è la possibilità che un'espressione lambda non sia assegnato a una variabile `constexpr`. Il codice seguente viene compilato senza errori in Visual Studio 2017, ma in Visual Studio 2019 genera *C2127: 'l': inizializzazione non ammessa dell'entità 'constexpr' con un'espressione non costante* :

```cpp
int main()
{
    constexpr auto l = [] {}; // C2127 in VS2019
}
```

Per evitare l'errore, rimuovere il qualificatore `constexpr` o modificare la modalità di conformità in `/std:c++17`.

### <a name="stdcreatedirectory-failure-codes"></a>Codici di errore std::create_directory

[P1164](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2019/p1164r1.pdf) implementata da C++20 senza condizioni. Questa funzionalità modifica `std::create_directory` per verificare se la destinazione era già una directory in caso di errore. In precedenza tutti gli errori di tipo ERROR_ALREADY_EXISTS venivano trasformati in codici di esito positivo ma senza creazione di directory.

### <a name="operatorstdostream-nullptrt"></a>operator<<(std::ostream, nullptr_t)

In base a [LWG 2221](https://cplusplus.github.io/LWG/issue2221) è stato aggiunto `operator<<(std::ostream, nullptr_t)` per la scrittura di nullptrs nei flussi. 

### <a name="additional-parallel-algorithms"></a>Algoritmi paralleli aggiuntivi

Nuove versioni parallele di `is_sorted`, `is_sorted_until`, `is_partitioned`, `set_difference`, `set_intersection`, `is_heap` e `is_heap_until`.

### <a name="atomic-initialization"></a>Inizializzazione atomica

[P0883 "Fixing atomic initialization"](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0883r1.pdf) (Riparazione dell'inizializzazione atomica) modifica `std::atomic` impostando l'inizializzazione tramite valore dell'elemento T contenuto anziché l'inizializzazione tramite impostazione predefinita. La correzione viene attivata quando si usa Clang/LLVM con la libreria standard Microsoft. Attualmente è disattivata per il compilatore Microsoft C++ come soluzione alternativa per un bug nell'elaborazione di constexpr.

### <a name="removecvref-and-removecvreft"></a>remove_cvref e remove_cvref_t

Sono state implementate le caratteristiche dei tipi `remove_cvref` e `remove_cvref_t` da [P0550](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0550r2.pdf). Tali caratteristiche rimuovono l'associazione a riferimenti e la qualifica cv- da un tipo senza degradare le funzioni e le matrici a puntatori (a differenza di `std::decay` e `std::decay_t`).

### <a name="feature-test-macros"></a>Macro dei test di funzionalità

Il documento [P0941R2 sulle macro dei test delle funzionalità](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0941r2.html) è stato completato, con il supporto per `__has_cpp_attribute`. Le macro dei test delle funzionalità sono supportate in tutte le modalità standard.

### <a name="prohibit-aggregates-with-user-declared-constructors"></a>Vietare gli aggregati con i costruttori dichiarati dall'utente

Il documento [C++20 P1008R1 - Come vietare gli aggregati con i costruttori dichiarati dall'utente](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p1008r1.pdf) è stato completato.

## <a name="improvements_161"></a> Miglioramenti in Visual Studio 2019 versione 16.1

### <a name="char8t"></a>char8_t

[P0482r6](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0482r6.html). C++20 aggiunge un nuovo tipo di carattere usato per rappresentare unità di codice UTF-8. I valori letterali stringa u8 in C++20 hanno il tipo `const char8_t[N]` invece di `const char[N]` come in precedenza. Sono state proposte modifiche simili per lo standard C in [N2231](http://www.open-std.org/jtc1/sc22/wg14/www/docs/n2231.htm). I suggerimenti per la correzione di compatibilità con le versioni precedenti di char8_t sono specificati in [P1423r0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2019/p1423r0.html). Il compilatore Microsoft C++ include ora il supporto per char8_t in Visual Studio 2019 versione 16.1 quando si specifica l'opzione del compilatore **/Zc:char8_t**. In futuro il supporto avverrà tramite [/std:c++latest](../../build/reference/std-specify-language-standard-version.md), in cui è possibile ripristinare il comportamento di C++17 tramite **/Zc:char8_t-** . Il compilatore EDG che alimenta IntelliSense non supporta ancora questa opzione, pertanto si noteranno errori residui limitati a IntelliSense che non influiscono sulla compilazione vera e propria.

#### <a name="example"></a>Esempio

```cpp
const char* s = u8"Hello"; // C++17
const char8_t* s = u8"Hello"; // C++20
```

### <a name="stdtypeidentity-metafunction-and-stdidentity-function-object"></a>Metafunzione std::type_identity e oggetto funzione std::identity

[P0887R1 type_identity](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0887r1.pdf). L'estensione del modello di classe `std::identity` deprecata è stata rimossa e sostituita dalla metafunzione `std::type_identity` e dall'oggetto funzione `std::identity` di C++20. Entrambi sono disponibili solo in [/std:c++latest](../../build/reference/std-specify-language-standard-version.md). 

L'esempio seguente genera l'avviso di elemento deprecato C4996 per `std::identity` (definito in \<type_traits>) in Visual Studio 2017: 

```cpp
#include <type_traits>

using T = std::identity<int>::type;
T x, y = std::identity<T>{}(x);
int i = 42;
long j = std::identity<long>{}(i);
```

L'esempio seguente illustra come usare il nuovo elemento `std::identity` (definito in \<functional>) con il nuovo `std::type_identity`:

```cpp
#include <type_traits>
#include <functional>

using T = std::type_identity<int>::type;
T x, y = std::identity{}(x);
int i = 42;
long j = static_cast<long>(i);
```

### <a name="syntax-checks-for-generic-lambdas"></a>Controllo della sintassi per espressioni lambda generiche

Il nuovo processore lambda attiva alcuni controlli sintattici in modalità di conformità per espressioni lambda generiche, sotto [/std:c++latest](../../build/reference/std-specify-language-standard-version.md) o sotto qualsiasi altra modalità di linguaggio con **/experimental:newLambdaProcessor**. 

In Visual Studio 2017 questo codice viene compilato senza avvisi, ma in Visual Studio 2019 genera l'errore *C2760 Errore di sintassi. Token '\<id-expr>' imprevisto. Previsto 'id-expression'* :

```cpp
void f() {
    auto a = [](auto arg) {
        decltype(arg)::Type t;
    };
}
```

L'esempio seguente visualizza la sintassi corretta, ora applicata dal compilatore:

```cpp
void f() {
    auto a = [](auto arg) {
        typename decltype(arg)::Type t;
    };
}
```

### <a name="argument-dependent-lookup-for-function-calls"></a>Ricerca dipendente dall'argomento per le chiamate di funzione

[P0846R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0846r0.html) (C++20) Capacità aumentata di trovare modelli di funzione tramite la ricerca dipendente dall'argomento di espressioni di chiamata di funzione con argomenti di modello espliciti. Richiede **/std:c++latest**.

### <a name="designated-initialization"></a>Inizializzazione designata

[P0329R4](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0329r4.pdf) (C++20) Inizializzazione designata consente a membri specifici di essere selezionati nell'inizializzazione aggregata tramite la sintassi `Type t { .member = expr }`. Richiede **/std:c++latest**.

### <a name="new-and-updated-standard-library-functions-c20"></a>Funzioni nuove e aggiornate della libreria standard (C++20)

- `starts_with()` e `ends_with()` per `basic_string` e `basic_string_view`.
- `contains()` per i contenitori associativi.
- `remove()`, `remove_if()` e `unique()` per ` list` e `forward_list` ora restituiscono `size_type`.
- `shift_left()` e `shift_right()` aggiunte a \<algorithm>.

## <a name="bug-fixes-and-behavior-changes-in-visual-studio-2019-rtw"></a>Correzioni di bug e modifiche funzionali in Visual Studio 2019 RTW

### <a name="correct-diagnostics-for-basicstring-range-constructor"></a>Diagnostica corretta per il costruttore di intervalli basic_string

In Visual Studio 2019 il costruttore di intervalli `basic_string` non elimina più la diagnostica del compilatore con `static_cast`. Il codice seguente viene compilato senza avvisi in Visual Studio 2017, nonostante la possibile perdita di dati da `wchar_t` a `char` durante l'inizializzazione di `out`:

```cpp
std::wstring ws = /* … */;
std::string out(ws.begin(), ws.end());
```

Visual Studio 2019 genera correttamente *C4244: 'argument': conversione da 'wchar_t' a 'const _Elem'. Possibile perdita di dati*. Per evitare l'avviso è possibile inizializzare std::string come illustrato in questo esempio:

```cpp
std::wstring ws = L"Hello world";
std::string out;
for (wchar_t ch : ws)
{
    out.push_back(static_cast<char>(ch));
}
```

### <a name="incorrect-calls-to--and---under-clr-or-zw-are-now-correctly-detected"></a>Le chiamate non corrette a += e -= in /clr o /ZW ora vengono rilevate correttamente

A causa di un bug introdotto in Visual Studio 2017, il compilatore ignorava gli errori senza generare avvisi e non generava codice per le chiamate non valide a += e -= sotto `/clr` o `/ZW`. Il codice seguente viene compilato senza errori in Visual Studio 2017 ma in Visual Studio 2019 genera correttamente l'*errore C2845: 'System::String ^': aritmetica dei puntatori non consentita per questo tipo*:

```cpp
public enum class E { e };

void f(System::String ^s)
{
    s += E::e; // C2845 in VS2019
}
```

Per evitare l'errore di questo esempio, usare l'operatore con il metodo ToString(): `s += E::e.ToString();`.

### <a name="initializers-for-inline-static-data-members"></a>Inizializzatori per i membri dati statici inline

Gli accessi a membri non validi all'interno di inizializzatori `inline` e `static constexpr` ora vengono rilevati correttamente. Il codice seguente viene compilato senza errori in Visual Studio 2017 ma in Visual Studio 2019 nella modalità `/std:c++17` produce l'errore *C2248: impossibile accedere al membro privato dichiarato nella classe 'X'* .

```cpp
struct X
{
    private:
        static inline const int c = 1000;
};

struct Y : X
{
    static inline int d = c; // C2248 in Visual Studio 2019
};
```

Per evitare l'errore, dichiarare il membro `X::c` come protetto:

```cpp
struct X
{
    protected:
        static inline const int c = 1000;
};
```

### <a name="c4800-reinstated"></a>C4800 reintegrato

In MSVC era disponibile un avviso di prestazioni C4800 sulla conversione implicita a Bool che causava disturbo eccessivo e non era sopprimibile. Ne è stata decisa la rimozione in Visual Studio 2017. Tuttavia, durante il ciclo di vita di Visual Studio 2017 Microsoft ha ricevuto numerosi commenti e suggerimenti relativi ai casi che tale avviso ha contribuito a risolvere. In Visual Studio 2019 torna a essere disponibile un avviso C4800 mirato, con un elemento C4165 associato. Entrambi sono facilmente sopprimibili con un cast esplicito o tramite il confronto con 0 del tipo appropriato. C4800 è un avviso di livello 4 disattivato per impostazione predefinita e C4165 è un avviso di livello 3 disattivato per impostazione predefinita. Entrambi sono rilevabili tramite l'opzione del compilatore `/Wall`.

L'esempio seguente genera C4800 e C4165 sotto `/Wall`:

```cpp
bool test(IUnknown* p)
{
    bool valid = p; // warning C4800: Implicit conversion from 'IUnknown*' to bool. Possible information loss
    IDispatch* d = nullptr;
    HRESULT hr = p->QueryInterface(__uuidof(IDispatch), reinterpret_cast<void**>(&d));
    return hr; // warning C4165: 'HRESULT' is being converted to 'bool'; are you sure this is what you want?
}
```

Per evitare gli avvisi nell'esempio precedente, è possibile scrivere codice simile al seguente:

```cpp
bool test(IUnknown* p)
{
    bool valid = p != nullptr; // OK
    IDispatch* d = nullptr;
    HRESULT hr = p->QueryInterface(__uuidof(IDispatch), reinterpret_cast<void**>(&d));
    return SUCCEEDED(hr);  // OK
}
```

### <a name="local-class-member-function-doesnt-have-a-body"></a>Una funzione membro della classe locale non ha corpo

In Visual Studio 2017 l'avviso *C4822: una funzione membro della classe locale non ha corpo* viene generato solo quando l'opzione del compilatore `/w14822` è impostata in modo esplicito e non viene visualizzato con `/Wall`. In Visual Studio 2019 C4822 è un avviso disattivato per impostazione predefinita, il che lo rende rilevabile in `/Wall` senza dover impostare `/w14822` in modo esplicito.

```cpp
void foo()
{
    struct A
        {
            int boo(); // warning C4822
        };
}
```

### <a name="function-template-bodies-containing-constexpr-if-statements"></a>Corpi di funzioni modello contenenti istruzioni constexpr if

Per i corpi di funzioni modello contenenti istruzioni `if constexpr` sono attivati alcuni controlli `/permissive-` associati all'analisi. Ad esempio in Visual Studio 2017 il codice seguente genera C*7510: se si usa il nome di tipo dipendente 'Type' è necessario aggiungere il prefisso 'typename'* solo se l'opzione `/permissive-` non è impostata. In Visual Studio 2019 lo stesso codice genera errori se l'opzione `/permissive-` è impostata o non è impostata:

```cpp
template <typename T>

int f()
{
    T::Type a; // error C7510

    if constexpr (T::val)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

struct X
{
    using Type = X;
    constexpr static int val = 1;
};

int main()
{
    return f<X>();
}

```

Per evitare l'errore, aggiungere la parola chiave `typename` alla dichiarazione di `a`: `typename T::Type a;`.

### <a name="inline-assembly-code-is-not-supported-in-a-lambda-expression"></a>Il codice assembly inline non è supportato in un'espressione lambda

Recentemente è stato segnalato al team Visual C++ un problema di sicurezza per cui l'uso dell'assembler inline in un'espressione lambda poteva provocare il danneggiamento di 'ebp' (registro dell'indirizzo di restituzione) in fase di runtime. Un utente malintenzionato potrebbe trarre vantaggio da questo scenario. Data la natura del problema, il fatto che l'assembler inline è supportato solo su x86 e la scarsa interazione dell'assembler inline con il resto del compilatore, si è deciso di non consentire l'assembler inline all'interno di un'espressione lambda.

Nota: l'unico caso d'uso dell'assembler inline all'interno di un'espressione lambda rilevato è stato un uso il cui obiettivo era acquisire l'indirizzo del mittente. In questo scenario è possibile acquisire l'indirizzo del mittente in tutte le piattaforme, usando un elemento `_ReturnAddress()` intrinseco del compilatore.

Il codice seguente produce *C7552: l'assembler inline non è supportato in un'espressione lambda* sia in Visual Studio 2017 15.9 sia in Visual Studio 2019:

```cpp
#include <cstdio>

int f()
{
    int y = 1724;
    int x = 0xdeadbeef;

    auto lambda = [&]
    {
        __asm {

            mov eax, x
            mov y, eax
        }
    };

    lambda();
    return y;
}
```

Per evitare l'errore spostare il codice dell'assembly in una funzione con nome, come illustrato nell'esempio seguente:

```cpp
#include <cstdio>

void g(int& x, int& y)
{
    __asm {
        mov eax, x
        mov y, eax
    }
}

int f()
{
    int y = 1724;
    int x = 0xdeadbeef;
    auto lambda = [&]
    {
        g(x, y);
    };
    lambda();
    return y;
}

int main()
{
    std::printf("%d\n", f());
}
```

### <a name="iterator-debugging-and-stdmoveiterator"></a>Debug dell'iteratore e std::move_iterator

La funzionalità di debug dell'iteratore è stata configurata per annullare correttamente il wrapping di `std::move_iterator`. Ad esempio `std::copy(std::move_iterator<std::vector<int>::iterator>, std::move_iterator<std::vector<int>::iterator>, int*)` ora può supportare il percorso rapido `memcpy`.

### <a name="fixes-for-xkeycheckh-keyword-enforcement"></a>Correzioni per l'imposizione della parola chiave \<xkeycheck.h>

L'imposizione della parola chiave tipo macro della libreria standard \<xkeycheck.h> è stato aggiornato e ora restituisce la parola chiave errata rilevata anziché un messaggio generico. Supporta anche le parole chiave C++20 e non induce IntelliSense a interpretare parole chiave casuali come macro.

### <a name="allocator-types-un-deprecated"></a>Tipi di allocatore impostati come non deprecati

`std::allocator<void>`, `std::allocator::size_type` e `std::allocator::difference_type` sono stati impostati come non deprecati.

### <a name="correct-warning-for-narrowing-string-conversions"></a>È stato corretto un avviso per la conversione di stringhe a tipi di dati più piccoli

Un elemento `static_cast` spurio non chiamato dallo standard che sopprimeva accidentalmente gli avvisi C4244 di conversione a tipi di dati più piccoli è stato rimosso da std::string. Il tentativo di chiamare `std::string::string(const wchar_t*, const wchar_t*)` ora genera correttamente *C4244 "narrowing di wchar_t a char."*

### <a name="various-filesystem-correctness-fixes"></a>Vari miglioramenti di correzione di \<filesystem>

- Risolto un errore di `std::filesystem::last_write_time` quando si prova a cambiare l'ora ultima scrittura di una directory.
- Il costruttore `std::filesystem::directory_entry` ora archivia un risultato "non riuscito", anziché generare un'eccezione, quando viene specificato un percorso di destinazione inesistente.
- La versione di `std::filesystem::create_directory` a 2 parametri è stata modificata per chiamare la versione a 1 parametro, come l'esecuzione di `copy_symlink` nella funzione `CreateDirectoryExW` sottostante quando existing_p era un collegamento simbolico.
- `std::filesystem::directory_iterator` non restituisce più un errore quando rileva un collegamento simbolico interrotto.
- `std::filesystem::space` ora accetta i percorsi relativi.
- `std::filesystem::path::lexically_relative` non viene più confuso dalle barre finali, segnalate come [LWG 3096](https://cplusplus.github.io/LWG/issue3096).
- Il rifiuto dei percorsi da parte di `CreateSymbolicLinkW` è stato risolto con barre in `std::filesystem::create_symlink`.
- Risolto il problema per cui la funzione `delete` della modalità di eliminazione POSIX disponibile in Windows 10 LTSB 1609 non era di fatto in grado di eliminare file.
- I costruttori di copia e gli operatori di assegnazione di copia `std::boyer_moore_searcher` e `std::boyer_moore_horspool_searcher` ora eseguono correttamente la copia di elementi.

### <a name="parallel-algorithms-on-windows-8-and-later"></a>Algoritmi paralleli in Windows 8 e versioni successive

La libreria di algoritmi paralleli ora usa correttamente la famiglia `WaitOnAddress` reale in Windows 8 e versioni successive, invece di usare sempre la versione Windows 7 e le versioni non autentiche precedenti.

### <a name="stdsystemcategorymessage-whitespace"></a>Spazi in std::system_category::message()

`std::system_category::message()` ora rimuove correttamente gli spazi finali dal messaggio restituito.

### <a name="stdlinearcongruentialengine-divide-by-zero"></a>Divisione per zero in std::linear_congruential_engine

Alcune condizioni che causano l'attivazione di una divisione per 0 in `std::linear_congruential_engine` sono state corrette.

### <a name="fixes-for-iterator-unwrapping"></a>Correzioni per la rimozione del wrapping dell'iteratore

Il meccanismo di rimozione del wrapping dell'iteratore presentata per la prima volta per l'integrazione programmatore-utente in Visual Studio 2017 15.8 (come descritto in https://devblogs.microsoft.com/cppblog/stl-features-and-fixes-in-vs-2017-15-8/ ) non rimuove più il wrapping di iteratori derivati da iteratori della libreria standard. Ad esempio un utente che deriva da `std::vector<int>::iterator` e prova a personalizzare il comportamento ora ottiene il comportamento personalizzato quando chiama algoritmi della libreria standard, anziché il comportamento di un puntatore.
La funzione di riserva del contenitore non ordinato ora esegue correttamente la riserva per N elementi, come descritto in [LWG 2156](https://cplusplus.github.io/LWG/issue2156).

### <a name="time-handling"></a>Gestione del tempo

- In precedenza alcuni valori di ora passati alla libreria di concorrenza registravano overflow, ad esempio `condition_variable::wait_for(seconds::max())`. Il comportamento di questi overflow, ora risolti, cambiava in base a un ciclo apparentemente casuale di 29 giorni (quando si verificava l'overflow di uint32_t millisecondi accettato dalle API Win32 sottostanti).

- L'intestazione <ctime> ora dichiara correttamente timespec e timespec_get nello spazio dei nomi std oltre che nello spazio dei nomi globale.

### <a name="various-fixes-for-containers"></a>Varie correzioni per i contenitori

- Molte funzioni del contenitore interne della libreria standard sono state rese private per una migliore esperienza di IntelliSense. Altre correzioni per contrassegnare i membri come privati sono previste nelle versioni future di MSVC.

- Sono stati risolti problemi di correttezza per la sicurezza delle eccezioni per cui i contenitori basati su nodi come `list`, `map` e `unordered_map` si danneggiano. Durante un'operazione di riassegnazione `propagate_on_container_copy_assignment` o `propagate_on_container_move_assignment` si liberava il nodo sentinel del contenitore con l'allocatore precedente, si eseguiva l'assegnazione POCCA/POCMA sull'allocatore precedente e quindi si provava ad acquisire il nodo sentinel dal nuovo allocatore. Se questa allocazione non riusciva, il contenitore veniva danneggiato e non poteva essere eliminato definitivamente, perché la proprietà di un nodo sentinel è un struttura di dati hardware invariante. Questo problema è stato risolto allocando il nuovo nodo sentinel dall'allocatore del contenitore di origine prima di eliminare definitivamente il nodo sentinel esistente.

- I contenitori sono stati risolti in modo da copiare/spostare/scambiare gli allocatori sempre in base a `propagate_on_container_copy_assignment`, `propagate_on_container_move_assignment`, e `propagate_on_container_swap`, anche per gli allocatori dichiarati `is_always_equal`.

- Sono stati aggiunti overload per le funzioni di unione contenitori ed estrazione membri che accettano contenitori rvalue per [P0083 "Splicing di mappe e set"](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0083r3.pdf)

### <a name="stdbasicistreamread-processing-of-rn--n"></a>Elaborazione std::basic_istream::read di \r\n => \n

`std::basic_istream::read` è stato risolto in modo che non scriva temporaneamente in parti del buffer specificato, nel quadro dell'elaborazione di \r\n => \n. In questo modo si rinuncia a una parte del vantaggio in termini di prestazioni acquisito in Visual Studio 2017 15.8 per le letture di dimensioni superiori a 4 KB, ma si registrano miglioramenti dell'efficienza evitando 3 chiamate virtuali per ogni carattere.

### <a name="stdbitset-constructor"></a>Costruttore std::bitset

Il costruttore di `std::bitset` non legge più le cifre uno e zero in ordine inverso per i set di bit di grandi dimensioni.

### <a name="stdpairoperator-regression"></a>Regressione di std::pair::operator=

È stata corretta una regressione nell'operatore di assegnazione di `std::pair` introdotto con l'implementazione di [LWG 2729 "SFINAE mancante in std::pair::operator=";](https://cplusplus.github.io/LWG/issue2729). Ora accetta di nuovo correttamente i tipi convertibili in `std::pair`.

### <a name="non-deduced-contexts-for-addconstt"></a>Contesti non dedotti per add_const_t

È stato risolto un bug per caratteristiche del tipo minori, dove `add_const_t` e le funzioni correlate devono essere un contesto non dedotto. In altre parole, `add_const_t` deve essere un alias per `typename add_const<T>::type` e non per `const T`.

## <a name="see-also"></a>Vedere anche

[Novità di Visual Studio 2019](../what-s-new-for-visual-cpp-in-visual-studio.md)