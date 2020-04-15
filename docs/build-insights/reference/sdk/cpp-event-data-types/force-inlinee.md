---
title: Classe ForceInlinee
description: Il riferimento alla classe ForceInlinee dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- ForceInlinee
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: c6a1af0384197a0a3b6062ad9ef30537c348190d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324787"
---
# <a name="forceinlinee-class"></a>Classe ForceInlinee

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `ForceInlinee` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usalo per trovare una corrispondenza con un [evento FORCE_INLINEE.](../event-table.md#force-inlinee)

## <a name="syntax"></a>Sintassi

```cpp
class ForceInlinee : public SimpleEvent
{
public:
    ForceInlinee(const RawEvent& event);

    const char*             Name() const;
    const unsigned short&   Size() const;
};
```

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla classe `ForceInlinee` base [SimpleEvent](simple-event.md) , la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[ForzaInlinee](#force-inlinee)

### <a name="functions"></a>Funzioni

[Dimensione nome](#name)
[Size](#size)

## <a name="forceinlinee"></a><a name="force-inlinee"></a>ForzaInlinee

```cpp
ForceInlinee(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un evento [FORCE_INLINEE.](../event-table.md#force-inlinee)

## <a name="name"></a><a name="name"></a>Nome

```cpp
const char* Name() const;
```

### <a name="return-value"></a>Valore restituito

Nome della funzione forzata inline, codificato in UTF-8.

## <a name="size"></a>Dimensioni dell'<a name="size"></a>

```cpp
const unsigned short& Size() const;
```

### <a name="return-value"></a>Valore restituito

Dimensione della funzione forzata inline, come numero di istruzioni intermedie.

::: moniker-end
