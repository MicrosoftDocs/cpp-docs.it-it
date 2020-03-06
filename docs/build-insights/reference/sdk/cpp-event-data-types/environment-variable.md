---
title: Classe Metodo EnvironmentVariable
description: Riferimento C++ alla classe Metodo EnvironmentVariable di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- EnvironmentVariable
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 19e9278e76fb2116dac30a0e790fba86c6c56484
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333440"
---
# <a name="environmentvariable-class"></a>Classe Metodo EnvironmentVariable

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La classe `EnvironmentVariable` viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [ENVIRONMENT_VARIABLE](../event-table.md#environment-variable) .

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

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe base [SimpleEvent](simple-event.md) , la classe `EnvironmentVariable` contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[Metodo EnvironmentVariable](#environment-variable)

### <a name="functions"></a>Funzioni

[Nome](#name)
[Valore](#value)

## <a name="environment-variable"></a>Metodo EnvironmentVariable

```cpp
EnvironmentVariable(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*event*\
Evento [ENVIRONMENT_VARIABLE](../event-table.md#environment-variable) .

## <a name="name"></a> Name

```cpp
const wchar_t Name() const;
```

### <a name="return-value"></a>Valore restituito

Nome della variabile di ambiente.

## <a name="value"></a>Valore

```cpp
const wchar_t Value() const;
```

### <a name="return-value"></a>Valore restituito

Valore della variabile di ambiente.

::: moniker-end
