---
title: Funzione MatchEventInMemberFunction
description: Informazioni di riferimento per la funzione MatchEventInMemberFunction dell'SDK di Build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MatchEventInMemberFunction
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 522630da16e3f4a1294316d88140f4bc25dca2c8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323892"
---
# <a name="matcheventinmemberfunction"></a>Funzione MatchEventInMemberFunction

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `MatchEventInMemberFunction` funzione viene utilizzata per confrontare un evento rispetto al tipo descritto dal primo parametro di una funzione membro. L'evento corrispondente viene inoltrato alla funzione membro per un'ulteriore elaborazione.

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename     TInterface,
    typename     TReturn,
    typename     TEvent,
    typename...  TExtraParams,
    typename...  TExtraArgs>
bool MatchEventInMemberFunction(
    const RawEvent&          event,
    TInterface*              objectPtr,
    TReturn (TInterface::*   memberFunc)(TEvent, TExtraParams...),
    TExtraArgs&&...          extraArgs);
```

### <a name="parameters"></a>Parametri

*Interfaccia utente*\
Tipo che contiene la funzione membro.

*Capotame*\
Tipo restituito della funzione membro.

*Evento*\
Tipo dell'evento di cui trovare la corrispondenza.

*TExtraParams (informazioni in base al tA*\
Tipi dei parametri aggiuntivi accettati dalla funzione membro insieme al tipo di evento da confrontare.

*TExtraArgs (informazioni in base all'altro)*\
Tipi degli argomenti aggiuntivi passati `MatchEventInMemberFunction`a .

*Evento*\
Evento da confrontare con il tipo di evento descritto da *TEvent*.

*objectPtr*\
Puntatore a un oggetto su cui viene chiamato *memberFunc.*

*membroFunc*\
Funzione membro che descrive il tipo di evento di corrispondenza.

*ExtraArgs (informazioni in stato inci*\
Argomenti che vengono inoltrati perfetti a *memberFunc* insieme al parametro del tipo di evento.

### <a name="return-value"></a>Valore restituito

Valore **bool** che è **true** se la corrispondenza ha avuto esito positivo o **false** in caso contrario.

## <a name="remarks"></a>Osservazioni

Il tipo di evento da utilizzare per il parametro *TEvent* può essere selezionato da un elenco di classi di *acquisizione.* Per un elenco degli eventi e delle classi di acquisizione che è possibile utilizzare per associarli, vedere [tabella eventi](../event-table.md).

## <a name="example"></a>Esempio

```cpp
void MyClass::Foo1(Function f) {}

void MyClass::Foo2(Compiler cl) {}

void MyClass::OnStartActivity(const EventStack& eventStack)
{
    // Let's assume eventStack contains:
    // [Compiler, BackEndPass, C2DLL, CodeGeneration, Thread, Function]

    auto& functionEvent = eventStack.Back(); // The Function event

    bool b1 = MatchEventInMemberFunction(
        functionEvent, this, &MyClass::Foo1);

    bool b2 = MatchEventInMemberFunction(
        functionEvent, this, &MyClass::Foo2);

    // b1: true because the first parameter of Foo1 is Function.
    // b2: false because the first parameter of Foo2 isn't Function.
}
```

::: moniker-end
