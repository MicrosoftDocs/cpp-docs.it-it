---
title: Compilatore (livello 3) avviso C4996 | Documenti Microsoft
ms.custom: 
ms.date: 11/17/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4996
dev_langs: C++
helpviewer_keywords: C4996
ms.assetid: 926c7cc2-921d-43ed-ae75-634f560dd317
caps.latest.revision: "34"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e5a4797b4ac5fabc31d747682579c3b3ae6ce900
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-3-c4996"></a>Compilatore (livello 3) avviso C4996

Il compilatore ha rilevato una dichiarazione deprecata. **Questo avviso è sempre un messaggio intenzionale dall'autore della libreria o del file di intestazione inclusi che non è necessario utilizzare il simbolo deprecato senza conoscere le conseguenze.** All'effettivo messaggio di avviso è specificato il modificatore di deprecazione o attributo nel sito della dichiarazione. 

Questi sono alcuni comuni messaggi C4996 generati dalla libreria di Runtime C e la libreria Standard, ma non un elenco completo. Seguire i collegamenti o leggere le soluzioni per risolvere il problema oppure per disattivare l'avviso. 

- [Il nome POSIX per questo elemento è stato deprecato. Utilizzare invece il nome conforme allo standard ISO C e C++: *nuovo_nome*. Vedere la Guida online per i dettagli.](#posix-function-names)

- [Questa funzione o variabile potrebbe non essere sicuro. È consigliabile utilizzare *safe_version* invece. Per disabilitare la deprecazione, usare \_CRT\_sicura\_n\_gli avvisi.  Vedere la Guida online per i dettagli.](#unsafe-crt-library-functions)

- [' std::*nome_funzione*::\_Unchecked\_iteratori::\_Deprecate' tutte le chiamate a std::*nome_funzione*con parametri che possono essere potenzialmente non sicuri: questa chiamata si basa sul chiamante per verificare che i valori passati siano corretti. Per disabilitare questo avviso, utilizzare -D_SCL_SECURE_NO_WARNINGS. Vedere la documentazione sull'utilizzo degli "iteratori verificati" di Visual C++](#unsafe-standard-library-functions)

- [Questa funzione o variabile è stata sostituita dalla funzionalità di libreria o sistema operativo più recente. È consigliabile utilizzare *new_item* invece. Vedere la Guida online per i dettagli.](#obsolete-crt-functions-and-variables)

## <a name="cause"></a>Causa

L'avviso C4996 si verifica quando il compilatore rileva una funzione o una variabile contrassegnata come [deprecato](../../cpp/deprecated-cpp.md) utilizzando un `__declspec(deprecated)` modificatore, o quando si tenta di accedere a una funzione, membro della classe o typedef con C++ 14 [ \[ \[deprecato\] \] ](../../cpp/attributes2.md) attributo. È possibile utilizzare il `__declspec(deprecated)` modificatore o `[[deprecated]]` attributo manualmente le librerie o file di intestazione per avvertire i client su funzioni obsolete, variabili, i membri o typedef.

## <a name="remarks"></a>Note

Molte funzioni, funzioni membro, funzioni di modello e le variabili globali nelle librerie di Visual Studio sono contrassegnate come *deprecato*. Queste funzioni sono deprecate in quanto potrebbe avere un nome preferito diverso, potrebbe rivelato non sicuro o avere varianti più sicure, o potrebbe essere diventato obsoleto. Numero di messaggi deprecazione include una sostituzione suggerita per la funzione deprecata o una variabile globale.

Per risolvere questo problema, in genere consigliabile che si modifica il codice per utilizzare invece il suggeriti funzioni più sicure o aggiornate e le variabili globali. Se è necessario utilizzare le funzioni esistenti o le variabili per motivi di portabilità, è possibile disattivare l'avviso.

### <a name="to-turn-the-warning-off-without-fixing-the-issue"></a>Per disattivare l'avviso senza risoluzione del problema

È possibile disattivare l'avviso per una specifica riga di codice utilizzando il [avviso](../../preprocessor/warning.md) pragma, `#pragma warning(suppress : 4996)`. È possibile inoltre disattivare l'avviso all'interno di un file utilizzando il pragma warning, `#pragma warning(disable : 4996)`.

È possibile disattivare l'avviso globalmente nelle compilazioni della riga di comando utilizzando il **/wd4996** opzione della riga di comando.

Per disattivare l'avviso per un intero progetto nell'IDE di Visual Studio:

- Aprire il **pagine delle proprietà** finestra di dialogo per il progetto. Per informazioni su come utilizzare la finestra di dialogo Pagine delle proprietà, vedere [pagine delle proprietà](../../ide/property-pages-visual-cpp.md).
- Selezionare il **le proprietà di configurazione**, **C/C++**, **avanzate** pagina.
- Modificare il **Disabilita avvisi specifici** proprietà da aggiungere `4996`. Scegliere **OK** per applicare le modifiche.

È anche possibile utilizzare le macro del preprocessore per disattivare alcune classi specifiche di avvisi di deprecazione utilizzati nelle librerie di. Queste macro sono descritti di seguito.

Per definire una macro del preprocessore in Visual Studio:

- Aprire il **pagine delle proprietà** finestra di dialogo per il progetto. Per informazioni su come utilizzare la finestra di dialogo Pagine delle proprietà, vedere [pagine delle proprietà](../../ide/property-pages-visual-cpp.md).
- Espandere **le proprietà di configurazione > C/C++ > preprocessore**.
- Nel **definizioni preprocessore** proprietà, aggiungere il nome della macro. Scegliere **OK** per salvare e ricompilare il progetto.

Per definire una macro solo nei file di origine specifico, aggiungere una riga, ad esempio `#define EXAMPLE_MACRO_NAME` prima di qualsiasi riga che include un file di intestazione.

## <a name="specific-c4996-messages"></a>Specifica l'avviso C4996 messaggi

Ecco alcune delle origini di C4996 avvisi ed errori comuni.

### <a name="posix-function-names"></a>Nomi delle funzioni POSIX

**Il nome POSIX per questo elemento è stato deprecato. Utilizzare invece il nome conforme allo standard ISO C e C++:** *nuovo_nome*. **Per ulteriori informazioni, vedere.**

Microsoft ha rinominato alcune funzioni POSIX in CRT per conformità con C99 e C++ 03 regole per i nomi di funzione globale definito dall'implementazione. Solo i nomi POSIX originali sono deprecati, non le funzioni. Nella maggior parte dei casi, il carattere di sottolineatura iniziale è stato aggiunto al nome della funzione POSIX per creare un nome conforme allo standard. Il compilatore genera un avviso di deprecazione per il nome della funzione originale e suggerisce un nome preferito.

Per risolvere questo problema, in genere consigliabile che si modifica il codice per utilizzare invece i nomi di funzione suggeriti. Tuttavia, i nomi aggiornati sono specifiche di Microsoft. Se è necessario utilizzare i nomi di funzione esistente per motivi di portabilità, è possibile disattivare gli avvisi. Le funzioni POSIX sono ancora disponibili nella libreria con i relativi nomi originale.

Per disattivare gli avvisi di deprecazione per queste funzioni, definire la macro del preprocessore  **\_CRT\_NONSTDC\_n\_avvisi**. È possibile definire questa macro nella riga di comando includendo l'opzione `/D_CRT_NONSTDC_NO_WARNINGS`.


### <a name="unsafe-crt-library-functions"></a>Funzioni della libreria CRT unsafe

 **Questa funzione o variabile potrebbe non essere sicuro. È consigliabile utilizzare** *safe_version* **invece. Per disabilitare la deprecazione, usare \_CRT\_sicura\_n\_gli avvisi.  Vedere la Guida online per i dettagli.**

 Microsoft è deprecato alcune funzioni CRT e della libreria Standard C++ e funzioni globali a favore di versioni più sicure. Nella maggior parte dei casi, le funzioni deprecate consentono deselezionata accesso in lettura o scrittura di buffer, può causare seri problemi di protezione. Il compilatore genera un avviso di deprecazione per queste funzioni e suggerisce la funzione preferita.

 Per risolvere questo problema, è consigliabile utilizzare la funzione o variabile *safe_version* invece. Se si è certi che non è possibile che una sovrascrittura buffer o overread presenti nel codice ed è possibile modificare il codice per motivi di portabilità, è possibile disattivare l'avviso.
 
 Per disattivare gli avvisi di deprecazione per queste funzioni in CRT, definire  **\_CRT\_sicura\_n\_avvisi**. Per disattivare gli avvisi sulle variabili globali deprecate, definire  **\_CRT\_sicura\_n\_avvisi\_GLOBALS**. Per ulteriori informazioni su queste funzioni deprecate e funzioni globali, vedere [funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md) e [librerie protette: libreria Standard C++](../../standard-library/safe-libraries-cpp-standard-library.md).

### <a name="unsafe-standard-library-functions"></a>Utilizzo delle funzioni della libreria Standard

__' std::__*nome_funzione*__::\_Unchecked\_iteratori::\_Deprecate' tutte le chiamate a std::__*nome_funzione* **con parametri che possono essere potenzialmente non sicuri: questa chiamata si basa sul chiamante per verificare che i valori passati siano corretti. Per disabilitare questo avviso, utilizzare -D\_SCL\_sicura\_n\_gli avvisi. Vedere la documentazione sull'utilizzo degli "iteratori verificati" di Visual C++**

Questo avviso viene visualizzato nelle build di debug perché alcune funzioni di modello della libreria Standard C++ non verificano la correttezza dei parametri. Nella maggior parte dei casi, questo è perché non sono sufficienti informazioni sono disponibili per la funzione di controllo dei limiti di contenitore o perché gli iteratori possono essere utilizzati in modo non corretto con la funzione. Questo avviso consente di identificare questi utilizzi di funzione, perché potrebbe trattarsi di un'origine di problemi di sicurezza grave nel programma. Per altre informazioni, vedere [Checked Iterators](../../standard-library/checked-iterators.md).

Ad esempio, questo avviso viene visualizzato in modalità di Debug, se si passa un puntatore dell'elemento a `std::copy` anziché una matrice normale. Per risolvere questo problema, utilizzare una matrice dichiarata in modo appropriato, in modo che la libreria può controllare gli extent di matrice e si verifica dei limiti.

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

Diversi algoritmi della libreria standard sono stati aggiornati per le versioni "doppio intervallo" in C++ 14. Se si utilizzano le versioni a doppio intervallo, il secondo intervallo fornisce i controllo dei limiti necessari:

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

Questo esempio illustra diversi modi più la libreria standard consentono di controllare l'utilizzo di iteratore, e quando l'utilizzo non controllato può risultare pericoloso:

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

Se si è verificato che il codice non può avere un buffer superamento errore nelle funzioni di libreria Standard che attivano questo avviso, si desidera disattivare l'avviso. Per disattivare gli avvisi per queste funzioni, definire  **\_SCL\_sicura\_n\_avvisi**.

### <a name="checked-iterators-enabled"></a>Iteratori verificati abilitati

L'avviso C4996 può verificarsi anche se non si utilizza un iteratore verificato durante la compilazione con `_ITERATOR_DEBUG_LEVEL` definito come 1 o 2. Si è impostato su 2 per impostazione predefinita per le compilazioni in modalità debug e su 0 per le compilazioni di vendita al dettaglio. Per altre informazioni, vedere [Checked Iterators](../../standard-library/checked-iterators.md) .

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

L'avviso C4996 può verificarsi anche se si utilizzano funzioni MFC o ATL considerate deprecate per motivi di sicurezza.

Per risolvere questo problema, è consigliabile che si modifica il codice per utilizzare invece le funzioni aggiornate.

Per informazioni su come eliminare questi avvisi, vedere [_AFX_SECURE_NO_WARNINGS](../../mfc/reference/diagnostic-services.md#afx_secure_no_warnings).

### <a name="obsolete-crt-functions-and-variables"></a>Le variabili e funzioni CRT obsolete

**Questa funzione o variabile è stata sostituita dalla funzionalità di libreria o sistema operativo più recente. È consigliabile utilizzare** *new_item* **invece. Vedere la Guida online per i dettagli.**

Alcune funzioni e variabili globali della libreria sono deprecate come obsolete. Queste funzioni e variabili potrebbero essere rimosse nelle future versioni della libreria. Il compilatore genera un avviso di deprecazione per questi elementi e suggerisce l'alternativa preferita.

Per risolvere questo problema, si consiglia di che modificare il codice per utilizzare la funzione suggeriti o una variabile.

Per disattivare gli avvisi di deprecazione per questi elementi, definire  **\_CRT\_OBSOLETE\_n\_avvisi**. Per altre informazioni, vedere la documentazione per la funzione o la variabile deprecata.

### <a name="marshalling-errors-in-clr-code"></a>Errori di marshalling nel codice CLR

L'avviso C4996 può verificarsi anche quando si utilizza la libreria di marshalling CLR. In questo caso C4996 rappresenta un errore e non un avviso. Questo errore si verifica quando si utilizza [marshal_as](../../dotnet/marshal-as.md) per la conversione tra due tipi di dati che richiedono un [classe marshal_context](../../dotnet/marshal-context-class.md). È inoltre possibile ricevere questo errore quando la libreria del marshalling non supporta una conversione. Per altre informazioni sulla libreria di marshalling, vedere [Overview of Marshaling in C++](../../dotnet/overview-of-marshaling-in-cpp.md).

In questo esempio viene generato l'avviso C4996 perché la libreria di marshalling richiede un contesto per la conversione da un `System::String` per un `const char *`.

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

## <a name="example-user-defined-deprecated-function"></a>Esempio: Funzione deprecata definito dall'utente

Per visualizzare avvisi chiamanti quando non si consiglia di utilizzo di alcune funzioni, è possibile utilizzare l'attributo deprecato nel codice. In questo esempio, l'avviso C4996 viene generato per la riga su cui è dichiarata la funzione deprecata e per la riga in cui viene utilizzata la funzione.

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
