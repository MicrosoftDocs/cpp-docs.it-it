---
title: MatchEventStackInMemberFunction
description: Riferimento alla funzione MatchEventStackInMemberFunction di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MatchEventStackInMemberFunction
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: db02ce5656bf8970ead7b49d5580f7d81bebb1b2
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224136"
---
# <a name="matcheventstackinmemberfunction"></a>MatchEventStackInMemberFunction

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `MatchEventStackInMemberFunction` funzione viene utilizzata per trovare la corrispondenza con uno stack di eventi rispetto a una gerarchia di eventi specifica, descritta dall'elenco di parametri di una funzione membro. Le gerarchie corrispondenti vengono trasmesse alla funzione membro per un'ulteriore elaborazione. Per ulteriori informazioni su eventi, stack di eventi e gerarchie, vedere [tabella eventi](../event-table.md).

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename     TInterface,
    typename     TReturn,
    typename     T1,
    typename...  TExtraParams,
    typename...  TExtraArgs>
bool MatchEventStackInMemberFunction(
    const EventStack&         eventStack,
    TInterface*               objectPtr,
    TReturn (TInterface::*    memberFunc)(T1, TExtraParams...),
    TExtraArgs&&...           extraArgs);

template <
    typename     TInterface,
    typename     TReturn,
    typename     T1,
    typename     T2,
    typename...  TExtraParams,
    typename...  TExtraArgs>
bool MatchEventStackInMemberFunction(
    const EventStack&         eventStack,
    TInterface*               objectPtr,
    TReturn (TInterface::*    memberFunc)(T1, T2, TExtraParams...),
    TExtraArgs&&...           extraArgs);

// Etc...

template <
    typename     TInterface,
    typename     TReturn,
    typename     T1,
    typename     T2,
    typename     T3,
    typename     T4,
    typename     T5,
    typename     T6,
    typename     T7,
    typename     T8,
    typename     T9,
    typename     T10,
    typename...  TExtraParams,
    typename...  TExtraArgs>
bool MatchEventStackInMemberFunction(
    const EventStack&         eventStack,
    TInterface*               objectPtr,
    TReturn (TInterface::*    memberFunc)(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, TExtraParams...),
    TExtraArgs&&...           extraArgs);
```

### <a name="parameters"></a>Parametri

*TInterface*\
Tipo che contiene la funzione membro.

*TReturn*\
Tipo restituito della funzione membro.

*T1*,..., *T10*\
Tipi che descrivono la gerarchia di eventi di cui trovare una corrispondenza.

*TExtraParams*\
Tipi dei parametri aggiuntivi accettati dalla funzione membro e tipi di gerarchia di eventi.

*TExtraArgs*\
Tipi degli argomenti aggiuntivi passati a `MatchEventStackInMemberFunction` .

*eventStack*\
Stack di eventi da confrontare con la gerarchia dei tipi di evento descritta da *T1* a *T10*.

*objectPtr*\
Puntatore a un oggetto su cui viene chiamato *memberFunc* .

*memberFunc*\
Funzione membro che descrive la gerarchia dei tipi di evento di cui trovare una corrispondenza.

*Argomenti di*\
Argomenti che vengono completati in modo perfetto per *memberFunc* insieme ai parametri della gerarchia dei tipi di evento.

### <a name="return-value"></a>Valore restituito

**`bool`** Valore che è **`true`** se la corrispondenza ha avuto esito positivo; **`false`** in caso contrario,.

## <a name="remarks"></a>Osservazioni

Per la corrispondenza dell'ultimo evento in *eventStack* viene sempre eseguita la corrispondenza con l'ultima voce nella gerarchia dei tipi di evento. Tutti gli altri tipi nella gerarchia dei tipi di evento possono corrispondere a qualsiasi posizione in *eventStack* , ad eccezione dell'ultimo, purché si trovino nello stesso ordine.

I tipi di evento da usare per i parametri da *T1* a *T10* sono selezionati da un elenco di *classi di acquisizione*. Per un elenco di eventi e le classi di acquisizione che è possibile usare per trovare una corrispondenza, vedere [tabella eventi](../event-table.md).

## <a name="example"></a>Esempio

```cpp
void MyClass::Foo1(Compiler cl, BackEndPass bep, C2DLL c2,
    CodeGeneration cg, Thread t, Function f) { }

void MyClass::Foo2(Compiler cl, Function f) { }

void MyClass::Foo3(Thread t, Compiler cl, Function f) { }

void MyClass::Foo4(Compiler cl) { }

void MyClass::OnStartActivity(const EventStack& eventStack)
{
    // Let's assume eventStack contains:
    // [Compiler, BackEndPass, C2DLL, CodeGeneration, Thread, Function]

    bool b1 = MatchEventStackInMemberFunction(
        eventStack, this, &MyClass::Foo1);

    bool b2 = MatchEventStackInMemberFunction(
        eventStack, this, &MyClass::Foo2);

    bool b3 = MatchEventStackInMemberFunction(
        eventStack, this, &MyClass::Foo3);

    bool b4 = MatchEventStackInMemberFunction(
        eventStack, this, &MyClass::Foo4);

    // b1: true because the parameter types of Foo1 match the eventStack
    //     exactly.
    // b2: true because Function is the last entry in both the member
    //     function parameter list and 'eventStack', and also because
    //     Compiler comes before Function in 'eventStack' and in the
    //     parameter type list.
    // b3: false because, even though both Thread and Compiler come
    //     before Function in 'eventStack', the member function parameter
    //     list doesn't list them in the right order.
    // b4: false because the last entry in the member function parameter
    //     list is Compiler, which doesn't match the last entry in 'eventStack'
    //     (Function).
}
```

::: moniker-end
