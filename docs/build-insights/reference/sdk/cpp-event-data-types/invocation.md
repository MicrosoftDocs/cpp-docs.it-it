---
title: Classe di chiamata
description: Riferimento C++ alla classe di chiamata SDK per Build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Invocation
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 0c4698300a3eeaf77210ad74f84b0c0cd219b457
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333230"
---
# <a name="invocation-class"></a>Classe di chiamata

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La classe `Invocation` viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [del compilatore o del](../event-table.md#compiler) [linker](../event-table.md#linker) .

## <a name="syntax"></a>Sintassi

```cpp
class Invocation : public Activity
{
    const INVOCATION_DATA* data_;

public:
    enum class Type
    {
        CL      = MSVC_TOOL_CODE_CL,
        LINK    = MSVC_TOOL_CODE_LINK
    };

    Invocation(const RawEvent& event);

    Type             Type() const;
    const char*      ToolVersionString() const;
    const wchar_t*   WorkingDirectory() const;
    const wchar_t*   ToolPath() const;

    const INVOCATION_VERSION_DATA& ToolVersion() const;
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la classe `Invocation` contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[Chiamata](#invocation)

### <a name="functions"></a>Funzioni

[Percorso](#tool-path)
[toolversion dell'](#tool-version)
[ToolVersionString](#tool-version-string)
[tipo](#type)
[WorkingDirectory](#working-directory)

## <a name="invocation"></a>Chiamata

```cpp
Invocation(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*event*\
Evento [del compilatore o del](../event-table.md#compiler) [linker](../event-table.md#linker) .

## <a name="tool-path"></a>ToolPath

```cpp
const wchar_t* ToolPath() const;
```

### <a name="return-value"></a>Valore restituito

Percorso assoluto dello strumento che è stato richiamato.

## <a name="tool-version"></a>ToolVersion dell'

```cpp
const INVOCATION_VERSION_DATA& ToolVersion() const;
```

### <a name="return-value"></a>Valore restituito

Versione dello strumento richiamato, come riferimento [INVOCATION_VERSION_DATA](../c-event-data-types/invocation-version-data-struct.md) .

## <a name="tool-version-string"></a>ToolVersionString

```cpp
const char* ToolVersionString() const;
```

### <a name="return-value"></a>Valore restituito

Versione dello strumento richiamata come stringa ANSI.

## <a name="type"></a>Tipo

```cpp
Type Type() const;
```

### <a name="return-value"></a>Valore restituito

Codice che indica lo strumento che è stato richiamato.

## <a name="working-directory"></a>WorkingDirectory

```cpp
const wchar_t* WorkingDirectory() const;
```

### <a name="return-value"></a>Valore restituito

Percorso assoluto della directory in cui è stato richiamato lo strumento.

::: moniker-end
