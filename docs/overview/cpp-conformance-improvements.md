---
title: Miglioramenti della conformità di C++ in Visual Studio 2019
description: Microsoft C++ in Visual Studio si avvicina alla conformità completa con lo standard di linguaggio C++20.
ms.date: 03/10/2021
ms.technology: cpp-language
ms.openlocfilehash: 3b78551ee4d8590403cdfaf77c267eef0ab6d811
ms.sourcegitcommit: f8ba5db09d05683b24c58505f0e57c21f85545dc
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2021
ms.locfileid: "103087259"
---
# <a name="c-conformance-improvements-behavior-changes-and-bug-fixes-in-visual-studio-2019"></a>Miglioramenti della conformità di C++, modifiche del comportamento e correzioni di bug in Visual Studio 2019

Microsoft C/C++ in Visual Studio (MSVC) apporta miglioramenti alla conformità e correzioni di bug in ogni versione. Questo articolo elenca i miglioramenti introdotti a livello di versione principale e secondaria. Per passare direttamente alle modifiche per una versione specifica, usare l'elenco riportato **di seguito in questo articolo**.

Questo documento elenca le modifiche apportate a Visual Studio 2019. Per una guida alle modifiche apportate a Visual Studio 2017, vedere [miglioramenti della conformità di C++ in Visual studio 2017](cpp-conformance-improvements-2017.md). Per un elenco completo dei miglioramenti apportati alla conformità precedenti, vedere Visual C++ novità da [2003 a 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).

## <a name="conformance-improvements-in-visual-studio-2019-rtw-version-160"></a><a name="improvements_160"></a> Miglioramenti della conformità in Visual Studio 2019 RTW (versione 16,0)

Visual Studio 2019 RTW contiene i seguenti miglioramenti della conformità, correzioni di bug e modifiche del comportamento nel compilatore Microsoft C++.

> [!NOTE]
> Le funzionalità di c++ 20 sono disponibili in **`/std:c++latest`** modalità fino al completamento dell'implementazione di c++ 20 sia per il compilatore che per IntelliSense. In quel momento, verrà introdotta la **`/std:c++20`** modalità del compilatore.

### <a name="improved-modules-support-for-templates-and-error-detection"></a>Supporto di moduli migliorato per i modelli e il rilevamento degli errori

