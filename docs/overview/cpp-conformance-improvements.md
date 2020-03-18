---
title: Miglioramenti della conformità di C++
ms.date: 03/16/2020
description: Microsoft C++ in Visual Studio si avvicina alla conformità completa con lo standard di linguaggio C++20.
ms.technology: cpp-language
ms.openlocfilehash: 31c64ca8ce6b13af89a2e19bccd1de1bfb99543a
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446793"
---
# <a name="c-conformance-improvements-in-visual-studio"></a>Miglioramenti della conformità di C++ in Visual Studio 2017

In ogni versione di Microsoft C++ vengono introdotti miglioramenti della conformità e correzioni di bug. Questo articolo elenca i miglioramenti introdotti a livello di versione principale e secondaria. Elenca inoltre le principali correzioni di bug per ogni versione. Per passare direttamente alle modifiche relative a una versione specifica, usare l'elenco **In questo articolo**.

::: moniker range="vs-2019"

## <a name="improvements_160"></a>Miglioramenti della conformità in Visual Studio 2019 RTW (versione 16,0)

Visual Studio 2019 RTW contiene i seguenti miglioramenti della conformità, correzioni di bug e modifiche del comportamento nel compilatore Microsoft C++ (MSVC)

**Nota:** Le funzionalità di c++ 20 saranno rese disponibili in modalità `/std:c++latest` fino a quando non viene completata l'implementazione di C++ 20 sia per il compilatore che per IntelliSense. In tale momento verrà introdotta la modalità del compilatore `/std:c++20`.

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

### <a name="partial-support-for-operator-"></a>Supporto parziale per `operator <=>`

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

Per evitare gli errori, inserire uno spazio nella riga che causa l'errore prima della parentesi uncinata chiusa: `U<&S::operator<= > u;`.

### <a name="references-to-types-with-mismatched-cv-qualifiers"></a>Riferimenti a tipi con elementi cv-qualifier non corrispondenti

In precedenza, MSVC consentiva il binding diretto di un riferimento da un tipo con elementi cv-qualifier non corrispondenti sotto il livello principale. Questo può consentire la modifica di dati presumibilmente const a cui viene fatto riferimento. Il compilatore ora crea un elemento temporaneo, come richiesto dallo standard. In Visual Studio 2017 il codice seguente viene compilato senza avviso. In Visual Studio 2019, il compilatore genera l'*avviso C4172: \<func:#1 "?PData@X@@QBEABQBXXZ"> restituzione indirizzo di variabile locale o temporanea*.

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

### <a name="reinterpret_cast-from-an-overloaded-function"></a>`reinterpret_cast` da una funzione in overload

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

In C++14, i tipi di chiusura lambda non sono valori letterali. La conseguenza principale di questa regola è che un'espressione lambda non può essere assegnata a una variabile **constExpr** . Il codice seguente viene compilato senza errori in Visual Studio 2017, ma in Visual Studio 2019 genera *C2127: 'l': inizializzazione non ammessa dell'entità 'constexpr' con un'espressione non costante*:

```cpp
int main()
{
    constexpr auto l = [] {}; // C2127 in VS2019
}
```

Per evitare l'errore, rimuovere il qualificatore **constExpr** o modificare la modalità di conformità in `/std:c++17`.

### <a name="stdcreate_directory-failure-codes"></a>Codici di errore `std::create_directory`

[P1164](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2019/p1164r1.pdf) implementata da C++20 senza condizioni. Questa funzionalità modifica `std::create_directory` per verificare se la destinazione era già una directory in caso di errore. In precedenza tutti gli errori di tipo ERROR_ALREADY_EXISTS venivano trasformati in codici di esito positivo ma senza creazione di directory.

### `operator<<(std::ostream, nullptr_t)`

