---
title: Funzione MatchEventStackInMemberFunctionMatchEventStackInMemberFunction
description: Informazioni di riferimento per la funzione MatchEventStackInMemberFunction dell'SDK di C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MatchEventStackInMemberFunction
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 28842a02e7edc2e00266d8c7941798f4ce714ded
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323891"
---
# <a name="matcheventstackinmemberfunction"></a>Funzione MatchEventStackInMemberFunctionMatchEventStackInMemberFunction

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `MatchEventStackInMemberFunction` funzione viene utilizzata per confrontare uno stack di eventi con una gerarchia di eventi specifica, descritta dall'elenco di parametri di una funzione membro. Le gerarchie corrispondenti vengono inoltrate alla funzione membro per un'ulteriore elaborazione. Per ulteriori informazioni su eventi, stack di eventi e gerarchie, vedere [la tabella degli eventi](../event-table.md).

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

*Interfaccia utente*\
Tipo che contiene la funzione membro.

*Capotame*\
Tipo restituito della funzione membro.

*T1*, ..., *T10*\
Tipi che descrivono la gerarchia di eventi in modo che corrispondano.

*TExtraParams (informazioni in base al tA*\
Tipi dei parametri aggiuntivi accettati dalla funzione membro e dai tipi della gerarchia di eventi.

*TExtraArgs (informazioni in base all'altro)*\
Tipi degli argomenti aggiuntivi passati `MatchEventStackInMemberFunction`a .

*eventStack (impilare)*\
Stack di eventi da confrontare con la gerarchia del tipo di evento descritta da *T1* a *T10*.

*objectPtr*\
Puntatore a un oggetto su cui viene chiamato *memberFunc.*

*membroFunc*\
Funzione membro che descrive la gerarchia del tipo di evento di corrispondenza.

*ExtraArgs (informazioni in stato inci*\
Argomenti che vengono inoltrati perfetti a *memberFunc* insieme ai parametri della gerarchia del tipo di evento.

### <a name="return-value"></a>Valore restituito

Valore **bool** che è **true** se la corrispondenza ha avuto esito positivo o **false** in caso contrario.

## <a name="remarks"></a>Osservazioni

L'ultimo evento in *eventStack* viene sempre confrontato con l'ultima voce nella gerarchia dei tipi di evento in modo che corrisponda. Tutti gli altri tipi nella gerarchia dei tipi di evento possono corrispondere a qualsiasi posizione in *eventStack* tranne l'ultimo, a condizione che siano nello stesso ordine.

I tipi di evento da utilizzare per i parametri *T1* e *T10* vengono selezionati da un elenco di classi di *acquisizione.* Per un elenco degli eventi e delle classi di acquisizione che è possibile utilizzare per associarli, vedere [tabella eventi](../event-table.md).

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
