---
title: Formattazione di stringhe e I/O (C++ moderno)
description: Scelte per l'I/O di stringa formattata disponibili nella versione moderna di C.
ms.date: 05/30/2019
ms.topic: conceptual
ms.assetid: 3954e8de-a59b-4175-89c9-4ee842ab89ed
ms.openlocfilehash: a3fc93b0baf414759eb50c787c4057fb85dcb370
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375779"
---
# <a name="string-and-io-formatting-modern-c"></a>Formattazione di stringhe e I/O (C++ moderno)

Le classi, le funzioni e gli operatori di>di tipo [ \<C, supportano](../standard-library/iostream.md) l'I/O di stringa formattato. Ad esempio, il codice seguente `cout` mostra come impostare per formattare un numero intero per l'output in esadecimale. In primo luogo, salva lo stato corrente per reimpostarlo in `cout`un secondo momento, poiché una volta che lo stato del formato viene passato a , rimane in questo modo fino a quando non viene modificato. Non si applica solo a una riga di codice.

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

Questo approccio è indipendente dai tipi ed estensibile, ma è anche complesso e dettagliato.

## <a name="alternative-format-options"></a>Opzioni di formato alternative

In alternativa, è `Boost.Format` possibile utilizzare dalle librerie di Boost c, anche se non è standard. Puoi scaricare qualsiasi libreria Boost dal sito web [di Boost.](https://www.boost.org/)

Alcuni vantaggi `Boost.Format` di sono:

- Sicuro: indipendente dai tipi e genera un'eccezione per gli errori, ad esempio la specifica di un numero troppo basso o di un numero troppo numeroso di elementi.

- Estensibile: funziona per qualsiasi tipo che può essere trasmesso in streaming.

- Comodo: POSIX standard e stringhe di formato simili.

Anche `Boost.Format` se si basa su strutture [ \<iostream>,](../standard-library/iostream-programming.md) che sono sicure ed estensibili, non sono ottimizzate per le prestazioni. Quando è necessaria l'ottimizzazione delle prestazioni, considerare C [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md) e [sprintf](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md), che sono veloci e facili da usare. Tuttavia, non sono estensibili o al sicuro dalle vulnerabilità. (Le versioni sicure esistono, ma comportano una leggera riduzione delle prestazioni. Per ulteriori informazioni, vedere [printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md) e [sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l](../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)).

Nel codice seguente vengono illustrate alcune delle funzionalità di formattazione di Boost.The following code demonstrates some of the Boost formatting features.

```cpp
    string s = str( format("%2% %2% %1%\n") % "world" % "hello" );
    // s contains "hello hello world"

    for( auto i = 0; i < names.size(); ++i )
        cout << format("%1% %2% %|40t|%3%\n") % first[i] % last[i] % tel[i];
    // Georges Benjamin Clemenceau             +33 (0) 123 456 789
    // Jean de Lattre de Tassigny              +33 (0) 987 654 321
```

## <a name="see-also"></a>Vedere anche

[Bentornato a C .](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Guida di riferimento al linguaggio C](../cpp/cpp-language-reference.md)<br/>
[Libreria standard di C](../standard-library/cpp-standard-library-reference.md)<br/>
[\<>iostream](../standard-library/iostream.md)<br/>
[\<limiti>](../standard-library/limits.md)<br/>
[\<iomanip>](../standard-library/iomanip.md)
