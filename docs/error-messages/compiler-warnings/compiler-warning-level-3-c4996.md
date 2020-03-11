---
title: Avviso del compilatore (livello 3) C4996
description: Viene illustrato il motivo per cui viene visualizzato l'avviso del compilatore C4996 e vengono descritte le operazioni da eseguire.
ms.date: 11/25/2019
f1_keywords:
- C4996
helpviewer_keywords:
- C4996
ms.assetid: 926c7cc2-921d-43ed-ae75-634f560dd317
ms.openlocfilehash: 98662dc0b5439c1f8857e4f2ad259793a4d03e41
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78865222"
---
# <a name="compiler-warning-level-3-c4996"></a>Avviso del compilatore (livello 3) C4996

Il codice usa una funzione, un membro di classe, una variabile o un TypeDef contrassegnato come *deprecato*. I simboli sono deprecati utilizzando un modificatore [__declspec (deprecato)](../../cpp/deprecated-cpp.md) o c++ 14 [\[\[deprecato\]\]](../../cpp/attributes.md) attributo. Il messaggio di avviso C4996 effettivo viene specificato dal modificatore `deprecated` o dall'attributo della dichiarazione.

> [!IMPORTANT]
> Questo avviso è sempre un messaggio intenzionale dell'autore del file di intestazione che dichiara il simbolo. Non usare il simbolo deprecato senza conoscere le conseguenze.

## <a name="remarks"></a>Osservazioni

Molte funzioni, funzioni membro, funzioni di modello e variabili globali nelle librerie di Visual Studio sono *deprecate*. Alcune, ad esempio le funzioni POSIX e specifiche di Microsoft, sono deprecate perché ora hanno un nome preferito diverso. Alcune funzioni della libreria di runtime C sono deprecate perché non sono sicure e hanno una variante più sicura. Altre sono deprecate perché sono obsolete. I messaggi di deprecazione includono in genere una sostituzione suggerita per la funzione o la variabile globale deprecata.

## <a name="turn-off-the-warning"></a>Disattiva avviso

Per risolvere un problema C4996, in genere è consigliabile modificare il codice. Usare invece le funzioni suggerite e le variabili globali. Se è necessario usare le funzioni o le variabili esistenti per motivi di portabilità, è possibile disattivare l'avviso.

Per disattivare l'avviso per una riga di codice specifica, usare il pragma [warning](../../preprocessor/warning.md) `#pragma warning(suppress : 4996)`.

Per disattivare l'avviso all'interno di un file, utilizzare il pragma warning `#pragma warning(disable : 4996)`.

Per disattivare l'avviso a livello globale nelle compilazioni da riga di comando, usare l'opzione della riga di comando [/wd4996](../../build/reference/compiler-option-warning-level.md) .

Per disattivare l'avviso per un intero progetto nell'IDE di Visual Studio:

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto. Per informazioni sull'utilizzo della finestra di dialogo Pagine delle proprietà, vedere [pagine delle proprietà](../../build/reference/property-pages-visual-cpp.md).