In base a [LWG 2221](https://cplusplus.github.io/LWG/issue2221) è stato aggiunto `operator<<(std::ostream, nullptr_t)` per la scrittura di nullptrs nei flussi.

### <a name="additional-parallel-algorithms"></a>Algoritmi paralleli aggiuntivi

Nuove versioni parallele di `is_sorted`, `is_sorted_until`, `is_partitioned`, `set_difference`, `set_intersection`, `is_heap` e `is_heap_until`.

### <a name="atomic-initialization"></a>Inizializzazione atomica

[P0883 "Fixing atomic initialization"](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0883r1.pdf) (Riparazione dell'inizializzazione atomica) modifica `std::atomic` impostando l'inizializzazione tramite valore dell'elemento T contenuto anziché l'inizializzazione tramite impostazione predefinita. La correzione è abilitata quando si usa Clang/LLVM con la libreria standard Microsoft. È attualmente disabilitato per il compilatore C++ Microsoft, come soluzione alternativa per un bug nell'elaborazione del **constExpr** .

### <a name="remove_cvref-and-remove_cvref_t"></a>`remove_cvref` e `remove_cvref_t`

Sono state implementate le caratteristiche dei tipi `remove_cvref` e `remove_cvref_t` da [P0550](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0550r2.pdf). Tali caratteristiche rimuovono l'associazione a riferimenti e la qualifica cv- da un tipo senza degradare le funzioni e le matrici a puntatori (a differenza di `std::decay` e `std::decay_t`).

### <a name="feature-test-macros"></a>Macro dei test di funzionalità

Il documento [P0941R2 sulle macro dei test delle funzionalità](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0941r2.html) è stato completato, con il supporto per `__has_cpp_attribute`. Le macro dei test delle funzionalità sono supportate in tutte le modalità standard.

### <a name="prohibit-aggregates-with-user-declared-constructors"></a>Vietare gli aggregati con i costruttori dichiarati dall'utente

Il documento [C++20 P1008R1 - Come vietare gli aggregati con i costruttori dichiarati dall'utente](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p1008r1.pdf) è stato completato.

## <a name="improvements_161"></a>Miglioramenti della conformità in 16,1

### <a name="char8_t"></a>char8_t

[P0482r6](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0482r6.html). C++20 aggiunge un nuovo tipo di carattere usato per rappresentare unità di codice UTF-8. I valori letterali stringa `u8` in C++20 hanno il tipo `const char8_t[N]` invece di `const char[N]` come in precedenza. Sono state proposte modifiche simili per lo standard C in [N2231](http://www.open-std.org/jtc1/sc22/wg14/www/docs/n2231.htm). I suggerimenti per la correzione di compatibilità con le versioni precedenti di `char8_t` sono specificati in [P1423r0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2019/p1423r0.html). Il compilatore Microsoft C++ include ora il supporto per `char8_t` in Visual Studio 2019 versione 16.1 quando si specifica l'opzione del compilatore **/Zc:char8_t**. In futuro il supporto avverrà tramite [/std:c++latest](../build/reference/std-specify-language-standard-version.md), in cui è possibile ripristinare il comportamento di C++17 tramite **/Zc:char8_t-** . Il compilatore EDG che alimenta IntelliSense non supporta ancora questa opzione, pertanto si noteranno errori spuri, limitati a IntelliSense, che non influiscono sulla compilazione vera e propria.

#### <a name="example"></a>Esempio

```cpp
const char* s = u8"Hello"; // C++17
const char8_t* s = u8"Hello"; // C++20
```

### <a name="stdtype_identity-metafunction-and-stdidentity-function-object"></a>Metafunzione std::type_identity e oggetto funzione std::identity

[P0887R1 type_identity](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0887r1.pdf). L'estensione del modello di classe `std::identity` deprecata è stata rimossa e sostituita dalla metafunzione `std::type_identity` e dall'oggetto funzione `std::identity` di C++20. Entrambi sono disponibili solo in [/std:c++latest](../build/reference/std-specify-language-standard-version.md).

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

Il nuovo processore lambda attiva alcuni controlli sintattici in modalità di conformità per espressioni lambda generiche, sotto [/std:c++latest](../build/reference/std-specify-language-standard-version.md) o sotto qualsiasi altra modalità di linguaggio con **/experimental:newLambdaProcessor**.

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
- `remove()`, `remove_if()` e `unique()` per `list` e `forward_list` ora restituiscono `size_type`.
- `shift_left()` e `shift_right()` aggiunte a \<algorithm>.


## <a name="improvements_162"></a>Miglioramenti della conformità in 16,2

### <a name="noexcept-constexpr-functions"></a>funzioni noexcept constExpr

Le funzioni constExpr non sono più considerate **noexcept** per impostazione predefinita quando vengono utilizzate in un'espressione costante. Questa modifica del comportamento deriva dalla risoluzione di [glc 1351](http://www.open-std.org/jtc1/sc22/wg21/docs/cwg_defects.html#1351) ed è abilitata in [/permissive-](../build/reference/permissive-standards-conformance.md). L'esempio seguente viene compilato in Visual Studio 2019 versione 16,1 e versioni precedenti, ma produce C2338 in Visual Studio 2019 versione 16,2:

```cpp
constexpr int f() { return 0; }

int main() {
    static_assert(noexcept(f()), "f should be noexcept"); // C2338 in 16.2
}
```

Per correggere l'errore, aggiungere l'espressione **noexcept** alla dichiarazione di funzione:

```cpp
constexpr int f() noexcept { return 0; }

int main() {
    static_assert(noexcept(f()), "f should be noexcept");
}
```

### <a name="binary-expressions-with-different-enum-types"></a>Espressioni binarie con tipi enum diversi

La possibilità di applicare le conversioni aritmetiche consuete su operandi in cui uno è di tipo enumerazione e l'altro è un tipo di enumerazione diverso o un tipo a virgola mobile è deprecato in C++ 20 ([P1120R0](https://wg21.link/p1120r0)). In Visual Studio 2019 versione 16,2 e successive, il codice seguente genera un avviso di livello 4 quando è abilitata l'opzione del compilatore [/std: c + + Latest](../build/reference/std-specify-language-standard-version.md) :

```cpp
enum E1 { a };
enum E2 { b };
int main() {
    int i = a | b; // warning C5054: operator '|': deprecated between enumerations of different types
}
```

Per evitare l'avviso, usare [static_cast](../cpp/static-cast-operator.md) per convertire il secondo operando:

```cpp
enum E1 { a };
enum E2 { b };
int main() {
  int i = a | static_cast<int>(b);
}
```

### <a name="binary-expressions-with-enumeration-and-floating-point-types"></a>Espressioni binarie con tipi di enumerazione e a virgola mobile

La possibilità di applicare le conversioni aritmetiche consuete su operandi in cui uno è di tipo enumerazione e l'altro è un tipo di enumerazione diverso o un tipo a virgola mobile è deprecato in C++ 20 ([P1120R0](https://wg21.link/p1120r0)). In altre parole, l'uso di un'operazione binaria tra un'enumerazione e un tipo a virgola mobile è ora un avviso quando è abilitata l'opzione del compilatore [/std: c + + Latest](../build/reference/std-specify-language-standard-version.md) :

```cpp
enum E1 { a };
int main() {
  double i = a * 1.1;
}
```

Per evitare l'avviso, usare [static_cast](../cpp/static-cast-operator.md) per convertire il secondo operando:

```cpp
enum E1 { a };
int main() {
   double i = static_cast<int>(a) * 1.1;
}
```

### <a name="equality-and-relational-comparisons-of-arrays"></a>Uguaglianza e confronti relazionali di matrici

I confronti di uguaglianza e relazionali tra due operandi di tipo matrice sono deprecati in C++ 20 ([P1120R0](https://wg21.link/p1120r0)). In altre parole, un'operazione di confronto tra due matrici (indipendentemente dalle analogie di rango e extent) è ora un avviso. A partire da Visual Studio 2019 versione 16,2, il codice seguente produce *C5056: operator ' = =': deprecato per i tipi di matrice* quando è abilitata l'opzione del compilatore [/std: c + + Latest](../build/reference/std-specify-language-standard-version.md) :

```cpp
int main() {
    int a[] = { 1, 2, 3 };
    int b[] = { 1, 2, 3 };
    if (a == b) { return 1; }
}
```

Per evitare l'avviso, è possibile confrontare gli indirizzi dei primi elementi:

```cpp
int main() {
    int a[] = { 1, 2, 3 };
    int b[] = { 1, 2, 3 };
    if (&a[0] == &b[0]) { return 1; }
}
```

Per determinare se il contenuto di due matrici è uguale, usare la funzione [std:: EQUAL](../standard-library/algorithm-functions.md#equal) :

```cpp
std::equal(std::begin(a), std::end(a), std::begin(b), std::end(b));
```

### <a name="effect-of-defining-spaceship-operator-on--and-"></a>Effetto della definizione dell'operatore di spaziatura in = = e! =

Una definizione dell'operatore di spaziatura ( **<=>** ) da solo non riscriverà più le espressioni che coinvolgono **==** o **! =** a meno che l'operatore di spaziatura non sia contrassegnato come `= default` ([P1185R2](https://wg21.link/p1185r2)). L'esempio seguente viene compilato in Visual Studio 2019 RTW e nella versione 16,1, ma produce C2678 in Visual Studio 2019 versione 16,2:

```cpp
#include <compare>

struct S {
  int a;
  auto operator<=>(const S& rhs) const {
    return a <=> rhs.a;
  }
};
bool eq(const S& lhs, const S& rhs) {
  return lhs == rhs;
}
bool neq(const S& lhs, const S& rhs) {
    return lhs != rhs;
}
```

Per evitare l'errore, definire l'operatore = = o dichiararlo come predefinito:

```cpp
#include <compare>

struct S {
  int a;
  auto operator<=>(const S& rhs) const {
    return a <=> rhs.a;
  }
  bool operator==(const S&) const = default;
};
bool eq(const S& lhs, const S& rhs) {
  return lhs == rhs;
}
bool neq(const S& lhs, const S& rhs) {
    return lhs != rhs;
}
```

### <a name="standard-library-improvements"></a>Miglioramenti della libreria standard

- \<charconv > `to_chars()` con precisione fissa o scientifica. (La precisione generale è attualmente pianificata per 16,4).
- [P0020R6](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0020r6.html): Atomic\<float >, Atomic\<Double >, Atomic\<long double >
- [P0463R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0463r1.html): endian
- [P0482R6](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0482r6.html): supporto della libreria per char8_t
- [P0600R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0600r1.pdf): [\[noscarto]] per la libreria STL, parte 1
- [P0653R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0653r2.html): to_address ()
- [P0754R2](http://open-std.org/JTC1/SC22/WG21/docs/papers/2018/p0754r2.pdf): \<versione >
- [P0771R1](http://open-std.org/JTC1/SC22/WG21/docs/papers/2018/p0771r1.pdf): noexcept per il costruttore di spostamento std:: Function

## <a name="improvements_163"></a>Miglioramenti della conformità in Visual Studio 2019 versione 16,3

### <a name="stream-extraction-operators-for-char-removed"></a>Operatori di estrazione del flusso per char * rimosso

Gli operatori di estrazione dei flussi per puntatore a caratteri sono stati rimossi e sostituiti da operatori di estrazione per la matrice di caratteri (per [P0487R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0487r1.html)). WG21 considera unsafe gli overload rimossi. In [/std: c + + Latest](../build/reference/std-specify-language-standard-version.md) Mode, l'esempio seguente produce ora *C2679: binary ' > >': non è stato trovato alcun operatore che accetti un operando destro di tipo ' char\*' (oppure non esiste alcuna conversione accettabile)* :

```cpp
   char x[42];
   char* p = x;
   std::cin >> std::setw(42);
   std::cin >> p;
```

Per evitare l'errore, usare l'operatore di estrazione con una variabile Char []:

```cpp
char x[42];
std::cin >> x;
```

### <a name="new-keywords-requires-and-concept"></a>Le nuove parole chiave **richiedono** e il **concetto**

Le nuove parole chiave **richiedono** e il **concetto** è stato aggiunto C++ al compilatore Microsoft. Se si tenta di usare uno dei due come identificatore in [/std: c + + Latest](../build/reference/std-specify-language-standard-version.md) Mode, il compilatore genererà l' *errore di sintassi C2059:* .

### <a name="constructors-as-type-names-disallowed"></a>Costruttori come nomi di tipi non consentiti

I nomi dei costruttori non sono più considerati i nomi di classe inseriti quando vengono visualizzati in un nome completo dopo un alias di una specializzazione del modello di classe. In precedenza era possibile utilizzare i costruttori come nome di tipo per dichiarare altre entità. Nell'esempio seguente viene ora generato *C3646:' TotalDuration ': identificatore di override sconosciuto*:

```cpp
#include <chrono>

class Foo {
   std::chrono::milliseconds::duration TotalDuration{};
};

```

Per evitare l'errore, dichiarare `TotalDuration` come illustrato di seguito:

```cpp
#include <chrono>

class Foo {
  std::chrono::milliseconds TotalDuration {};
};
```

### <a name="stricter-checking-of-extern-c-functions"></a>Controllo più restrittivo delle funzioni "C" extern

Se una funzione **extern "C"** è stata dichiarata in spazi dei nomi diversi, le C++ versioni precedenti del compilatore Microsoft non controllano se le dichiarazioni sono compatibili. In Visual Studio 2019 versione 16,3, il compilatore esegue un controllo di questo tipo. In modalità [/permissive-](../build/reference/permissive-standards-conformance.md) , il codice seguente produce *C2371: ridefinizione. tipi di base diversi* e *C2733 non è possibile eseguire l'overload di una funzione con collegamento C*:

```cpp
using BOOL = int;

namespace N
{
   extern "C" void f(int, int, int, bool);
}

void g()
{
   N::f(0, 1, 2, false);
}

extern "C" void f(int, int, int, BOOL){}
```

Per evitare gli errori nell'esempio precedente, usare **bool** anziché **bool** in modo coerente in entrambe le dichiarazioni di `f`.

### <a name="standard-library-improvements"></a>Miglioramenti della libreria standard

Sono state rimosse le intestazioni non standard \<stdexcpt. h > e \<TypeInfo. h >. Il codice che li include deve invece includere le intestazioni standard \<Exception > e \<TypeInfo > rispettivamente.

## <a name="improvements_164"></a>Miglioramenti della conformità in Visual Studio 2019 versione 16,4

### <a name="better-enforcement-of-two-phase-name-lookup-for-qualified-ids-in-permissive-"></a>Miglioramento dell'applicazione della ricerca del nome in due fasi per gli ID qualificati in/permissive-

La ricerca del nome in due fasi richiede che i nomi non dipendenti usati nel corpo di modelli siano visibili per il modello in fase di definizione. In precedenza, tali nomi potrebbero essere stati trovati quando viene creata un'istanza del modello. Questa modifica rende più semplice la scrittura di codice conforme portabile in MSVC sotto il flag [/permissive-](../build/reference/permissive-standards-conformance.md) .

In Visual Studio 2019 versione 16,4, con il flag **/permissive-** impostato, l'esempio seguente genera un errore perché `N::f` non è visibile quando viene definito il modello di `f<T>`:

```cpp
template <class T>
int f() {
    return N::f() + T{}; // error C2039: 'f': is not a member of 'N'
}

namespace N {
    int f() { return 42; }
}
```

In genere, questo problema può essere risolto includendo intestazioni mancanti o funzioni o variabili di dichiarazione in diretta, come illustrato nell'esempio seguente:

```cpp
namespace N {
    int f();
}

template <class T>
int f() {
    return N::f() + T{};
}

namespace N {
    int f() { return 42; }
}
```

### <a name="implicit-conversion-of-integral-constant-expressions-to-null-pointer"></a>Conversione implicita di espressioni costanti integrali in un puntatore null

Il compilatore MSVC ora implementa [GLC Issue 903](http://www.open-std.org/jtc1/sc22/wg21/docs/cwg_defects.html#903) in modalità di conformità (/permissive-). Questa regola impedisce la conversione implicita di espressioni costanti integrali (ad eccezione del valore letterale integer ' 0') in costanti puntatore null. L'esempio seguente produce C2440 in modalità di conformità:

```cpp
int* f(bool* p) {
    p = false; // error C2440: '=': cannot convert from 'bool' to 'bool *'
    p = 0; // OK
    return false; // error C2440: 'return': cannot convert from 'bool' to 'int *'
}
```

Per correggere l'errore, utilizzare **nullptr** invece di **false**. Si noti che il valore letterale 0 è ancora consentito:

```cpp
int* f(bool* p) {
    p = nullptr; // OK
    p = 0; // OK
    return nullptr; // OK
}
```

### <a name="standard-rules-for-types-of-integer-literals"></a>Regole standard per i tipi di valori letterali integer

In modalità di conformità (abilitata da [/permissive-](../build/reference/permissive-standards-conformance.md)), MSVC usa le regole standard per i tipi di valori letterali integer. In precedenza, i valori letterali decimali troppo grandi per essere inclusi in un'int ' con segno venivano assegnati al tipo ' unsigned int '. A questo punto, a tali valori letterali viene assegnato il tipo integer con segno più grande successivo, "Long Long". Inoltre, i valori letterali con suffisso ' s'troppo grande per adattarsi a un tipo con segno vengono assegnati al tipo ' Unsigned Long Long '.

Questo può comportare la generazione di diversi tipi di diagnostica di avviso e le differenze di comportamento per le operazioni aritmetiche eseguite sui valori letterali.

Nell'esempio seguente viene illustrato il nuovo comportamento in Visual Studio 2019, versione 16,4. Il `i` variabile è di tipo **unsigned int** e pertanto viene generato l'avviso. I bit più significativi della variabile `j` vengono impostati su 0.

```cpp
void f(int r) {
    int i = 2964557531; // warning C4309: truncation of constant value
    long long j = 0x8000000000000000ll >> r; // literal is now unsigned, shift will fill high-order bits with 0
}
```

Nell'esempio seguente viene illustrato come conservare il comportamento precedente, evitando così gli avvisi e la modifica del comportamento in fase di esecuzione:

```cpp
void f(int r) {
int i = 2964557531u; // OK
long long j = (long long)0x8000000000000000ll >> r; // shift will keep high-order bits
}
```

### <a name="function-parameters-that-shadow-template-parameters"></a>Parametri di funzione che ombreggiano i parametri di modello

Il compilatore MSVC genera ora un errore quando un parametro di funzione nasconde un parametro di modello:

```cpp
template<typename T>
void f(T* buffer, int size, int& size_read);

template<typename T, int Size>
void f(T(&buffer)[Size], int& Size) // error C7576: declaration of 'Size' shadows a template parameter
{
    return f(buffer, Size, Size);
}
```

Per correggere l'errore, modificare il nome di uno dei parametri:

```cpp
template<typename T>
void f(T* buffer, int size, int& size_read);

template<typename T, int Size>
void f(T (&buffer)[Size], int& size_read)
{
    return f(buffer, Size, size_read);
}
```

### <a name="user-provided-specializations-of-type-traits"></a>Specializzazioni fornite dall'utente di tratti di tipo

In conformità con la sottoclausola *meta. rqmts* dello standard, il compilatore MSVC genera ora un errore quando rileva una specializzazione definita dall'utente di uno dei modelli di `type_traits` specificati nello spazio dei nomi `std`. Se non diversamente specificato, le specializzazioni generano un comportamento non definito. L'esempio seguente presenta un comportamento non definito perché viola la regola e il `static_assert` ha esito negativo con errore **C2338**.

```cpp
#include <type_traits>
struct S;

template<>
struct std::is_fundamental<S> : std::true_type {};

static_assert(std::is_fundamental<S>::value, "fail");
```

Per evitare l'errore, definire uno struct che erediti dalla `type_trait`preferita e specializzarlo:

```cpp
#include <type_traits>

struct S;

template<typename T>
struct my_is_fundamental : std::is_fundamental<T> {};

template<>
struct my_is_fundamental<S> : std::true_type { };

static_assert(my_is_fundamental<S>::value, "fail");
```

### <a name="changes-to-compiler-provided-comparison-operators"></a>Modifiche agli operatori di confronto forniti dal compilatore

Il compilatore MSVC implementa ora le seguenti modifiche agli operatori di confronto per [P1630R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2019/p1630r1.html) quando è abilitata l'opzione di [/std: c + + Latest](../build/reference/std-specify-language-standard-version.md) :

Il compilatore non riscrive più le espressioni usando `operator==` se coinvolgono un tipo restituito che non è **bool**. Il codice seguente genera ora l' *errore C2088:'! =': non valido per struct*:

```cpp
struct U {
    operator bool() const;
};

struct S {
    U operator==(const S&) const;
};

bool neq(const S& lhs, const S& rhs) {
    return lhs != rhs;
}
```

Per evitare l'errore, è necessario definire in modo esplicito l'operatore necessario:

```cpp
struct U {
    operator bool() const;
};

struct S {
    U operator==(const S&) const;
    U operator!=(const S&) const;
};

bool neq(const S& lhs, const S& rhs) {
    return lhs != rhs;
}
```

Il compilatore non definisce più un operatore di confronto predefinito se è un membro di una classe di tipo Unione. L'esempio seguente produce ora *C2120:' void ' non valido con tutti i tipi*:

```cpp
#include <compare>

union S {
    int a;
    char b;
    auto operator<=>(const S&) const = default;
};

bool lt(const S& lhs, const S& rhs) {
    return lhs < rhs;
}
```

Per evitare l'errore, definire un corpo per l'operatore:

```cpp
#include <compare>

union S {
    int a;
    char b;
    auto operator<=>(const S&) const { ... }
};

bool lt(const S& lhs, const S& rhs) {
    return lhs < rhs;
}
```

Il compilatore non definirà più un operatore di confronto predefinito se la classe contiene un membro di riferimento. Il codice seguente genera ora l' *errore C2120:' void ' non valido con tutti i tipi*:

```cpp
#include <compare>

struct U {
    int& a;
    auto operator<=>(const U&) const = default;
};

bool lt(const U& lhs, const U& rhs) {
    return lhs < rhs;
}
```

Per evitare l'errore, definire un corpo per l'operatore:

```cpp
#include <compare>

struct U {
    int& a;
    auto operator<=>(const U&) const { ... };
};

bool lt(const U& lhs, const U& rhs) {
    return lhs < rhs;
}
```

## <a name="improvements_165"></a>Miglioramenti della conformità in Visual Studio 2019 versione 16,5

### <a name="explicit-specialization-declaration-without-an-initializer-is-not-a-definition"></a>La dichiarazione di specializzazione esplicita senza un inizializzatore non è una definizione

In `/permissive-`, MSVC ora impone una regola standard che le dichiarazioni di specializzazione esplicite senza inizializzatori non sono definizioni. In precedenza, la dichiarazione verrebbe considerata una definizione con un inizializzatore predefinito. L'effetto è osservabile in fase di collegamento, perché un programma a seconda di questo comportamento potrebbe ora avere simboli non risolti. Questo esempio genera ora un errore:

```cpp
template <typename> struct S {
    static int a;
};

// In permissive-, this declaration is not a definition and the program will not link.
template <> int S<char>::a;

int main() {
    return S<char>::a;
}
```

```Output
error LNK2019: unresolved external symbol "public: static int S<char>::a" (?a@?$S@D@@2HA) referenced in function _main
at link time.
```

Per risolvere il problema, aggiungere un inizializzatore:

```cpp
template <typename> struct S {
    static int a;
};

// Add an initializer for the declaration to be a definition.
template <> int S<char>::a{};

int main() {
    return S<char>::a;
}
```

### <a name="preprocessor-output-preserves-newlines"></a>L'output del preprocessore conserva le nuove righe

Il preprocessore sperimentale conserva ora le nuove righe e gli spazi vuoti quando si usa `/P` o `/E` con `/experimental:preprocessor`. Questa modifica può essere disabilitata utilizzando `/d1experimental:preprocessor:oldWhitespace`.

Dato questo esempio di origine,

```cpp
#define m()
line m(
) line
```

L'output precedente di `/E` era:

```Output
line line
#line 2
```

Il nuovo output del `/E` è ora:

```Output
line
 line
```

### <a name="import-and-module-keywords-are-context-dependent"></a>le parole chiave ' Import ' è Module ' sono dipendenti dal contesto

Per P1857R1, le direttive per il preprocessore di importazione e modulo presentano limitazioni aggiuntive sulla sintassi. Questo esempio non viene più compilato:

```cpp
import // Invalid
m;
```

Genera il messaggio di errore seguente:

```Output
error C2146: syntax error: missing ';' before identifier 'm'
```

Per risolvere il problema, Mantieni l'importazione nella stessa riga:

```cpp
import m; // OK
```

### <a name="removal-of-stdweak_equality-and-stdstrong_equality"></a>Rimozione di STD:: weak_equality e std:: strong_equality

Per l'Unione di P1959R0 è necessario che il compilatore elimini il comportamento e i riferimenti ai tipi `std::weak_equality` e `std::strong_equality`.

Il codice in questo esempio non viene più compilato:

```cpp
#include <compare>

struct S {
    std::strong_equality operator<=>(const S&) const = default;
};

void f() {
    nullptr<=>nullptr;
    &f <=> &f;
    &S::operator<=> <=> &S::operator<=>;
}
```

L'esempio causa ora gli errori seguenti:

```Output
error C2039: 'strong_equality': is not a member of 'std'
error C2143: syntax error: missing ';' before '<=>'
error C4430: missing type specifier - int assumed. Note: C++ does not support default-int
error C4430: missing type specifier - int assumed. Note: C++ does not support default-int
error C7546: binary operator '<=>': unsupported operand types 'nullptr' and 'nullptr'
error C7546: binary operator '<=>': unsupported operand types 'void (__cdecl *)(void)' and 'void (__cdecl *)(void)'
error C7546: binary operator '<=>': unsupported operand types 'int (__thiscall S::* )(const S &) const' and 'int (__thiscall S::* )(const S &) const'
```

Per risolvere il problema, aggiornare per preferire gli operatori relazionali incorporati e sostituire i tipi rimossi:

```cpp
#include <compare>

struct S {
    std::strong_ordering operator<=>(const S&) const = default; // prefer 'std::strong_ordering'
};

void f() {
    nullptr != nullptr; // use pre-existing builtin operator != or ==.
    &f != &f;
    &S::operator<=> != &S::operator<=>;
}
```

### <a name="tls-guard-changes"></a>Modifiche di TLS Guard

In precedenza, le variabili locali di thread nelle dll non venivano inizializzate correttamente prima del primo utilizzo nei thread esistenti prima del caricamento della DLL, oltre al thread che ha caricato la DLL. Questo difetto è stato ora corretto.
Le variabili locali di thread in una DLL di questo tipo vengono inizializzate immediatamente prima del primo utilizzo su tali thread.

Questo nuovo comportamento di test per l'inizializzazione su utilizzi di variabili locali di thread può essere disabilitato usando l'opzione del compilatore `/Zc:tlsGuards-`. In alternativa, aggiungendo l'attributo `[[msvc:no_tls_guard]]` a specifiche variabili locali del thread.

### <a name="better-diagnosis-of-call-to-deleted-functions"></a>Diagnosi migliore della chiamata alle funzioni eliminate

Il nostro compilatore era più permissivo per le chiamate alle funzioni eliminate in precedenza. Ad esempio, se le chiamate si sono verificate nel contesto di un corpo del modello, la chiamata non viene diagnosticata. Inoltre, se sono presenti più istanze di chiamate alle funzioni eliminate, viene rilasciata una sola diagnostica. A questo punto viene eseguita una diagnostica per ognuno di essi.

Una conseguenza del nuovo comportamento può produrre una piccola modifica di rilievo: il codice che ha chiamato una funzione eliminata non viene diagnosticato se non è mai necessario per la generazione del codice. A questo punto è possibile diagnosticarlo prima.

Questo esempio mostra il codice che ora genera un errore:

```cpp
struct S {
  S() = delete;
  S(int) { }
};

struct U {
  U() = delete;
  U(int i): s{ i } { }

  S s{};
};

U u{ 0 };
```

```Output
error C2280: 'S::S(void)': attempting to reference a deleted function
note: see declaration of 'S::S'
note: 'S::S(void)': function was explicitly deleted
```

Per risolvere il problema, rimuovere le chiamate alle funzioni eliminate:

```cpp
struct S {
  S() = delete;
  S(int) { }
};

struct U {
  U() = delete;
  U(int i): s{ i } { }

  S s;  // Do not call the deleted ctor of 'S'.
};

U u{ 0 };
```

## <a name="update_160"></a>Correzioni di bug e modifiche del comportamento in Visual Studio 2019

### <a name="reinterpret_cast-in-a-constexpr-function"></a>Reinterpret_cast in una funzione constExpr

Una **reinterpret_cast** non è valida in una funzione **constExpr** . Il compilatore C++ Microsoft rifiuterà in precedenza **reinterpret_cast** solo se fosse usato in un contesto **constExpr** . In Visual Studio 2019, in tutte le modalità standard del linguaggio, il compilatore diagnostica correttamente un **reinterpret_cast** nella definizione di una funzione **constExpr** . Il codice seguente genera ora la *funzione C3615: constExpr ' f ' non può produrre un'espressione costante*.

```cpp
long long i = 0;
constexpr void f() {
    int* a = reinterpret_cast<int*>(i);
}
```

Per evitare l'errore, rimuovere il modificatore **constExpr** dalla dichiarazione di funzione.

### <a name="correct-diagnostics-for-basic_string-range-constructor"></a>Diagnostica corretta per il costruttore di intervalli basic_string

In Visual Studio 2019 il costruttore di intervalli `basic_string` non elimina più la diagnostica del compilatore con `static_cast`. Il codice seguente viene compilato senza avvisi in Visual Studio 2017, nonostante la possibile perdita di dati da `wchar_t` a **char** durante l'inizializzazione `out`:

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

A causa di un bug introdotto in Visual Studio 2017, il compilatore ignorava gli errori senza generare avvisi e non generava codice per le chiamate non valide a += e -= sotto `/clr` o `/ZW`. Il codice seguente viene compilato senza errori in Visual Studio 2017 ma in Visual Studio 2019 viene generato correttamente l' *errore C2845:' System:: String ^': aritmetica dei puntatori non consentita per questo tipo*:

```cpp
public enum class E { e };

void f(System::String ^s)
{
    s += E::e; // C2845 in VS2019
}
```

Per evitare l'errore di questo esempio, usare l'operatore con il metodo ToString(): `s += E::e.ToString();`.

### <a name="initializers-for-inline-static-data-members"></a>Inizializzatori per i membri dati statici inline

Gli accessi ai membri non validi negli inizializzatori constExpr **inline** e **statici** sono ora rilevati correttamente. Il codice seguente viene compilato senza errori in Visual Studio 2017 ma in Visual Studio 2019 nella modalità `/std:c++17` produce l'errore *C2248: impossibile accedere al membro privato dichiarato nella classe 'X'* .

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

MSVC utilizzato per ottenere un avviso di prestazioni C4800 sulla conversione implicita in **bool**. L'avviso causava disturbo eccessivo e non era sopprimibile. Ne è stata quindi decisa la rimozione in Visual Studio 2017. Tuttavia, durante il ciclo di vita di Visual Studio 2017, Microsoft ha ricevuto numerosi commenti e suggerimenti relativi ai casi che tale avviso ha contribuito a risolvere. In Visual Studio 2019 torna a essere disponibile un avviso C4800 mirato, con un avviso C4165 associato. Entrambi sono facilmente sopprimibili con un cast esplicito o tramite il confronto con 0 del tipo appropriato. C4800 è un avviso di livello 4 disattivato per impostazione predefinita e C4165 è un avviso di livello 3 disattivato per impostazione predefinita. Entrambi sono rilevabili tramite l'opzione del compilatore `/Wall`.

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

In Visual Studio 2017, *C4822: la funzione membro della classe locale non ha un corpo* generato solo quando l'opzione del compilatore `/w14822` è impostata in modo esplicito; non viene visualizzato con `/Wall`. In Visual Studio 2019 C4822 è un avviso disattivato per impostazione predefinita, il che lo rende rilevabile in `/Wall` senza dover impostare `/w14822` in modo esplicito.

```cpp
void example()
{
    struct A
        {
            int boo(); // warning C4822
        };
}
```

### <a name="function-template-bodies-containing-constexpr-if-statements"></a>Corpi di funzioni modello contenenti istruzioni constexpr if

I corpi della funzione modello che contengono se le istruzioni **constExpr** dispongono di alcuni controlli correlati all'analisi [/permissive-](../build/reference/permissive-standards-conformance.md) abilitati. Ad esempio, in Visual Studio 2017 il codice seguente produce *C7510:' type ': l'uso del nome di tipo dipendente deve essere preceduto da' typename '* solo se l'opzione **/permissive-** non è impostata. In Visual Studio 2019 lo stesso codice genera errori anche quando è impostata l'opzione **/permissive-** :

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

Per evitare l'errore, aggiungere la parola chiave**typeName** alla dichiarazione di `a`: `typename T::Type a;`.

### <a name="inline-assembly-code-isnt-supported-in-a-lambda-expression"></a>Il codice assembly inline non è supportato in un'espressione lambda

Il team C++ Microsoft è stato recentemente informato di un problema di sicurezza in cui l'uso di un assembler inline all'interno di un'espressione lambda può causare il danneggiamento di `ebp` (il registro degli indirizzi restituiti) in fase di esecuzione. Un utente malintenzionato potrebbe trarre vantaggio da questo scenario. Data la natura del problema, il fatto che l'assembler inline è supportato solo su x86 e la scarsa interazione tra l'assembler inline e il resto del compilatore, si è deciso di non consentire l'assembler inline all'interno di un'espressione lambda.

L'unico caso d'uso dell'assembler inline all'interno di un'espressione lambda rilevato è stato un uso per l'acquisizione dell'indirizzo di restituzione. In questo scenario è possibile acquisire l'indirizzo del mittente in tutte le piattaforme, usando un elemento `_ReturnAddress()` intrinseco del compilatore.

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

### <a name="iterator-debugging-and-stdmove_iterator"></a>Debug degli iteratori e `std::move_iterator`

La funzionalità di debug dell'iteratore è stata configurata per annullare correttamente il wrapping di `std::move_iterator`. Ad esempio `std::copy(std::move_iterator<std::vector<int>::iterator>, std::move_iterator<std::vector<int>::iterator>, int*)` ora può supportare il percorso rapido `memcpy`.

### <a name="fixes-for-xkeycheckh-keyword-enforcement"></a>Correzioni per l'imposizione della parola chiave \<xkeycheck.h>

La macro della libreria standard che sostituisce un'applicazione di parole chiave \<xkeycheck. h > è stata corretta per emettere la parola chiave del problema effettivo rilevata anziché un messaggio generico. Supporta anche le parole chiave C++20 e non induce IntelliSense a interpretare parole chiave casuali come macro.

### <a name="allocator-types-no-longer-deprecated"></a>Tipi di allocatore non più deprecati

`std::allocator<void>`, `std::allocator::size_type` e `std::allocator::difference_type` non sono più deprecati.

### <a name="correct-warning-for-narrowing-string-conversions"></a>È stato corretto un avviso per la conversione di stringhe a tipi di dati più piccoli

Un elemento `static_cast` spurio non chiamato dallo standard che sopprimeva accidentalmente gli avvisi C4244 di conversione a tipi di dati più piccoli è stato rimosso da `std::string`. Il tentativo di chiamare `std::string::string(const wchar_t*, const wchar_t*)` ora genera correttamente *C4244 "narrowing di wchar_t a char."*

### <a name="various-filesystem-correctness-fixes"></a>Vari miglioramenti di correzione di \<filesystem>

- Correzione `std::filesystem::last_write_time` errore durante il tentativo di modificare l'ora dell'ultima scrittura di una directory.
- Il costruttore `std::filesystem::directory_entry` ora archivia un risultato "non riuscito", anziché generare un'eccezione, quando viene specificato un percorso di destinazione inesistente.
- La versione di `std::filesystem::create_directory` a 2 parametri è stata modificata in modo da chiamare la versione a 1 parametro, poiché la funzione `CreateDirectoryExW` sottostante utilizzava `copy_symlink` quando `existing_p` era un collegamento simbolico.
- `std::filesystem::directory_iterator` non restituisce più un errore quando rileva un collegamento simbolico interrotto.
- `std::filesystem::space` ora accetta i percorsi relativi.
- `std::filesystem::path::lexically_relative` non viene più confuso dalle barre finali, segnalate come [LWG 3096](https://cplusplus.github.io/LWG/issue3096).
- Il rifiuto dei percorsi da parte di `CreateSymbolicLinkW` è stato risolto con barre in `std::filesystem::create_symlink`.
- Risolto il problema per cui la funzione `delete` della modalità di eliminazione POSIX disponibile in Windows 10 LTSB 1609 non era di fatto in grado di eliminare file.
- I costruttori di copia e gli operatori di assegnazione di copia `std::boyer_moore_searcher` e `std::boyer_moore_horspool_searcher` ora eseguono correttamente la copia di elementi.

### <a name="parallel-algorithms-on-windows-8-and-later"></a>Algoritmi paralleli in Windows 8 e versioni successive

La libreria di algoritmi paralleli ora usa correttamente la famiglia `WaitOnAddress` reale in Windows 8 e versioni successive, invece di usare sempre la versione Windows 7 e le versioni non autentiche precedenti.

### <a name="stdsystem_categorymessage-whitespace"></a>Spazio vuoto in `std::system_category::message()`

`std::system_category::message()` ora rimuove correttamente gli spazi finali dal messaggio restituito.

### <a name="stdlinear_congruential_engine-divide-by-zero"></a>Divisione per zero in `std::linear_congruential_engine`

Alcune condizioni che causano l'attivazione di una divisione per 0 in `std::linear_congruential_engine` sono state corrette.

### <a name="fixes-for-iterator-unwrapping"></a>Correzioni per la rimozione del wrapping dell'iteratore

Il meccanismo di rimozione del wrapping dell'iteratore presentata per la prima volta per l'integrazione programmatore-utente in Visual Studio 2017 15.8 (come descritto nell'articolo del blog del team di C++ sulle [funzionalità e le correzioni di STL in VS 2017 15.8](https://devblogs.microsoft.com/cppblog/stl-features-and-fixes-in-vs-2017-15-8/)) non rimuove più il wrapping di iteratori derivati da iteratori della libreria standard. Ad esempio un utente che deriva da `std::vector<int>::iterator` e prova a personalizzare il comportamento ora ottiene il comportamento personalizzato quando chiama algoritmi della libreria standard, anziché il comportamento di un puntatore.

La funzione `reserve` del contenitore non ordinato ora esegue correttamente la riserva per N elementi, come descritto in [LWG 2156](https://cplusplus.github.io/LWG/issue2156).

### <a name="time-handling"></a>Gestione del tempo

- In precedenza alcuni valori di ora passati alla libreria di concorrenza registravano overflow, ad esempio `condition_variable::wait_for(seconds::max())`. Il comportamento di questi overflow, ora corretti, cambiava in base a un ciclo apparentemente casuale di 29 giorni (quando si verificava l'overflow di uint32_t millisecondi accettato dalle API Win32 sottostanti).

- L'intestazione > CTime \<ora dichiara correttamente `timespec` e `timespec_get` nello spazio dei nomi `std`, oltre a dichiararle nello spazio dei nomi globale.

### <a name="various-fixes-for-containers"></a>Varie correzioni per i contenitori

- Molte funzioni del contenitore interne della libreria standard sono state rese private per una migliore esperienza di IntelliSense. Altre correzioni per contrassegnare i membri come privati sono previste nelle versioni future di MSVC.

- Sono stati risolti problemi di correttezza per la sicurezza delle eccezioni per cui i contenitori basati su nodi come `list`, `map` e `unordered_map` si danneggiano. Durante un'operazione di riassegnazione `propagate_on_container_copy_assignment` o `propagate_on_container_move_assignment`, il nodo sentinella del contenitore viene liberato con l'allocatore precedente, viene eseguita l'assegnazione POCCA/POCMA sull'allocatore precedente e quindi si tenta di acquisire il nodo Sentinel dal nuovo allocatore. Se l'allocazione ha esito negativo, il contenitore è danneggiato e non può essere eliminato, perché il proprietario di un nodo sentinella è una struttura di dati complessa invariante. Questo codice è stato corretto per allocare il nuovo nodo Sentinel dall'allocatore del contenitore di origine prima di eliminare definitivamente il nodo Sentinel esistente.

- I contenitori sono stati risolti in modo da copiare/spostare/scambiare gli allocatori sempre in base a `propagate_on_container_copy_assignment`, `propagate_on_container_move_assignment`, e `propagate_on_container_swap`, anche per gli allocatori dichiarati `is_always_equal`.

- Sono stati aggiunti overload per le funzioni di unione contenitori ed estrazione membri che accettano contenitori rvalue per [P0083 "Splicing di mappe e set"](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0083r3.pdf)

### <a name="stdbasic_istreamread-processing-of-rn--n"></a>Elaborazione di `std::basic_istream::read`r\\n => \\n in \\

`std::basic_istream::read` è stato corretto in modo da non scrivere temporaneamente in parti del buffer specificato, nel quadro dell'elaborazione di \\r\\n => \\n. In questo modo si rinuncia a una parte del vantaggio acquisito in termini di prestazioni in Visual Studio 2017 15.8 per le letture di dimensioni superiori a 4 KB, ma si registrano miglioramenti dell'efficienza evitando tre chiamate virtuali per ogni carattere.

### <a name="stdbitset-constructor"></a>Costruttore `std::bitset`

Il costruttore `std::bitset` non legge più le cifre uno e zero in ordine inverso per i set di bit di grandi dimensioni.

### <a name="stdpairoperator-regression"></a>Regressione in `std::pair::operator=`

È stata corretta una regressione nell'operatore di assegnazione di `std::pair` introdotto con l'implementazione di [LWG 2729 "SFINAE mancante in std::pair::operator=";](https://cplusplus.github.io/LWG/issue2729). Ora accetta di nuovo correttamente i tipi convertibili in `std::pair`.

### <a name="non-deduced-contexts-for-add_const_t"></a>Contesti non dedotti per `add_const_t`

È stato risolto un bug per caratteristiche del tipo minori, dove `add_const_t` e le funzioni correlate devono essere un contesto non dedotto. In altre parole, `add_const_t` deve essere un alias per `typename add_const<T>::type` e non per `const T`.

## <a name="update_162"></a>Correzioni di bug e modifiche del comportamento in 16,2

### <a name="const-comparators-for-associative-containers"></a>Comparatori const per i contenitori associativi

Il codice per la ricerca e l'inserimento in [set](../standard-library/set-class.md), [Map](../standard-library/map-class.md), [multiset](../standard-library/multiset-class.md)e [multimap](../standard-library/multimap-class.md) è stato Unito per ridurre le dimensioni del codice. Le operazioni di inserimento ora chiamano il confronto minore di su un functor di confronto **const** , nello stesso modo in cui le operazioni di ricerca hanno eseguito in precedenza. Il codice seguente viene compilato in Visual Studio 2019 versione 16,1 e versioni precedenti, ma genera C3848 in Visual Studio 2019 versione 16,2:

```cpp
#include <iostream>
#include <map>

using namespace std;

struct K
{
   int a;
   string b = "label";
};

struct Comparer  {
   bool operator() (K a, K b) {
      return a.a < b.a;
   }
};

map<K, double, Comparer> m;

K const s1{1};
K const s2{2};
K const s3{3};

int main() {

   m.emplace(s1, 1.08);
   m.emplace(s2, 3.14);
   m.emplace(s3, 5.21);

}
```

Per evitare l'errore, rendere **const**l'operatore di confronto:

```cpp
struct Comparer  {
   bool operator() (K a, K b) const {
      return a.a < b.a;
   }
};

```

::: moniker-end

::: moniker range="vs-2017"

## <a name="improvements_150"></a>Miglioramenti della conformità in Visual Studio 2017 RTW (versione 15,0)

Con il supporto per **constExpr** generalizzati e l'inizializzazione dei membri dati non statici (NSDMI) per le aggregazioni, il compilatore Microsoft C++ in Visual Studio 2017 è ora completo per le funzionalità aggiunte nello standard c++ 14. Nel compilatore, tuttavia, mancano ancora alcune funzionalità relative agli standard C++11 e C++98. Vedere [la C++ tabella conformità del linguaggio Microsoft](../visual-cpp-language-conformance.md) per una tabella che mostra lo stato corrente del compilatore.

### <a name="c11-expression-sfinae-support-in-more-libraries"></a>C++ 11: supporto dell'espressione SFINAE in altre librerie

Il compilatore continua a migliorare il supporto per l'espressione SFINAE, che è necessario per la deduzione dell'argomento del modello e la sostituzione in cui le espressioni **decltype** e **constExpr** possono apparire come parametri di modello. Per altre informazioni, vedere il blog relativo ai [miglioramenti dell'espressione SFINAE in Visual Studio 2017 RC](https://blogs.msdn.microsoft.com/vcblog/2016/06/07/expression-sfinae-improvements-in-vs-2015-update-3).

### <a name="c14-nsdmi-for-aggregates"></a>C++ 14: NSDMI per le aggregazioni

Un'aggregazione è una matrice o una classe che non ha costruttori specificati dall'utente, membri dati non statici privati o protetti, classi di base e funzioni virtuali. A partire da C++14 gli aggregati possono contenere inizializzatori di membro. Per altre informazioni, vedere l'argomento relativo a [inizializzatori di membro e aggregati](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3605.html).

### <a name="c14-extended-constexpr"></a>C++ 14: **constExpr** esteso

Le espressioni dichiarate come **constExpr** possono ora contenere determinati tipi di dichiarazioni, istruzioni If e switch, istruzioni Loop e mutazioni di oggetti la cui durata è iniziata all'interno della valutazione dell'espressione constExpr. Inoltre, non è più necessario che una funzione membro non statica **constExpr** debba essere implicitamente **const**. Per altre informazioni, vedere l'argomento relativo alla [riduzione dei vincoli per le funzioni constexpr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3652.html).

### <a name="c17-terse-static_assert"></a>C++ 17: `static_assert` conciso

Il parametro di messaggio per `static_assert` è facoltativo. Per altre informazioni, vedere il documento relativo all'[estensione di static_assert, v2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3928.pdf).

### <a name="c17-fallthrough-attribute"></a>C++17: Attributo `[[fallthrough]]`

In modalità **/std:c++17** l'attributo `[[fallthrough]]` può essere usato nel contesto di istruzioni switch per suggerire al compilatore che il comportamento del fallthrough è previsto. L'attributo impedisce al compilatore di emettere avvisi in tali casi. Per altre informazioni, vedere il documento sulla [definizione dell'attributo \[\[fallthrough\]\]](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0188r0.pdf).

### <a name="generalized-range-based-for-loops"></a>Cicli for basati su intervallo generalizzati

I cicli range-based for non richiedono più che `begin()` ed `end()` restituiscano oggetti dello stesso tipo. Ciò consente a `end()` di restituire un sentinel usato dagli intervalli in [range-v3](https://github.com/ericniebler/range-v3) e dalla specifica tecnica sugli intervalli, completa, ma non abbastanza pubblicata. Per altre informazioni, vedere [Generalizing the Range-Based For Loop](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0184r0.html) (Generalizzazione del ciclo for basato su intervallo).

## <a name="improvements_153"></a>Miglioramenti della conformità in 15,3

### <a name="constexpr-lambdas"></a>Espressioni lambda di constexpr

È ora possibile usare espressioni lambda nelle espressioni costanti. Per altre informazioni, vedere [constexpr lambda expressions in C++](../cpp/lambda-expressions-constexpr.md) (Espressione lambda constexpr in C++).

### <a name="if-constexpr-in-function-templates"></a>**se constExpr** nei modelli di funzione

Un modello di funzione può contenere istruzioni **if constExpr** per abilitare la diramazione in fase di compilazione. Per altre informazioni, vedere [if constexpr statements](../cpp/if-else-statement-cpp.md#if_constexpr) (Istruzioni if constexpr).

### <a name="selection-statements-with-initializers"></a>Istruzioni di selezione con inizializzatori

Un'istruzione **if** può includere un inizializzatore che introduce una variabile nell'ambito del blocco all'interno dell'istruzione stessa. Per altre informazioni, vedere [if statements with initializer](../cpp/if-else-statement-cpp.md#if_with_init) (Istruzioni if con inizializzatore).

### <a name="maybe_unused-and-nodiscard-attributes"></a>Attributi `[[maybe_unused]]` e `[[nodiscard]]`

Il nuovo attributo `[[maybe_unused]]` disattiva gli avvisi quando non viene usata un'entità. L'attributo `[[nodiscard]]` crea un avviso se il valore restituito di una chiamata a una funzione viene rimosso. Per altre informazioni, vedere [Attributes in C++](../cpp/attributes.md) (Attributi in C++).

### <a name="using-attribute-namespaces-without-repetition"></a>Uso degli spazi dei nomi degli attributi senza ripetizione

Nuova sintassi per consentire un solo identificatore dello spazio dei nomi in un elenco di attributi. Per altre informazioni, vedere [Attributes in C++](../cpp/attributes.md) (Attributi in C++).

### <a name="structured-bindings"></a>Binding strutturati

In una singola dichiarazione è ora possibile archiviare un valore con i nomi singoli dei relativi componenti, quando il valore è una matrice, `std::tuple` o `std::pair`, oppure tutti i membri dati sono non statici e pubblici. Per altre informazioni, vedere [Structured Bindings](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0144r0.pdf) (Binding strutturati) e [Returning multiple values from a function](../cpp/functions-cpp.md#multi_val) (Restituzione di più valori da una funzione).

### <a name="construction-rules-for-enum-class-values"></a>Regole di costruzione per i valori della **classe enum**

È ora disponibile una conversione implicita (non verso un tipo di dati più piccolo) dal tipo sottostante di un'enumerazione con ambito all'enumerazione stessa, quando la definizione dell'enumerazione non introduce alcun enumeratore e l'origine usa la sintassi di inizializzazione elenco. Per altre informazioni, vedere [Construction Rules for enum class Values](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0138r2.pdf) (Regole di costruzione per i valori di classi di enumerazione) ed [Enumerazioni](../cpp/enumerations-cpp.md#no_enumerators).

### <a name="capturing-this-by-value"></a>Acquisizione di `*this` per valore

L'oggetto `*this` in un'espressione lambda può ora essere acquisito per valore. Questa modifica rende possibili scenari in cui l'espressione lambda viene richiamata in operazioni parallele e asincrone, in particolare nelle architetture di computer più recenti. Per altre informazioni, vedere [Lambda Capture of \*this by Value as \[=,\*this\]](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0018r3.html) (Acquisizione di *this per valore come [=,*this] nelle espressioni lambda).

### <a name="removing-operator-for-bool"></a>Rimozione `operator++` per **bool**

`operator++` non è più supportato sui tipi **bool** . Per altre informazioni, vedere [Remove Deprecated operator++(bool)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0002r1.html) (Rimozione di operator++(bool) deprecato).

### <a name="removing-deprecated-register-keyword"></a>Rimozione della parola chiave **Register** deprecata

La parola chiave **Register** , precedentemente deprecata (e ignorata dal compilatore), viene ora rimossa dal linguaggio. Per altre informazioni, vedere [Remove Deprecated Use of the register Keyword](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0001r1.html) (Rimozione della parola chiave register per uso deprecato).

## <a name="improvements_155"></a>Miglioramenti della conformità in 15,5

Le funzionalità contrassegnate con \[14] sono disponibili senza condizioni anche nella modalità **/std:c++14**.

### <a name="new-compiler-switch-for-extern-constexpr"></a>Nuova opzione del compilatore per **constExpr extern**

Nelle versioni precedenti di Visual Studio, il compilatore dava sempre un collegamento interno della variabile **constExpr** anche quando la variabile è contrassegnata come **extern**. In Visual Studio 2017 versione 15.5 una nuova opzione del compilatore, [/Zc:externConstexpr](../build/reference/zc-externconstexpr.md), abilita il comportamento corretto conforme agli standard. Per altre informazioni, vedere [Collegamento extern constexpr](#extern_linkage).

### <a name="removing-dynamic-exception-specifications"></a>Rimozione delle specifiche di eccezione dinamiche

[P0003R5](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0003r5.html) Le specifiche di eccezione dinamiche sono deprecate in C++11. La funzionalità è stata rimossa da C++17, ma la specifica (ancora) deprecata `throw()` viene conservata esclusivamente come alias per `noexcept(true)`. Per altre informazioni, vedere [Dynamic exception specification removal and noexcept](#noexcept_removal) (Rimozione della specifica di eccezione dinamica e noexcept).

### `not_fn()`

[P0005R4](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0005r4.html) `not_fn` è una sostituzione di `not1` e `not2`.

### <a name="rewording-enable_shared_from_this"></a>Riformulazione di `enable_shared_from_this`

[P0033R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0033r1.html) `enable_shared_from_this` è stato aggiunto in c++ 11. Lo standard C++17 aggiorna la specifica per gestire meglio determinati casi limite. [14]

### <a name="splicing-maps-and-sets"></a>Splicing di mappe e set

[P0083R3](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0083r3.pdf) Questa funzionalità consente l'estrazione dei nodi dai contenitori associativi (ad esempio, `map`, `set`, `unordered_map`, `unordered_set`) che possono quindi essere modificati e nuovamente inseriti nello stesso contenitore o in un contenitore diverso che usa lo stesso tipo di nodo. Un caso d'uso comune è l'estrazione di un nodo da `std::map`, la modifica della chiave e il reinserimento.

### <a name="deprecating-vestigial-library-parts"></a>Deprecazione di parti superflue della libreria

[P0174R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0174r2.html) Diverse funzionalità della libreria standard C++ sono state sostituite da funzionalità più recenti nel corso degli anni oppure si sono rivelate poco utili o problematiche. Queste funzionalità sono ufficialmente deprecate in C++ 17.

### <a name="removing-allocator-support-in-stdfunction"></a>Rimozione del supporto dell'allocatore in `std::function`

[P0302R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0302r1.html) Prima di C++17 il modello di classe `std::function` aveva diversi costruttori che accettavano un argomento allocatore. L'uso di allocatori in questo contesto era tuttavia problematico e la semantica non era chiara. I costruttori problematici sono stati rimossi.

### <a name="fixes-for-not_fn"></a>Correzioni per `not_fn()`

[P0358R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0358r1.html) La nuova formulazione per `std::not_fn` offre il supporto della propagazione della categoria di valori quando è usata nella chiamata al wrapper.

### <a name="shared_ptrt-shared_ptrtn"></a>`shared_ptr<T[]>`, `shared_ptr<T[N]>`

[P0414R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0414r2.html) Unione delle modifiche di `shared_ptr` da Library Fundamentals a C++17. [14]

### <a name="fixing-shared_ptr-for-arrays"></a>Correzione di `shared_ptr` per le matrici

[P0497R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0497r0.html) Correzioni al supporto di shared_ptr per le matrici. [14]

### <a name="clarifying-insert_return_type"></a>Chiarimento per `insert_return_type`

[P0508R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0508r0.html) I contenitori associativi con chiavi univoche e i contenitori non ordinati con chiavi univoche hanno una funzione membro `insert` che restituisce un tipo annidato `insert_return_type`. Tale tipo restituito è ora definito come specializzazione di un tipo con parametri negli elementi Iterator e NodeType del contenitore.

### <a name="inline-variables-for-the-standard-library"></a>Variabili inline per la libreria standard

[P0607R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0607r0.html)

### <a name="annex-d-features-deprecated"></a>Funzionalità Annex D deprecate

Annex D dello standard C++ contiene tutte le funzionalità deprecate, incluse `shared_ptr::unique()`, `<codecvt>` e `namespace std::tr1`. Quando l'opzione del compilatore **/std:c++17** è impostata, quasi tutte le funzionalità della libreria standard in Annex D vengono contrassegnate come deprecate. Per altre informazioni, vedere [Le funzionalità della libreria standard in Annex D vengono contrassegnate come deprecate](#annex_d).

Lo spazio dei nomi `std::tr2::sys` in `<experimental/filesystem>` crea un avviso di deprecazione in **/std:c++14** per impostazione predefinita e ora viene rimosso in **/std:c++17** per impostazione predefinita.

La conformità negli elementi `<iostream>` è stata migliorata evitando un'estensione non standard (specializzazioni esplicite in-class).

La libreria standard ora usa modelli di variabile internamente.

La libreria standard è stata aggiornata in risposta alle modifiche del compilatore C++ 17, inclusa l'aggiunta di **noexcept** nel sistema dei tipi e la rimozione delle specifiche di eccezione dinamiche.

## <a name="improvements_156"></a>Miglioramenti della conformità in 15,6

### <a name="c17-library-fundamentals-v1"></a>C++17 Library Fundamentals V1

[P0220R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0220r1.html) incorpora la Library Fundamentals Technical Specification per C++17 nello standard. Include gli aggiornamenti a \<experimental/tuple>, \<experimental/optional>, \<experimental/functional>, \<experimental/any>, \<experimental/string_view>, \<experimental/memory>, \<experimental/memory_resource> e \<experimental/algorithm>.

### <a name="c17-improving-class-template-argument-deduction-for-the-standard-library"></a>C++ 17: miglioramento della deduzione dell'argomento del modello di classe per la libreria standard

[P0739R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0739r0.html) Spostare `adopt_lock_t` in primo piano nell'elenco dei parametri per `scoped_lock` per abilitare un utilizzo coerente di `scoped_lock`. Consentire al costruttore `std::variant` di partecipare alla risoluzione dell'overload in più casi per abilitare l'assegnazione delle copie.

## <a name="improvements_157"></a>Miglioramenti della conformità in 15,7

### <a name="c17-rewording-inheriting-constructors"></a>C++ 17: riformulazione di costruttori che ereditano

[P0136R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0136r1.html) specifica che una dichiarazione **using** che assegna un nome a un costruttore rende ora visibili i costruttori della classe di base corrispondente alle inizializzazioni della classe derivata anziché dichiarare costruttori aggiuntivi della classe derivata. Questa ridefinizione è una modifica rispetto a C++14. In Visual Studio 2017 versione 15.7 e successive in modalità **/std:c++17** il codice valido in C++14 che usa l'ereditarietà dei costruttori potrebbe non essere valido o avere una semantica diversa.

L'esempio seguente illustra il comportamento di C++14:

```cpp
struct A {
    template<typename T>
    A(T, typename T::type = 0);
    A(int);
};

struct B : A {
    using A::A;
    B(int n) = delete; // Error C2280
};

B b(42L); // Calls B<long>(long), which calls A(int)
          //  due to substitution failure in A<long>(long).
```

L'esempio seguente illustra il comportamento di **/std:c++17** in Visual Studio 15.7:

```cpp
struct A {
    template<typename T>
    A(T, typename T::type = 0);
    A(int);
};

struct B : A {
    using A::A;
    B(int n)
    {
        //do something
    }
};

B b(42L); // now calls B(int)
```

Per altre informazioni, vedere [Costruttori](../cpp/constructors-cpp.md#inheriting_constructors).

### <a name="c17-extended-aggregate-initialization"></a>C++ 17: inizializzazione aggregata estesa

[P0017R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0017r1.html)

Se il costruttore di una classe di base non è pubblico, ma è accessibile a una classe derivata, in modalità **/std: c++ 17** in Visual Studio 2017 versione 15,7 non è più possibile usare le parentesi graffe vuote per inizializzare un oggetto del tipo derivato.
L'esempio seguente illustra il comportamento conforme di C++14:

```cpp
struct Derived;
struct Base {
    friend struct Derived;
private:
    Base() {}
};

struct Derived : Base {};
Derived d1; // OK. No aggregate init involved.
Derived d2 {}; // OK in C++14: Calls Derived::Derived()
               // which can call Base ctor.
```

In C++17, `Derived` è ora considerato un tipo di aggregazione. Di conseguenza, l'inizializzazione di `Base` tramite il costruttore predefinito privato si verifica direttamente come parte della regola di inizializzazione delle aggregazioni estesa. In precedenza, il costruttore privato `Base` veniva chiamato tramite il costruttore `Derived` e aveva esito positivo a causa della dichiarazione Friend.
L'esempio seguente illustra il comportamento di C++17 in Visual Studio versione 15.7 in modalità **/std:c++17**:

```cpp
struct Derived;
struct Base {
    friend struct Derived;
private:
    Base() {}
};
struct Derived : Base {
    Derived() {} // add user-defined constructor
                 // to call with {} initialization
};
Derived d1; // OK. No aggregate init involved.
Derived d2 {}; // error C2248: 'Base::Base': cannot access
               // private member declared in class 'Base'
```

### <a name="c17-declaring-non-type-template-parameters-with-auto"></a>C++ 17: dichiarazione di parametri di modello non di tipo con auto

[P0127R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0127r2.html)

In modalità **/std:c++17** il compilatore può ora dedurre il tipo di un argomento di modello non di tipo dichiarato con **auto**:

```cpp
template <auto x> constexpr auto constant = x;

auto v1 = constant<5>;      // v1 == 5, decltype(v1) is int
auto v2 = constant<true>;   // v2 == true, decltype(v2) is bool
auto v3 = constant<'a'>;    // v3 == 'a', decltype(v3) is char
```

Con questa nuova funzionalità il codice C++14 valido potrebbe non essere valido o avere una semantica diversa. Ad esempio, alcuni overload precedentemente non validi sono ora validi. L'esempio seguente illustra il codice C++14 che esegue la compilazione perché la chiamata a `example(p)` è associata a `example(void*);`. In Visual Studio 2017 versione 15.7 in modalità **/std:c++17** il modello di funzione `example` è la corrispondenza migliore.

```cpp
template <int N> struct A;
template <typename T, T N> int example(A<N>*) = delete;

void example(void *);

void sample(A<0> *p)
{
    example(p); // OK in C++14
}
```

L'esempio seguente illustra il codice C++17 in Visual Studio 15.7 in modalità **/std:c++17**:

```cpp
template <int N> struct A;
template <typename T, T N> int example(A<N>*);

void example(void *);

void sample(A<0> *p)
{
    example(p); // C2280: 'int example<int,0>(A<0>*)': attempting to reference a deleted function
}
```

### <a name="c17-elementary-string-conversions-partial"></a>C++ 17: conversioni di stringhe elementari (parziali)

[P0067R5](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0067r5.html) Funzioni di basso livello indipendenti dalle impostazioni locali per le conversioni tra numeri interi e stringhe e tra numeri a virgola mobile e stringhe.

### <a name="c20-avoiding-unnecessary-decay-partial"></a>C++ 20: evitare decadimenti inutili (parziali)

[P0777R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0777r1.pdf) Aggiunge una differenziazione tra il concetto di "decadimento" e quello di semplice rimozione dei qualificatori const o reference.  In alcuni contesti il nuovo tratto di tipo `remove_reference_t` sostituisce `decay_t`. Il supporto per `remove_cvref_t` è implementato in Visual Studio 2019.

### <a name="c17-parallel-algorithms"></a>C++ 17: algoritmi paralleli

[P0024R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0024r2.html) Parallelism TS è incorporato nello standard, con modifiche minori.

### <a name="c17-hypotx-y-z"></a>C++17: `hypot(x, y, z)`

[P0030R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0030r1.pdf) Aggiunge tre nuovi overload a `std::hypot`, per i tipi **float**, **double** e **long double**, ognuno dei quali ha tre parametri di input.

### <a name="c17-filesystem"></a>C++17: \<filesystem>

[P0218R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0218r1.html) Adotta File System TS nello standard con alcune modifiche al testo.

### <a name="c17-mathematical-special-functions"></a>C++ 17: funzioni speciali matematiche

[P0226R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0220r1.html) Adotta le specifiche tecniche precedenti per le funzioni matematiche speciali nell'intestazione \<cmath> standard.

### <a name="c17-deduction-guides-for-the-standard-library"></a>C++ 17: Guide alla deduzione per la libreria standard

[P0433R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0433r2.html) Esegue l'aggiornamento a STL per sfruttare i vantaggi dell'adozione di C++17 di [P0091R3](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0091r3.html) che aggiunge il supporto della deduzione dell'argomento del modello della classe.

### <a name="c17-repairing-elementary-string-conversions"></a>C++ 17: ripristino delle conversioni di stringhe elementari

[P0682R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0682r1.html) Spostare le nuove funzioni di conversione delle stringhe elementari da P0067R5 in una nuova intestazione \<charconv> e apportare altri miglioramenti, inclusa la modifica della gestione degli errori per l'uso di `std::errc` invece di `std::error_code`.

### <a name="c17-constexpr-for-char_traits-partial"></a>C++ 17: **constExpr** per `char_traits` (parziale)

[P0426R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0426r1.html) Modifiche alle funzioni `std::traits_type`, `length` e `compare` del membro `find` per rendere utilizzabile `std::string_view` nelle espressioni costanti. (In Visual Studio 2017 versione 15.6, supportato solo per Clang/LLVM. Nella versione 15.7 Preview 2, il supporto è pressoché completo anche per ClXX).

## <a name="improvements_159"></a>Miglioramenti della conformità in 15,9

### <a name="left-to-right-evaluation-order-for-operators-----and-"></a>Ordine di valutazione da sinistra a destra per gli operatori `->*`, `[]`, `>>` e `<<`

A partire da C++17, gli operandi degli operatori `->*`, `[]`, `>>` e `<<` devono essere valutati da sinistra a destra. Esistono due casi in cui il compilatore non è in grado di garantire questo ordine:

- quando una delle espressioni dell'operando è un oggetto passato per valore o contiene un oggetto passato per valore, oppure

- quando la compilazione viene eseguita con **/clr** e uno degli operandi è un campo di un oggetto o un elemento di matrice.

Il compilatore genera l'avviso [C4866](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/c4866?view=vs-2017) quando non è possibile garantire la valutazione da sinistra a destra. Il compilatore genera questo avviso solo se si specifica **/std:c++17** o versione successiva, perché il requisito di ordine da sinistra a destra per questi operatori è stato introdotto in C++17.

Per risolvere questo problema, stabilire innanzitutto se la valutazione degli operandi da sinistra a destra è necessaria, ad esempio quando la valutazione degli operandi potrebbe produrre effetti collaterali dipendenti dall'ordine. In molti casi, l'ordine di valutazione degli operandi non ha alcun effetto osservabile. Se l'ordine di valutazione deve essere da sinistra a destra, stabilire se è invece possibile passare gli operandi per riferimento const. Questa modifica consente di eliminare l'avviso nell'esempio di codice seguente:

```cpp
// C4866.cpp
// compile with: /w14866 /std:c++17

class HasCopyConstructor
{
public:
    int x;

    HasCopyConstructor(int x) : x(x) {}
    HasCopyConstructor(const HasCopyConstructor& h) : x(h.x) { }
};

int operator>>(HasCopyConstructor a, HasCopyConstructor b) { return a.x >> b.x; }

// This version of operator>> does not trigger the warning:
// int operator>>(const HasCopyConstructor& a, const HasCopyConstructor& b) { return a.x >> b.x; }

int main()
{
    HasCopyConstructor a{ 1 };
    HasCopyConstructor b{ 2 };

    a>>b;        // C4866 for call to operator>>
};
```

## <a name="update_150"></a> Correzioni di bug in Visual Studio 2017 RTW (versione 15.0)

### <a name="copy-list-initialization"></a>Copy-list-initialization

Visual Studio 2017 genera correttamente errori del compilatore relativi alla creazione di oggetti con gli elenchi di inizializzatori che non venivano rilevati in Visual Studio 2015 e potevano causare un arresto anomalo o un comportamento non definito in fase di esecuzione. In base a N4594 13.3.1.7p1, in copy-list-initialization, il compilatore deve prendere in considerazione un costruttore esplicito per la risoluzione dell'overload, ma deve generare un errore se viene scelto tale overload.

I seguenti due esempi vengono compilati in Visual Studio 2015 ma non in Visual Studio 2017.

```cpp
struct A
{
    explicit A(int) {}
    A(double) {}
};

int main()
{
    A a1 = { 1 }; // error C3445: copy-list-initialization of 'A' cannot use an explicit constructor
    const A& a2 = { 1 }; // error C2440: 'initializing': cannot convert from 'int' to 'const A &'

}
```

Per correggere l'errore, usare l'inizializzazione diretta:

```cpp
A a1{ 1 };
const A& a2{ 1 };
```

In Visual Studio 2015 il compilatore tratta erroneamente copy-list-initialization come l'oggetto copy-initialization normale, considerando solo la conversione dei costruttori per la risoluzione dell'overload. Nell'esempio seguente Visual Studio 2015 sceglie MyInt(23) ma Visual Studio 2017 genera correttamente l'errore.

```cpp
// From http://www.open-std.org/jtc1/sc22/wg21/docs/cwg_closed.html#1228
struct MyStore {
    explicit MyStore(int initialCapacity);
};

struct MyInt {
    MyInt(int i);
};

struct Printer {
    void operator()(MyStore const& s);
    void operator()(MyInt const& i);
};

void f() {
    Printer p;
    p({ 23 }); // C3066: there are multiple ways that an object of this type can be called with these arguments
}
```

Questo esempio è simile a quello precedente, ma viene generato un errore diverso. L'esito è positivo in Visual Studio 2015 e negativo in Visual Studio 2017 con C2668.

```cpp
struct A {
    explicit A(int) {}
};

struct B {
    B(int) {}
};

void f(const A&) {}
void f(const B&) {}

int main()
{
    f({ 1 }); // error C2668: 'f': ambiguous call to overloaded function
}
```

### <a name="deprecated-typedefs"></a>Typedef deprecati

Visual Studio 2017 ora genera l'avviso corretto per i typedef deprecati dichiarati in una classe o uno struct. L'esempio seguente viene compilato senza avvisi in Visual Studio 2015, ma genera l'avviso C4996 in Visual Studio 2017.

```cpp
struct A
{
    // also for __declspec(deprecated)
    [[deprecated]] typedef int inttype;
};

int main()
{
    A::inttype a = 0; // C4996 'A::inttype': was declared deprecated
}
```

### <a name="constexpr"></a>**constexpr**

Visual Studio 2017 genera correttamente un errore quando l'operando sinistro di un'operazione con valutazione condizionale non è valido in un contesto constexpr. Il codice seguente viene compilato in Visual Studio 2015, ma non in Visual Studio 2017 (C3615 la funzione constexpr 'f' non può restituire un'espressione costante):

```cpp
template<int N>
struct array
{
    int size() const { return N; }
};

constexpr bool f(const array<1> &arr)
{
    return arr.size() == 10 || arr.size() == 11; // C3615
}
```

Per correggere l'errore, dichiarare la funzione `array::size()` come **constExpr** o rimuovere il qualificatore **constExpr** da `f`.

### <a name="class-types-passed-to-variadic-functions"></a>Tipi di classe passati alle funzioni variadic

In Visual Studio 2017 le classi o gli struct che vengono passati a una funzione variadic, ad esempio printf, devono essere facilmente copiabili. Quando si passano tali oggetti il compilatore si limita a creare una copia bit per bit e non chiama il costruttore o il distruttore.

```cpp
#include <atomic>
#include <memory>
#include <stdio.h>

int main()
{
    std::atomic<int> i(0);
    printf("%i\n", i); // error C4839: non-standard use of class 'std::atomic<int>'
                        // as an argument to a variadic function.
                        // note: the constructor and destructor will not be called;
                        // a bitwise copy of the class will be passed as the argument
                        // error C2280: 'std::atomic<int>::atomic(const std::atomic<int> &)':
                        // attempting to reference a deleted function

    struct S {
        S(int i) : i(i) {}
        S(const S& other) : i(other.i) {}
        operator int() { return i; }
    private:
        int i;
    } s(0);
    printf("%i\n", s); // warning C4840 : non-portable use of class 'main::S'
                      // as an argument to a variadic function
}
```

Per correggere l'errore, è possibile chiamare una funzione membro che restituisca un tipo facilmente copiabile

```cpp
    std::atomic<int> i(0);
    printf("%i\n", i.load());
```

o esegua un cast statico per convertire l'oggetto prima di passarlo:

```cpp
    struct S {/* as before */} s(0);
    printf("%i\n", static_cast<int>(s))
```

Per le stringhe compilate e gestite usando CString, per il cast di un oggetto CString al puntatore C previsto dalla stringa di formato deve essere usato l'`operator LPCTSTR()` specificato.

```cpp
CString str1;
CString str2 = _T("hello!");
str1.Format(_T("%s"), static_cast<LPCTSTR>(str2));
```

### <a name="cv-qualifiers-in-class-construction"></a>Qualificatori CV nella costruzione di classi

In Visual Studio 2015 il compilatore a volte ignora erroneamente il qualificatore CV quando genera un oggetto classe usando una chiamata al costruttore. Questo problema può causare un arresto anomalo o un comportamento imprevisto in fase di esecuzione. L'esempio seguente viene compilato in Visual Studio 2015, ma genera un errore del compilatore in Visual Studio 2017:

```cpp
struct S
{
    S(int);
    operator int();
};

int i = (const S)0; // error C2440
```

Per correggere l'errore, dichiarare `operator int()` come **const**.

### <a name="access-checking-on-qualified-names-in-templates"></a>Controllo dell'accesso per i nomi completi nei modelli

Le versioni precedenti del compilatore non eseguivano il controllo dell'accesso per i nomi completi in alcuni contesti di modello. Questo problema può interferire con il comportamento previsto per SFINAE in cui la sostituzione deve avere esito negativo a causa della non accessibilità di un nome. Questo potrebbe avere causato un arresto anomalo o un comportamento imprevisto in fase di esecuzione perché il compilatore ha chiamato per errore l'overload dell'operatore non corretto. In Visual Studio 2017 viene generato un errore del compilatore. L'errore specifico può variare, ma in genere è "C2672: non sono state trovate funzioni in overload corrispondenti". Il codice seguente viene compilato in Visual Studio 2015 ma genera un errore in Visual Studio 2017:

```cpp
#include <type_traits>

template <class T> class S {
    typedef typename T type;
};

template <class T, std::enable_if<std::is_integral<typename S<T>::type>::value, T> * = 0>
bool f(T x);

int main()
{
    f(10); // C2672: No matching overloaded function found.
}
```

### <a name="missing-template-argument-lists"></a>Elenchi di argomenti di modello mancanti

In Visual Studio 2015 e versioni precedenti il compilatore non diagnosticava gli elenchi di argomenti di modello mancanti quando il modello era visualizzato in un elenco di parametri di modello, ad esempio come parte di un argomento di modello predefinito o un parametro di modello non di tipo. Questo problema può causare un comportamento imprevedibile, compresi arresti anomali del compilatore o il comportamento imprevisto in fase di esecuzione. Il codice seguente viene compilato in Visual Studio 2015, ma genera un errore in Visual Studio 2017.

```cpp
template <class T> class ListNode;
template <class T> using ListNodeMember = ListNode<T> T::*;
template <class T, ListNodeMember M> class ListHead; // C2955: 'ListNodeMember': use of alias
                                                     // template requires template argument list

// correct:  template <class T, ListNodeMember<T> M> class ListHead;
```

### <a name="expression-sfinae"></a>Espressione SFINAE

Per supportare Expression-SFINAE, il compilatore ora analizza gli argomenti **decltype** quando i modelli vengono dichiarati anziché creare un'istanza. Di conseguenza, se viene rilevata una specializzazione non dipendente nell'argomento decltype, non viene rinviata all'ora di creazione di un'istanza. Viene elaborata immediatamente ed è possibile diagnosticare eventuali errori risultanti in quel momento.

Nell'esempio seguente viene illustrato questo tipo di errore del compilatore che viene generato al momento della dichiarazione:

```cpp
#include <utility>
template <class T, class ReturnT, class... ArgsT>
class IsCallable
{
public:
    struct BadType {};

    template <class U>
    static decltype(std::declval<T>()(std::declval<ArgsT>()...)) Test(int); //C2064. Should be declval<U>

    template <class U>
    static BadType Test(...);

    static constexpr bool value = std::is_convertible<decltype(Test<T>(0)), ReturnT>::value;
};

constexpr bool test1 = IsCallable<int(), int>::value;
static_assert(test1, "PASS1");
constexpr bool test2 = !IsCallable<int*, int>::value;
static_assert(test2, "PASS2");
```

### <a name="classes-declared-in-anonymous-namespaces"></a>Classi dichiarate in spazi dei nomi anonimi

In base allo standard C++, una classe dichiarata all'interno di uno spazio dei nomi anonimo include un collegamento interno e pertanto non può essere esportata. In Visual Studio 2015 e versioni precedenti questa regola non viene applicata. In Visual Studio 2017 la regola viene applicata parzialmente. L'esempio seguente genera questo errore in Visual Studio 2017: "errore C2201: const anonymous namespace::S1::vftable: per l'esportazione e l'importazione è necessario utilizzare il collegamento esterno."

```cpp
struct __declspec(dllexport) S1 { virtual void f() {} }; //C2201
```

### <a name="default-initializers-for-value-class-members-ccli"></a>Inizializzatori predefiniti per i membri della classe di valori (C++/CLI)

In Visual Studio 2015 e versioni precedenti il compilatore consentiva, ma ignorava, un inizializzatore di membro predefinito per un membro di una classe di valori. L'inizializzazione predefinita di una classe di valori inizializza sempre a zero i membri. Non è consentito un costruttore predefinito. In Visual Studio 2017 gli inizializzatori di membri predefiniti generano un errore del compilatore, come illustra l'esempio seguente:

```cpp
value struct V
{
    int i = 0; // error C3446: 'V::i': a default member initializer
               // isn't allowed for a member of a value class
};
```

### <a name="default-indexers-ccli"></a>Indicizzatori predefiniti (C++/CLI)

In Visual Studio 2015 e versioni precedenti il compilatore in alcuni casi identificava erroneamente una proprietà predefinita come indicizzatore predefinito. È stato possibile aggirare il problema usando l'identificatore **predefinito** per accedere alla proprietà. La soluzione alternativa è diventata problematica dopo che il **valore predefinito** è stato introdotto come parola chiave in c++ 11. In Visual Studio 2017 i bug che richiedevano la soluzione alternativa erano corretti e il compilatore genera ora un errore quando viene usato **default** per accedere alla proprietà predefinita per una classe.

```cpp
//class1.cs

using System.Reflection;
using System.Runtime.InteropServices;

namespace ClassLibrary1
{
    [DefaultMember("Value")]
    public class Class1
    {
        public int Value
        {
            // using attribute on the return type triggers the compiler bug
            [return: MarshalAs(UnmanagedType.I4)]
            get;
        }
    }
    [DefaultMember("Value")]
    public class Class2
    {
        public int Value
        {
            get;
        }
    }
}

// code.cpp
#using "class1.dll"

void f(ClassLibrary1::Class1 ^r1, ClassLibrary1::Class2 ^r2)
{
       r1->Value; // error
       r1->default;
       r2->Value;
       r2->default; // error
}
```

In Visual Studio 2017 è possibile accedere a entrambe le proprietà Value in base al nome:

```cpp
#using "class1.dll"

void f(ClassLibrary1::Class1 ^r1, ClassLibrary1::Class2 ^r2)
{
       r1->Value;
       r2->Value;
}
```

## <a name="update_153"></a>Correzioni di bug in 15,3

### <a name="calls-to-deleted-member-templates"></a>Chiamate a modelli di membro eliminati

Nelle versioni precedenti di Visual Studio, in alcuni casi il compilatore non riusciva a generare un errore in caso di chiamate non valide a un modello di membro eliminato che potevano causare arresti anomali in fase di runtime. Il codice seguente genera ora l'errore C2280, "'int S\<int>::f\<int>(void)': tentativo di fare riferimento a una funzione eliminata":

```cpp
template<typename T>
struct S {
   template<typename U> static int f() = delete;
};

void g()
{
   decltype(S<int>::f<int>()) i; // this should fail
}
```

Per correggere l'errore, dichiarare `i` come **int**.

### <a name="pre-condition-checks-for-type-traits"></a>Controlli sulle precondizioni per tratti di tipo

Visual Studio 2017 versione 15.3 migliora i controlli sulle precondizioni per i tratti di tipo in modo da attenersi più rigorosamente agli standard. Un controllo di questo tipo verifica ad esempio che il tratto di tipo sia assegnabile. In Visual Studio 2017 versione 15.3 il codice seguente genera l'errore C2139:

```cpp
struct S;
enum E;

static_assert(!__is_assignable(S, S), "fail"); // C2139 in 15.3
static_assert(__is_convertible_to(E, E), "fail"); // C2139 in 15.3
```

### <a name="new-compiler-warning-and-runtime-checks-on-native-to-managed-marshaling"></a>Nuovi controlli di avviso e di runtime del compilatore sul marshalling da nativo a gestito

Le chiamate da funzioni gestite a funzioni native richiedono il marshalling. CLR esegue il marshalling ma non comprende la semantica di C++. Se si passa un oggetto nativo per valore, CLR chiama il costruttore di copia dell'oggetto o usa `BitBlt`, da cui può derivare un comportamento non definito in fase di runtime.

Il compilatore genera ora un avviso se riesce a sapere in fase di runtime che tra il limite nativo e quello gestito viene passato per valore un oggetto con costruttore di copia eliminato. Se il compilatore non viene a conoscenza di questo evento in fase di runtime, inserisce un controllo di runtime in modo che il programma chiami immediatamente `std::terminate` nel momento in cui si verifica un marshalling non valido. In Visual Studio 2017 versione 15.3 il codice seguente genera l'avviso C4606 "'A': per il passaggio dell'argomento per valore tra limite nativo e gestito è necessario un costruttore di copia valido. In caso contrario, il comportamento del runtime risulta non definito.

```cpp
class A
{
public:
   A() : p_(new int) {}
   ~A() { delete p_; }

   A(A const &) = delete;
   A(A &&rhs) {
   p_ = rhs.p_;
}

private:
   int *p_;
};

#pragma unmanaged

void f(A a)
{
}

#pragma managed

int main()
{
    f(A()); // This call from managed to native requires marshaling. The CLR doesn't understand C++ and uses BitBlt, which results in a double-free later.
}
```

Per correggere l'errore, rimuovere la direttiva `#pragma managed` per contrassegnare il chiamante come nativo ed evitare il marshalling.

### <a name="experimental-api-warning-for-winrt"></a>Avviso di API sperimentale per WinRT

Le API WinRT rilasciate a scopo di sperimentazione e feedback vengono contrassegnate con `Windows.Foundation.Metadata.ExperimentalAttribute`. In Visual Studio 2017 versione 15.3 il compilatore genera l'avviso C4698 quando rileva questo attributo. Alcune API presenti in versioni precedenti di Windows SDK sono già state contrassegnate con questo attributo e le chiamate a queste API attivano ora l'avviso del compilatore. Nelle nuove versioni di Windows SDK l'attributo è rimosso da tutti i tipi distribuiti, ma se si usa un SDK precedente sarà necessario eliminare questi avvisi per tutte le chiamate eseguite ai tipi distribuiti.

Il codice seguente genera l'avviso C4698: "'Windows::Storage::IApplicationDataStatics2::GetForUserAsync' viene usato solo a scopo di valutazione e potrebbe essere modificato o rimosso in aggiornamenti futuri":

```cpp
Windows::Storage::IApplicationDataStatics2::GetForUserAsync(); //C4698
```

Per disabilitare l'avviso, aggiungere #pragma:

```cpp
#pragma warning(push)
#pragma warning(disable:4698)

Windows::Storage::IApplicationDataStatics2::GetForUserAsync();

#pragma warning(pop)
```

### <a name="out-of-line-definition-of-a-template-member-function"></a>Definizione out-of-line di una funzione membro di modello

Visual Studio 2017 versione 15.3 genera un errore quando rileva una definizione out-of-line di una funzione membro di modello non dichiarata nella classe. Il codice seguente genera ora l'errore C2039: 'f': non è un membro di 'S':

```cpp
struct S {};

template <typename T>
void S::f(T t) {} //C2039: 'f': is not a member of 'S'
```

Per correggere l'errore, aggiungere una dichiarazione alla classe:

```cpp
struct S {
    template <typename T>
    void f(T t);
};
template <typename T>
void S::f(T t) {}
```

### <a name="attempting-to-take-the-address-of-this-pointer"></a>Tentativo di prendere l'indirizzo di **questo** puntatore

In C++ **questo** è un prvalue di tipo puntatore a X. Non è possibile prendere l'indirizzo di **questo** o associarlo a un riferimento lvalue. Nelle versioni precedenti di Visual Studio, il compilatore consentiva di ignorare questa restrizione usando un cast. In Visual Studio 2017 versione 15.3, il compilatore genera l'errore C2664.

### <a name="conversion-to-an-inaccessible-base-class"></a>Conversione a una classe di base inaccessibile

Visual Studio 2017 versione 15.3 genera un errore quando si prova a convertire un tipo in una classe di base inaccessibile. L'errore ora generato dal compilatore è "errore C2243: 'type cast': conversione da 'D *' a 'B *' esistente ma inaccessibile". Il codice seguente non è valido e può causare un arresto anomalo in fase di runtime. Il compilatore genera ora un errore C2243 quando rileva un codice simile al seguente:

```cpp
#include <memory>

class B { };
class D : B { }; // C2243. should be public B { };

void f()
{
   std::unique_ptr<B>(new D());
}
```

### <a name="default-arguments-arent-allowed-on-out-of-line-definitions-of-member-functions"></a>Gli argomenti predefiniti non sono consentiti nelle definizioni out-of-line di funzioni membro

Gli argomenti predefiniti non sono consentiti nelle definizioni out-of-line di funzioni membro presenti in classi modello. Il compilatore genererà un avviso in **/permissive** e un errore grave in [/permissive-](../build/reference/permissive-standards-conformance.md).

Nelle versioni precedenti di Visual Studio, il codice non valido seguente poteva causare potenzialmente un arresto anomalo in fase di runtime. Visual Studio 2017 versione 15.3 genera l'avviso C5034: 'A\<T>::f': una definizione out-of-line di un membro di una classe non può contenere argomenti predefiniti:

```cpp
template <typename T>
struct A {
    T f(T t, bool b = false);
};

template <typename T>
T A<T>::f(T t, bool b = false) // C5034
{
    // ...
}
```

Per correggere l'errore, rimuovere l'argomento predefinito `= false`.

### <a name="use-of-offsetof-with-compound-member-designator"></a>Uso di `offsetof` con indicatore di membro composto

In Visual Studio 2017 versione 15.3 l'uso di `offsetof(T, m)` dove *m* è un "indicatore di membro composto" genera un avviso se si esegue la compilazione con l'opzione **/Wall**. Il codice seguente non è valido e può causare un arresto anomalo in fase di runtime. Visual Studio 2017 versione 15.3 produce l'avviso C4841: "è stata usata un'estensione non standard: indicatore di membro composto usato in offsetof":

```cpp
struct A {
   int arr[10];
};

// warning C4841: non-standard extension used: compound member designator in offsetof
constexpr auto off = offsetof(A, arr[2]);
```

Per correggere il codice, disabilitare l'avviso con un pragma o modificare il codice in modo da non usare `offsetof`:

```cpp
#pragma warning(push)
#pragma warning(disable: 4841)
constexpr auto off = offsetof(A, arr[2]);
#pragma warning(pop)
```

### <a name="using-offsetof-with-static-data-member-or-member-function"></a>Uso di `offsetof` con una funzione membro o un membro dati statici

In Visual Studio 2017 versione 15.3 l'uso di `offsetof(T, m)` dove *m* fa riferimento a un membro dati statici o a una funzione membro determina un errore. Il codice seguente genera l'errore C4597: "undefined behavior: offsetof applied to member function 'example'" (comportamento indefinito: offsetof applicato alla funzione membro 'example') e l'errore C4597: "undefined behavior: offsetof applied to static data member 'sample'" (comportamento indefinito: offsetof applicato al membro dati statici 'sample'):

```cpp
#include <cstddef>

struct A {
   int ten() { return 10; }
   static constexpr int two = 2;
};

constexpr auto off = offsetof(A, ten);
constexpr auto off2 = offsetof(A, two);
```

Questo codice non è valido e può causare un arresto anomalo in fase di runtime. Per correggere l'errore, modificare il codice in modo da non richiamare più un comportamento indefinito. Si tratta di codice non portabile non consentito dallo standard C++.

### <a name="declspec"></a> Nuovo avviso per attributi `__declspec`

In Visual Studio 2017 versione 15.3 il compilatore non ignora più gli attributi se prima della specifica di collegamento `__declspec(...)` viene applicato `extern "C"`. In precedenza, il compilatore avrebbe ignorato l'attributo, con possibili implicazioni in fase di runtime. Se sono state impostate le opzioni **/Wall** e **/WX**, il codice seguente produce l'avviso C4768: "gli attributi __declspec prima della specifica del collegamento vengono ignorati":

```cpp
__declspec(noinline) extern "C" HRESULT __stdcall //C4768
```

Per risolvere il problema, inserire prima `extern "C"`:

```cpp
extern "C" __declspec(noinline) HRESULT __stdcall
```

Questo avviso è disattivato per impostazione predefinita in 15,3, ma per impostazione predefinita in 15,5 e influisca solo sul codice compilato con **/Wall** **/WX**.

### <a name="decltype-and-calls-to-deleted-destructors"></a>**decltype** e chiamate ai distruttori eliminati

Nelle versioni precedenti di Visual Studio il compilatore non ha rilevato quando una chiamata a un distruttore eliminato si è verificata nel contesto dell'espressione associata a **decltype**. In Visual Studio 2017 versione 15.3 il codice seguente genera "errore C2280: 'A\<T>::~A(void)': tentativo di fare riferimento a una funzione eliminata":

```cpp
template<typename T>
struct A
{
   ~A() = delete;
};

template<typename T>
auto f() -> A<T>;

template<typename T>
auto g(T) -> decltype((f<T>()));

void h()
{
   g(42);
}
```

### <a name="uninitialized-const-variables"></a>Variabili const non inizializzate

La versione di Visual Studio 2017 RTW presenta una regressione in C++ cui il compilatore non emetterebbe una diagnostica se una variabile **const** non è stata inizializzata. Questa regressione è stata risolta in Visual Studio 2017 versione 15.3. Il codice seguente produce ora "avviso C4132: 'Value': oggetto const da inizializzare":

```cpp
const int Value; //C4132
```

Per correggere l'errore, assegnare un valore a `Value`.

### <a name="empty-declarations"></a>Dichiarazioni vuote

Visual Studio 2017 versione 15.3 genera ora un avviso in presenza di dichiarazioni vuote per tutti i tipi, non solo per i tipi predefiniti. Il codice seguente genera ora un avviso C4091 di livello 2 per tutte le quattro dichiarazioni:

```cpp
struct A {};
template <typename> struct B {};
enum C { c1, c2, c3 };

int;    // warning C4091 : '' : ignored on left of 'int' when no variable is declared
A;      // warning C4091 : '' : ignored on left of 'main::A' when no variable is declared
B<int>; // warning C4091 : '' : ignored on left of 'B<int>' when no variable is declared
C;      // warning C4091 : '' : ignored on left of 'C' when no variable is declared
```

Per rimuovere gli avvisi, impostare le dichiarazioni vuote come commento o rimuoverle. Se l'oggetto senza nome deve avere un effetto collaterale (ad esempio, RAII), è opportuno assegnare un nome all'oggetto.

L'avviso viene escluso in **/Wv:18** ed è attivo per impostazione predefinita nel livello di avviso W2.

### <a name="stdis_convertible-for-array-types"></a>`std::is_convertible` per i tipi matrice

Le versioni precedenti del compilatore restituiscono risultati non corretti per [std::is_convertible](../standard-library/is-convertible-class.md) per i tipi matrice. Per questo motivo, gli autori delle librerie dovevano gestire come caso speciale il compilatore Microsoft C++ quando veniva usato il tratto di tipo `std::is_convertible<...>`. Nell'esempio seguente le asserzioni statiche hanno esito positivo nelle versioni precedenti di Visual Studio, ma negativo in Visual Studio 2017 versione 15.3:

```cpp
#include <type_traits>

using Array = char[1];

static_assert(std::is_convertible<Array, Array>::value);
static_assert(std::is_convertible<const Array, const Array>::value, "");
static_assert(std::is_convertible<Array&, Array>::value, "");
static_assert(std::is_convertible<Array, Array&>::value, "");
```

`std::is_convertible<From, To>` viene calcolato controllando se una definizione di funzione immaginaria è ben formata:

```cpp
   To test() { return std::declval<From>(); }
```

### <a name="private-destructors-and-stdis_constructible"></a>Distruttori privati e `std::is_constructible`

Le versioni precedenti del compilatore ignorano il fatto che un distruttore sia privato al momento di decidere il risultato di [std::is_constructible](../standard-library/is-constructible-class.md). Questa condizione viene ora presa in considerazione. Nell'esempio seguente le asserzioni statiche hanno esito positivo nelle versioni precedenti di Visual Studio, ma negativo in Visual Studio 2017 versione 15.3:

```cpp
#include <type_traits>

class PrivateDtor {
   PrivateDtor(int) { }
private:
   ~PrivateDtor() { }
};

// This assertion used to succeed. It now correctly fails.
static_assert(std::is_constructible<PrivateDtor, int>::value);
```

A causa dei distruttori privati un tipo può essere non costruibile. `std::is_constructible<T, Args...>` viene calcolato come se fosse scritta la dichiarazione seguente:

```cpp
   T obj(std::declval<Args>()...)
```

Questa chiamata implica una chiamata al distruttore.

### <a name="c2668-ambiguous-overload-resolution"></a>C2668: risoluzione ambigua dell'overload

Le versioni precedenti del compilatore talvolta non riescono a rilevare ambiguità quando vengono trovati più candidati sia tramite dichiarazioni sia con ricerche dipendenti dall'argomento. Ciò può portare alla scelta di un overload non corretto e a un comportamento di runtime imprevisto. Nell'esempio seguente Visual Studio 2017 versione 15.3 genera correttamente C2668 'f': chiamata ambigua a funzione in overload:

```cpp
namespace N {
   template<class T>
   void f(T&, T&);

   template<class T>
   void f();
}

template<class T>
void f(T&, T&);

struct S {};
void f()
{
   using N::f;

   S s1, s2;
   f(s1, s2); // C2668
}
```

Per correggere il codice, rimuovere l'istruzione using `N::f` se l'intenzione era di chiamare `::f()`.

### <a name="c2660-local-function-declarations-and-argument-dependent-lookup"></a>C2660: dichiarazioni di funzione locali e ricerca dipendente dall'argomento

Le dichiarazioni di funzione locali nascondono la dichiarazione di funzione nell'ambito che la contiene e disabilitano la ricerca dipendente dall'argomento. Tuttavia, le versioni precedenti del compilatore eseguono la ricerca dipendente dall'argomento in questo caso, causando potenzialmente la scelta dell'overload non corretto e un comportamento di runtime imprevisto. In genere, l'errore è dovuto a una firma non corretta della dichiarazione di funzione locale. Nell'esempio seguente Visual Studio 2017 versione 15.3 genera correttamente C2660 'f': la funzione non accetta due argomenti:

```cpp
struct S {};
void f(S, int);

void g()
{
   void f(S); // C2660 'f': function does not take 2 arguments:
   // or void f(S, int);
   S s;
   f(s, 0);
}
```

Per risolvere il problema, modificare la firma `f(S)` o rimuoverla.

### <a name="c5038-order-of-initialization-in-initializer-lists"></a>C5038: ordine di inizializzazione negli elenchi di inizializzatori

I membri di classe vengono inizializzati nell'ordine in cui sono dichiarati e non nell'ordine in cui compaiono negli elenchi di inizializzatori. Le versioni precedenti del compilatore non avvisano quando l'ordine dell'elenco di inizializzatori è diverso dall'ordine di dichiarazione. Questo problema può causare un comportamento di runtime indefinito se l'inizializzazione di un membro dipende dal fatto che un altro membro nell'elenco sia già inizializzato. Nell'esempio seguente Visual Studio 2017 versione 15.3 (con **/Wall**) genera l'avviso C5038: "il membro dati 'A::y' verrà inizializzato dopo il membro dati 'A::x'":

```cpp
struct A
{
    A(int a) : y(a), x(y) {} // Initialized in reverse, y reused
    int x;
    int y;
};
```

Per risolvere il problema, disporre l'elenco di inizializzatori nello stesso ordine delle dichiarazioni. Viene generato un avviso analogo quando uno o entrambi gli inizializzatori fanno riferimento a membri della classe di base.

Questo avviso è disattivato per impostazione predefinita e influisce solo sul codice compilato con **/Wall**.

## <a name="update_155"></a>Correzioni di bug e altre modifiche di comportamento in 15,5

### <a name="partial-ordering-change"></a>Modifica di ordinamento parziale

Il compilatore ora rifiuta correttamente il codice seguente e visualizza il messaggio di errore corretto:

```cpp
template<typename... T>
int f(T* ...)
{
    return 1;
}

template<typename T>
int f(const T&)
{
    return 2;
}

int main()
{
    int i = 0;
    f(&i);    // C2668
}
```

```Output
t161.cpp
t161.cpp(16): error C2668: 'f': ambiguous call to overloaded function
t161.cpp(8): note: could be 'int f<int*>(const T &)'
        with
        [
            T=int*
        ]
t161.cpp(2): note: or       'int f<int>(int*)'
t161.cpp(16): note: while trying to match the argument list '(int*)'
```

Il problema nell'esempio precedente è la presenza di due differenze nei tipi (const rispetto a non-const e pack rispetto a non-pack). Per eliminare l'errore del compilatore, rimuovere una delle differenze. In questo modo il compilatore può ordinare senza ambiguità le funzioni.

```cpp
template<typename... T>
int f(T* ...)
{
    return 1;
}

template<typename T>
int f(T&)
{
    return 2;
}

int main()
{
    int i = 0;
    f(&i);
}
```

### <a name="exception-handlers"></a>Gestori di eccezioni

I gestori del riferimento al tipo di matrice o di funzione non sono mai una corrispondenza per gli oggetti eccezione. Il compilatore ora rispetta correttamente questa regola e genera un avviso di livello 4. Non stabilisce neppure più una corrispondenza tra un gestore di `char*` o `wchar_t*` e un valore letterale stringa quando viene usato **/Zc:strictStrings**.

```cpp
int main()
{
    try {
        throw "";
    }
    catch (int (&)[1]) {} // C4843 (This should always be dead code.)
    catch (void (&)()) {} // C4843 (This should always be dead code.)
    catch (char*) {} // This should not be a match under /Zc:strictStrings
}
```

```Output
warning C4843: 'int (&)[1]': An exception handler of reference to array or function type is unreachable, use 'int*' instead
warning C4843: 'void (__cdecl &)(void)': An exception handler of reference to array or function type is unreachable, use 'void (__cdecl*)(void)' instead
```

Il codice seguente consente di evitare l'errore:

```cpp
catch (int (*)[1]) {}
```

### <a name="tr1"></a>spazio dei nomi `std::tr1` deprecato

Lo spazio dei nomi `std::tr1` non standard è ora contrassegnato come deprecato in entrambe le modalità C++14 e C++17. In Visual Studio 2017 versione 15.5 il codice seguente genera l'errore C4996:

```cpp
#include <functional>
#include <iostream>
using namespace std;

int main() {
    std::tr1::function<int (int, int)> f = std::plus<int>(); //C4996
    cout << f(3, 5) << std::endl;
    f = std::multiplies<int>();
    cout << f(3, 5) << std::endl;
}
```

```Output
warning C4996: 'std::tr1': warning STL4002: The non-standard std::tr1 namespace and TR1-only machinery are deprecated and will be REMOVED. You can define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING to acknowledge that you have received this warning.
```

Per correggere l'errore, rimuovere il riferimento allo spazio dei nomi `tr1`:

```cpp
#include <functional>
#include <iostream>
using namespace std;

int main() {
    std::function<int (int, int)> f = std::plus<int>();
    cout << f(3, 5) << std::endl;
    f = std::multiplies<int>();
    cout << f(3, 5) << std::endl;
}
```

### <a name="annex_d"></a> Funzionalità della libreria standard in Annex D contrassegnate come deprecate

Quando è impostata l'opzione del compilatore in modalità **/std:c++17**, quasi tutte le funzionalità della libreria standard in Annex D vengono contrassegnate come deprecate.

In Visual Studio 2017 versione 15.5 il codice seguente genera l'errore C4996:

```cpp
#include <iterator>

class MyIter : public std::iterator<std::random_access_iterator_tag, int> {
public:
    // ... other members ...
};

#include <type_traits>

static_assert(std::is_same<MyIter::pointer, int*>::value, "BOOM");
```

```Output
warning C4996: 'std::iterator<std::random_access_iterator_tag,int,ptrdiff_t,_Ty*,_Ty &>::pointer': warning STL4015: The std::iterator class template (used as a base class to provide typedefs) is deprecated in C++17. (The <iterator> header is NOT deprecated.) The C++ standard has never required user-defined iterators to derive from std::iterator. To fix this warning, stop deriving from std::iterator and start providing publicly accessible typedefs named iterator_category, value_type, difference_type, pointer, and reference. Note that value_type is required to be non-const, even for constant iterators. You can define _SILENCE_CXX17_ITERATOR_BASE_CLASS_DEPRECATION_WARNING or _SILENCE_ALL_CXX17_DEPRECATION_WARNINGS to acknowledge that you have received this warning.
```

Per correggere l'errore, seguire le istruzioni nel testo dell'avviso, come illustrato nel codice seguente:

```cpp
#include <iterator>

class MyIter {
public:
    typedef std::random_access_iterator_tag iterator_category;
    typedef int value_type;
    typedef ptrdiff_t difference_type;
    typedef int* pointer;
    typedef int& reference;

    // ... other members ...
};

#include <type_traits>

static_assert(std::is_same<MyIter::pointer, int*>::value, "BOOM");
```

### <a name="unreferenced-local-variables"></a>Variabili locali senza riferimenti

In Visual Studio 15.5 l'avviso C4189 viene generato in diversi casi, come illustrato nel codice seguente:

```cpp
void f() {
    char s[2] = {0}; // C4189. Either use the variable or remove it.
}
```

```Output
warning C4189: 's': local variable is initialized but not referenced
```

Per correggere l'errore, rimuovere la variabile non usata.

### <a name="single-line-comments"></a>Commenti a riga singola

In Visual Studio 2017 versione 15.5 gli avvisi C4001 e C4179 non vengono più generati dal compilatore C. In precedenza venivano generati solo nell'opzione del compilatore **/Za**.  Gli avvisi non sono più necessari perché i commenti a riga singola fanno parte dello standard C da C99.

```cpp
/* C only */
#pragma warning(disable:4001) //C4619
#pragma warning(disable:4179)
// single line comment
//* single line comment */
```

```Output
warning C4619: #pragma warning: there is no warning number '4001'
```

Se non è necessario che il codice sia compatibile con le versioni precedenti, è possibile evitare l'avviso rimuovendo l'eliminazione di C4001/C4179. Se è necessario che il codice sia compatibile con le versioni precedenti, eliminare solo C4619.

```C

/* C only */

#pragma warning(disable:4619)
#pragma warning(disable:4001)
#pragma warning(disable:4179)

// single line comment
/* single line comment */
```

### <a name="__declspec-attributes-with-extern-c-linkage"></a>Attributi `__declspec` con collegamento `extern "C"`

Nelle versioni precedenti di Visual Studio il compilatore ignora gli attributi `__declspec(...)` quando `__declspec(...)` viene applicato prima della specifica del collegamento `extern "C"`. Questo comportamento causa la generazione di codice non desiderato dall'utente, con possibili implicazioni per il runtime. L'avviso è stato aggiunto in Visual Studio versione 15.3, ma è disattivato per impostazione predefinita. In Visual Studio 2017 versione 15.5 l'avviso è abilitato per impostazione predefinita.

```cpp
__declspec(noinline) extern "C" HRESULT __stdcall //C4768
```

```Output
warning C4768: __declspec attributes before linkage specification are ignored
```

Per correggere l'errore, inserire la specifica del collegamento prima dell'attributo __declspec:

```cpp
extern "C" __declspec(noinline) HRESULT __stdcall
```

Questo nuovo avviso C4768 viene visualizzato in alcune intestazioni di Windows SDK fornite con Visual Studio 2017 15.3 o versione precedente (ad esempio, la versione 10.0.15063.0, nota anche come RS2 SDK). Le versioni successive di Windows SDK (in particolare, ShlObj.h e ShlObj_core.h) sono state tuttavia corrette in modo da non generare questo avviso. Quando viene visualizzato questo avviso proveniente dalle azioni di Windows SDK, è possibile eseguire queste azioni:

1. Passare alla versione più recente di Windows SDK fornita con Visual Studio 2017 versione 15.5.

1. Disattivare l'avviso prima e dopo l'elemento #include dell'istruzione dell'intestazione di Windows SDK:

```cpp
   #pragma warning (push)
   #pragma warning(disable:4768)
   #include <shlobj.h>
   #pragma warning (pop)
   ```

### <a name="extern_linkage"></a>Collegamento Extern constexpr

Nelle versioni precedenti di Visual Studio, il compilatore dava sempre un collegamento interno della variabile **constExpr** anche quando la variabile è contrassegnata come **extern**. In Visual Studio 2017 versione 15.5 una nuova opzione del compilatore ( **/Zc:externConstexpr**) abilita il comportamento corretto conforme agli standard. Questo diventerà in ultima analisi il comportamento predefinito.

```cpp
extern constexpr int x = 10;
```

```Output
error LNK2005: "int const x" already defined
```

Se un file di intestazione contiene una variabile dichiarata come **extern constExpr**, è necessario contrassegnarla come `__declspec(selectany)` affinché le relative dichiarazioni duplicate siano combinate correttamente:

```cpp
extern constexpr __declspec(selectany) int x = 10;
```

### <a name="typeid-cant-be-used-on-incomplete-class-type"></a>**typeid** non può essere usato in un tipo di classe incompleto

Nelle versioni precedenti di Visual Studio il compilatore consente erroneamente il codice seguente, che restituisce informazioni sul tipo potenzialmente non corrette. In Visual Studio 2017 versione 15.5 il compilatore genera correttamente un errore:

```cpp
#include <typeinfo>

struct S;

void f() { typeid(S); } //C2027 in 15.5
```

```Output
error C2027: use of undefined type 'S'
```

### <a name="stdis_convertible-target-type"></a>Tipo di destinazione di `std::is_convertible`

`std::is_convertible` richiede che il tipo di destinazione sia un tipo restituito valido. Nelle versioni precedenti di Visual Studio il compilatore consente erroneamente i tipi astratti, il che può causare una risoluzione dell'overload non corretta e un comportamento di runtime indesiderato.  Il codice seguente ora genera correttamente l'errore C2338:

```cpp
#include <type_traits>

struct B { virtual ~B() = 0; };
struct D : public B { virtual ~D(); };

static_assert(std::is_convertible<D, B>::value, "fail"); // C2338 in 15.5
```

Per evitare l'errore, quando si usa `is_convertible`, è consigliabile confrontare i tipi di puntatore perché un confronto dei tipi non puntatore potrebbe non riuscire se un tipo è astratto:

```cpp
#include <type_traits>

struct B { virtual ~B() = 0; };
struct D : public B { virtual ~D(); };

static_assert(std::is_convertible<D *, B *>::value, "fail");
```

### <a name="noexcept_removal"></a>Rimozione della specifica di eccezione dinamica e **noexcept**

In C++ 17 `throw()` è un alias per **noexcept**, `throw(<type list>)` e `throw(...)` vengono rimossi e alcuni tipi possono includere **noexcept**. Questa modifica può causare problemi di compatibilità di origine con il codice conforme a C++14 o versione precedente. L'opzione **/Zc: noexceptTypes-** può essere usata per ripristinare la versione c++ 14 di **noexcept** durante l'uso della modalità c++ 17 in generale. In questo modo è possibile aggiornare il codice sorgente per garantire la conformità a C++17 senza dover riscrivere contemporaneamente tutto il codice `throw()`.

Il compilatore ora diagnostica anche altre specifiche di eccezione non corrispondenti nelle dichiarazioni in modalità C++17 o con [/permissive-](../build/reference/permissive-standards-conformance.md) con il nuovo avviso C5043.

Il codice seguente genera C5043 e C5040 in Visual Studio 2017 versione 15.5 quando viene applicata l'opzione **/std:c++17**:

```cpp
void f() throw(); // equivalent to void f() noexcept;
void f() {} // warning C5043
void g() throw(); // warning C5040

struct A {
    virtual void f() throw();
};

struct B : A {
    virtual void f() { } // error C2694
};
```

Per rimuovere gli errori pur continuando a usare **/std: c++ 17**, aggiungere l'opzione **/Zc: noexceptTypes-** alla riga di comando oppure aggiornare il codice per usare **noexcept**, come illustrato nell'esempio seguente:

```cpp
void f() noexcept;
void f() noexcept { }
void g() noexcept(false);

struct A {
    virtual void f() noexcept;
};

struct B : A {
    virtual void f() noexcept { }
};
```

### <a name="inline-variables"></a>Variabili inline

I membri dati static constexpr ora sono implicitamente inline, quindi la loro dichiarazione in una classe ora è la loro definizione. L'uso di una definizione out-of-line per un membro dati static constexpr è ridondante e attualmente deprecato. In Visual Studio 2017 versione 15.5 quando viene applicata l'opzione **/std:c++17**, il codice seguente ora genera l'avviso C5041 *'size': la definizione out-of-line per il membro dati statico constexpr non è necessaria ed è deprecata in C++17*:

```cpp
struct X {
    static constexpr int size = 3;
};
const int X::size; // C5041
```

### <a name="extern-c-__declspec-warning-c4768-now-on-by-default"></a>Avviso C4768 relativo a `extern "C" __declspec(...)` attivo per impostazione predefinita

L'avviso è stato aggiunto in Visual Studio 2017 versione 15.3, ma è disabilitato per impostazione predefinita. In Visual Studio 2017 versione 15.5 l'avviso è abilitato per impostazione predefinita. Per altre informazioni, vedere [Nuovo avviso per \_\_attributi declspec](#declspec).

### <a name="defaulted-functions-and-__declspecnothrow"></a>Funzioni impostate come predefinite e `__declspec(nothrow)`

Il compilatore consentiva la dichiarazione delle funzioni impostate come predefinite con `__declspec(nothrow)` quando le corrispondenti funzioni di base/membro permettevano le eccezioni. Questo comportamento è contrario allo standard C++ e può causare un comportamento non definito in fase di esecuzione. Lo standard richiede che tali funzioni vengano definite come eliminate se è presente una specifica di eccezione non corrispondente.  In **/std: c++ 17**il codice seguente genera il *tentativo C2280 di fare riferimento a una funzione eliminata. La funzione è stata eliminata in modo implicito perché la specifica dell'eccezione esplicita è incompatibile con quella della dichiarazione implicita.*

```cpp
struct A {
    A& operator=(const A& other) { // No exception specification; this function may throw.
        ...
    }
};

struct B : public A {
    __declspec(nothrow) B& operator=(const B& other) = default;
};

int main()
{
    B b1, b2;
    b2 = b1; // error C2280
}
```

Per correggere questo codice, rimuovere __declspec(nothrow) dalla funzione impostata come predefinita o rimuovere `= default` e fornire una definizione per la funzione con qualsiasi gestione delle eccezioni obbligatorie:

```cpp
struct A {
    A& operator=(const A& other) {
        // ...
    }
};

struct B : public A {
    B& operator=(const B& other) = default;
};

int main()
{
    B b1, b2;
    b2 = b1;
}
```

### <a name="noexcept-and-partial-specializations"></a>**noexcept** e specializzazioni parziali

Con **noexcept** nel sistema dei tipi, le specializzazioni parziali per la corrispondenza di particolari tipi "chiamabili" potrebbero non essere in grado di compilare o scegliere il modello primario a causa di una specializzazione parziale mancante per i puntatori a noexcept-Functions.

In questi casi, potrebbe essere necessario aggiungere specializzazioni parziali aggiuntive per gestire i puntatori a funzione **noexcept** e i puntatori **noexcept** alle funzioni membro. Questi overload sono validi solo nella modalità **/std:c++17**. Se è necessario mantenere la compatibilità con le versioni precedenti di C++14 e si sta scrivendo codice che viene usato da altri, è consigliabile proteggere questi nuovi overload in direttive `#ifdef`. Se si usa un modulo autonomo, invece di usare clausole guard `#ifdef`, è possibile eseguire solo la compilazione con l'opzione **/Zc:noexceptTypes-** .

Il codice seguente esegue la compilazione in **/std:c++14**, ma ha esito negativo in **/std:c++17** con l'errore C2027: "uso del tipo non definito 'A\<T>'":

```cpp
template <typename T> struct A;

template <>
struct A<void(*)()>
{
    static const bool value = true;
};

template <typename T>
bool g(T t)
{
    return A<T>::value;
}

void f() noexcept {}

int main()
{
    return g(&f) ? 0 : 1; // C2027
}
```

Il codice seguente ha esito positivo in **/std:c++17** perché il compilatore sceglie la nuova specializzazione parziale `A<void (*)() noexcept>`:

```cpp
template <typename T> struct A;

template <>
struct A<void(*)()>
{
    static const bool value = true;
};

template <>
struct A<void(*)() noexcept>
{
    static const bool value = true;
};

template <typename T>
bool g(T t)
{
    return A<T>::value;
}

void f() noexcept {}

int main()
{
    return g(&f) ? 0 : 1; // OK
}
```

## <a name="update_157"></a>Correzioni di bug e altre modifiche di comportamento in 15,7

### <a name="c17-default-argument-in-the-primary-class-template"></a>C++ 17: argomento predefinito nel modello di classe primario

Questa modifica del comportamento è una precondizione per la [deduzione dell'argomento del modello per i modelli di classe - P0091R3](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0091r3.html).

In precedenza il compilatore ignorava l'argomento predefinito nel modello di classe primario:

```cpp
template<typename T>
struct S {
    void f(int = 0);
};

template<typename T>
void S<T>::f(int = 0) {} // Re-definition necessary
```

In modalità **/std:c++17** in Visual Studio 2017 versione 15.7 l'argomento predefinito non viene ignorato:

```cpp
template<typename T>
struct S {
    void f(int = 0);
};

template<typename T>
void S<T>::f(int) {} // Default argument is used
```

### <a name="dependent-name-resolution"></a>Risoluzione dei nomi dipendenti

Questa modifica del comportamento è una precondizione per la [deduzione dell'argomento del modello per i modelli di classe - P0091R3](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0091r3.html).

Nell'esempio seguente il compilatore in Visual Studio 15.6 e versioni precedenti risolve `D::type` in `B<T>::type` nel modello di classe primario.

```cpp
template<typename T>
struct B {
    using type = T;
};

template<typename T>
struct D : B<T*> {
    using type = B<T*>::type;
};
```

Visual Studio 2017 versione 15,7, in modalità **/std: c++ 17** , richiede la parola chiave**typeName** nell'istruzione **using** in D. Senza**typeName**, il compilatore genera l'avviso C4346: *' B < T\*>:: Type ': il nome dipendente non è un tipo* ed errore C2061: *errore di sintassi: identificatore ' type '* :

```cpp
template<typename T>
struct B {
    using type = T;
};

template<typename T>
struct D : B<T*> {
    using type = typename B<T*>::type;
};
```

### <a name="c17-nodiscard-attribute---warning-level-increase"></a>C++17: Attributo `[[nodiscard]]` - incremento del livello di avviso

In Visual Studio 2017 versione 15.7 in modalità **/std:c++17** il livello di avviso di C4834 ("il valore restituito della funzione con attributo 'nodiscard' verrà rimosso") viene incrementato da W3 a W1. È possibile disabilitare l'avviso con un cast a **void**o passando **/WD.: 4834** al compilatore

```cpp
[[nodiscard]] int f() { return 0; }

int main() {
    f(); // warning: discarding return value
         // of function with 'nodiscard'
}
```

### <a name="variadic-template-constructor-base-class-initialization-list"></a>Elenco di inizializzazione della classe di base per un costruttore di modello variadic

Nelle edizioni precedenti di Visual Studio, un elenco di inizializzazione della classe di base per un costruttore di modello variadic con argomenti del modello mancanti è erroneamente consentito senza errori. In Visual Studio 2017 versione 15.7 viene generato un errore del compilatore.

L'esempio di codice seguente in Visual Studio 2017 versione 15.7 genera l'*errore C2614: D\<int>: inizializzazione membro non valida: 'B' non è una base né un membro*

```cpp
template<typename T>
struct B {};

template<typename T>
struct D : B<T>
{

    template<typename ...C>
    D() : B() {} // C2614. Missing template arguments to B.
};

D<int> d;
```

Per correggere l'errore, modificare l'espressione B() in B\<T>().

### <a name="constexpr-aggregate-initialization"></a>inizializzazione aggregata **constExpr**

Le versioni precedenti del C++ compilatore gestivano erroneamente l'inizializzazione aggregata **constExpr** . ha accettato un codice non valido in cui l'aggregazione-init-list aveva troppi elementi e produceva un codegen non valido. Il codice seguente è un esempio:

```cpp
#include <array>
struct X {
    unsigned short a;
    unsigned char b;
};

int main() {
    constexpr std::array<X, 2> xs = {
        { 1, 2 },
        { 3, 4 }
    };
    return 0;
}
```

In Visual Studio 2017 versione 15.7 Update 3 e versioni successive, l'esempio precedente genera ora *C2078 troppi inizializzatori*. L'esempio seguente mostra come correggere il codice. Durante l'inizializzazione di una `std::array` con elenchi di inizializzazione tra parentesi graffe, assegnare alla matrice interna un elenco tra parentesi graffe specifico:

```cpp
#include <array>
struct X {
    unsigned short a;
    unsigned char b;
};

int main() {
    constexpr std::array<X, 2> xs = {{ // note double braces
        { 1, 2 },
        { 3, 4 }
    }}; // note double braces
    return 0;
}
```

## <a name="update_158"></a>Correzioni di bug e modifiche del comportamento in 15,8

Le modifiche del compilatore in Visual Studio 2017 versione 15.8 rientrano tutte nella categoria delle correzioni di bug e delle modifiche del comportamento e sono elencate di seguito:

###<a name="typename-on-unqualified-identifiers"></a>**typeName** su identificatori non qualificati

In modalità [/permissive-](../build/reference/permissive-standards-conformance.md) , le parole chiave**typeName** false sugli identificatori non qualificati nelle definizioni di modello alias non sono più accettate dal compilatore. Il codice seguente ora genera l'errore C7511 *'T': la parola chiave 'typename' deve essere seguita da un nome completo*:

```cpp
template <typename T>
using  X = typename T;
```

Per correggere l'errore, modificare la seconda riga in `using  X = T;`.

### <a name="__declspec-on-right-side-of-alias-template-definitions"></a>`__declspec()` sul lato destro di definizioni di modelli di alias

La parola chiave [__declspec](../cpp/declspec.md) non è più consentita sul lato destro di una definizione di modello di alias. In precedenza, questo codice veniva accettato ma ignorato dal compilatore e non risultava mai in un avviso di deprecazione quando veniva usato l'alias.

Al suo posto è possibile usare l'attributo C++ standard [\[\[deprecated\]\]](../cpp/attributes.md), che viene rispettato in Visual Studio 2017 versione 15.6. Il codice seguente ora genera un errore C2760 *errore di sintassi: token '__declspec' imprevisto. Previsto 'identificatore di tipo'* :

```cpp
template <typename T>
using X = __declspec(deprecated("msg")) T;
```

Per correggere l'errore, modificare il codice come segue (con l'attributo posizionato prima del segno '=' della definizione di alias):

```cpp
template <typename T>
using  X [[deprecated("msg")]] = T;
```

### <a name="two-phase-name-lookup-diagnostics"></a>Diagnostica della ricerca del nome in due fasi

La ricerca del nome in due fasi richiede che i nomi non dipendenti usati nel corpo di modelli siano visibili per il modello in fase di definizione. In precedenza, il compilatore Microsoft C++ non cercava un nome non trovato fino al momento della creazione dell'istanza. È ora necessario che i nomi non dipendenti siano associati al corpo del modello.

Un modo in cui ciò può manifestarsi è con la ricerca in classi di base dipendenti. In precedenza, il compilatore consentiva l'uso di nomi definiti in classi di base dipendenti, perché sarebbero stati cercati al momento della creazione di un'istanza, dopo la risoluzione di tutti i tipi. Ora il codice di questo tipo viene considerato un errore. In questi casi è possibile forzare la ricerca della variabile in fase di creazione di un'istanza qualificandola con il tipo della classe di base o rendendola dipendente in altro modo, ad esempio aggiungendo un puntatore `this->`.

In modalità [/permissive-](../build/reference/permissive-standards-conformance.md) il codice seguente ora genera l'errore C3861: *'base_value': identificatore non trovato*:

```cpp
template <class T>
struct Base {
    int base_value = 42;
};

template <class T>
struct S : Base<T> {
    int f() {
        return base_value;
    }
};
```

Per correggere l'errore, modificare l'istruzione `return` in `return this->base_value;`.

**Nota:** nella libreria Boost python è disponibile da lungo tempo una soluzione specifica per MSVC per una dichiarazione di inoltro del modello in [unwind_type.hpp](https://github.com/boostorg/python/blame/develop/include/boost/python/detail/unwind_type.hpp). Nella modalità [/permissive-](../build/reference/permissive-standards-conformance.md), a partire da Visual Studio 2017 versione 15.8 (_MSC_VER=1915), il compilatore MSVC gestisce correttamente la ricerca dei nomi dipendente dall'argomento ed è coerente con altri compilatori, rendendo superflua questa misura di protezione. Per evitare l'errore *C3861: 'unwind_type': identificatore non trovato*, vedere la [richiesta pull 229](https://github.com/boostorg/python/pull/229) nel repository Boost per aggiornare il file di intestazione. È già stata applicata la patch al pacchetto Boost [vcpkg](../build/vcpkg.md), quindi se si recuperano o aggiornano le origini Boost da vcpkg non è necessario applicare la patch separatamente.

### <a name="forward-declarations-and-definitions-in-namespace-std"></a>Dichiarazioni e definizioni con prototipo nello spazio dei nomi `std`

Lo standard C++ non consente di aggiungere dichiarazioni o definizioni con prototipo nello spazio dei nomi (namespace) `std`. L'aggiunta di dichiarazioni o definizioni allo spazio dei nomi `std` o a uno spazio dei nomi all'interno dello spazio dei nomi `std` ora risulta in un comportamento indefinito.

In futuro, Microsoft modificherà la posizione di definizione di alcuni tipi della libreria standard. Questa modifica causerà l'interruzione del codice esistente che aggiunge dichiarazioni con prototipo allo spazio dei nomi `std`. Un nuovo avviso, C4643, consente di identificare tali problemi nel codice sorgente. Questo avviso, abilitato in modalità **/default** e disattivato per impostazione predefinita, interessa i programmi compilati con **/Wall** o **/WX**.

Il codice seguente ora genera un errore C4643: *Lo standard C++ non consente la dichiarazione con prototipo di 'vettore' nello spazio dei nomi std*.

```cpp
namespace std {
    template<typename T> class vector;
}
```

Per correggere l'errore, usare una direttiva **include** anziché una dichiarazione con prototipo:

```cpp
#include <vector>
```

### <a name="constructors-that-delegate-to-themselves"></a>Costruttori con delega a se stessi

Secondo lo standard C++, un compilatore deve generare un messaggio di diagnostica quando un costruttore di delega assegna una delega a se stesso. Nelle modalità [/std:c++17](../build/reference/std-specify-language-standard-version.md) e [/std:c++latest](../build/reference/std-specify-language-standard-version.md), il compilatore Microsoft C++ ora genera l'errore C7535: *'X::X': il costruttore di delega chiama se stesso*.

Senza questo errore, il programma seguente viene compilato ma genera un ciclo infinito:

```cpp
class X {
public:
    X(int, int);
    X(int v) : X(v){}
};
```

Per evitare il ciclo infinito, delegare un altro costruttore:

```cpp
class X {
public:

    X(int, int);
    X(int v) : X(v, 0) {}
};
```

### <a name="offsetof-with-constant-expressions"></a>`offsetof` con espressioni costanti

La macro [offsetof](../c-runtime-library/reference/offsetof-macro.md) era tradizionalmente implementata tramite una macro che richiedeva un operatore [reinterpret_cast](../cpp/reinterpret-cast-operator.md). Questo utilizzo non è valido in contesti che richiedono un'espressione costante, ma tradizionalmente il compilatore Microsoft C++ la consentiva. La macro `offsetof` in dotazione con la libreria standard usa correttamente una funzione intrinseca del compilatore ( **__builtin_offsetof**), ma molti sviluppatori hanno usato il trucco della macro per definire una macro `offsetof` personalizzata.

In Visual Studio 2017 versione 15.8, il compilatore vincola le aree in cui gli operatori `reinterpret_cast` possono comparire nella modalità predefinita per consentire la conformità del codice al comportamento C++ standard. In modalità [/permissive-](../build/reference/permissive-standards-conformance.md), i vincoli sono ancora più restrittivi. Se si usa il risultato di una macro `offsetof` in posizioni che richiedono espressioni costanti, il codice può generare l'avviso C4644 *l'utilizzo del criterio offsetof basato su macro nelle espressioni costanti non è standard. Usare offsetof definito nella libreria standard C++* o C2975 *argomento di modello non valido. Prevista espressione costante in fase di compilazione*.

Il codice seguente genera l'errore C4644 in modalità **/default** e **/std:c++17** e l'errore C2975 in modalità [/permissive-](../build/reference/permissive-standards-conformance.md):

```cpp
struct Data {
    int x;
};

// Common pattern of user-defined offsetof
#define MY_OFFSET(T, m) (unsigned long long)(&(((T*)nullptr)->m))

int main()

{
    switch (0) {
    case MY_OFFSET(Data, x): return 0;
    default: return 1;
    }
}
```

Per correggere l'errore, usare `offsetof` definita tramite \<cstddef>:

```cpp
#include <cstddef>

struct Data {
    int x;
};

int main()
{
    switch (0) {
    case offsetof(Data, x): return 0;
    default: return 1;
    }
}
```

### <a name="cv-qualifiers-on-base-classes-subject-to-pack-expansion"></a>qualificatori cv per le classi di base soggette all'espansione di pacchetto

Le versioni precedenti del compilatore Microsoft C++ non rilevavano che una classe di base aveva qualificatori cv se era anche soggetta all'espansione di pacchetto.

Nella modalità [/permissive-](../build/reference/permissive-standards-conformance.md) di Visual Studio 2017 versione 15.8, il codice seguente genera l'errore C3770 *'const S': non è una classe base valida*:

```cpp
template<typename... T>
class X : public T... { };

class S { };

int main()
{
    X<const S> x;
}
```

### <a name="template-keyword-and-nested-name-specifiers"></a>parola chiave del **modello** e identificatori di nome-annidato

In modalità [/permissive-](../build/reference/permissive-standards-conformance.md) , il compilatore ora richiede che la parola chiave del **modello** preceda il nome di un modello quando si trova dopo un identificatore di nome-annidato dipendente.

Il codice seguente in modalità [/permissive-](../build/reference/permissive-standards-conformance.md) genera ora C7510: *' example ': l'uso del nome del modello dipendente deve essere preceduto da' template '. Nota: vedere il riferimento alla creazione di un'istanza del modello di classe ' X\<t >' da compilare*:

```cpp
template<typename T> struct Base
{
    template<class U> void example() {}
};

template<typename T>
struct X : Base<T>
{
    void example()
    {
        Base<T>::example<int>();
    }
};
```

Per correggere l'errore, aggiungere la parola chiave **template** all'istruzione `Base<T>::example<int>();`, come illustrato nell'esempio seguente:

```cpp
template<typename T> struct Base
{
    template<class U> void example() {}
};

template<typename T>
struct X : Base<T>
{
    void example()
    {
        // Add template keyword here:
        Base<T>::template example<int>();
    }
};
```

## <a name="update_159"></a>Correzioni di bug e modifiche del comportamento in 15,9

### <a name="identifiers-in-member-alias-templates"></a>Identificatori nei modelli di membro alias

Un identificatore usato nella definizione del modello di membro alias deve essere dichiarato prima di essere usato.

Nelle versioni precedenti del compilatore era consentito il codice seguente:

```cpp
template <typename... Ts>
struct A
{
  public:
    template <typename U>
    using from_template_t = decltype(from_template(A<U>{}));

  private:
    template <template <typename...> typename Type, typename... Args>
    static constexpr A<Args...> from_template(A<Type<Args...>>);
};

A<>::from_template_t<A<int>> a;
```

In Visual Studio 2017 versione 15.9, in modalità [/permissive-](../build/reference/permissive-standards-conformance.md), il compilatore genera l'errore C3861: *'from_template': identificatore non trovato*.

Per correggere l'errore, dichiarare `from_template` prima di `from_template_t`.

### <a name="modules-changes"></a>Modifiche dei moduli

In Visual Studio 2017 versione 15.9 il compilatore genera l'avviso C5050 ogni volta che le opzioni della riga di comando non sono coerenti sui lati creazione e utilizzo del modulo. Nell'esempio seguente sussistono due problemi:

- Sul lato utilizzo (main.cpp) l'opzione **/EHsc** non è specificata.

- La versione di C++ è **/std:c++17** sul lato creazione e **/std:c++14** sul lato utilizzo.

```cmd
cl /EHsc /std:c++17 m.ixx /experimental:module
cl /experimental:module /module:reference m.ifc main.cpp /std:c++14
```

Il compilatore genera C5050 per entrambi i casi: *warning C5050: possibile ambiente incompatibile durante l'importazione del modulo ' m': C++ versioni non corrispondenti.  Versione corrente del modulo "201402" "201703"* .

Il compilatore genera anche l'errore C7536 ogni volta che il file con estensione ifc viene manomesso. L'intestazione dell'interfaccia del modulo contiene un hash SHA2 sotto di essa. Al momento dell'importazione, al file con estensione ifc viene aggiunto l'hash nello stesso modo e viene confrontato con l'hash presente nell'intestazione. Se queste non corrispondono, viene generato l'errore C7536, ovvero i *controlli di integrità IFC non riusciti.  Previsto SHA2:' 66d5c8154df0c71d4cab7665bab4a125c7ce5cb9a401a4d8b461b706ddd771c6'* .

### <a name="partial-ordering-involving-aliases-and-non-deduced-contexts"></a>Ordinamento parziale per alias e contesti non dedotti

È presente una divergenza di implementazione delle regole di ordinamento parziale che interessa gli alias nei contesti non dedotti. Nell'esempio seguente GCC e il compilatore Microsoft C++ (in modalità [/permissive-](../build/reference/permissive-standards-conformance.md)) generano un errore, mentre Clang accetta il codice.

```cpp
#include <utility>
using size_t = std::size_t;

template <typename T>
struct A {};
template <size_t, size_t>
struct AlignedBuffer {};
template <size_t len>
using AlignedStorage = AlignedBuffer<len, 4>;

template <class T, class Alloc>
int f(Alloc &alloc, const AlignedStorage<T::size> &buffer)
{
    return 1;
}

template <class T, class Alloc>
int f(A<Alloc> &alloc, const AlignedStorage<T::size> &buffer)
{
    return 2;
}

struct Alloc
{
    static constexpr size_t size = 10;
};

int main()
{
    A<void> a;
    AlignedStorage<Alloc::size> buf;
    if (f<Alloc>(a, buf) != 2)
    {
        return 1;
    }

    return 0;
}
```

L'esempio precedente genera l'errore C2668:

```Output
partial_alias.cpp(32): error C2668: 'f': ambiguous call to overloaded function
partial_alias.cpp(18): note: could be 'int f<Alloc,void>(A<void> &,const AlignedBuffer<10,4> &)'
partial_alias.cpp(12): note: or       'int f<Alloc,A<void>>(Alloc &,const AlignedBuffer<10,4> &)'
        with
        [
            Alloc=A<void>
        ]
partial_alias.cpp(32): note: while trying to match the argument list '(A<void>, AlignedBuffer<10,4>)'
```

La divergenza di implementazione è dovuta a una regressione nella formulazione dello standard C++. Per risolvere il problema principale 2235, è stata rimossa parte del testo che avrebbe consentito di ordinare questi overload. Lo standard C++ corrente non offre un meccanismo per un ordinamento parziale di queste funzioni, che quindi vengono considerate ambigue.

Come soluzione alternativa, è consigliabile non affidarsi all'ordinamento parziale per risolvere questo problema. Usare invece SFINAE per rimuovere overload specifici. Nell'esempio seguente viene usata una classe helper `IsA` per rimuovere il primo overload quando `Alloc` è una specializzazione di `A`:

```cpp
#include <utility>
using size_t = std::size_t;

template <typename T>
struct A {};
template <size_t, size_t>
struct AlignedBuffer {};
template <size_t len>
using AlignedStorage = AlignedBuffer<len, 4>;

template <typename T> struct IsA : std::false_type {};
template <typename T> struct IsA<A<T>> : std::true_type {};

template <class T, class Alloc, typename = std::enable_if_t<!IsA<Alloc>::value>>
int f(Alloc &alloc, const AlignedStorage<T::size> &buffer)
{
    return 1;
}

template <class T, class Alloc>
int f(A<Alloc> &alloc, const AlignedStorage<T::size> &buffer)
{
    return 2;
}

struct Alloc
{
    static constexpr size_t size = 10;
};

int main()
{
    A<void> a;
    AlignedStorage<Alloc::size> buf;
    if (f<Alloc>(a, buf) != 2)
    {
        return 1;
    }

    return 0;
}
```

### <a name="illegal-expressions-and-non-literal-types-in-templated-function-definitions"></a>Espressioni non valide o tipi non letterali nelle definizioni di funzioni basate su modelli

Le espressioni non valide e i tipi non letterali ora vengono diagnosticati correttamente nelle definizioni di funzioni basate su modelli specializzate in modo esplicito. In precedenza, tali errori non venivano generati per la definizione della funzione. Tuttavia l'espressione non valida o il tipo non letterale veniva ugualmente diagnosticato se valutato come parte di un'espressione costante.

Nelle versioni precedenti di Visual Studio il codice seguente viene compilato senza avviso:

```cpp
void g();

template<typename T>
struct S
{
    constexpr void f();
};

template<>
constexpr void S<int>::f()
{
    g(); // C3615 in 15.9
}
```

In Visual Studio 2017 versione 15.9 il codice seguente genera questo errore:

```Output
error C3615: constexpr function 'S<int>::f' cannot result in a constant expression.
note: failure was caused by call of undefined function or one not declared 'constexpr'
note: see usage of 'g'.
```

Per evitare l'errore, rimuovere il qualificatore **constExpr** dalla creazione di un'istanza esplicita della funzione `f()`.

::: moniker-end

::: moniker range="vs-2015"

## <a name="c-conformance-improvements-in-visual-studio-2015"></a>Miglioramenti della conformità di C++ in Visual Studio 2015

Per l'elenco completo dei miglioramenti apportati alla conformità fino a Visual Studio 2015 Update 3, vedere [Visual C++: novità dalla versione 2003 alla 2015](/cpp/porting/visual-cpp-what-s-new-2003-through-2015).

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Tabella C++ di conformità del linguaggio Microsoft](../visual-cpp-language-conformance.md)
