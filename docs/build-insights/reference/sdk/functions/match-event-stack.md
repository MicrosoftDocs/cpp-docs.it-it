---
title: MatchEventStack
description: Il riferimento alla funzione MatchEventStack di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MatchEventStack
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: a223d420e8c48667fbd1c6569f02d0486f597b5e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323867"
---
# <a name="matcheventstack"></a>MatchEventStack

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `MatchEventStack` funzione viene utilizzata per confrontare uno stack di eventi con una gerarchia di eventi specifica. Le gerarchie corrispondenti vengono inoltrate a un gestore per un'ulteriore elaborazione. Per ulteriori informazioni su eventi, stack di eventi e gerarchie, vedere [la tabella degli eventi](../event-table.md).

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename          TEvent,
    typename...       TEvents,
    typename          TCallable,
    typename...       TExtraArgs>
bool MatchEventStack(
    const EventStack& eventStack,
    TCallable&&       callable,
    TExtraArgs&&...   extraArgs);
```

### <a name="parameters"></a>Parametri

*Evento*\
Tipo dell'elemento padre meno recente di cui trovare la corrispondenza nello stack di eventi.

*Eventi TEvents*\
I tipi rimanenti che si desidera confrontare nello stack di eventi.

*TCallabile*\
Tipo che supporta `operator()`. Per altre informazioni su quali argomenti vengono passati a questo operatore, vedere la descrizione del parametro *richiamabile.*

*TExtraArgs (informazioni in base all'altro)*\
Tipi degli argomenti aggiuntivi `MatchEventStack`passati a .

*eventStack (impilare)*\
Stack di eventi da confrontare con la gerarchia dei tipi di evento descritta da *TEvent* e *TEvents*.

*Callable*\
Una volta trovata correttamente la corrispondenza dello stack di `MatchEventStack` eventi con la gerarchia dei tipi di evento descritta da *TEvent* e *TEvents*, richiama *richiama bile*. Passa a un argomento r-value *richiamabile* per ogni tipo nella gerarchia di eventi. Il pacchetto di parametri *extraArgs* è perfetto inoltrato nei parametri rimanenti di *richiamabile.*

*ExtraArgs (informazioni in stato inci*\
Argomenti che vengono inoltrati per perfect a *richiamabili* insieme al tipo di evento corrispondente.

### <a name="return-value"></a>Valore restituito

Valore **bool** che è **true** se la corrispondenza ha avuto esito positivo o **false** in caso contrario.

## <a name="remarks"></a>Osservazioni

L'ultimo evento in *eventStack* viene sempre confrontato con \[l'ultima voce nell'evento *TEvent*, *TEvents concatenato...* \] nell'elenco dei tipi. Tutte le altre voci *TEvent* e *TEvents* possono corrispondere a qualsiasi posizione in *eventStack* tranne l'ultima, a condizione che siano nello stesso ordine.

I tipi di evento da utilizzare per i parametri *TEvent* e *TEvents* vengono selezionati da un elenco di classi di *acquisizione.* Per un elenco degli eventi e delle classi di acquisizione che è possibile utilizzare per associarli, vedere [tabella eventi](../event-table.md).

## <a name="example"></a>Esempio

```cpp
void MyClass::OnStartActivity(const EventStack& eventStack)
{
    // Let's assume eventStack contains:
    // [Compiler, BackEndPass, C2DLL, CodeGeneration, Thread, Function]

    bool b1 = MatchEventStack<Compiler, BackEndPass, C2DLL,
                CodeGeneration, Thread, Function>(
        eventStack, [](Compiler cl, BackEndPass bep, C2DLL c2,
            CodeGeneration cg, Thread t, Function f){ /* Do something ... */ });

    bool b2 = MatchEventStack<Compiler, Function>(
        eventStack, [](Compiler cl, Function f){ /* Do something... */ });

    bool b3 = MatchEventStack<Thread, Compiler, Function>(
        eventStack, [](Thread t, Compiler cl Function f){ /* Do something... */ });

    bool b4 = MatchEventStack<Compiler>(
        eventStack, [](Compiler cl){ /* Do something... */ });


    // b1: true because the list of types matches the eventStack exactly.
    // b2: true because Function is the last entry in both the type list
    //     and 'eventStack', and also because Compiler comes before
    //     Function in 'eventStack' and in the type list.
    // b3: false because, even though both Thread and Compiler come
    //     before Function in 'eventStack', they aren't listed in the
    //     right order in the type list.
    // b4: false because the last entry in the type list is Compiler,
    //     which doesn't match the last entry in 'eventStack' (Function).
}
```

::: moniker-end
