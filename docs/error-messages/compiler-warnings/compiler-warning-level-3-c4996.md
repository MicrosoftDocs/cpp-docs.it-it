---
title: Del compilatore (livello 3) avviso C4996
ms.date: 11/17/2017
f1_keywords:
- C4996
helpviewer_keywords:
- C4996
ms.assetid: 926c7cc2-921d-43ed-ae75-634f560dd317
ms.openlocfilehash: ef1bc46b64ccbe1374fd795a9b5d56e091b47f48
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401501"
---
# <a name="compiler-warning-level-3-c4996"></a>Del compilatore (livello 3) avviso C4996

Il compilatore ha rilevato una dichiarazione deprecata. **Questo avviso è sempre un messaggio intenzionale dall'autore della raccolta o del file di intestazione inclusi che non è consigliabile usare il simbolo deprecato senza conoscere le conseguenze.** Il messaggio di avviso effettivo viene specificato il modificatore di deprecazione o nel sito della dichiarazione dell'attributo.

Si tratta di alcuni comuni messaggi C4996 generati dalla libreria di Runtime C e la libreria Standard, ma non un elenco esaustivo. Seguire i collegamenti o continuare a leggere per modi per risolvere il problema o per disattivare l'avviso.

- [Il nome POSIX per questo elemento è deprecato. Usare invece il ISO C e C++ nome conforme: *new_name*. Vedere la Guida online per i dettagli.](#posix-function-names)

- [Questa funzione o variabile potrebbe non essere sicuro. È consigliabile usare *safe_version* invece. Per disabilitare la deprecazione, usare \_CRT\_SECURE\_NO\_avvisi.  Vedere la Guida online per i dettagli.](#unsafe-crt-library-functions)

- [' std::*nome_funzione*::\_Unchecked\_iteratori::\_Deprecate' chiamare per std::*nome_funzione*con parametri potenzialmente non sicuri: questa chiamata si basa su il chiamante per verificare che i valori passati siano corretti. Per disabilitare questo avviso, utilizzare -D_SCL_SECURE_NO_WARNINGS. Vedere la documentazione su come usare Visual C++ 'Iteratori verificati'](#unsafe-standard-library-functions)

- [Questa funzione o variabile è stato sostituito dalla funzionalità di libreria o dal sistema operativo più recente. È consigliabile usare *new_item* invece. Vedere la Guida online per i dettagli.](#obsolete-crt-functions-and-variables)

## <a name="cause"></a>Causa

L'avviso C4996 si verifica quando il compilatore rileva una funzione o variabile contrassegnata come [deprecate](../../cpp/deprecated-cpp.md) con un `__declspec(deprecated)` modificatore, o quando si tenta di accedere a una funzione, membro di classe o un typedef che dispone di c++14 [ \[ \[deprecate\] \] ](../../cpp/attributes.md) attributo. È possibile usare la `__declspec(deprecated)` modificatore o `[[deprecated]]` attributo manualmente le librerie o file di intestazione per avvertire i client su funzioni obsolete, le variabili, membri o typedef.

## <a name="remarks"></a>Note

Molte funzioni, funzioni membro, modello funzioni e variabili globali nelle librerie di Visual Studio sono contrassegnate come *deprecato*. Queste funzioni sono deprecate perché può avere un nome preferito diverso, potrebbero non sicuri o avere varianti più sicure, o potrebbe essere diventato obsoleto. Numero di messaggi di deprecazione include una sostituzione suggerita per la funzione deprecata o una variabile globale.

Per risolvere questo problema, è generalmente consigliabile che modificare il codice per utilizzare invece il consigliato più sicure o aggiornate funzioni e variabili globali. Se è necessario usare le funzioni esistenti o le variabili per motivi di portabilità, il messaggio di avviso può essere disattivata.

### <a name="to-turn-the-warning-off-without-fixing-the-issue"></a>Per disattivare l'avviso senza risoluzione del problema

È possibile disattivare l'avviso per una specifica riga di codice usando il [avviso](../../preprocessor/warning.md) pragma, `#pragma warning(suppress : 4996)`. È possibile anche disattivare l'avviso all'interno di un file usando il pragma warning, `#pragma warning(disable : 4996)`.

È possibile disattivare l'avviso a livello globale nelle compilazioni della riga di comando usando il **/wd4996** opzione della riga di comando.

Per disabilitare l'avviso per un intero progetto nell'IDE di Visual Studio:

- Aprire il **pagine delle proprietà** finestra di dialogo per il progetto. Per informazioni su come usare la finestra di dialogo Pagine delle proprietà, vedere [pagine delle proprietà](../../build/reference/property-pages-visual-cpp.md).
- Selezionare il **le proprietà di configurazione**, **C/C++**, **avanzate** pagina.
- Modificare il **Disabilita avvisi specifici** proprietà da aggiungere `4996`. Scegli **OK** per applicare le modifiche.

È anche possibile usare le macro del preprocessore per disattivare alcune classi specifiche di avvisi di deprecazione utilizzati nelle librerie. Queste macro sono descritti di seguito.

Per definire una macro del preprocessore in Visual Studio:

- Aprire il **pagine delle proprietà** finestra di dialogo per il progetto. Per informazioni su come usare la finestra di dialogo Pagine delle proprietà, vedere [pagine delle proprietà](../../build/reference/property-pages-visual-cpp.md).
- Espandere **le proprietà di configurazione > C/C++ > preprocessore**.
- Nel **definizioni preprocessore** proprietà, aggiungere il nome della macro. Scegliere **OK** per salvare e ricompilare il progetto.

Per definire una macro solo in specifici file di origine, aggiungere una riga, ad esempio `#define EXAMPLE_MACRO_NAME` prima tutte le righe che include un file di intestazione.

## <a name="specific-c4996-messages"></a>Specifici messaggi l'avviso C4996

Ecco alcune delle origini comuni di C4996 avvisi ed errori.

### <a name="posix-function-names"></a>Nomi delle funzioni POSIX

**Il nome POSIX per questo elemento è deprecato. Usare invece il ISO C e C++ nome conforme:** *new_name*. **Vedere la Guida online per informazioni dettagliate.**

Microsoft è stato rinominato alcune funzioni POSIX in CRT deve essere conforme a C99 e C++11 03 regole per i nomi di funzione globale definito dall'implementazione. Solo i nomi POSIX originali sono deprecati, non le funzioni. Nella maggior parte dei casi, il carattere di sottolineatura iniziale è stato aggiunto al nome della funzione POSIX per creare un nome conforme allo standard. Il compilatore genera un avviso di deprecazione per il nome di funzione originali e suggerisce un nome preferito.

Per risolvere questo problema, è in genere consigliabile che si modifica il codice per usare invece i nomi delle funzioni suggerita. Tuttavia, i nomi aggiornati sono specifiche di Microsoft. Se è necessario usare i nomi di funzione esistenti per motivi di portabilità, è possibile disattivare la visualizzazione degli avvisi. Le funzioni POSIX sono ancora disponibili nella libreria con i nomi originali.

Per disattivare gli avvisi di deprecazione per queste funzioni, definire la macro del preprocessore  **\_CRT\_NONSTDC\_NO\_avvisi**. È possibile definire questa macro nella riga di comando includendo l'opzione `/D_CRT_NONSTDC_NO_WARNINGS`.

### <a name="unsafe-crt-library-functions"></a>Funzioni della libreria CRT unsafe

**Questa funzione o variabile potrebbe non essere sicuro. È consigliabile usare** *safe_version* **invece. Per disabilitare la deprecazione, usare \_CRT\_SECURE\_NO\_avvisi.  Vedere la Guida online per i dettagli.**

Microsoft ha deprecato alcune funzioni della libreria Standard C++ e CRT e funzioni globali a favore di versioni più sicure. Nella maggior parte dei casi, le funzioni deprecate consentono unchecked accesso in lettura o scrittura di buffer, che può provocare seri problemi di protezione. Il compilatore genera un avviso di deprecazione per queste funzioni e suggerisce la funzione preferita.

Per risolvere questo problema, è consigliabile usare la funzione o variabile *safe_version* invece. Se si è verificato che non è possibile che una sovrascrittura buffer o overread presenti nel codice ed è possibile modificare il codice per motivi di portabilità, è possibile disattivare l'avviso.

Per disattivare gli avvisi di deprecazione per queste funzioni in CRT, definire  **\_CRT\_SECURE\_NO\_avvisi**. Per disattivare gli avvisi sulle variabili globali deprecate, definire  **\_CRT\_SECURE\_NO\_avvisi\_GLOBALS**. Per altre informazioni su queste funzioni deprecate e variabili globali, vedere [funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md) e [librerie protette: Libreria Standard C++](../../standard-library/safe-libraries-cpp-standard-library.md).

### <a name="unsafe-standard-library-functions"></a>Funzioni della libreria Standard non sicure

__' std::__*nome_funzione*__::\_Unchecked\_iteratori::\_Deprecate' chiamare per std::__*nome_funzione* **con parametri potenzialmente non sicuri: questa chiamata dipende dal chiamante per verificare che i valori passati siano corretti. Per disabilitare questo avviso, usare -D\_SCL\_SECURE\_NO\_avvisi. Vedere la documentazione su come usare Visual C++ 'Iteratori verificati'**

Questo avviso viene visualizzato nelle build di debug perché alcune funzioni di modello della libreria Standard C++ non controllano la correttezza dei parametri. Nella maggior parte dei casi, questo è perché non sono sufficienti informazioni sono disponibili per la funzione di controllo dei limiti di contenitore o perché gli iteratori possono essere utilizzati in modo non corretto con la funzione. Questo avviso consente di identificare questi utilizzi di funzione, perché potrebbe trattarsi di un'origine di lacune nella protezione grave nel programma. Per altre informazioni, vedere [Checked Iterators](../../standard-library/checked-iterators.md).

Ad esempio, questo avviso viene visualizzato in modalità di Debug, se si passa un puntatore di elemento a `std::copy` anziché una matrice normale. Per risolvere questo problema, usare una matrice dichiarata in modo appropriato, in modo che la libreria consente di controllare gli extent di matrice ed eseguire la verifica dei limiti.

```cpp
// C4996_copyarray.cpp
// compile with: cl /c /W4 /D_DEBUG C4996_copyarray.cpp
#include <algorithm>

void example(char const * const src) {
    char dest[1234];
    char * pdest3 = dest + 3;
    std::copy(src, src + 42, pdest3); // C4996
    std::copy(src, src + 42, dest);   // OK, copy can tell that dest is 1234 elements
}
```

Diversi algoritmi della libreria standard sono stati aggiornati per le versioni "a doppio intervallo" in c++14. Se si usano le versioni a doppio intervallo, il secondo intervallo offre i controllo dei limiti necessari:

```cpp
// C4996_containers.cpp
// compile with: cl /c /W4 /D_DEBUG C4996_containers.cpp
#include <algorithm>

bool example(
    char const * const left,
    const size_t leftSize,
    char const * const right,
    const size_t rightSize)
{
    bool result = false;
    result = std::equal(left, left + leftSize, right); // C4996
    // To fix, try this form instead:
    // result = std::equal(left, left + leftSize, right, right + rightSize); // OK
    return result;
}
```

Questo esempio illustra diversi modi più la libreria standard consente di controllare l'utilizzo di iteratore, e quando l'uso deselezionata può essere pericoloso:

```cpp
// C4996_standard.cpp
// compile with: cl /EHsc /W4 /MDd C4996_standard.cpp
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

template <typename C> void print(const string& s, const C& c) {
    cout << s;

    for (const auto& e : c) {
        cout << e << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> v(16);
    iota(v.begin(), v.end(), 0);
    print("v: ", v);

    // OK: vector::iterator is checked in debug mode
    // (i.e. an overrun triggers a debug assertion)
    vector<int> v2(16);
    transform(v.begin(), v.end(), v2.begin(), [](int n) { return n * 2; });
    print("v2: ", v2);

    // OK: back_insert_iterator is marked as checked in debug mode
    // (i.e. an overrun is impossible)
    vector<int> v3;
    transform(v.begin(), v.end(), back_inserter(v3), [](int n) { return n * 3; });
    print("v3: ", v3);

    // OK: array::iterator is checked in debug mode
    // (i.e. an overrun triggers a debug assertion)
    array<int, 16> a4;
    transform(v.begin(), v.end(), a4.begin(), [](int n) { return n * 4; });
    print("a4: ", a4);

    // OK: Raw arrays are checked in debug mode
    // (i.e. an overrun triggers a debug assertion)
    // NOTE: This applies only when raw arrays are
    // given to C++ Standard Library algorithms!
    int a5[16];
    transform(v.begin(), v.end(), a5, [](int n) { return n * 5; });
    print("a5: ", a5);

    // WARNING C4996: Pointers cannot be checked in debug mode
    // (i.e. an overrun triggers undefined behavior)
    int a6[16];
    int * p6 = a6;
    transform(v.begin(), v.end(), p6, [](int n) { return n * 6; });
    print("a6: ", a6);

    // OK: stdext::checked_array_iterator is checked in debug mode
    // (i.e. an overrun triggers a debug assertion)
    int a7[16];
    int * p7 = a7;
    transform(v.begin(), v.end(),
        stdext::make_checked_array_iterator(p7, 16),
        [](int n) { return n * 7; });
    print("a7: ", a7);

    // WARNING SILENCED: stdext::unchecked_array_iterator
    // is marked as checked in debug mode, but it performs no checking,
    // so an overrun triggers undefined behavior
    int a8[16];
    int * p8 = a8;
    transform( v.begin(), v.end(),
        stdext::make_unchecked_array_iterator(p8),
        [](int n) { return n * 8; });
    print("a8: ", a8);
}
```

Se si è verificato che il codice non può avere un buffer al sovraccarico errore nelle funzioni di libreria Standard che attivano questo avviso, è possibile disattivare questo avviso. Per disattivare gli avvisi per queste funzioni, definire  **\_SCL\_SECURE\_NO\_avvisi**.

### <a name="checked-iterators-enabled"></a>Iteratori verificati abilitati

L'avviso C4996 può verificarsi anche se non si usa un iteratore verificato durante la compilazione con `_ITERATOR_DEBUG_LEVEL` definito come 1 o 2. È impostato su 2 per impostazione predefinita per le compilazioni in modalità debug e su 0 per le compilazioni delle vendite al dettaglio. Per altre informazioni, vedere [Checked Iterators](../../standard-library/checked-iterators.md) .

```cpp
// C4996_checked.cpp
// compile with: /EHsc /W4 /MDd C4996_checked.cpp
#define _ITERATOR_DEBUG_LEVEL 2

#include <algorithm>
#include <iterator>

using namespace std;
using namespace stdext;

int main() {
    int a[] = { 1, 2, 3 };
    int b[] = { 10, 11, 12 };
    copy(a, a + 3, b + 1);   // C4996
    // try the following line instead:
    // copy(a, a + 3, checked_array_iterator<int *>(b, 3));   // OK
}
```

### <a name="unsafe-mfc-or-atl-code"></a>Codice unsafe MFC o ATL

L'avviso C4996 può verificarsi anche se si usano le funzioni MFC o ATL considerate deprecate per motivi di sicurezza.

Per risolvere questo problema, è consigliabile che si modifica il codice per usare invece le funzioni aggiornate.

Per informazioni su come eliminare questi avvisi, vedere [afx_secure_no_warnings](../../mfc/reference/diagnostic-services.md#afx_secure_no_warnings).

### <a name="obsolete-crt-functions-and-variables"></a>Le variabili e funzioni CRT obsolete

**Questa funzione o variabile è stato sostituito dalla funzionalità di libreria o dal sistema operativo più recente. È consigliabile usare** *new_item* **invece. Vedere la Guida online per i dettagli.**

Alcune funzioni e variabili globali della libreria sono deprecate come obsolete. Queste funzioni e variabili potrebbero essere rimosse nelle future versioni della libreria. Il compilatore genera un avviso di deprecazione per questi elementi e suggerisce l'alternativa preferita.

Per risolvere questo problema, si consiglia di che modificare il codice per usare la funzione suggeriti o variabile.

Per disattivare gli avvisi di deprecazione per questi elementi, definire  **\_CRT\_obsoleto\_NO\_avvisi**. Per altre informazioni, vedere la documentazione per la funzione o la variabile deprecata.

### <a name="marshalling-errors-in-clr-code"></a>Errori di marshalling nel codice CLR

L'avviso C4996 può verificarsi anche quando si usa la libreria del marshalling CLR. In questo caso C4996 rappresenta un errore e non un avviso. Questo errore si verifica quando si usa [marshal_as](../../dotnet/marshal-as.md) eseguire la conversione tra due tipi di dati che richiedono una [marshal_context Class](../../dotnet/marshal-context-class.md). È anche possibile ricevere questo errore quando la libreria di marshalling non supporta una conversione. Per altre informazioni sulla libreria di marshalling, vedere [Overview of Marshaling in C++](../../dotnet/overview-of-marshaling-in-cpp.md).

In questo esempio viene generato l'avviso C4996 perché la libreria del marshalling richiede un contesto per la conversione da un `System::String` a un `const char *`.

```cpp
// C4996_Marshal.cpp
// compile with: /clr
// C4996 expected
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal.h>

using namespace System;
using namespace msclr::interop;

int main() {
   String^ message = gcnew String("Test String to Marshal");
   const char* result;
   result = marshal_as<const char*>( message );
   return 0;
}
```

## <a name="example-user-defined-deprecated-function"></a>Esempio: Funzione deprecata definita dall'utente

È possibile usare l'attributo deprecato nel proprio codice per avvisare i chiamanti quando non si consiglia di usare alcune funzioni. In questo esempio, viene generato l'avviso C4996 per la riga su cui è dichiarata la funzione deprecata e per la riga in cui viene utilizzata la funzione.

```cpp
// C4996.cpp
// compile with: /W3
// C4996 warning expected
#include <stdio.h>

// #pragma warning(disable : 4996)
void func1(void) {
   printf_s("\nIn func1");
}

__declspec(deprecated) void func1(int) {
   printf_s("\nIn func2");
}

int main() {
   func1();
   func1(1);    // C4996
}
```
