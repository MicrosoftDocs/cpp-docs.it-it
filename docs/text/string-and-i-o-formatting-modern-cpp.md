---
title: Formattazione di stringhe e I/O (C++ moderno)
description: Opzioni per l'I/O di stringa formattato C++disponibili nella moderna.
ms.date: 05/30/2019
ms.topic: conceptual
ms.assetid: 3954e8de-a59b-4175-89c9-4ee842ab89ed
ms.openlocfilehash: 7ea858a8a8126d3754783edee0dd3ea5409e5f73
ms.sourcegitcommit: 6ddfb8be5e5923a4d90a2c0f93f76a27ce7ac299
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/06/2019
ms.locfileid: "74898820"
---
# <a name="string-and-io-formatting-modern-c"></a>Formattazione di stringhe e I/O (C++ moderno)

C++[\<iostream >](../standard-library/iostream.md) classi, funzioni e operatori supportano I/O di stringa formattata. Nel codice seguente, ad esempio, viene illustrato come impostare `cout` per formattare un intero per l'output in formato esadecimale. In primo luogo, Salva lo stato corrente per reimpostarlo in seguito, perché una volta passato lo stato del formato a `cout`, rimane in questo modo fino a quando non viene modificato. Non si applica solo a una riga di codice.

```cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ios state(nullptr);

    cout << "The answer in decimal is: " << 42 << endl;

    state.copyfmt(cout); // save current formatting
    cout << "In hex: 0x" // now load up a bunch of formatting modifiers
        << hex
        << uppercase
        << setw(8)
        << setfill('0')
        << 42            // the actual value we wanted to print out
        << endl;
    cout.copyfmt(state); // restore previous formatting
}
```

Questo approccio è indipendente dai tipi ed estendibile, ma è anche complesso e dettagliato.

## <a name="alternative-format-options"></a>Opzioni di formato alternativo

In alternativa, è possibile usare `Boost.Format` dalle librerie Boost C++ , anche se non è standard. È possibile scaricare qualsiasi libreria Boost dal sito Web [Boost](https://www.boost.org/) .

Di seguito sono elencati alcuni vantaggi di `Boost.Format`:

- Safe: indipendente dai tipi e genera un'eccezione per gli errori, ad esempio la specifica di un numero eccessivo di elementi o troppi.

- Estensibile: funziona per qualsiasi tipo che può essere trasmesso.

- Praticità: standard POSIX e stringhe di formato simili.

Sebbene `Boost.Format` sia basato sulle C++ funzionalità di [> di\<iostream](../standard-library/iostream-programming.md) , che sono sicure ed estendibili, non sono ottimizzate per le prestazioni. Quando è necessaria l'ottimizzazione delle prestazioni, prendere in considerazione la funzione C [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md) e [sprintf](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md), che sono veloci e facili da usare. Tuttavia, non sono estendibili o sicure da vulnerabilità. Le versioni sicure esistono, ma comportano una lieve riduzione delle prestazioni. Per ulteriori informazioni, vedere [printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md) e [sprintf_s, _sprintf_s_l](../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md), swprintf_s _swprintf_s_l).

Nel codice seguente vengono illustrate alcune delle funzionalità di formattazione Boost.

```cpp
    string s = str( format("%2% %2% %1%\n") % "world" % "hello" );
    // s contains "hello hello world"

    for( auto i = 0; i < names.size(); ++i )
        cout << format("%1% %2% %|40t|%3%\n") % first[i] % last[i] % tel[i];
    // Georges Benjamin Clemenceau             +33 (0) 123 456 789
    // Jean de Lattre de Tassigny              +33 (0) 987 654 321
```

## <a name="see-also"></a>Vedere anche

[BentornatiC++](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
[\<iostream>](../standard-library/iostream.md)<br/>
[\<limits>](../standard-library/limits.md)<br/>
[\<iomanip>](../standard-library/iomanip.md)
