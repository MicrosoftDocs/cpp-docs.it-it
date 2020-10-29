---
title: Classe ForceInlinee
description: Riferimento alla classe ForceInlinee di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- ForceInlinee
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 53fff7b6cfd37ba3e3211dd072c1ce3386d00fda
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920671"
---
# <a name="forceinlinee-class"></a>Classe ForceInlinee

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `ForceInlinee` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [FORCE_INLINEE](../event-table.md#force-inlinee) .

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

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe base [SimpleEvent](simple-event.md) , la `ForceInlinee` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[ForceInlinee](#force-inlinee)

### <a name="functions"></a>Funzioni

[Nome](#name) 
 [Dimensioni](#size)

## <a name="forceinlinee"></a><a name="force-inlinee"></a> ForceInlinee

```cpp
ForceInlinee(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [FORCE_INLINEE](../event-table.md#force-inlinee) .

## <a name="name"></a><a name="name"></a> Nome

```cpp
const char* Name() const;
```

### <a name="return-value"></a>Valore restituito

Nome della funzione inline forzata, codificata in UTF-8.

## <a name="size"></a>Dimensioni dell'<a name="size"></a>

```cpp
const unsigned short& Size() const;
```

### <a name="return-value"></a>Valore restituito

Dimensione della funzione forzata, come numero di istruzioni intermedie.

::: moniker-end
