---
title: Inizializzazione CRT
description: Viene descritto il modo in cui CRT inizializza lo stato globale nel codice nativo.
ms.topic: conceptual
ms.date: 11/04/2016
helpviewer_keywords:
- CRT initialization [C++]
ms.assetid: e7979813-1856-4848-9639-f29c86b74ad7
ms.openlocfilehash: 25f1e2a7e5b7d91c729bb45bd79ba9a8720cead1
ms.sourcegitcommit: 9451db8480992017c46f9d2df23fb17b503bbe74
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2020
ms.locfileid: "91589770"
---
# <a name="crt-initialization"></a>Inizializzazione CRT

Questo argomento descrive il modo in cui CRT inizializza lo stato globale nel codice nativo.

Per impostazione predefinita, il linker include la libreria CRT che fornisce il proprio codice di avvio. Questo codice di avvio inizializza la libreria CRT, chiama gli inizializzatori globali e quindi chiama la funzione `main` fornita dall'utente per le applicazioni console.

## <a name="initializing-a-global-object"></a>Inizializzazione di un oggetto globale

Osservare il codice seguente:

```
int func(void)
{
    return 3;
}

int gi = func();

int main()
{
    return gi;
}
```

Secondo lo standard C/C++, `func()` deve essere chiamato prima che `main()` venga eseguito. Ma chi lo chiama?

Un modo per determinare il chiamante consiste nell'impostare un punto di interruzione in `func()` , eseguire il debug dell'applicazione ed esaminare lo stack. Ciò è possibile poiché il codice sorgente CRT è incluso in Visual Studio.

Quando si esplorano le funzioni nello stack, si noterà che CRT chiama un elenco di puntatori a funzione. Queste funzioni sono simili a `func()` o ai costruttori per le istanze della classe.

CRT ottiene l'elenco dei puntatori a funzione dal compilatore Microsoft C++. Quando il compilatore rileva un inizializzatore globale, viene generato un inizializzatore dinamico nella `.CRT$XCU` sezione in cui `CRT` è il nome della sezione e `XCU` è il nome del gruppo. Per ottenere un elenco di inizializzatori dinamici, eseguire il comando **dumpbin, Main. obj**, quindi cercare la `.CRT$XCU` sezione. Questa condizione si applica quando Main. cpp viene compilato come file C++, non come file C. Sarà simile all'esempio seguente:

```
SECTION HEADER #6
.CRT$XCU name
       0 physical address
       0 virtual address
       4 size of raw data
     1F2 file pointer to raw data (000001F2 to 000001F5)
     1F6 file pointer to relocation table
       0 file pointer to line numbers
       1 number of relocations
       0 number of line numbers
40300040 flags
         Initialized Data
         4 byte align
         Read Only

RAW DATA #6
  00000000: 00 00 00 00                                      ....

RELOCATIONS #6
                                               Symbol    Symbol
Offset    Type              Applied To         Index     Name
--------  ----------------  -----------------  --------  -------
00000000  DIR32             00000000           C         ??__Egi@@YAXXZ (void __cdecl `dynamic initializer for 'gi''(void))
```

CRT definisce due puntatori:

- `__xc_a` in `.CRT$XCA`

- `__xc_z` in `.CRT$XCZ`

Nessuno dei due gruppi dispone di altri simboli definiti eccetto `__xc_a` e `__xc_z` .

Ora, quando il linker legge i vari gruppi `.CRT`, li combina in una sezione e li ordina alfabeticamente. Ciò significa che gli inizializzatori globali definiti dall'utente (che il compilatore di Microsoft C++ inserisce in `.CRT$XCU`) verranno sempre dopo `.CRT$XCA` e prima di `.CRT$XCZ`.

La sezione sarà simile all'esempio seguente:

```
.CRT$XCA
            __xc_a
.CRT$XCU
            Pointer to Global Initializer 1
            Pointer to Global Initializer 2
.CRT$XCZ
            __xc_z
```

Quindi, la libreria CRT utilizza sia `__xc_a` che `__xc_z` per determinare l'inizio e la fine dell'elenco di inizializzatori globali a causa del modo in cui sono disposti in memoria dopo il caricamento dell'immagine.

## <a name="see-also"></a>Vedi anche

[Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)
