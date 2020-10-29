---
title: Classe CommandLine
description: Riferimento alla classe della riga di comando di build Insights SDK per C++.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- CommandLine
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 5214f2970329510088184dc3092db66607f4d67e
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923337"
---
# <a name="commandline-class"></a>Classe CommandLine

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `CommandLine` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [COMMAND_LINE](../event-table.md#command-line) .

## <a name="syntax"></a>Sintassi

```cpp
class CommandLine : public SimpleEvent
{
public:
    CommandLine(const RawEvent& event);

    const wchar_t* Value() const;
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe base [SimpleEvent](simple-event.md) , la `CommandLine` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[CommandLine](#command-line)

### <a name="functions"></a>Funzioni

[Valore](#value)

## <a name="commandline"></a><a name="command-line"></a> CommandLine

```cpp
CommandLine(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [COMMAND_LINE](../event-table.md#command-line) .

## <a name="value"></a>Valore di <a name="value"></a>

```cpp
const wchar_t Value() const;
```

### <a name="return-value"></a>Valore restituito

Stringa contenente una riga di comando. Il valore include gli argomenti ottenuti da un file di risposta e dalle variabili di ambiente, ad esempio CL, \_ CL \_ , collegamento e \_ collegamento \_ .

::: moniker-end