I moduli ora supportano ufficialmente lo standard C++20. Il supporto aggiornato è stato aggiunto in Visual Studio 2017 versione 15.9. Per altre informazioni, vedere [Better template support and error detection in C++ Modules with MSVC 2017 version 15.9](https://devblogs.microsoft.com/cppblog/better-template-support-and-error-detection-in-c-modules-with-msvc-2017-version-15-9/) (Supporto di modelli e rilevamento errori migliorati nei moduli C++ con MSVC 2017 versione 15.9).

### <a name="modified-specification-of-aggregate-type"></a>Specificazione del tipo di aggregazione modificata

La specifica di un tipo di aggregazione è stata modificata in C++20. Vedere [Prohibit aggregates with user-declared constructors](https://wg21.link/p1008r1) (Proibire aggregazioni con costruttori dichiarati dall'utente). In Visual Studio 2019, in **`/std:c++latest`** una classe con qualsiasi costruttore dichiarato dall'utente (ad esempio, incluso un costruttore dichiarato `= default` o `= delete` ) non è un'aggregazione. In precedenza solo i costruttori specificati dall'utente non consentivano di qualificare una classe come funzione di aggregazione. Questa modifica impone più restrizioni sulla modalità di inizializzazione di tali tipi.

Il codice seguente viene compilato senza errori in Visual Studio 2017 ma genera errori C2280 e C2440 in Visual Studio 2019 in **`/std:c++latest`** :

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

[P0515R3](https://wg21.link/p0515r3) C++20 introduce il supporto dell'operatore di confronto a tre vie `<=>`, detto anche "operatore navicella spaziale". Visual Studio 2019 in **`/std:c++latest`** modalità introduce un supporto parziale per l'operatore generando errori per la sintassi che ora non è consentita. Ad esempio, il codice seguente viene compilato senza errori in Visual Studio 2017 ma genera più errori in Visual Studio 2019 in **`/std:c++latest`** :

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

In precedenza, MSVC consentiva il binding diretto di un riferimento da un tipo con elementi cv-qualifier non corrispondenti sotto il livello principale. Questo può consentire la modifica di dati presumibilmente const a cui viene fatto riferimento. Il compilatore ora crea un elemento temporaneo, come richiesto dallo standard. In Visual Studio 2017 il codice seguente viene compilato senza avviso. In Visual Studio 2019 il compilatore genera l'avviso C4172:

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
    auto p = x.PData(); // C4172 <func:#1 "?PData@X@@QBEABQBXXZ"> returning address of local variable or temporary
}
```

### <a name="reinterpret_cast-from-an-overloaded-function"></a>`reinterpret_cast` da una funzione in overload

L'argomento di **`reinterpret_cast`** non è uno dei contesti in cui è consentito l'indirizzo di una funzione in overload. Il codice seguente viene compilato senza errori in Visual Studio 2017, ma in Visual Studio 2019 viene generato l'errore C2440:

```cpp
int f(int) { return 1; }
int f(float) { return .1f; }
using fp = int(*)(int);

int main()
{
    fp r = reinterpret_cast<fp>(&f); // C2440: cannot convert from 'overloaded-function' to 'fp'
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

In C++14, i tipi di chiusura lambda non sono valori letterali. La conseguenza principale di questa regola è che un'espressione lambda non può essere assegnata a una **`constexpr`** variabile. Il codice seguente viene compilato senza errori in Visual Studio 2017, ma in Visual Studio 2019 viene generato l'errore C2127:

```cpp
int main()
{
    constexpr auto l = [] {}; // C2127 'l': illegal initialization of 'constexpr' entity with a non-constant expression
}
```

Per evitare l'errore, rimuovere il **`constexpr`** qualificatore, altrimenti modificare la modalità di conformità in **`/std:c++17`** .

### <a name="stdcreate_directory-failure-codes"></a>Codici di errore `std::create_directory`

[P1164](https://wg21.link/p1164r1) implementata da C++20 senza condizioni. Questa funzionalità modifica `std::create_directory` per verificare se la destinazione era già una directory in caso di errore. In precedenza tutti gli errori di tipo ERROR_ALREADY_EXISTS venivano trasformati in codici di esito positivo ma senza creazione di directory.

### `operator<<(std::ostream, nullptr_t)`

Per [LWG 2221](https://cplusplus.github.io/LWG/issue2221), aggiunto `operator<<(std::ostream, nullptr_t)` per la scrittura nei **`nullptr`** flussi.

### <a name="more-parallel-algorithms"></a>Altri algoritmi paralleli

Nuove versioni parallele di `is_sorted`, `is_sorted_until`, `is_partitioned`, `set_difference`, `set_intersection`, `is_heap` e `is_heap_until`.

### <a name="atomic-initialization"></a>Inizializzazione atomica

[P0883 "correzione dell'inizializzazione atomica"](https://wg21.link/p0883r1) viene modificato `std::atomic` in valore: inizializzare l'oggetto contenuto `T` anziché inizializzarlo come predefinito. La correzione è abilitata quando si usa Clang/LLVM con la libreria standard Microsoft. È attualmente disabilitato per il compilatore Microsoft C++, come soluzione alternativa per un bug nell' **`constexpr`** elaborazione.

### <a name="remove_cvref-and-remove_cvref_t"></a>`remove_cvref` e `remove_cvref_t`

Sono state implementate le caratteristiche dei tipi `remove_cvref` e `remove_cvref_t` da [P0550](https://wg21.link/p0550r2). Tali caratteristiche rimuovono l'associazione a riferimenti e la qualifica cv- da un tipo senza degradare le funzioni e le matrici a puntatori (a differenza di `std::decay` e `std::decay_t`).

### <a name="feature-test-macros"></a>Macro dei test di funzionalità

Il documento [P0941R2 sulle macro dei test delle funzionalità](https://wg21.link/p0941r2) è stato completato, con il supporto per `__has_cpp_attribute`. Le macro dei test delle funzionalità sono supportate in tutte le modalità standard.

### <a name="prohibit-aggregates-with-user-declared-constructors"></a>Vietare gli aggregati con i costruttori dichiarati dall'utente

C++ 20 [P1008R1: la proibizione delle aggregazioni con costruttori dichiarati dall'utente](https://wg21.link/p1008r1) è stata completata.

### <a name="reinterpret_cast-in-a-constexpr-function"></a>`reinterpret_cast` in una `constexpr` funzione

Un oggetto non **`reinterpret_cast`** è valido in una **`constexpr`** funzione. Il compilatore Microsoft C++ rifiuterà in precedenza **`reinterpret_cast`** solo se è stato usato in un **`constexpr`** contesto. In Visual Studio 2019, in tutte le modalità standard del linguaggio, il compilatore diagnostica correttamente un **`reinterpret_cast`** nella definizione di una **`constexpr`** funzione. Il codice seguente genera ora C3615:

```cpp
long long i = 0;
constexpr void f() {
    int* a = reinterpret_cast<int*>(i); // C3615: constexpr function 'f' cannot result in a constant expression
}
```

Per evitare l'errore, rimuovere il **`constexpr`** modificatore dalla dichiarazione di funzione.

### <a name="correct-diagnostics-for-basic_string-range-constructor"></a>Diagnostica corretta per il costruttore di intervalli basic_string

In Visual Studio 2019, il `basic_string` costruttore di intervallo non impedisce più la diagnostica del compilatore con **`static_cast`** . Il codice seguente viene compilato senza avvisi in Visual Studio 2017, nonostante la possibile perdita di dati da **`wchar_t`** a **`char`** durante l'inizializzazione `out` :

```cpp
std::wstring ws = /* … */;
std::string out(ws.begin(), ws.end()); // VS2019 C4244: 'argument': conversion from 'wchar_t' to 'const _Elem', possible loss of data.
```

Visual Studio 2019 genera correttamente gli avvisi C4244. Per evitare l'avviso, è possibile inizializzare `std::string` come illustrato nell'esempio seguente:

```cpp
std::wstring ws = L"Hello world";
std::string out;
for (wchar_t ch : ws)
{
    out.push_back(static_cast<char>(ch));
}
```

### <a name="incorrect-calls-to--and---under-clr-or-zw-are-now-correctly-detected"></a>`+=` `-=` `/clr` `/ZW` Sono state rilevate correttamente le chiamate a e in or.

Un bug è stato introdotto in Visual Studio 2017 che ha determinato che il compilatore ignorava automaticamente gli errori e non genera codice per le chiamate non valide a **`+=`** e **`-=`** in **`/clr`** o **`/ZW`** . Il codice seguente viene compilato senza errori in Visual Studio 2017 ma in Visual Studio 2019 genera correttamente l'errore C2845:

```cpp
public enum class E { e };

void f(System::String ^s)
{
    s += E::e; // in VS2019 C2845: 'System::String ^': pointer arithmetic not allowed on this type.
}
```

Per evitare l'errore in questo esempio, usare l' **`+=`** operatore con il `ToString()` Metodo: `s += E::e.ToString();` .

### <a name="initializers-for-inline-static-data-members"></a>Inizializzatori per i membri dati statici inline

Gli accessi ai membri non validi in **`inline`** e gli **`static constexpr`** inizializzatori sono ora rilevati correttamente. L'esempio seguente compila senza errori in Visual Studio 2017, ma in Visual Studio 2019 in **`/std:c++17`** modalità viene generato l'errore C2248:

```cpp
struct X
{
    private:
        static inline const int c = 1000;
};

struct Y : X
{
    static inline int d = c; // VS2019 C2248: cannot access private member declared in class 'X'.
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

MSVC utilizzato per ottenere un avviso di prestazioni C4800 sulla conversione implicita in **`bool`** . È stato troppo rumoroso e non poteva essere eliminato, a causa della rimozione in Visual Studio 2017. Tuttavia, durante il ciclo di vita di Visual Studio 2017, Microsoft ha ricevuto numerosi commenti e suggerimenti relativi ai casi che tale avviso ha contribuito a risolvere. In Visual Studio 2019 torna a essere disponibile un avviso C4800 mirato, con un avviso C4165 associato. Entrambi gli avvisi sono facili da escludere: usando un cast esplicito o confrontando con 0 il tipo appropriato. C4800 è un avviso di livello 4 disattivato per impostazione predefinita e C4165 è un avviso di livello 3 disattivato per impostazione predefinita. Entrambi sono individuabili utilizzando l'opzione del **`/Wall`** compilatore.

L'esempio seguente genera C4800 e C4165 in **`/Wall`** :

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

In Visual Studio 2017, l'avviso C4822 viene generato solo quando l'opzione del compilatore **`/w14822`** è impostata in modo esplicito. Non viene visualizzata con **`/Wall`** . In Visual Studio 2019, C4822 è un avviso disabilitato per impostazione predefinita, che lo rende individuabile in **`/Wall`** senza che sia necessario impostare in **`/w14822`** modo esplicito.

```cpp
void example()
{
    struct A
        {
            int boo(); // warning C4822: Local class member function doesn't have a body
        };
}
```

### <a name="function-template-bodies-containing-if-constexpr-statements"></a>Corpi del modello di funzione contenenti `if constexpr` istruzioni

Per i corpi della funzione modello che contengono **`if constexpr`** istruzioni sono [`/permissive-`](../build/reference/permissive-standards-conformance.md) abilitati alcuni controlli correlati all'analisi. Ad esempio, in Visual Studio 2017 il codice seguente produce C7510 solo se l' **`/permissive-`** opzione non è impostata. In Visual Studio 2019 lo stesso codice genera errori anche quando **`/permissive-`** è impostata l'opzione:

```cpp
template <typename T>

int f()
{
    T::Type a; // error C7510: 'Type': use of dependent type name must be prefixed with 'typename'

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

Per evitare l'errore, aggiungere la **`typename`** parola chiave alla dichiarazione di `a` : `typename T::Type a;` .

### <a name="inline-assembly-code-isnt-supported-in-a-lambda-expression"></a>Il codice assembly inline non è supportato in un'espressione lambda

Il team di Microsoft C++ è stato recentemente informato di un problema di sicurezza in cui l'uso di un assembler inline all'interno di un'espressione lambda può causare il danneggiamento di `ebp` (il registro degli indirizzi restituiti) in fase di esecuzione. Un utente malintenzionato potrebbe trarre vantaggio da questo scenario. L'assembler inline è supportato solo su x86 e l'interazione tra l'assembler inline e il resto del compilatore è insufficiente. Considerati questi fatti e la natura del problema, la soluzione più sicura a questo problema consisteva nel non consentire l'assembler inline all'interno di un'espressione lambda.

L'unico caso d'uso dell'assembler inline all'interno di un'espressione lambda rilevato è stato un uso per l'acquisizione dell'indirizzo di restituzione. In questo scenario è possibile acquisire l'indirizzo del mittente in tutte le piattaforme, usando un elemento `_ReturnAddress()` intrinseco del compilatore.

Il codice seguente produce C7552 in Visual Studio 2017 15,9 e in Visual Studio 2019:

```cpp
#include <cstdio>

int f()
{
    int y = 1724;
    int x = 0xdeadbeef;

    auto lambda = [&]
    {
        __asm {  // C7552: inline assembler is not supported in a lambda

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

### <a name="fixes-for-xkeycheckh-keyword-enforcement"></a>Correzioni per l' \<xkeycheck.h> imposizione di parole chiave

L'imposizione della libreria standard in \<xkeycheck.h> per le macro che sostituiscono una parola chiave è stata corretta. La libreria ora emette la parola chiave problema effettiva rilevata anziché un messaggio generico. Supporta anche le parole chiave C++20 e non induce IntelliSense a interpretare parole chiave casuali come macro.

### <a name="allocator-types-no-longer-deprecated"></a>Tipi di allocatore non più deprecati

`std::allocator<void>`, `std::allocator::size_type` e `std::allocator::difference_type` non sono più deprecati.

### <a name="correct-warning-for-narrowing-string-conversions"></a>È stato corretto un avviso per la conversione di stringhe a tipi di dati più piccoli

Rimosso un valore **`static_cast`** non corretto da `std::string` che non è stato chiamato da standard e che ha eliminato accidentalmente gli avvisi di restringimento C4244. I tentativi di chiamare `std::string::string(const wchar_t*, const wchar_t*)` ora emettono correttamente C4244 sulla restringimento di un oggetto `wchar_t` in un oggetto `char` .

### <a name="various-fixes-for-filesystem-correctness"></a>Varie correzioni per \<filesystem> correttezza

- Correzione di `std::filesystem::last_write_time` un errore durante il tentativo di modificare l'ora dell'ultima scrittura di una directory.
- Il costruttore `std::filesystem::directory_entry` ora archivia un risultato "non riuscito", anziché generare un'eccezione, quando viene specificato un percorso di destinazione inesistente.
- La versione di `std::filesystem::create_directory` a 2 parametri è stata modificata in modo da chiamare la versione a 1 parametro, poiché la funzione `copy_symlink` sottostante utilizzava `CreateDirectoryExW` quando `existing_p` era un collegamento simbolico.
- `std::filesystem::directory_iterator` non restituisce più un errore quando rileva un collegamento simbolico interrotto.
- `std::filesystem::space` ora accetta i percorsi relativi.
- `std::filesystem::path::lexically_relative` non viene più confuso dalle barre finali, segnalate come [LWG 3096](https://cplusplus.github.io/LWG/issue3096).
- Il rifiuto dei percorsi da parte di `CreateSymbolicLinkW` è stato risolto con barre in `std::filesystem::create_symlink`.
- Aggirare la funzione della modalità di eliminazione POSIX presente `delete` in Windows 10 LTSB 1609, ma non è stato in grado di eliminare i file.
- I `std::boyer_moore_searcher` `std::boyer_moore_horspool_searcher` costruttori di copia e e gli operatori di assegnazione di copia ora effettivamente copiano elementi.

### <a name="parallel-algorithms-on-windows-8-and-later"></a>Algoritmi paralleli in Windows 8 e versioni successive

La libreria di algoritmi paralleli ora usa correttamente la famiglia `WaitOnAddress` reale in Windows 8 e versioni successive, invece di usare sempre la versione Windows 7 e le versioni non autentiche precedenti.

### <a name="stdsystem_categorymessage-whitespace"></a>Spazio vuoto in `std::system_category::message()`

`std::system_category::message()` ora rimuove correttamente gli spazi finali dal messaggio restituito.

### <a name="stdlinear_congruential_engine-divide-by-zero"></a>Divisione per zero in `std::linear_congruential_engine`

Alcune condizioni che causano l'attivazione di una divisione per 0 in `std::linear_congruential_engine` sono state corrette.

### <a name="fixes-for-iterator-unwrapping"></a>Correzioni per la rimozione del wrapping dell'iteratore

Alcuni macchinari per l'annullamento del wrapping degli iteratori sono stati esposti per la prima volta per l'integrazione di utenti programmatore in Visual Studio 2017 15,8. È stato descritto nell'articolo del Blog del team di C++ [funzionalità e correzioni in Visual studio 2017 15,8](https://devblogs.microsoft.com/cppblog/stl-features-and-fixes-in-vs-2017-15-8/). Questo meccanismo non esegue più il wrapping degli iteratori derivati dagli iteratori della libreria standard. Ad esempio un utente che deriva da `std::vector<int>::iterator` e prova a personalizzare il comportamento ora ottiene il comportamento personalizzato quando chiama algoritmi della libreria standard, anziché il comportamento di un puntatore.

La funzione `reserve` del contenitore non ordinato ora esegue correttamente la riserva per N elementi, come descritto in [LWG 2156](https://cplusplus.github.io/LWG/issue2156).

### <a name="time-handling"></a>Gestione del tempo

- In precedenza alcuni valori di ora passati alla libreria di concorrenza registravano overflow, ad esempio `condition_variable::wait_for(seconds::max())`. Il comportamento di questi overflow, ora corretti, cambiava in base a un ciclo apparentemente casuale di 29 giorni (quando si verificava l'overflow di uint32_t millisecondi accettato dalle API Win32 sottostanti).

- L' \<ctime> intestazione ora dichiara correttamente `timespec` e `timespec_get` nello spazio dei nomi `std` e le dichiara anche nello spazio dei nomi globale.

### <a name="various-fixes-for-containers"></a>Varie correzioni per i contenitori

- Molte funzioni del contenitore interno della libreria standard sono state apportate `private` per migliorare l'esperienza di IntelliSense. Altre correzioni per contrassegnare i membri come `private` previsto nelle versioni successive di MSVC.

- Sono stati corretti i problemi di correttezza di sicurezza delle eccezioni che hanno causato il danneggiamento dei contenitori basati su nodi, ad esempio `list` , `map` e `unordered_map` . Durante un' `propagate_on_container_copy_assignment` `propagate_on_container_move_assignment` operazione di riassegnazione o, il nodo sentinel del contenitore viene liberato con l'allocatore precedente, viene eseguita l'assegnazione POCCA/POCMA sull'allocatore precedente e quindi si prova ad acquisire il nodo Sentinel dal nuovo allocatore. Se l'allocazione ha esito negativo, il contenitore è danneggiato. Non è stato possibile eliminarlo, perché il proprietario di un nodo Sentinel è una struttura di dati complessa invariante. Questo codice è stato corretto per creare il nuovo nodo Sentinel usando l'allocatore del contenitore di origine prima di eliminare definitivamente il nodo Sentinel esistente.

- I contenitori sono stati risolti in modo da copiare/spostare/scambiare gli allocatori sempre in base a `propagate_on_container_copy_assignment`, `propagate_on_container_move_assignment`, e `propagate_on_container_swap`, anche per gli allocatori dichiarati `is_always_equal`.

- Sono stati aggiunti gli overload per il merge del contenitore e le funzioni membro Extract che accettano i contenitori rvalue. Per ulteriori informazioni, vedere [P0083 "splicing Maps and sets"](https://wg21.link/p0083r3) .

### <a name="stdbasic_istreamread-processing-of-rn-n"></a>`std::basic_istream::read` elaborazione di `\r\n`` =>` \n '

`std::basic_istream::read` è stato corretto in modo da non scrivere temporaneamente in parti del buffer fornito come parte dell' `\r\n` `\n` elaborazione. In questo modo si rinuncia a una parte del vantaggio acquisito in termini di prestazioni in Visual Studio 2017 15.8 per le letture di dimensioni superiori a 4 KB, ma si registrano miglioramenti dell'efficienza evitando tre chiamate virtuali per ogni carattere.

### <a name="stdbitset-constructor"></a>Costruttore `std::bitset`

Il costruttore `std::bitset` non legge più le cifre uno e zero in ordine inverso per i set di bit di grandi dimensioni.

### <a name="stdpairoperator-regression"></a>Regressione in `std::pair::operator=`

Correzione di una regressione nell' `std::pair` operatore di assegnazione introdotta quando si implementa [LWG 2729 "Missing SFINAE on `std::pair::operator=` ";](https://cplusplus.github.io/LWG/issue2729). Ora accetta di nuovo correttamente i tipi convertibili in `std::pair`.

### <a name="non-deduced-contexts-for-add_const_t"></a>Contesti non dedotti per `add_const_t`

È stato risolto un bug per caratteristiche del tipo minori, dove `add_const_t` e le funzioni correlate devono essere un contesto non dedotto. In altre parole, `add_const_t` deve essere un alias per `typename add_const<T>::type` e non per `const T`.

## <a name="conformance-improvements-in-161"></a><a name="improvements_161"></a> Miglioramenti della conformità in 16,1

### <a name="char8_t"></a>char8_t

[P0482r6](https://wg21.link/p0482r6). C++20 aggiunge un nuovo tipo di carattere usato per rappresentare unità di codice UTF-8. I valori letterali stringa `u8` in C++20 hanno il tipo `const char8_t[N]` invece di `const char[N]` come in precedenza. Sono state proposte modifiche simili per lo standard C in [N2231](https://wg14.link/n2231). I suggerimenti per la **`char8_t`** correzione della compatibilità con le versioni precedenti sono specificati in [P1423r3](https://wg21.link/p1423r3). Il compilatore Microsoft C++ aggiunge il supporto per **`char8_t`** in Visual Studio 2019 versione 16,1 quando si specifica l' **`/Zc:char8_t`** opzione del compilatore. In futuro, sarà supportata con [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) , che può essere ripristinato al comportamento c++ 17 tramite **`/Zc:char8_t-`** . Il compilatore EDG che Powers IntelliSense non lo supporta ancora. È possibile che vengano visualizzati errori di sola IntelliSense non corretti che non influiscono sulla compilazione effettiva.

#### <a name="example"></a>Esempio

```cpp
const char* s = u8"Hello"; // C++17
const char8_t* s = u8"Hello"; // C++20
```

### <a name="stdtype_identity-metafunction-and-stdidentity-function-object"></a>`std::type_identity` MetaFunction e `std::identity` oggetto Function

[Type_identity P0887R1](https://wg21.link/p0887r1). L'estensione del modello di classe `std::identity` deprecata è stata rimossa e sostituita dalla metafunzione `std::type_identity` e dall'oggetto funzione `std::identity` di C++20. Entrambi sono disponibili solo in [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) .

L'esempio seguente produce un avviso di deprecazione C4996 per `std::identity` (definito in \<type_traits> ) in Visual Studio 2017:

```cpp
#include <type_traits>

using T = std::identity<int>::type;
T x, y = std::identity<T>{}(x);
int i = 42;
long j = std::identity<long>{}(i);
```

Nell'esempio seguente viene illustrato come utilizzare il nuovo `std::identity` (definito in \<functional> ) insieme al nuovo `std::type_identity` :

```cpp
#include <type_traits>
#include <functional>

using T = std::type_identity<int>::type;
T x, y = std::identity{}(x);
int i = 42;
long j = static_cast<long>(i);
```

### <a name="syntax-checks-for-generic-lambdas"></a>Controllo della sintassi per espressioni lambda generiche

Il nuovo processore lambda Abilita alcuni controlli sintattici in modalità di conformità nelle espressioni lambda generiche, in [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) o in qualsiasi altra modalità di linguaggio con **`/experimental:newLambdaProcessor`** .

In Visual Studio 2017 questo codice viene compilato senza avvisi, ma in Visual Studio 2019 viene generato l'errore C2760:

```cpp
void f() {
    auto a = [](auto arg) {
        decltype(arg)::Type t; // C2760 syntax error: unexpected token 'identifier', expected ';'
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

[P0846R0](https://wg21.link/p0846r0) (c++ 20) maggiore capacità di trovare i modelli di funzione tramite la ricerca dipendente dall'argomento per le espressioni di chiamata di funzione con argomenti di modello espliciti. Richiede **`/std:c++latest`** .

### <a name="designated-initialization"></a>Inizializzazione designata

[P0329R4](https://wg21.link/p0329r4) (c++ 20) *inizializzazione designata* consente di selezionare membri specifici nell'inizializzazione aggregata usando la `Type t { .member = expr }` sintassi. Richiede **`/std:c++latest`** .

### <a name="new-and-updated-standard-library-functions-c20"></a>Funzioni nuove e aggiornate della libreria standard (C++20)

- `starts_with()` e `ends_with()` per `basic_string` e `basic_string_view`.
- `contains()` per i contenitori associativi.
- `remove()`, `remove_if()` e `unique()` per `list` e `forward_list` ora restituiscono `size_type`.
- `shift_left()` e `shift_right()` aggiunti a \<algorithm>.

## <a name="conformance-improvements-in-162"></a><a name="improvements_162"></a> Miglioramenti della conformità in 16,2

### <a name="noexcept-constexpr-functions"></a>`noexcept``constexpr`funzioni di

**`constexpr`** per impostazione predefinita, le funzioni non vengono più considerate **`noexcept`** se utilizzate in un'espressione costante. Questa modifica del comportamento deriva dalla risoluzione del gruppo di lavoro principale (GLC) [1351](https://wg21.link/cwg1351) ed è abilitata in [`/permissive-`](../build/reference/permissive-standards-conformance.md) . L'esempio seguente viene compilato in Visual Studio 2019 versione 16,1 e versioni precedenti, ma produce C2338 in Visual Studio 2019 versione 16,2:

```cpp
constexpr int f() { return 0; }

int main() {
    static_assert(noexcept(f()), "f should be noexcept"); // C2338 in 16.2
}
```

Per correggere l'errore, aggiungere l' **`noexcept`** espressione alla dichiarazione di funzione:

```cpp
constexpr int f() noexcept { return 0; }

int main() {
    static_assert(noexcept(f()), "f should be noexcept");
}
```

### <a name="binary-expressions-with-different-enum-types"></a>Espressioni binarie con tipi enum diversi

C++ 20 ha deprecato le conversioni aritmetiche consuete negli operandi, in cui:

- Un operando è di tipo enumerazione e

- l'altro è un tipo di enumerazione o un tipo a virgola mobile diverso.

Per ulteriori informazioni, vedere [P1120R0](https://wg21.link/p1120r0).

In Visual Studio 2019 versione 16,2 e successive, il codice seguente produce un avviso di livello 4 quando [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) è abilitata l'opzione del compilatore:

```cpp
enum E1 { a };
enum E2 { b };
int main() {
    int i = a | b; // warning C5054: operator '|': deprecated between enumerations of different types
}
```

Per evitare l'avviso, usare [`static_cast`](../cpp/static-cast-operator.md) per convertire il secondo operando:

```cpp
enum E1 { a };
enum E2 { b };
int main() {
  int i = a | static_cast<int>(b);
}
```

L'uso di un'operazione binaria tra un'enumerazione e un tipo a virgola mobile è ora un avviso quando [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) è abilitata l'opzione del compilatore:

```cpp
enum E1 { a };
int main() {
  double i = a * 1.1;
}
```

Per evitare l'avviso, usare [`static_cast`](../cpp/static-cast-operator.md) per convertire il secondo operando:

```cpp
enum E1 { a };
int main() {
   double i = static_cast<int>(a) * 1.1;
}
```

### <a name="equality-and-relational-comparisons-of-arrays"></a>Uguaglianza e confronti relazionali di matrici

I confronti di uguaglianza e relazionali tra due operandi di tipo matrice sono deprecati in C++ 20 ([P1120R0](https://wg21.link/p1120r0)). In altre parole, un'operazione di confronto tra due matrici (nonostante le analogie di rango ed extent) è ora un avviso. A partire da Visual Studio 2019 versione 16,2, il codice seguente produce C5056 quando [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) è abilitata l'opzione del compilatore:

```cpp
int main() {
    int a[] = { 1, 2, 3 };
    int b[] = { 1, 2, 3 };
    if (a == b) { return 1; } // warning C5056: operator '==': deprecated for array types
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

Per determinare se il contenuto di due matrici è uguale, utilizzare la [`std::equal`](../standard-library/algorithm-functions.md#equal) funzione:

```cpp
std::equal(std::begin(a), std::end(a), std::begin(b), std::end(b));
```

### <a name="effect-of-defining-spaceship-operator-on--and-"></a>Effetto della definizione dell'operatore di spazio su `==` e `!=`

Una definizione dell'operatore di spazio ( **`<=>`** ) da solo non riscriverà più le espressioni che coinvolgono **`==`** o **`!=`** a meno che l'operatore di spaziatura non sia contrassegnato come **`= default`** ([P1185R2](https://wg21.link/p1185r2)). L'esempio seguente viene compilato in Visual Studio 2019 RTW e nella versione 16,1, ma produce C2678 in Visual Studio 2019 versione 16,2:

```cpp
#include <compare>

struct S {
  int a;
  auto operator<=>(const S& rhs) const {
    return a <=> rhs.a;
  }
};
bool eq(const S& lhs, const S& rhs) {
  return lhs == rhs; // error C2676
}
bool neq(const S& lhs, const S& rhs) {
    return lhs != rhs; // error C2676
}
```

Per evitare l'errore, definirlo `operator==` o dichiararlo come valore predefinito:

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

- \<charconv>`to_chars()`con precisione fissa o scientifica. (La precisione generale è attualmente pianificata per 16,4).
- [P0020R6](https://wg21.link/p0020r6): `atomic<float>` , `atomic<double>` , `atomic<long double>`
- [P0463R1](https://wg21.link/p0463r1): endian
- [P0482R6](https://wg21.link/p0482r6): supporto della libreria per `char8_t`
- [P0600R1](https://wg21.link/p0600r1): `[[nodiscard]]` per la libreria STL, parte 1
- [P0653R2](https://wg21.link/p0653r2): `to_address()`
- [P0754R2](https://wg21.link/p0754r2): \<version>
- [P0771R1](https://wg21.link/p0771r1): `noexcept` `std::function` costruttore di spostamento per

### <a name="const-comparators-for-associative-containers"></a>Comparatori const per i contenitori associativi

Il codice per la ricerca e l'inserimento in [`set`](../standard-library/set-class.md) , [`map`](../standard-library/map-class.md) , [`multiset`](../standard-library/multiset-class.md) e [`multimap`](../standard-library/multimap-class.md) è stato Unito per ridurre le dimensioni del codice. Le operazioni di inserimento ora chiamano il confronto minore di su un **`const`** functor di confronto, nello stesso modo in cui le operazioni di ricerca hanno eseguito in precedenza. Il codice seguente viene compilato in Visual Studio 2019 versione 16,1 e versioni precedenti, ma genera C3848 in Visual Studio 2019 versione 16,2:

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

Per evitare l'errore, effettuare l'operatore di confronto **`const`** :

```cpp
struct Comparer  {
   bool operator() (K a, K b) const {
      return a.a < b.a;
   }
};

```

## <a name="conformance-improvements-in-visual-studio-2019-version-163"></a><a name="improvements_163"></a> Miglioramenti della conformità in Visual Studio 2019 versione 16,3

### <a name="stream-extraction-operators-for-char-removed"></a>Operatori di estrazione del flusso per `char*` rimossi

Gli operatori di estrazione dei flussi per puntatore a caratteri sono stati rimossi e sostituiti da operatori di estrazione per la matrice di caratteri (per [P0487R1](https://wg21.link/p0487r1)). WG21 considera unsafe gli overload rimossi. In [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) modalità l'esempio seguente produce ora C2679:

```cpp
// stream_extraction.cpp
// compile by using: cl /std:c++latest stream_extraction.cpp

#include <iostream>
#include <iomanip>

int main() {
    char x[42];
    char* p = x;
    std::cin >> std::setw(42);
    std::cin >> p;  // C2679: binary '>>': no operator found which takes a right-hand operand of type 'char *' (or there is no acceptable conversion)
}
```

Per evitare l'errore, usare l'operatore di estrazione con una `char[]` variabile:

```cpp
#include <iostream>
#include <iomanip>

int main() {
    char x[42];
    std::cin >> std::setw(42);
    std::cin >> x;  // OK
}
```

### <a name="new-keywords-requires-and-concept"></a>Nuove parole chiave `requires` e `concept`

Le nuove parole chiave **`requires`** e **`concept`** sono state aggiunte al compilatore Microsoft C++. Se si tenta di usare uno dei due come identificatore in [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) modalità, il compilatore genererà C2059: "errore di sintassi".

### <a name="constructors-as-type-names-disallowed"></a>Costruttori come nomi di tipi non consentiti

Il compilatore non considera più i nomi dei costruttori come nomi di classe inseriti in questo caso: quando vengono visualizzati in un nome completo dopo un alias di una specializzazione del modello di classe. In precedenza, i costruttori erano utilizzabili come nome di tipo per dichiarare altre entità. L'esempio seguente produce ora C3646:

```cpp
#include <chrono>

class Foo {
   std::chrono::milliseconds::duration TotalDuration{}; // C3646: 'TotalDuration': unknown override specifier
};
```

Per evitare l'errore, dichiarare `TotalDuration` come illustrato di seguito:

```cpp
#include <chrono>

class Foo {
  std::chrono::milliseconds TotalDuration {};
};
```

### <a name="stricter-checking-of-extern-c-functions"></a>Controllo più restrittivo delle `extern "C"` funzioni

Se una **`extern "C"`** funzione è stata dichiarata in spazi dei nomi diversi, le versioni precedenti del compilatore Microsoft C++ non controllano se le dichiarazioni erano compatibili. A partire da Visual Studio 2019 versione 16,3, il compilatore verifica la compatibilità. In [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità il codice seguente genera errori C2371 e C2733:

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
    // C2116: 'N::f': function parameter lists do not match between declarations
    // C2733: 'f': you cannot overload a function with 'extern "C"' linkage
```

Per evitare gli errori nell'esempio precedente, usare **`bool`** anziché in modo `BOOL` coerente in entrambe le dichiarazioni di `f` .

### <a name="standard-library-improvements"></a>Miglioramenti della libreria standard

Le intestazioni non standard \<stdexcpt.h> e \<typeinfo.h> sono state rimosse. Il codice che li include deve invece includere rispettivamente le intestazioni standard \<exception> e \<typeinfo> .

## <a name="conformance-improvements-in-visual-studio-2019-version-164"></a><a name="improvements_164"></a> Miglioramenti della conformità in Visual Studio 2019 versione 16,4

### <a name="better-enforcement-of-two-phase-name-lookup-for-qualified-ids-in-permissive-"></a>Miglioramento dell'applicazione della ricerca del nome in due fasi per gli ID qualificati in `/permissive-`

La ricerca del nome in due fasi richiede che i nomi non dipendenti usati nel corpo di modelli siano visibili per il modello in fase di definizione. In precedenza, tali nomi potrebbero essere stati trovati quando viene creata un'istanza del modello. Questa modifica rende più semplice la scrittura di codice portabile e conforme in MSVC sotto il [`/permissive-`](../build/reference/permissive-standards-conformance.md) flag.

In Visual Studio 2019 versione 16,4 con il **`/permissive-`**  flag impostato l'esempio seguente genera un errore, perché `N::f` non è visibile quando `f<T>` viene definito il modello:

```cpp
template <class T>
int f() {
    return N::f() + T{}; // error C2039: 'f': is not a member of 'N'
}

namespace N {
    int f() { return 42; }
}
```

In genere, questo errore può essere corretto includendo le intestazioni mancanti o le funzioni o le variabili di dichiarazione in diretta, come illustrato nell'esempio seguente:

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

Il compilatore MSVC ora implementa [GLC Issue 903](https://wg21.link/cwg903) in modalità di conformità ( **`/permissive-`** ). Questa regola impedisce la conversione implicita di espressioni costanti integrali (ad eccezione del valore letterale integer ' 0') in costanti puntatore null. L'esempio seguente produce C2440 in modalità di conformità:

```cpp
int* f(bool* p) {
    p = false; // error C2440: '=': cannot convert from 'bool' to 'bool *'
    p = 0; // OK
    return false; // error C2440: 'return': cannot convert from 'bool' to 'int *'
}
```

Per correggere l'errore, usare **`nullptr`** anziché **`false`** . È ancora consentito un valore letterale 0:

```cpp
int* f(bool* p) {
    p = nullptr; // OK
    p = 0; // OK
    return nullptr; // OK
}
```

### <a name="standard-rules-for-types-of-integer-literals"></a>Regole standard per i tipi di valori letterali integer

In modalità di conformità (abilitata da [`/permissive-`](../build/reference/permissive-standards-conformance.md) ), MSVC usa le regole standard per i tipi di valori letterali integer. Valori letterali decimali troppo grandi per essere contenuti in un **`signed int`** tipo precedentemente specificato **`unsigned int`** . A questo punto, a tali valori letterali viene assegnato il successivo **`signed`** tipo integer più grande, **`long long`** . Inoltre, i valori letterali con suffisso ' s'troppo grande per adattarsi a un **`signed`** tipo sono assegnati al tipo **`unsigned long long`** .

Questa modifica può causare la generazione di diversi tipi di diagnostica di avviso e differenze di comportamento per le operazioni aritmetiche sui valori letterali.

Nell'esempio seguente viene illustrato il nuovo comportamento in Visual Studio 2019 versione 16,4. La `i` variabile è ora di tipo **`unsigned int`** . Questo è il motivo per cui viene generato l'avviso. I bit di ordine superiore della variabile `j` sono impostati su 0.

```cpp
void f(int r) {
    int i = 2964557531; // warning C4309: truncation of constant value
    long long j = 0x8000000000000000ll >> r; // literal is now unsigned, shift will fill high-order bits with 0
}
```

Nell'esempio seguente viene illustrato come conservare il comportamento precedente ed evitare gli avvisi e la modifica del comportamento in fase di esecuzione:

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

In conformità con la sottoclausola *meta. rqmts* dello standard, il compilatore MSVC genera ora un errore quando trova una specializzazione definita dall'utente di uno dei `type_traits` modelli specificati nello `std` spazio dei nomi. Se non diversamente specificato, le specializzazioni generano un comportamento non definito. Nell'esempio seguente è presente un comportamento non definito perché viola la regola e l'oggetto ha **`static_assert`** esito negativo con errore C2338.

```cpp
#include <type_traits>
struct S;

template<>
struct std::is_fundamental<S> : std::true_type {};

static_assert(std::is_fundamental<S>::value, "fail");
```

Per evitare l'errore, definire uno struct che erediti dall'oggetto preferito `type_trait` e specializzarlo:

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

Il compilatore MSVC implementa ora le seguenti modifiche agli operatori di confronto per [P1630R1](https://wg21.link/p1630r1) quando l' [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) opzione è abilitata:

Il compilatore non riscrive più le espressioni usando `operator==` se coinvolgono un tipo restituito che non è un **`bool`** . Il codice seguente genera ora l'errore C2088:

```cpp
struct U {
    operator bool() const;
};

struct S {
    U operator==(const S&) const;
};

bool neq(const S& lhs, const S& rhs) {
    return lhs != rhs;  // C2088: '!=': illegal for struct
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

Il compilatore non definisce più un operatore di confronto predefinito se è un membro di una classe di tipo Unione. L'esempio seguente genera ora l'errore C2120:

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

Il compilatore non definirà più un operatore di confronto predefinito se la classe contiene un membro di riferimento. Il codice seguente genera ora l'errore C2120:

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

## <a name="conformance-improvements-in-visual-studio-2019-version-165"></a><a name="improvements_165"></a> Miglioramenti della conformità in Visual Studio 2019 versione 16,5

### <a name="explicit-specialization-declaration-without-an-initializer-isnt-a-definition"></a>La dichiarazione di specializzazione esplicita senza un inizializzatore non è una definizione

In `/permissive-` , MSVC ora impone una regola standard che le dichiarazioni di specializzazione esplicite senza inizializzatori non sono definizioni. In precedenza, la dichiarazione verrebbe considerata una definizione con un inizializzatore predefinito. L'effetto è osservabile in fase di collegamento, perché un programma a seconda di questo comportamento potrebbe ora avere simboli non risolti. Questo esempio genera ora un errore:

```cpp
template <typename> struct S {
    static int a;
};

// In permissive-, this declaration isn't a definition, and the program won't link.
template <> int S<char>::a;

int main() {
    return S<char>::a;
}
```

```Output
error LNK2019: unresolved external symbol "public: static int S<char>::a" (?a@?$S@D@@2HA) referenced in function _main at link time.
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

Il preprocessore sperimentale conserva ora le nuove righe e gli spazi vuoti quando si usa **`/P`** o **`/E`** con **`/experimental:preprocessor`** .

Dato questo esempio di origine,

```cpp
#define m()
line m(
) line
```

L'output precedente di **`/E`** era:

```Output
line line
#line 2
```

Il nuovo output di **`/E`** è ora:

```Output
line
 line
```

### <a name="import-and-module-keywords-are-context-dependent"></a>`import` le `module` parole chiave e sono dipendenti dal contesto

Per [P1857R1](https://wg21.link/P1857R1) `import` e `module` le direttive per il preprocessore presentano nuove restrizioni sulla sintassi. Questo esempio non viene più compilato:

```cpp
import // Invalid
m;     // error C2146: syntax error: missing ';' before identifier 'm'
```

Per risolvere il problema, Mantieni l'importazione nella stessa riga:

```cpp
import m; // OK
```

### <a name="removal-of-stdweak_equality-and-stdstrong_equality"></a>Rimozione di `std::weak_equality` e `std::strong_equality`

L'Unione di [P1959R0](https://wg21.link/P1959R0) richiede al compilatore di rimuovere il comportamento e i riferimenti `std::weak_equality` ai `std::strong_equality` tipi e.

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

In precedenza, le variabili locali di thread nelle dll non venivano inizializzate correttamente. Ad eccezione del thread che ha caricato la DLL, questi non sono stati inizializzati prima del primo utilizzo nei thread esistenti prima del caricamento della DLL. Questo difetto è stato ora corretto. Le variabili locali di thread in una DLL di questo tipo vengono inizializzate immediatamente prima del primo utilizzo su tali thread.

Questo nuovo comportamento di test per l'inizializzazione su utilizzi di variabili locali di thread può essere disabilitato usando l' **`/Zc:tlsGuards-`** opzione del compilatore. In alternativa, aggiungendo l' `[[msvc:no_tls_guard]]` attributo a determinate variabili locali del thread.

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

## <a name="conformance-improvements-in-visual-studio-2019-version-166"></a><a name="improvements_166"></a> Miglioramenti della conformità in Visual Studio 2019 versione 16,6

### <a name="standard-library-streams-reject-insertions-of-mis-encoded-character-types"></a>I flussi di libreria standard rifiutano gli inserimenti di tipi di carattere con codifica mis

Tradizionalmente, inserendo un oggetto **`wchar_t`** in un oggetto `std::ostream` e inserendo **`char16_t`** o **`char32_t`** in un oggetto `std::ostream` o `std::wostream` , restituisce il valore integrale. L'inserimento di puntatori a questi tipi di caratteri restituisce il valore del puntatore. I programmatori non trovano un caso intuitivo. Spesso si aspettano che la libreria standard transcodifichi invece il carattere o la stringa di caratteri con terminazione null e per restituire il risultato.

La proposta [P1423R3](https://wg21.link/p1423r3) di c++ 20 aggiunge gli overload degli operatori di inserimento del flusso eliminati per queste combinazioni di tipi di puntatore a flussi e caratteri o caratteri. In **`/std:c++latest`** gli overload rendono tali inserimenti in formato non valido, anziché comportarsi in quanto probabilmente è un modo imprevisto. Il compilatore genera l'errore C2280 quando ne viene trovato uno. È possibile definire la macro "tratteggio di escape" `_HAS_STREAM_INSERTION_OPERATORS_DELETED_IN_CXX20` per `1` ripristinare il comportamento precedente. La proposta elimina anche gli operatori di inserimento del flusso per **`char8_t`** . La libreria standard ha implementato Overload simili quando **`char8_t`** è stato aggiunto il supporto, quindi il comportamento "errato" non è mai stato disponibile per **`char8_t`** .

Questo esempio illustra il comportamento con questa modifica:

```cpp
#include <iostream>
int main() {
    const wchar_t cw = L'x', *pw = L"meow";
    const char16_t c16 = u'x', *p16 = u"meow";
    const char32_t c32 = U'x', *p32 = U"meow";
    std::cout << cw << ' ' << pw << '\n';
    std::cout << c16 << ' ' << p16 << '\n';
    std::cout << c32 << ' ' << p32 << '\n';
    std::wcout << c16 << ' ' << p16 << '\n';
    std::wcout << c32 << ' ' << p32 << '\n';
}
```

Il codice ora produce questi messaggi di diagnostica:

```Output
error C2280: 'std::basic_ostream<char,std::char_traits<char>> &std::<<<std::char_traits<char>>(std::basic_ostream<char,std::char_traits<char>> &,wchar_t)': attempting to reference a deleted function
error C2280: 'std::basic_ostream<char,std::char_traits<char>> &std::<<<std::char_traits<char>>(std::basic_ostream<char,std::char_traits<char>> &,char16_t)': attempting to reference a deleted function
error C2280: 'std::basic_ostream<char,std::char_traits<char>> &std::<<<std::char_traits<char>>(std::basic_ostream<char,std::char_traits<char>> &,char32_t)': attempting to reference a deleted function
error C2280: 'std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &std::<<<std::char_traits<wchar_t>>(std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &,char16_t)': attempting to reference a deleted function
error C2280: 'std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &std::<<<std::char_traits<wchar_t>>(std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &,char32_t)': attempting to reference a deleted function
```

È possibile ottenere l'effetto del vecchio comportamento in tutte le modalità di linguaggio convertendo i tipi di carattere in **`unsigned int`** o i tipi di puntatore a carattere in `const void*` :

```c++
#include <iostream>
int main() {
    const wchar_t cw = L'x', *pw = L"meow";
    const char16_t c16 = u'x', *p16 = u"meow";
    const char32_t c32 = U'x', *p32 = U"meow";
    std::cout << (unsigned)cw << ' ' << (const void*)pw << '\n'; // Outputs "120 0052B1C0"
    std::cout << (unsigned)c16 << ' ' << (const void*)p16 << '\n'; // Outputs "120 0052B1CC"
    std::cout << (unsigned)c32 << ' ' << (const void*)p32 << '\n'; // Outputs "120 0052B1D8"
    std::wcout << (unsigned)c16 << ' ' << (const void*)p16 << '\n'; // Outputs "120 0052B1CC"
    std::wcout << (unsigned)c32 << ' ' << (const void*)p32 << '\n'; // Outputs "120 0052B1D8"
}
```

### <a name="changed-return-type-of-stdpow-for-stdcomplex"></a>Modificato tipo restituito di `std::pow()` per `std::complex`

In precedenza, l'implementazione di MSVC delle regole di promozione per il tipo restituito del modello di funzione non `std::pow()` era corretta. Ad esempio, restituito in precedenza `pow(complex<float>, int)` `complex<float>` . Ora restituisce correttamente `complex<double>` . La correzione è stata implementata in modo incondizionato per tutte le modalità standard in Visual Studio 2019 versione 16,6.

Questa modifica può causare errori del compilatore. Ad esempio, in precedenza era possibile moltiplicare per `pow(complex<float>, int)` un **`float`** . Poiché `complex<T> operator*` prevede argomenti dello stesso tipo, l'esempio seguente genera ora l'errore del compilatore C2676:

```cpp
// pow_error.cpp
// compile by using: cl /EHsc /nologo /W4 pow_error.cpp
#include <complex>

int main() {
    std::complex<float> cf(2.0f, 0.0f);
    (void) (std::pow(cf, -1) * 3.0f);
}
```

```Output
pow_error.cpp(7): error C2676: binary '*': 'std::complex<double>' does not define this operator or a conversion to a type acceptable to the predefined operator
```

Sono disponibili molte correzioni possibili:

- Modificare il tipo di **`float`** multiplicand in **`double`** . Questo argomento può essere convertito direttamente in un oggetto `complex<double>` in modo che corrisponda al tipo restituito da `pow` .

- Limitare il risultato di `pow` a `complex<float>` affermando `complex<float>{pow(ARG, ARG)}` . È quindi possibile continuare a moltiplicare per un **`float`** valore.

- Passare **`float`** anziché **`int`** a `pow` . Questa operazione potrebbe essere più lenta.

- In alcuni casi, è possibile evitare `pow` completamente. Ad esempio, `pow(cf, -1)` può essere sostituito da divisione.

### <a name="switch-related-warnings-for-c"></a>Avvisi relativi al cambio per C

A partire da Visual Studio 2019 versione 16,6, il compilatore implementa alcuni avvisi C++ preesistenti per il codice compilato come C. Gli avvisi seguenti sono ora abilitati a livelli diversi: C4060, C4061, C4062, C4063, C4064, C4065, C4808 e C4809. Gli avvisi C4065 e C4060 sono disabilitati per impostazione predefinita in C.

Gli avvisi vengono attivati in **`case`** caso di istruzioni mancanti, indefinite **`enum`** e **`bool`** commutatori non validi (ovvero quelli che contengono troppi casi). Ad esempio:

```c
#include <stdbool.h>

int main() {
    bool b = true;
    switch (b) {
        case true: break;
        case false: break;
        default: break; // C4809: switch statement has redundant 'default' label;
                        // all possible 'case' labels are given
    }
}
```

Per correggere questo codice, rimuovere il caso ridondante **`default`** :

```c
#include <stdbool.h>

int main() {
    bool b = true;
    switch (b) {
        case true: break;
        case false: break;
    }
}
```

### <a name="unnamed-classes-in-typedef-declarations"></a>Classi senza nome nelle `typedef` dichiarazioni

A partire da Visual Studio 2019 versione 16,6, il comportamento delle **`typedef`** dichiarazioni è stato limitato alla conformità a [P1766R1](https://wg21.link/P1766R1). Con questo aggiornamento, le classi senza nome all'interno di una **`typedef`** dichiarazione non possono avere membri diversi da:

- membri dati non statici,
- classi membro,
- enumerazioni di membri,
- e inizializzatori di membri predefiniti.

Le stesse restrizioni vengono applicate in modo ricorsivo a ogni classe annidata. La restrizione ha lo scopo di garantire la semplicità degli struct con **`typedef`** nomi a scopo di collegamento. Devono essere abbastanza semplici che non sono necessari calcoli di collegamento prima che il compilatore ottenga il **`typedef`** nome per il collegamento.

Questa modifica ha effetto su tutte le modalità degli standard del compilatore. Nelle modalità default ( **`/std:c++14`** ) e  **`/std:c++17`** , il compilatore genera un avviso C5208 per il codice non conforme. Se **`/permissive-`** si specifica, il compilatore genera l'avviso C5208 come errore in **`/std:c++14`** e genera C7626 di errore in **`/std:c++17`** . Il compilatore genera l'errore C7626 per il codice non conforme quando **`/std:c++latest`** si specifica.

Nell'esempio seguente vengono illustrati i costrutti che non sono più consentiti in struct senza nome. A seconda della modalità standard specificata, vengono generati errori o avvisi di C5208 o C7626:

```cpp
struct B { };
typedef struct : B { // inheriting from 'B'; ill-formed
    void f(); // ill-formed
    static int i; // ill-formed
    struct U {
        void f(); // nested class has non-data member; ill-formed
    };
    int j = 10; // default member initializer; ill-formed
} S;
```

Il codice precedente può essere corretto assegnando al nome della classe senza nome:

```cpp
struct B { };
typedef struct S_ : B {
    void f();
    static int i;
    struct U {
        void f();
    };
    int j = 10;
} S;
```

### <a name="default-argument-import-in-ccli"></a>Importazione di argomenti predefiniti in C++/CLI

Un numero crescente di API ha argomenti predefiniti in .NET Core. Ecco perché ora è supportata l'importazione di argomenti predefiniti in C++/CLI. Questa modifica può interrompere il codice esistente in cui vengono dichiarati più overload, come in questo esempio:

```cpp
public class R {
    public void Func(string s) {}   // overload 1
    public void Func(string s, string s2 = "") {} // overload 2;
}
```

Quando questa classe viene importata in C++/CLI, una chiamata a uno degli overload genera un errore:

```cpp
    (gcnew R)->Func("abc"); // error C2668: 'R::Func' ambiguous call to overloaded function
```

Il compilatore genera l'errore C2668 perché entrambi gli overload corrispondono a questo elenco di argomenti. Nel secondo overload, il secondo argomento viene compilato dall'argomento predefinito. Per ovviare a questo problema, è possibile eliminare l'overload ridondante (1). In alternativa, usare l'elenco completo di argomenti e fornire in modo esplicito gli argomenti predefiniti.

## <a name="conformance-improvements-in-visual-studio-2019-version-167"></a><a name="improvements_167"></a> Miglioramenti della conformità in Visual Studio 2019 versione 16,7

### <a name="is-trivially-copyable-definition"></a>definizione facilmente *copiabile*

C++ 20 modifica la definizione di *è facilmente copiabile*. Quando una classe dispone di un membro dati non statico con **`volatile`** tipo qualificato, non implica più che un costruttore di copia o di spostamento generato dal compilatore o un operatore di assegnazione di copia o spostamento non sia semplice. Il Comitato standard C++ ha applicato questa modifica in modo retroattivo come report di errore. In MSVC il comportamento del compilatore non cambia in modalità di linguaggio diverse, ad esempio **`/std:c++14`** o **`/std:c++latest`** .

Di seguito è riportato un esempio del nuovo comportamento:

```cpp
#include <type_traits>

struct S
{
    volatile int m;
};

static_assert(std::is_trivially_copyable_v<S>, "Meow!");
```

Questo codice non viene compilato nelle versioni di MSVC prima di Visual Studio 2019 versione 16,7. È presente un avviso del compilatore disabilitato per impostazione predefinita che è possibile usare per rilevare questa modifica. Se si compila il codice precedente usando **`cl /W4 /w45220`** , verrà visualizzato l'avviso seguente:

```Output
warning C5220: `'S::m': a non-static data member with a volatile qualified type no longer implies that compiler generated copy/move constructors and copy/move assignment operators are non trivial`
```

### <a name="pointer-to-member-and-string-literal-conversions-to-bool-are-narrowing"></a>Le conversioni da puntatore a membro e valori letterali stringa in `bool` sono più strette

Il Comitato standard C++ ha adottato recentemente il report sui difetti [P1957R2](https://wg21.link/p1957r2), che considera `T*` **`bool`** come una conversione verso un tipo di caratteri più piccolo. MSVC ha risolto un bug nell'implementazione, che in precedenza veniva diagnosticato `T*` **`bool`** come Narrowing, ma non ha diagnosticato la conversione di un valore letterale stringa in **`bool`** o da un puntatore a membro a **`bool`** .

Il programma seguente non è stato formattato in Visual Studio 2019 versione 16,7:

```cpp
struct X { bool b; };
void f(X);

int main() {
    f(X { "whoops?" }); // error: conversion from 'const char [8]' to 'bool' requires a narrowing conversion

    int (X::* p) = nullptr;
    f(X { p }); // error: conversion from 'int X::*' to 'bool' requires a narrowing conversion
}
```

Per correggere questo codice, aggiungere confronti espliciti a **`nullptr`** o evitare contesti in cui le conversioni verso un tipo di testo più piccolo sono in formato non valido:

```cpp
struct X { bool b; };
void f(X);

int main() {
    f(X { "whoops?" != nullptr }); // Absurd, but OK

    int (X::* p) = nullptr;
    f(X { p != nullptr }); // OK
}
```

### <a name="nullptr_t-is-only-convertible-to-bool-as-a-direct-initialization"></a>`nullptr_t` è convertibile solo in `bool` come inizializzazione diretta

In C++ 11, **`nullptr`** è convertibile solo in **`bool`** come *conversione diretta*. ad esempio, quando si Inizializza un oggetto **`bool`** usando un elenco di inizializzatori tra parentesi graffe. Questa restrizione non è mai stata applicata da MSVC. MSVC implementa ora la regola in [`/permissive-`](../build/reference/permissive-standards-conformance.md) . Le conversioni implicite vengono ora diagnosticate come in formato non valido. Una conversione contestuale a **`bool`** è ancora consentita perché l'inizializzazione diretta `bool b(nullptr)` è valida.

Nella maggior parte dei casi, l'errore può essere risolto sostituendo **`nullptr`** con **`false`** , come illustrato nell'esempio seguente:

```cpp
struct S { bool b; };
void g(bool);
bool h() { return nullptr; } // error, should be 'return false;'

int main() {
    bool b1 = nullptr; // error: cannot convert from 'nullptr' to 'bool'
    S s { nullptr }; // error: cannot convert from 'nullptr' to 'bool'
    g(nullptr); // error: cannot convert argument 1 from 'nullptr' to 'bool'

    bool b2 { nullptr }; // OK: Direct-initialization
    if (!nullptr) {} // OK: Contextual conversion to bool
}
```

### <a name="conforming-initialization-behavior-for-array-initializations-with-missing-initializers"></a>Conformità del comportamento di inizializzazione per le inizializzazioni di matrici con inizializzatori mancanti

In precedenza, MSVC aveva un comportamento non conforme per le inizializzazioni di matrici con inizializzatori mancanti. MSVC ha sempre chiamato il costruttore predefinito per ogni elemento della matrice che non disponeva di un inizializzatore. Il comportamento standard prevede l'inizializzazione di ogni elemento con una parentesi graffa vuota ( **`{}`** ). Il contesto di inizializzazione per un elenco di inizializzatori di parentesi graffe vuoto è l'inizializzazione di copia, che non consente chiamate a costruttori espliciti. Potrebbero inoltre essere presenti differenze di runtime, perché l'utilizzo di `{}` per inizializzare può chiamare un costruttore che accetta `std::initializer_list` , anziché il costruttore predefinito. Il comportamento conforme è abilitato in [`/permissive-`](../build/reference/permissive-standards-conformance.md) .

Di seguito è riportato un esempio del comportamento modificato:

```cpp
struct B {
    explicit B() {}
};

void f() {
    B b1[1]{}; // Error in /permissive-, because aggregate init calls explicit ctor
    B b2[1]; // OK: calls default ctor for each array element
}
```

### <a name="initialization-of-class-members-with-overloaded-names-is-correctly-sequenced"></a>L'inizializzazione dei membri della classe con nomi in overload è correttamente sequenziata

È stato identificato un bug nella rappresentazione interna dei membri dati della classe quando anche un nome di tipo viene sottoposto a overload come nome di un membro dati. Questo bug ha causato incoerenze nell'inizializzazione aggregata e nell'ordine di inizializzazione del membro. Il codice di inizializzazione generato è ora corretto. Tuttavia, questa modifica può causare errori o avvisi nell'origine che si basano inavvertitamente sui membri ordinati in modo errato, come in questo esempio:

```cpp
// Compiling with /w15038 now gives:
// warning C5038: data member 'Outer::Inner' will be initialized after data member 'Outer::v'
struct Outer {
    Outer(int i, int j) : Inner{ i }, v{ j } {}

    struct Inner { int x; };
    int v;
    Inner Inner; // 'Inner' is both a type name and data member name in the same scope
};
```

Nelle versioni precedenti il costruttore inizializza erroneamente il membro dati `Inner` prima del membro dati `v` . (Lo standard C++ richiede un ordine di inizializzazione identico all'ordine di dichiarazione dei membri). Ora che il codice generato segue lo standard, il membro-init-list non è in ordine. Il compilatore genera un avviso per questo esempio. Per risolvere il problema, riordinare l'elenco di inizializzatori di membro per riflettere l'ordine di dichiarazione.

### <a name="overload-resolution-involving-integral-overloads-and-long-arguments"></a>Risoluzione dell'overload che include overload integrali e `long` argomenti

Lo standard C++ richiede la classificazione **`long`** a per la **`int`** conversione come conversione standard. I compilatori MSVC precedenti non vengono classificati erroneamente come innalzamento di livello integrale, per la risoluzione dell'overload. Questo rango può causare la risoluzione corretta della risoluzione dell'overload quando deve essere considerato ambiguo.

Il compilatore ora considera il rango correttamente in [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità. Il codice non valido viene diagnosticato correttamente, come in questo esempio:

```cpp
void f(long long);
void f(int);

int main() {
    long x {};
    f(x); // error: 'f': ambiguous call to overloaded function
    f(static_cast<int>(x)); // OK
}
```

È possibile risolvere questo problema in diversi modi:

- Nel sito di chiamata, modificare il tipo dell'argomento passato in **`int`** . È possibile modificare il tipo di variabile oppure eseguirne il cast.

- Se sono presenti molti siti di chiamata, è possibile aggiungere un altro overload che accetta un **`long`** argomento. In questa funzione, eseguire il cast e l'invio dell'argomento all' **`int`** Overload.

### <a name="use-of-undefined-variable-with-internal-linkage"></a>Uso di una variabile non definita con collegamento interno

Le versioni di MSVC precedenti a Visual Studio 2019 versione 16,7 accettano l'uso di una variabile dichiarata **`extern`** con collegamento interno e non è stata definita. Tali variabili non possono essere definite in un'altra unità di conversione e non possono formare un programma valido. Il compilatore ora esegue la diagnosi del caso in fase di compilazione. L'errore è simile all'errore per le funzioni statiche non definite.

```cpp
namespace {
    extern int x; // Not a definition, but has internal linkage because of the anonymous namespace
}

int main()
{
    return x; // Use of 'x' that no other translation unit can possibly define.
}
```

Questo programma è stato precedentemente compilato e collegato in modo non corretto, ma ora genera un errore C7631.

```Output
error C7631: '`anonymous-namespace'::x': variable with internal linkage declared but not defined
```

Tali variabili devono essere definite nella stessa unità di conversione in cui sono usate. È ad esempio possibile specificare un inizializzatore esplicito o una definizione separata.

### <a name="type-completeness-and-derived-to-base-pointer-conversions"></a>Completezza dei tipi e conversioni di puntatori da derivato a base

Negli standard C++ precedenti a C++ 20, una conversione da una classe derivata a una classe di base non richiedeva che la classe derivata fosse un tipo di classe completo. Il Comitato standard C++ ha approvato una modifica del rapporto di difetto retroattiva applicabile a tutte le versioni del linguaggio C++. Questa modifica allinea il processo di conversione con tratti di tipo, ad esempio `std::is_base_of` , che richiedono che la classe derivata sia un tipo di classe completo.

Ecco un esempio:

```cpp
template<typename A, typename B>
struct check_derived_from
{
    static A a;
    static constexpr B* p = &a;
};

struct W { };
struct X { };
struct Y { };

// With this change this code will fail as Z1 is not a complete class type
struct Z1 : X, check_derived_from<Z1, X>
{
};

// This code failed before and it will still fail after this change
struct Z2 : check_derived_from<Z2, Y>, Y
{
};

// With this change this code will fail as Z3 is not a complete class type
struct Z3 : W
{
    check_derived_from<Z3, W> cdf;
};
```

Questa modifica del comportamento si applica a tutte le modalità del linguaggio C++ di MSVC, non solo **`/std:c++latest`** .

### <a name="narrowing-conversions-are-more-consistently-diagnosed"></a>Le conversioni verso un tipo di restringimento vengono diagnosticate in modo più coerente

MSVC genera un avviso per la riduzione delle conversioni in un inizializzatore di elenco con parentesi graffe. In precedenza, il compilatore non avrebbe diagnosticato le conversioni verso un tipo di elemento più piccolo, da **`enum`** tipi sottostanti più grandi a tipi integrali più stretti. Il compilatore considera erroneamente una promozione integrale anziché una conversione. Se la conversione verso un tipo di restringimento è intenzionale, è possibile evitare l'avviso utilizzando un oggetto **`static_cast`** sull'argomento dell'inizializzatore. In alternativa, scegliere un tipo integrale di destinazione più grande.

Di seguito è riportato un esempio di utilizzo di un oggetto esplicito **`static_cast`** per risolvere l'avviso:

```cpp
enum E : long long { e1 };
struct S { int i; };

void f(E e) {
    S s = { e }; // warning: conversion from 'E' to 'int' requires a narrowing conversion
    S s1 = { static_cast<int>(e) }; // Suppress warning with explicit conversion
}
```

## <a name="conformance-improvements-in-visual-studio-2019-version-168"></a><a name="improvements_168"></a> Miglioramenti della conformità in Visual Studio 2019 versione 16,8

### <a name="class-rvalue-used-as-lvalue-extension"></a>"Classe rvalue utilizzata come estensione lvalue"

MSVC dispone di un'estensione che consente l'utilizzo di una classe rvalue come lvalue. L'estensione non estende la durata della classe rvalue e può causare un comportamento non definito in fase di esecuzione. A questo punto viene applicata la regola standard e non è consentita questa estensione **`/permissive-`** .
Se non è ancora possibile usare **`/permissive-`** , è possibile usare **`/we4238`** per impedire esplicitamente l'estensione. Ecco un esempio:

```cpp
// Compiling with /permissive- now gives:
// error C2102: '&' requires l-value
struct S {};

S f();

void g()
{
    auto p1 = &(f()); // The temporary returned by 'f' is destructed after this statement. So 'p1' points to an invalid object.

    const auto &r = f(); // This extends the lifetime of the temporary returned by 'f'
    auto p2 = &r; // 'p2' points to a valid object
}
```

### <a name="explicit-specialization-in-non-namespace-scope-extension"></a>"Specializzazione esplicita nell'estensione dell'ambito non dello spazio dei nomi"

MSVC aveva un'estensione che consentiva la specializzazione esplicita nell'ambito non dello spazio dei nomi. Ora è parte dello standard, dopo la risoluzione di GLC 727. Tuttavia, esistono differenze di comportamento. Il comportamento del compilatore è stato modificato in modo da essere allineato allo standard.

```cpp
// Compiling with 'cl a.cpp b.cpp /permissive-' now gives:
//   error LNK2005: "public: void __thiscall S::f<int>(int)" (??$f@H@S@@QAEXH@Z) already defined in a.obj
// To fix the linker error,
// 1. Mark the explicit specialization with 'inline' explicitly. Or,
// 2. Move its definition to a source file.

// common.h
struct S {
    template<typename T> void f(T);
    template<> void f(int);
};

// This explicit specialization is implicitly inline in the default mode.
template<> void S::f(int) {}

// a.cpp
#include "common.h"

int main() {}

// b.cpp
#include "common.h"
```

### <a name="checking-for-abstract-class-types"></a>Controllo dei tipi di classi astratte

Lo standard C++ 20 ha modificato i compilatori di processo usati per rilevare l'uso di un tipo di classe astratta come parametro di funzione. In particolare, non è più un errore SFINAE. In precedenza, se il compilatore ha rilevato che una specializzazione di un modello di funzione avrebbe un'istanza del tipo di classe astratta come parametro di funzione, la specializzazione verrebbe considerata non corretta. Non verrà aggiunto al set di funzioni candidate valide. In C++ 20, il controllo di un parametro di tipo classe astratta non si verifica finché non viene chiamata la funzione. L'effetto è che il codice usato per la compilazione non provocherà un errore. Ecco un esempio:

```cpp
class Node {
public:
    int index() const;
};

class String : public Node {
public:
    virtual int size() const = 0;
};

class Identifier : public Node {
public:
    const String& string() const;
};

template<typename T>
int compare(T x, T y)
{
    return x < y ? -1 : (x > y ? 1 : 0);
}

int compare(const Node& x, const Node& y)
{
    return compare(x.index(), y.index());
}

int f(const Identifier& x, const String& y)
{
    return compare(x.string(), y);
}
```

In precedenza, la chiamata a `compare` avrebbe tentato di specializzare il modello di funzione utilizzando `compare` un `String` argomento di modello per `T` . Non è possibile generare una specializzazione valida perché `String` è una classe astratta. L'unico candidato valido sarebbe stato `compare(const Node&, const Node&)` . Tuttavia, in C++ 20 il controllo per il tipo di classe astratta non si verifica finché non viene chiamata la funzione. Quindi, la specializzazione `compare(String, String)` viene aggiunta al set di candidati validi e viene scelta come migliore candidato perché la conversione da `const String&` a `String` è una sequenza di conversione migliore rispetto alla conversione da `const String&` a `const Node&` .

In C++ 20, una possibile correzione per questo esempio consiste nell'utilizzare i concetti; ovvero modificare la definizione di `compare` in:

```cpp
template<typename T>
int compare(T x, T y) requires !std::is_abstract_v<T>
{
    return x < y ? -1 : (x > y ? 1 : 0);
}
```

In alternativa, se i concetti di C++ non sono disponibili, è possibile eseguire il fallback a SFINAE:

```cpp
template<typename T, std::enable_if_t<!std::is_abstract_v<T>, int> = 0>
int compare(T x, T y)
{
    return x < y ? -1 : (x > y ? 1 : 0);
}
```

### <a name="support-for-p0960r3---allow-initializing-aggregates-from-a-parenthesized-list-of-values"></a>Supporto per P0960R3: consente l'inizializzazione delle aggregazioni da un elenco di valori tra parentesi

C++ 20 [P0960R3](https://wg21.link/P0960R3) aggiunge il supporto per inizializzare un'aggregazione usando un elenco di inizializzatori tra parentesi. Il codice seguente, ad esempio, è valido in C++ 20:

```cpp
struct S {
    int i;
    int j;
};

S s(1, 2);
```

La maggior parte di questa funzionalità è additiva, ovvero il codice ora compila che non è stato compilato in precedenza. Tuttavia, modifica il comportamento di `std::is_constructible` . In modalità C++ 17 questa operazione **`static_assert`** ha esito negativo, ma in modalità c++ 20 ha esito positivo:

```cpp
static_assert(std::is_constructible_v<S, int, int>, "Assertion failed!");
```

Se si usa questo tratto di tipo per il controllo della risoluzione dell'overload, può comportare una modifica del comportamento tra C++ 17 e C++ 20.

### <a name="overload-resolution-involving-function-templates"></a>Risoluzione dell'overload che interessa i modelli di funzione

In precedenza, il compilatore consentiva la compilazione di codice con **`/permissive-`** che non deve essere compilato. L'effetto è stato, il compilatore ha chiamato la funzione sbagliata che ha provocato una modifica nel comportamento di runtime:

```cpp
int f(int);

namespace N
{
    using ::f;
    template<typename T>
    T f(T);
}

template<typename T>
void g(T&& t)
{
}

void h()
{
    using namespace N;
    g(f);
}
```

La chiamata a `g` utilizza un set di overload che contiene due funzioni, `::f` e `N::f` . Poiché `N::f` è un modello di funzione, il compilatore deve considerare l'argomento della funzione come *contesto non dedotto*. Ciò significa che, in questo caso, la chiamata a `g` dovrebbe avere esito negativo, in quanto il compilatore non può dedurre un tipo per il parametro di modello `T` . Sfortunatamente, il compilatore non ha eliminato il fatto che era già stato deciso che `::f` era una corrispondenza corretta per la chiamata di funzione. Anziché emettere un errore, il compilatore genera il codice da chiamare `g` usando `::f` come argomento.

Dato che in molti casi l'uso `::f` di come argomento della funzione è quello previsto dall'utente, viene generato un errore solo se il codice viene compilato con **`/permissive-`** .

### <a name="migrating-from-await-to-c20-coroutines"></a>Migrazione da `/await` a coroutine c++ 20

Le coroutine standard di C++ 20 sono ora abilitate per impostazione predefinita in **`/std:c++latest`** . Si differenziano dalle coroutine TS e dal supporto sotto l' **`/await`** opzione. La migrazione da **`/await`** a coroutine standard può richiedere alcune modifiche all'origine.

#### <a name="non-standard-keywords"></a>Parole chiave non standard

Le **`await`** **`yield`** parole chiave e precedenti non sono supportate in modalità c++ 20. Il codice deve **`co_await`** invece usare e **`co_yield`** . La modalità standard non consente inoltre l'utilizzo di `return` in una coroutine. Ogni **`return`** in una coroutine deve usare **`co_return`** .

```cpp
// /await
task f_legacy() {
    ...
    await g();
    return n;
}
// /std:c++latest
task f() {
    ...
    co_await g();
    co_return n;
}
```

#### <a name="types-of-initial_suspendfinal_suspend"></a>Tipi di initial_suspend/final_suspend

In **`/await`** le funzioni Suggerimento iniziale e Sospendi possono essere dichiarate come restituzione **`bool`** . Questo comportamento non è standard. In C++ 20, queste funzioni devono restituire un tipo di classe awaitable, spesso uno dei tipi awaitable semplici: `std::suspend_always` se la funzione ha restituito in precedenza **`true`** o `std::suspend_never` se è stata restituita **`false`** .

```cpp
// /await
struct promise_type_legacy {
    bool initial_suspend() noexcept { return false; }
    bool final_suspend() noexcept { return true; }
    ...
};

// /std:c++latest
struct promise_type {
    auto initial_susepend() noexcept { return std::suspend_never{}; }
    auto final_suspend() noexcept { return std::suspend_always{}; }
    ...
};
```

#### <a name="type-of-yield_value"></a>Tipo di `yield_value`

In C++ 20 la funzione promise `yield_value` deve restituire un awaitable. In **`/await`** modalità, la `yield_value` funzione è stata consentita la restituzione **`void`** e verrebbe sempre sospesa. Tali funzioni possono essere sostituite con una funzione che restituisce `std::suspend_always` .

```cpp
// /await
struct promise_type_legacy {
    ...
    void yield_value(int x) { next = x; };
};

// /std:c++latest
struct promise_type {
    ...
    auto yield_value(int x) { next = x; return std::suspend_always{}; }
};
```

#### <a name="exception-handling-function"></a>Funzione di gestione delle eccezioni

**`/await`** supporta un tipo Promise senza una funzione di gestione delle eccezioni o con una funzione di gestione delle eccezioni denominata `set_exception` che accetta un oggetto `std::exception_ptr` . In C++ 20 il tipo di suggerimento deve avere una funzione denominata `unhandled_exception` che non accetta argomenti. Se necessario, è possibile ottenere l'oggetto eccezione da `std::current_exception` .

```cpp
// /await
struct promise_type_legacy {
    void set_exception(std::exception_ptr e) { saved_exception = e; }
    ...
};
// /std:c++latest
struct promise_type {
    void unhandled_exception() { saved_exception = std::current_exception(); }
    ...
};
```

#### <a name="deduced-return-types-of-coroutines-not-supported"></a>Tipi restituiti dedotti di coroutine non supportati

C++ 20 non supporta le coroutine con un tipo restituito che include un tipo di segnaposto, ad esempio **`auto`** . I tipi restituiti di coroutine devono essere dichiarati in modo esplicito. In **`/await`** , questi tipi dedotti coinvolgono sempre un tipo sperimentale e richiedono l'inclusione di un'intestazione che definisce il tipo richiesto: uno tra `std::experimental::task<T>` , `std::experimental::generator<T>` o `std::experimental::async_stream<T>` .

```cpp
// /await
auto my_generator() {
    ...
    co_yield next;
};

// /std:c++latest
#include <experimental/generator>
std::experimental::generator<int> my_generator() {
    ...
    co_yield next;
};
```

#### <a name="return-type-of-return_value"></a>Tipo restituito di `return_value`

Il tipo restituito della funzione promise `return_value` deve essere **`void`** . In **`/await`** modalità il tipo restituito può essere qualsiasi elemento e viene ignorato. Questa diagnostica consente di rilevare errori sottili, ad esempio quando l'autore presuppone erroneamente che il valore restituito di `return_value` venga restituito a un chiamante.

```cpp
// /await
struct promise_type_legacy {
    ...
    int return_value(int x) { return x; } // incorrect, the return value of this function is unused and the value is lost.
};

// /std:c++latest
struct promise_type {
    ...
    void return_value(int x) { value = x; }; // save return value
};
```

#### <a name="return-object-conversion-behavior"></a>Comportamento di conversione dell'oggetto restituito

Se il tipo restituito dichiarato di una coroutine non corrisponde al tipo restituito della funzione promise `get_return_object` , l'oggetto restituito da `get_return_object` viene convertito nel tipo restituito della coroutine. In **`/await`** questa conversione viene eseguita in anticipo, prima che il corpo della coroutine abbia la possibilità di essere eseguito. In **`/std:c++latest`** questa conversione viene eseguita quando il valore viene restituito al chiamante. Consente coroutine che non vengono sospese al punto di sospensione iniziale per utilizzare l'oggetto restituito da `get_return_object` all'interno del corpo della coroutine.

#### <a name="coroutine-promise-parameters"></a>Parametri promessa coroutine

In C++ 20 il compilatore tenta di passare i parametri della coroutine (se presenti) a un costruttore del tipo Promise. Se ha esito negativo, viene eseguito un nuovo tentativo con un costruttore predefinito. In **`/await`** modalità è stato usato solo il costruttore predefinito. Questa modifica può causare una differenza nel comportamento se la promessa ha più costruttori. In alternativa, se è presente una conversione da un parametro coroutine al tipo Promise.

```cpp
struct coro {
    struct promise_type {
        promise_type() { ... }
        promise_type(int x) { ... }
        ...
    };
};

coro f1(int x);

// Under /await the promise gets constructed using the default constructor.
// Under /std:c++latest the promise gets constructed using the 1-argument constructor.
f1(0);

struct Object {
template <typename T> operator T() { ... } // Converts to anything!
};

coro f2(Object o);

// Under /await the promise gets constructed using the default constructor
// Under /std:c++latest the promise gets copy- or move-constructed from the result of
// Object::operator coro::promise_type().
f2(Object{});
```

### <a name="permissive--and-c20-modules-are-on-by-default-under-stdclatest"></a>`/permissive-` e i moduli C++ 20 sono attivati per impostazione predefinita in `/std:c++latest`

Il supporto per i moduli c++ 20 è on per impostazione predefinita in **`/std:c++latest`** . Per altre informazioni su questa modifica e sugli scenari in cui **`module`** e **`import`** vengono trattati in modo condizionale come parole chiave, vedere [supporto dei moduli standard C++ 20 con MSVC in Visual Studio 2019 versione 16,8](https://devblogs.microsoft.com/cppblog/standard-c20-modules-support-with-msvc-in-visual-studio-2019-version-16-8/).

Come prerequisito per il supporto dei moduli, **`permissive-`** è ora abilitato quando **`/std:c++latest`** si specifica. Per altre informazioni, vedere [`/permissive-`](../build/reference/permissive-standards-conformance.md).

Per il codice compilato in precedenza in **`/std:c++latest`** e che richiede comportamenti del compilatore non conformi, **`permissive`** può essere specificato per disattivare la modalità di conformità Strict nel compilatore. L'opzione del compilatore deve essere visualizzata dopo **`/std:c++latest`** nell'elenco di argomenti della riga di comando. Tuttavia, **`permissive`** genera un errore se viene rilevato l'utilizzo dei moduli:

> errore C1214: i moduli sono in conflitto con il comportamento non standard richiesto tramite '*Option*'

I valori più comuni per l' *opzione* sono:

| Opzione | Descrizione |
|--|--|
| **`/Zc:twoPhase-`** | La ricerca del nome in due fasi è necessaria per i moduli C++ 20 e implicata da **`permissive-`** . |
| **`/Zc:hiddenFriend-`** | Le regole di ricerca del nome Friend nascoste standard sono necessarie per i moduli C++ 20 e sono implicite in **`permissive-`** . |
| **`/Zc:preprocessor-`** | Il preprocessore conforme è necessario solo per la creazione e l'utilizzo delle unità di intestazione C++ 20. I moduli denominati non richiedono questa opzione. |

L' [`/experimental:module`](../build/reference/experimental-module.md) opzione è ancora necessaria per usare i *`std.*`* moduli forniti con Visual Studio, perché non sono ancora standardizzati.

L' **`/experimental:module`** opzione implica inoltre **`/Zc:twoPhase`** e **`/Zc:hiddenFriend`** . In precedenza, il codice compilato con i moduli può talvolta essere compilato con **`/Zc:twoPhase-`** se il modulo è stato utilizzato solo. Questo comportamento non è più supportato.

## <a name="conformance-improvements-in-visual-studio-2019-version-169"></a><a name="improvements_169"></a> Miglioramenti della conformità in Visual Studio 2019 versione 16,9

### <a name="copy-initialization-of-temporary-in-reference-direct-initialization"></a>Copia-inizializzazione di un temporaneo nell'inizializzazione diretta di riferimento

Problema del gruppo di lavoro principale [glc 2267](https://wg21.link/cwg2267) ha affrontato un'incoerenza tra un elenco di inizializzatori tra parentesi e un elenco di inizializzatori tra parentesi. La risoluzione armonizza le due forme.

Visual Studio 2019 versione 16,9 implementa il comportamento modificato in tutte le **`/std`** modalità del compilatore. Tuttavia, poiché è potenzialmente una modifica di rilievo di origine, è supportata solo se il codice viene compilato tramite **`/permissive-`** .

In questo esempio viene illustrata la modifica del comportamento:

```cpp
struct A { };

struct B {
    explicit B(const A&);
};

void f()
{
    A a;
    const B& b1(a);     // Always an error
    const B& b2{ a };   // Allowed before resolution to CWG 2267 was adopted: now an error
}
```

### <a name="destructor-characteristics-and-potentially-constructed-subobjects"></a>Caratteristiche del distruttore e oggetti SubObject potenzialmente costruiti

Problema del gruppo di lavoro principale [glc 2336](https://wg21.link/cwg2336) illustra un'omissione sulle specifiche di eccezione implicite dei distruttori nelle classi con classi base virtuali. L'omissione significava che un distruttore in una classe derivata potrebbe avere una specifica di eccezione più debole rispetto a una classe di base, se tale base era astratta e aveva una `virtual` base.

Visual Studio 2019 versione 16,9 implementa il comportamento modificato in tutte le **`/std`** modalità del compilatore.

Questo esempio Mostra come è stata modificata l'interpretazione:

```cpp
class V {
public:
    virtual ~V() noexcept(false);
};

class B : virtual V {
    virtual void foo () = 0;
    // BEFORE: implicitly defined virtual ~B() noexcept(true);
    // AFTER: implicitly defined virtual ~B() noexcept(false);
};

class D : B {
    virtual void foo ();
    // implicitly defined virtual ~D () noexcept(false);
};
```

Prima di questa modifica, il distruttore definito in modo implicito per `B` was `noexcept` , perché vengono presi in considerazione solo i sottooggetti potenzialmente costruiti. E la classe `V` di base non è un oggetto SubObject potenzialmente costruito perché è una `virtual` base ed `B` è astratta. Tuttavia, la classe base `V` è un sottooggetto potenzialmente costruito della classe `D` e pertanto `D::~D` è determinato come `noexcept(false)` , che conduce a una classe derivata con una specifica di eccezione più vulnerabile rispetto alla relativa base. Questa interpretazione non è sicura. Può causare un comportamento di runtime errato se un'eccezione viene generata da un distruttore di una classe derivata da B.

Con questa modifica, un distruttore genera potenzialmente un distruttore anche se ha un distruttore virtuale e qualsiasi classe di base virtuale ha un distruttore potenzialmente.

### <a name="similar-types-and-reference-binding"></a>Tipi simili e associazione di riferimento

Problema del gruppo di lavoro principale [glc 2352](https://wg21.link/cwg2352) gestisce un'incoerenza tra le regole di associazione di riferimento e le modifiche alla somiglianza del tipo. L'incoerenza è stata introdotta nei report di difetto precedenti (ad esempio [glc 330](https://wg21.link/cwg330)). Con questa modifica, il codice che in precedenza ha associato un riferimento a un oggetto temporaneo può ora essere associato direttamente quando i tipi interessati differiscono solo per i qualificatori cv.

Visual Studio 2019 versione 16,9 implementa il comportamento modificato in tutte le **`/std`** modalità del compilatore. È potenzialmente una modifica di rilievo di origine.

Questo esempio illustra il comportamento modificato:

```cpp
int *ptr;
const int *const &f() {
    return ptr; // Now returns a reference to 'ptr' directly.
    // Previously returned a reference to a temporary and emitted C4172
}
```

L'aggiornamento può modificare il comportamento del programma che si basa su un temporaneo introdotto:

```cpp
int func() {
    int i1 = 13;
    int i2 = 23;
    
    int* iptr = &i1;
    int const * const&  iptrcref = iptr;

    // iptrcref is a reference to a pointer to i1 with value 13.
    if (*iptrcref != 13)
    {
        return 1;
    }
    
    // Now change what iptr points to.

    // Prior to CWG 2352 iptrcref should be bound to a temporary and still points to the value 13.
    // After CWG 2352 it is bound directly to iptr and now points to the value 23.
    iptr = &i2;
    if (*iptrcref != 23)
    {
        return 1;
    }

    return 0;
}
```

### <a name="zctwophase-and-zctwophase--switch-behavior-change"></a>`/Zc:twoPhase` e `/Zc:twoPhase-` modificare il comportamento del commutatore

In genere, le opzioni del compilatore MSVC funzionano sul principio che l'ultimo prevale. Sfortunatamente, non era il caso delle **`/Zc:twoPhase`** Opzioni e **`/Zc:twoPhase-`** . Questi switch erano "permanenti", quindi i commutatori successivi non potevano eseguirne l'override. Ad esempio:

`cl /Zc:twoPhase /permissive a.cpp`

In questo caso, la prima **`/Zc:twoPhase`** opzione consente la ricerca del nome in due fasi restrittiva. Il secondo switch è progettato per disabilitare la modalità di conformità Strict (si tratta del contrario di **`/permissive-`** ), ma non è stata disabilitata **`/Zc:twoPhase`** .

Visual Studio 2019 versione 16,9 modifica questo comportamento in tutte le **`/std`** modalità del compilatore. **`/Zc:twoPhase`** e **`/Zc:twoPhase-`** non sono più "permanenti" e le opzioni successive possono eseguirne l'override.

### <a name="explicit-noexcept-specifiers-on-destructor-templates"></a>Noexcept-Specifiers espliciti nei modelli di distruttore

Il compilatore accettava in precedenza un modello di distruttore dichiarato con una specifica di eccezione non generata ma definito senza un identificatore noexception esplicito. La specifica di eccezione implicita di un distruttore dipende dalle proprietà delle proprietà della classe che potrebbero non essere note nel punto di definizione di un modello. Lo standard C++ richiede anche questo comportamento: se un distruttore viene dichiarato senza noexcept-specifier, presenta una specifica di eccezione implicita e nessuna altra dichiarazione della funzione può avere un identificatore noexcept.

Visual Studio 2019 versione 16,9 diventa il comportamento conforme in tutte le **`/std`** modalità del compilatore.

In questo esempio viene illustrata la modifica del comportamento del compilatore:

```cpp
template <typename T>
class B {
    virtual ~B() noexcept; // or throw()
};

template <typename T>
B<T>::~B() { /* ... */ } // Before: no diagnostic.
// Now diagnoses a definition mismatch. To fix, define the implementation by 
// using the same noexcept-specifier. For example,
// B<T>::~B() noexcept { /* ... */ }
```

### <a name="rewritten-expressions-in-c20"></a>Espressioni riscritte in C++ 20

Dal momento che Visual Studio 2019 versione 16,2, in **`/std:c++latest`** , il compilatore ha accettato codice come questo esempio:

```cpp
#include <compare>

struct S {
    auto operator<=>(const S&) const = default;
    operator bool() const;
};

bool f(S a, S b) {
    return a < b;
}
```

Tuttavia, il compilatore non richiama la funzione di confronto che l'autore potrebbe aspettarsi. Il codice precedente dovrebbe essere stato riscritto `a < b` come `(a <=> b) < 0` . Al contrario, il compilatore usava la `operator bool()` funzione di conversione definita dall'utente e confrontata `bool(a) < bool(b)` . A partire da Visual Studio 2019 versione 16,9, il compilatore riscrive l'espressione usando l'espressione dell'operatore di spazio previsto.

#### <a name="source-breaking-change"></a>Modifica dell'origine

Applicare correttamente le conversioni alle espressioni riscritte ha un altro effetto: il compilatore diagnostica anche correttamente le ambiguità dei tentativi di riscrittura dell'espressione. Prendere in considerazione questo esempio:

```cpp
struct Base {
    bool operator==(const Base&) const;
};

struct Derived : Base {
    Derived();
    Derived(const Base&);
    bool operator==(const Derived& rhs) const;
};

bool b = Base{} == Derived{};
```

In C++ 17, questo codice verrebbe accettato a causa della conversione da derivato a di base di `Derived` sul lato destro dell'espressione. In C++ 20 viene aggiunto anche il candidato dell'espressione sintetizzata: `Derived{} == Base{}` . A causa delle regole dello standard relative alla funzione che prevale sulla base delle conversioni, si scopre che la scelta tra `Base::operator==` e `Derived::operator==` è indecidibili. Ciò è dovuto al fatto che le sequenze di conversione nelle due espressioni non sono migliori o peggiori, quindi il codice di esempio genera un'ambiguità.

Per risolvere l'ambiguità, aggiungere un nuovo candidato che non sarà soggetto alle due sequenze di conversione:

```cpp
bool operator==(const Derived&, const Base&);
```

#### <a name="runtime-breaking-change"></a>Modifica di rilievo di runtime

A causa delle regole di riscrittura dell'operatore in C++ 20, è possibile che la risoluzione dell'overload ricerchi un nuovo candidato che non verrebbe trovato in una modalità di linguaggio più bassa. Il nuovo candidato potrebbe essere una corrispondenza migliore rispetto al candidato più vecchio. Prendere in considerazione questo esempio:

```cpp
struct iterator;
struct const_iterator {
  const_iterator(const iterator&);
  bool operator==(const const_iterator &ci) const;
};

struct iterator {
  bool operator==(const const_iterator &ci) const { return ci == *this; }
};
```

In C++ 17, l'unico candidato per `ci == *this` è `const_iterator::operator==` . Si tratta di una corrispondenza perché `*this` passa attraverso una conversione da derivato a base a `const_iterator` . In C++ 20, viene aggiunto un altro candidato riscritto: `*this == ci` , che richiama `iterator::operator==` . Questo candidato non richiede alcuna conversione, quindi si tratta di una corrispondenza migliore rispetto a `const_iterator::operator==` . Il problema con il nuovo candidato è che è la funzione attualmente definita, quindi la nuova semantica della funzione causa una definizione ricorsiva infinita di `iterator::operator==` .

Per semplificare il codice come l'esempio, il compilatore implementa un nuovo avviso:

```cmd
$ cl /std:c++latest /c t.cpp
t.cpp
t.cpp(8): warning C5232: in C++20 this comparison calls 'bool iterator::operator ==(const const_iterator &) const' recursively
```

Per correggere il codice, essere espliciti sulla conversione da usare:

```cpp
struct iterator {
  bool operator==(const const_iterator &ci) const { return ci == static_cast<const const_iterator&>(*this); }
};
```

## <a name="see-also"></a>Vedi anche

[Tabella di conformità al linguaggio C++ di Microsoft](visual-cpp-language-conformance.md)