1. Selezionare le **proprietà di configurazione** > pagina **Avanzate** di **CC++ /**  > .

1. Modificare la proprietà **Disabilita avvisi specifici** per aggiungere `4996`. Scegliere **OK** per applicare le modifiche.

È anche possibile usare le macro del preprocessore per disattivare alcune classi specifiche di avvisi di deprecazione usati nelle librerie. Queste macro sono descritte di seguito.

Per definire una macro del preprocessore in Visual Studio:

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto. Per informazioni sull'utilizzo della finestra di dialogo Pagine delle proprietà, vedere [pagine delle proprietà](../../build/reference/property-pages-visual-cpp.md).

1. Espandere **proprietà di configurazione > ilC++ preprocessore C/>** .

1. Nella proprietà **definizioni preprocessore** aggiungere il nome della macro. Scegliere **OK** per salvare e ricompilare il progetto.

Per definire una macro solo in specifici file di origine, aggiungere una riga, ad esempio `#define EXAMPLE_MACRO_NAME` prima di qualsiasi riga che includa un file di intestazione.

Di seguito sono riportate alcune delle fonti comuni di avvisi ed errori di C4996:

## <a name="posix-function-names"></a>Nomi di funzioni POSIX

**Il nome POSIX per questo elemento è deprecato. In alternativa, usare ISO C e C++ il nome conforme:** *New-Name*. **Per informazioni dettagliate, vedere la guida online.**

Microsoft ha rinominato alcune funzioni di libreria specifiche di POSIX e Microsoft in CRT per conformarsi ai vincoli C99 e C++ 03 sui nomi definiti dall'implementazione globale e riservati. *Solo i nomi sono deprecati, non le funzioni*. Nella maggior parte dei casi, un carattere di sottolineatura principale è stato aggiunto al nome della funzione per creare un nome conforme. Il compilatore genera un avviso di deprecazione per il nome della funzione originale e suggerisce il nome preferito.

Per risolvere questo problema, in genere è consigliabile modificare il codice per usare invece i nomi di funzione suggeriti. Tuttavia, i nomi aggiornati sono specifici di Microsoft. Se è necessario usare i nomi di funzione esistenti per motivi di portabilità, è possibile disattivare questi avvisi. Le funzioni sono ancora disponibili nella libreria con i rispettivi nomi originali.

Per disattivare gli avvisi di deprecazione per queste funzioni, definire la macro del preprocessore **\_CRT\_NONSTDC\_nessun avviso\_** . È possibile definire questa macro dalla riga di comando includendo l'opzione `/D_CRT_NONSTDC_NO_WARNINGS`.

## <a name="unsafe-crt-library-functions"></a>Funzioni della libreria CRT non sicure

**Questa funzione o variabile potrebbe non essere sicura. Prendere in considerazione l'uso** *di Safe-Version* **. Per disabilitare la deprecazione, usare \_CRT\_protetto\_nessun avviso\_.  Per informazioni dettagliate, vedere la guida online.**

Microsoft ha deprecato alcune funzioni C++ e globali della libreria CRT e standard perché sono disponibili versioni più sicure. La maggior parte delle funzioni deprecate consente l'accesso in lettura o scrittura non verificato ai buffer. Il loro utilizzo improprio può causare gravi problemi di sicurezza. Il compilatore genera un avviso di deprecazione per queste funzioni e suggerisce la funzione preferita.

Per risolvere questo problema, è consigliabile usare invece la funzione o la variabile *Safe-Version* . In alcuni casi non è possibile, per motivi di compatibilità con le versioni precedenti o per la portabilità. Verificare con attenzione che non sia possibile eseguire una sovrascrittura del buffer o che si verifichino sovraletture nel codice. Quindi, è possibile disattivare l'avviso.

Per disattivare gli avvisi di deprecazione per queste funzioni in CRT, definire **\_crt\_protetto\_nessun avviso\_** .

Per disattivare gli avvisi sulle variabili globali deprecate, definire **\_CRT\_SECURE\_no\_warnings\_Globals**.

Per altre informazioni su queste funzioni e globali deprecate, vedere [funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md) e [librerie sicure: C++ libreria standard](../../standard-library/safe-libraries-cpp-standard-library.md).

## <a name="unsafe-standard-library-functions"></a>Funzioni della libreria standard non sicure

__' std::__ *function_name* __::\_deselezionato\_iteratori::\_deprecate ' chiamata a std::__ *function_name* **con parametri che potrebbero non essere sicuri. questa chiamata si basa sul chiamante per verificare che i valori passati siano corretti. Per disabilitare questo avviso, utilizzare-D\_SCL\_protetto\_nessun avviso\_. Vedere la documentazione su come usare gli C++ iteratori verificati di Visual '**

Questo avviso viene visualizzato nelle build di debug C++ perché alcune funzioni modello della libreria standard non controllano la correttezza dei parametri. Spesso è perché non sono disponibili informazioni sufficienti per la funzione per controllare i limiti del contenitore. O, perché gli iteratori possono essere utilizzati in modo errato con la funzione. Questo avviso consente di identificare queste funzioni, perché possono costituire un'origine di gravi problemi di sicurezza nel programma. Per altre informazioni, vedere [iteratori verificati](../../standard-library/checked-iterators.md).

Ad esempio, questo avviso viene visualizzato in modalità di debug se si passa un puntatore a un elemento `std::copy`, anziché una matrice normale. Per risolvere questo problema, usare una matrice dichiarata in modo appropriato, in modo che la libreria possa controllare gli extent della matrice ed eseguire il controllo dei limiti.

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

Diversi algoritmi di libreria standard sono stati aggiornati in modo da avere versioni "Dual range" in C++ 14. Se si usano le versioni a doppio intervallo, il secondo intervallo fornisce il controllo dei limiti necessari:

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

Questo esempio illustra diversi modi in cui la libreria standard può essere usata per controllare l'utilizzo degli iteratori e quando l'utilizzo non verificato può essere pericoloso:

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

Se è stato verificato che il codice non può avere un errore di sovraccarico del buffer, è possibile disattivare questo avviso. Per disattivare gli avvisi per queste funzioni, definire **\_SCL\_protetto\_nessun avviso\_** .

## <a name="checked-iterators-enabled"></a>Iteratori controllati abilitati

C4996 può verificarsi anche se non si usa un iteratore verificato quando `_ITERATOR_DEBUG_LEVEL` viene definito come 1 o 2. Per impostazione predefinita, è impostato su 2 per le compilazioni in modalità di debug e su 0 per le compilazioni al dettaglio. Per altre informazioni, vedere [iteratori verificati](../../standard-library/checked-iterators.md).

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

## <a name="unsafe-mfc-or-atl-code"></a>Codice MFC o ATL non sicuro

C4996 può verificarsi se si utilizzano le funzioni MFC o ATL deprecate per motivi di sicurezza.

Per risolvere questo problema, è consigliabile modificare il codice per usare le funzioni aggiornate.

Per informazioni sull'eliminazione di questi avvisi, vedere [_AFX_SECURE_NO_WARNINGS](../../mfc/reference/diagnostic-services.md#afx_secure_no_warnings).

## <a name="obsolete-crt-functions-and-variables"></a>Funzioni e variabili CRT obsolete

**Questa funzione o variabile è stata sostituita da una nuova funzionalità della libreria o del sistema operativo.** In alternativa, provare a usare *new_item* **. Per informazioni dettagliate, vedere la guida online.**

Alcune funzioni e variabili globali della libreria sono deprecate come obsolete. Queste funzioni e variabili potrebbero essere rimosse nelle future versioni della libreria. Il compilatore genera un avviso di deprecazione per questi elementi e suggerisce l'alternativa preferita.

Per risolvere questo problema, è consigliabile modificare il codice in modo da usare la funzione o la variabile suggerita.

Per disattivare gli avvisi di deprecazione per questi elementi, definire **\_CRT\_obsoleto\_nessun avviso\_** . Per altre informazioni, vedere la documentazione per la funzione o la variabile deprecata.

## <a name="marshaling-errors-in-clr-code"></a>Marshalling degli errori nel codice CLR

C4996 può verificarsi anche quando si utilizza la libreria di marshalling CLR. In questo caso, C4996 è un errore e non un avviso. Questo errore si verifica quando si usa [marshal_as](../../dotnet/marshal-as.md) per eseguire la conversione tra due tipi di dati che richiedono una [Classe marshal_context](../../dotnet/marshal-context-class.md). Questo errore può essere visualizzato anche quando la libreria di marshalling non supporta una conversione. Per ulteriori informazioni sulla libreria di marshalling, vedere [Cenni preliminari sul marshalling in C++ ](../../dotnet/overview-of-marshaling-in-cpp.md).

Questo esempio genera C4996 perché la libreria di marshalling richiede un contesto per la conversione da un `System::String` a un `const char *`.

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

## <a name="example-user-defined-deprecated-function"></a>Esempio: funzione deprecata definita dall'utente

È possibile usare l'attributo deprecated nel codice per avvisare i chiamanti quando non è più consigliabile usare determinate funzioni. In questo esempio, C4996 viene generato in due posizioni: una per la riga in cui è dichiarata la funzione deprecata e una per la riga in cui viene usata la funzione.

```cpp
// C4996.cpp
// compile with: /W3
// C4996 warning expected
#include <stdio.h>

// #pragma warning(disable : 4996)
void func1(void) {
   printf_s("\nIn func1");
}

[[deprecated]]
void func1(int) {
   printf_s("\nIn func2");
}

int main() {
   func1();
   func1(1);    // C4996
}
```
