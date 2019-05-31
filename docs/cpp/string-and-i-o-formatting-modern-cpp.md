---
title: Formattazione di stringhe e I/O (C++ moderno)
description: Opzioni per la stringa formattata i/o disponibile nel Framework moderno C++.
ms.date: 05/30/2019
ms.topic: conceptual
ms.assetid: 3954e8de-a59b-4175-89c9-4ee842ab89ed
ms.openlocfilehash: e22c745798109a2dbef82297c45256593823f806
ms.sourcegitcommit: 28eae422049ac3381c6b1206664455dbb56cbfb6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/31/2019
ms.locfileid: "66450497"
---
# <a name="string-and-io-formatting-modern-c"></a>Formattazione di stringhe e I/O (C++ moderno)

C++[ \<iostream >](../standard-library/iostream.md) stringa formattata i/o di supporto di classi, funzioni e operatori. Ad esempio, il codice seguente viene illustrato come impostare `cout` per formattare un integer da restituire in formato esadecimale. In primo luogo, Salva lo stato corrente per ripristinare le impostazioni in un secondo momento, perché una volta lo stato di formato viene passato a `cout`, resta uguale fino alla modifica. Non è applicabile solo a una riga di codice.

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

Questo approccio è indipendente dai tipi ed estendibili, ma è anche dettagliati e complessi.

## <a name="alternative-format-options"></a>Opzioni relative al formato alternativo

In alternativa, è possibile usare `Boost.Format` miglioramento C++ librerie, anche se è conforme allo standard. È possibile scaricare qualsiasi libreria Boost dal [Boost](https://www.boost.org/) sito Web.

Alcuni vantaggi di `Boost.Format` sono:

- Sicurezza: Indipendente dai tipi e genera un'eccezione per gli errori, ad esempio, la specifica di troppo pochi o troppi elementi.

- Estensibile: Funziona per qualsiasi tipo che può essere trasmesso.

- Utile: Posix standard e stringhe di formato simili.

Sebbene `Boost.Format` si basa su C++ [ \<iostream >](../standard-library/iostream-programming.md) strutture, che sono sicuri ed estensibili, non sono ottimizzate per le prestazioni. Quando è necessario ottimizzare le prestazioni, prendere in considerazione C [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md) e [sprintf](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md), che sono veloci e facile da usare. Tuttavia, non sono estendibili o senza vulnerabilità. (Le versioni sicure esistono, ma comportano una riduzione delle prestazioni leggero. Per altre informazioni, vedere [printf_s, printf_s_l, wprintf_s, wprintf_s_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md) e [sprintf_s, sprintf_s_l, swprintf_s, swprintf_s_l](../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)).

Il codice seguente vengono illustrate alcune delle funzionalità di formattazione Boost.

```cpp
    string s = str( format("%2% %2% %1%\n") % "world" % "hello" );
    // s contains "hello hello world"

    for( auto i = 0; i < names.size(); ++i )
        cout << format("%1% %2% %|40t|%3%\n") % first[i] % last[i] % tel[i];
    // Georges Benjamin Clemenceau             +33 (0) 123 456 789
    // Jean de Lattre de Tassigny              +33 (0) 987 654 321
```

## <a name="see-also"></a>Vedere anche

[C++ (C++ moderno)](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
[\<iostream>](../standard-library/iostream.md)<br/>
[\<limits>](../standard-library/limits.md)<br/>
[\<iomanip>](../standard-library/iomanip.md)
