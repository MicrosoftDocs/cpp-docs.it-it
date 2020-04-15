---
title: Classe EnvironmentVariable
description: Il riferimento alla classe EnvironmentVariable dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- EnvironmentVariable
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 963c52e0ea9e048448c6f2b3ac62d9938817467e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325014"
---
# <a name="environmentvariable-class"></a>Classe EnvironmentVariable

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `EnvironmentVariable` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usalo per trovare una corrispondenza con un evento [ENVIRONMENT_VARIABLE.](../event-table.md#environment-variable)

## <a name="syntax"></a>Sintassi

```cpp
class EnvironmentVariable : public SimpleEvent
{
public:
    EnvironmentVariable(const RawEvent& event);

    const wchar_t* Name() const;
    const wchar_t* Value() const;
};
```

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla classe `EnvironmentVariable` base [SimpleEvent](simple-event.md) , la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[EnvironmentVariable](#environment-variable)

### <a name="functions"></a>Funzioni

[Nome](#name)
[Valore](#value)

## <a name="environmentvariable"></a><a name="environment-variable"></a>Variabile di ambienteEnvironmentVariable

```cpp
EnvironmentVariable(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un [evento ENVIRONMENT_VARIABLE.](../event-table.md#environment-variable)

## <a name="name"></a><a name="name"></a>Nome

```cpp
const wchar_t Name() const;
```

### <a name="return-value"></a>Valore restituito

Nome della variabile di ambiente.

## <a name="value"></a><a name="value"></a> Valore

```cpp
const wchar_t Value() const;
```

### <a name="return-value"></a>Valore restituito

Valore della variabile di ambiente.

::: moniker-end
