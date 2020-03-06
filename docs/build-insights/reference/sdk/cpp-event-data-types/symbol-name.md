---
title: SymbolName (classe)
description: Riferimento C++ alla classe symbolName SDK di build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- SymbolName
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: b5e9a9b22db99c099b9f7dc1813fb335358a83e8
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332999"
---
# <a name="symbolname-class"></a>SymbolName (classe)

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La classe `SymbolName` viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [SYMBOL_NAME](../event-table.md#symbol-name) .

## <a name="syntax"></a>Sintassi

```cpp
class SymbolName : public SimpleEvent
{
public:
    SymbolName(const RawEvent& event);

    const unsigned long long&  Key() const;
    const char*                Name() const;
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe base [SimpleEvent](simple-event.md) , la classe `SymbolName` contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[SymbolName](#symbol-name)

### <a name="functions"></a>Funzioni

[Nome](#name)
[chiave](#key)

## <a name="key"></a>Chiave

```cpp
const unsigned long long& Key() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore numerico per il tipo rappresentato da questo simbolo. Questo identificatore è univoco all'interno di un passaggio front-end del compilatore.

## <a name="name"></a> Name

```cpp
const char* Name() const;
```

### <a name="return-value"></a>Valore restituito

Nome del tipo rappresentato dal simbolo, codificato in UTF-8.

## <a name="symbol-name"></a>SymbolName

```cpp
SymbolName(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*event*\
Evento [SYMBOL_NAME](../event-table.md#symbol-name) .

::: moniker-end
