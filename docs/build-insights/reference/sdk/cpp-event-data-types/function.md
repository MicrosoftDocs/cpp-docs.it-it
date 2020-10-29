---
title: Classe Function
description: Informazioni di riferimento sulla classe di funzione SDK di compilazione di C++.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Function
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 874477b9ca31095bfcf4ba3c7a6fd220dc073415
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920645"
---
# <a name="function-class"></a>Classe Function

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `Function` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento di [funzione](../event-table.md#function) .

## <a name="syntax"></a>Sintassi

```cpp
class Function : public Activity
{
public:
    Function(const RawEvent& event);

    const char* Name() const;
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la `Function` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[Funzione](#function)

### <a name="functions"></a>Funzioni

[Nome](#name)

## <a name="function"></a><a name="function"></a> Funzione

```cpp
Function(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento di [funzione](../event-table.md#function) .

## <a name="name"></a><a name="name"></a> Nome

```cpp
const char* Name() const;
```

### <a name="return-value"></a>Valore restituito

Nome della funzione, codificato in UTF-8.

::: moniker-end
