---
title: Classe Metodo EnvironmentVariable
description: Riferimento alla classe Metodo EnvironmentVariable di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- EnvironmentVariable
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: f707ab744aaf6097975ba9e189815df3c9f32266
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920763"
---
# <a name="environmentvariable-class"></a>Classe Metodo EnvironmentVariable

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `EnvironmentVariable` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [ENVIRONMENT_VARIABLE](../event-table.md#environment-variable) .

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

Insieme ai membri ereditati dalla relativa classe base [SimpleEvent](simple-event.md) , la `EnvironmentVariable` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[EnvironmentVariable](#environment-variable)

### <a name="functions"></a>Funzioni

[Nome](#name) 
 [Valore](#value) di

## <a name="environmentvariable"></a><a name="environment-variable"></a> Metodo EnvironmentVariable

```cpp
EnvironmentVariable(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [ENVIRONMENT_VARIABLE](../event-table.md#environment-variable) .

## <a name="name"></a><a name="name"></a> Nome

```cpp
const wchar_t Name() const;
```

### <a name="return-value"></a>Valore restituito

Nome della variabile di ambiente.

## <a name="value"></a>Valore di <a name="value"></a>

```cpp
const wchar_t Value() const;
```

### <a name="return-value"></a>Valore restituito

Valore della variabile di ambiente.

::: moniker-end
