---
title: MatchEvent
description: Riferimento C++ alla funzione MatchEvent di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MatchEvent
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: f8022953e2f56f7c8917f161b094c50e0c5ecbdf
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332775"
---
# <a name="matchevent"></a>MatchEvent

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La funzione `MatchEvent` viene utilizzata per trovare una corrispondenza tra un evento e un elenco di tipi di evento. Se l'evento corrisponde a un tipo nell'elenco, viene inviato a un gestore per un'ulteriore elaborazione.

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename        TEvent,
    typename...     TEvents,
    typename        TCallable,
    typename...     TExtraArgs>
bool MatchEvent(
    const RawEvent& event,
    TCallable&&     callable,
    TExtraArgs&&... extraArgs);
```

### <a name="parameters"></a>Parametri

\ *TEvent*
Primo tipo di evento a cui si desidera trovare una corrispondenza.

\ *TEvents*
Tipi di evento rimanenti di cui si desidera trovare una corrispondenza.

\ *TCallable*
Tipo che supporta `operator()`. Per ulteriori informazioni sugli argomenti che vengono passati a questo operatore, vedere la descrizione del parametro *chiamabile* .

\ *TExtraArgs*
Tipi degli argomenti aggiuntivi passati a `MatchEvent`.

*event*\
Evento da confrontare con i tipi di evento descritti da *TEvent* e *TEvents*.

\ *chiamabili*
`MatchEvent` richiama *Callable* dopo che la corrispondenza dell'evento con uno dei tipi di evento descritti da *TEvent* e *TEvents*è stata completata. Il primo argomento passato a *Callable* è un r-value del tipo di evento corrispondente. Il pacchetto di parametri *OutArgs* è stato perfezionato nei parametri rimanenti di *Callable*.  

\ di *argomenti*
Argomenti che vengono completati in modo perfetto per essere *richiamabili* insieme al tipo di evento corrispondente.

### <a name="return-value"></a>Valore restituito

Valore **bool** che è **true** se la corrispondenza è stata eseguita correttamente; in caso contrario, **false** .

## <a name="remarks"></a>Osservazioni

I tipi di evento da usare per i parametri *TEvent* e *TEvents* sono selezionati da un elenco di *classi di acquisizione*. Per un elenco di eventi e le classi di acquisizione che è possibile usare per trovare una corrispondenza, vedere [tabella eventi](../event-table.md).

## <a name="example"></a>Esempio

```cpp
void MyClass::OnStartActivity(const EventStack& eventStack)
{
    // Let's assume eventStack contains:
    // [Compiler, BackEndPass, C2DLL, CodeGeneration, Thread, Function]

    auto& functionEvent = eventStack.Back(); // The Function event

    bool b1 = MatchEvent<Function, Thread>(
        functionEvent, [](auto matchedEvent){ /* Do something... */});

    bool b2 = MatchEvent<CodeGeneration, Thread>(
        functionEvent, [](auto matchedEvent){ /* Do something... */});


    // b1: true because the list of types contains Function, which is
    //     the type of the event we are trying to match.
    // b2: false because the list of types doesn't contain Function.
}
```

::: moniker-end
