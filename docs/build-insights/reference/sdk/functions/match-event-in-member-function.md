---
title: MatchEventInMemberFunction
description: Riferimento C++ alla funzione MatchEventInMemberFunction di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MatchEventInMemberFunction
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: eabbb8a91609b1447ebcc19af32df2ffed347c24
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332803"
---
# <a name="matcheventinmemberfunction"></a>MatchEventInMemberFunction

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La funzione `MatchEventInMemberFunction` viene utilizzata per trovare una corrispondenza tra un evento e il tipo descritto dal primo parametro di una funzione membro. L'evento corrispondente viene quindi inviato alla funzione membro per un'ulteriore elaborazione.

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

\ *TInterface*
Tipo che contiene la funzione membro.

\ *TReturn*
Tipo restituito della funzione membro.

\ *TEvent*
Tipo dell'evento di cui trovare la corrispondenza.

\ *TExtraParams*
Tipi dei parametri aggiuntivi accettati dalla funzione membro insieme al tipo di evento per cui trovare una corrispondenza.

\ *TExtraArgs*
Tipi degli argomenti aggiuntivi passati a `MatchEventInMemberFunction`.

*event*\
Evento da confrontare con il tipo di evento descritto da *TEvent*.

\ *objectPtr*
Puntatore a un oggetto su cui viene chiamato *memberFunc* .

\ *memberFunc*
Funzione membro che descrive il tipo di evento di cui trovare la corrispondenza.

\ di *argomenti*
Argomenti che vengono completati in modo perfetto per *memberFunc* insieme al parametro del tipo di evento.

### <a name="return-value"></a>Valore restituito

Valore **bool** che è **true** se la corrispondenza è riuscita o **false** in caso contrario.

## <a name="remarks"></a>Osservazioni

Il tipo di evento da utilizzare per il parametro *TEvent* può essere selezionato da un elenco di *classi di acquisizione*. Per un elenco di eventi e le classi di acquisizione che è possibile usare per trovare una corrispondenza, vedere [tabella eventi](../event-table.md).

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
