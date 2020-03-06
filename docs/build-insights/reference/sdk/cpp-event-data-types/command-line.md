---
title: Classe CommandLine
description: Riferimento C++ alla classe della riga di comando di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- CommandLine
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: ff16646920fe77f7f3b4cb8a194a38984c3e6c32
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333510"
---
# <a name="commandline-class"></a>Classe CommandLine

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La classe `CommandLine` viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [COMMAND_LINE](../event-table.md#command-line) .

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

Insieme ai membri ereditati dalla relativa classe base [SimpleEvent](simple-event.md) , la classe `CommandLine` contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[CommandLine](#command-line)

### <a name="functions"></a>Funzioni

[Valore](#value)

## <a name="command-line"></a>CommandLine

```cpp
CommandLine(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*event*\
Evento [COMMAND_LINE](../event-table.md#command-line) .

## <a name="value"></a>Valore

```cpp
const wchar_t Value() const;
```

### <a name="return-value"></a>Valore restituito

Stringa contenente una riga di comando. Il valore include gli argomenti ottenuti da un file di risposta e dalle variabili di ambiente, ad esempio CL, \_CL\_, link e \_LINK\_.

::: moniker-end
