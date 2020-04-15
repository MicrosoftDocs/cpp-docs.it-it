---
title: Evento Corrispondenza
description: Informazioni di riferimento per la funzione MatchEvent dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MatchEvent
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 0c60653641c676716bcdd60865433773da79325f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323862"
---
# <a name="matchevent"></a>Evento Corrispondenza

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `MatchEvent` funzione viene utilizzata per confrontare un evento con un elenco di tipi di evento. Se l'evento corrisponde a un tipo nell'elenco, viene inoltrato a un gestore per un'ulteriore elaborazione.

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

*Evento*\
Primo tipo di evento di cui si desidera trovare la corrispondenza.

*Eventi TEvents*\
Tipi di evento rimanenti che si desidera abbinare.

*TCallabile*\
Tipo che supporta `operator()`. Per altre informazioni su quali argomenti vengono passati a questo operatore, vedere la descrizione del parametro *richiamabile.*

*TExtraArgs (informazioni in base all'altro)*\
Tipi degli argomenti aggiuntivi passati `MatchEvent`a .

*Evento*\
Evento da confrontare con i tipi di evento descritti da *TEvent* e *TEvents*.

*Callable*\
`MatchEvent`richiama bile dopo aver *confrontato* correttamente l'evento con uno dei tipi di evento descritti da *TEvent* e *TEvents*. Il primo argomento passato a *callable* è un r-value del tipo di evento corrispondente. Il pacchetto di parametri *extraArgs* è perfetto inoltrato nei parametri rimanenti di *richiamabile.*  

*ExtraArgs (informazioni in stato inci*\
Argomenti che vengono inoltrati per perfect a *richiamabili* insieme al tipo di evento corrispondente.

### <a name="return-value"></a>Valore restituito

Valore **bool** **true** se la corrispondenza ha avuto esito positivo o **false** in caso contrario.

## <a name="remarks"></a>Osservazioni

I tipi di evento da utilizzare per i parametri *TEvent* e *TEvents* vengono selezionati da un elenco di classi di *acquisizione.* Per un elenco degli eventi e delle classi di acquisizione che è possibile utilizzare per associarli, vedere [tabella eventi](../event-table.md).

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
