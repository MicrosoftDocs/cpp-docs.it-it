---
title: MatchEventStack
description: Riferimento alla funzione MatchEventStack di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MatchEventStack
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 08627b6af601f6894aa228683ffb51232b015310
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92922815"
---
# <a name="matcheventstack"></a>MatchEventStack

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `MatchEventStack` funzione viene utilizzata per trovare una corrispondenza tra uno stack di eventi e una gerarchia di eventi specifica. Le gerarchie corrispondenti vengono trasmesse a un gestore per un'ulteriore elaborazione. Per ulteriori informazioni su eventi, stack di eventi e gerarchie, vedere [tabella eventi](../event-table.md).

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

*TEvent*\
Tipo dell'elemento padre più anziano da confrontare nello stack di eventi.

*TEvents*\
I tipi rimanenti di cui si desidera trovare una corrispondenza nello stack di eventi.

*TCallable*\
Tipo che supporta `operator()` . Per ulteriori informazioni sugli argomenti che vengono passati a questo operatore, vedere la descrizione del parametro *chiamabile* .

*TExtraArgs*\
Tipi degli argomenti aggiuntivi passati a `MatchEventStack` .

*eventStack*\
Stack di eventi da confrontare con la gerarchia dei tipi di evento descritta da *TEvent* e *TEvents* .

*Callable*\
Quando si corrisponde correttamente allo stack di eventi con la gerarchia dei tipi di evento descritta da *TEvent* e *TEvents* , `MatchEventStack` richiama *Callable* . Passa a un argomento *richiamabile* un r-value per ogni tipo nella gerarchia di eventi. Il pacchetto di parametri *OutArgs* è stato perfezionato nei parametri rimanenti di *Callable* .

*Argomenti di*\
Argomenti che vengono completati in modo perfetto per essere *richiamabili* insieme al tipo di evento corrispondente.

### <a name="return-value"></a>Valore restituito

**`bool`** Valore che è **`true`** se la corrispondenza ha avuto esito positivo; **`false`** in caso contrario,.

## <a name="remarks"></a>Osservazioni

L'ultimo evento in *eventStack* viene sempre associato all'ultima voce dell'elenco concatenato \[ *TEvent* , *TEvents...* \] Type. Tutte le altre voci *TEvent* e *TEvents* possono corrispondere a qualsiasi posizione in *eventStack* tranne l'ultima, purché siano nello stesso ordine.

I tipi di evento da usare per i parametri *TEvent* e *TEvents* sono selezionati da un elenco di *classi di acquisizione* . Per un elenco di eventi e le classi di acquisizione che è possibile usare per trovare una corrispondenza, vedere [tabella eventi](../event-table.md).

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
