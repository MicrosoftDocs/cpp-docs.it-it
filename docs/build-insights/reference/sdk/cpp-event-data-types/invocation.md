---
title: Classe di chiamata
description: Riferimento alla classe di chiamata SDK per Build Insights di C++.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Invocation
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: dfd463c7b9ca72dc14ad74b3759fdd1e3730d5a9
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923141"
---
# <a name="invocation-class"></a>Classe di chiamata

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `Invocation` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [del compilatore o del](../event-table.md#compiler) [linker](../event-table.md#linker) .

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

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la `Invocation` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[Chiamata](#invocation)

### <a name="functions"></a>Funzioni

[Percorso utensile](#tool-path) 
 [ToolVersion dell'](#tool-version) 
 [ToolVersionString](#tool-version-string) 
 [Tipo](#type) 
 di [WorkingDirectory](#working-directory)

## <a name="invocation"></a><a name="invocation"></a> Chiamata

```cpp
Invocation(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [del compilatore o del](../event-table.md#compiler) [linker](../event-table.md#linker) .

## <a name="toolpath"></a><a name="tool-path"></a> ToolPath

```cpp
const wchar_t* ToolPath() const;
```

### <a name="return-value"></a>Valore restituito

Percorso assoluto dello strumento che è stato richiamato.

## <a name="toolversion"></a><a name="tool-version"></a> ToolVersion dell'

```cpp
const INVOCATION_VERSION_DATA& ToolVersion() const;
```

### <a name="return-value"></a>Valore restituito

Versione dello strumento richiamato, come riferimento [INVOCATION_VERSION_DATA](../c-event-data-types/invocation-version-data-struct.md) .

## <a name="toolversionstring"></a><a name="tool-version-string"></a> ToolVersionString

```cpp
const char* ToolVersionString() const;
```

### <a name="return-value"></a>Valore restituito

Versione dello strumento richiamata come stringa ANSI.

## <a name="type"></a>Tipo di <a name="type"></a>

```cpp
Type Type() const;
```

### <a name="return-value"></a>Valore restituito

Codice che indica lo strumento che è stato richiamato.

## <a name="workingdirectory"></a><a name="working-directory"></a> WorkingDirectory

```cpp
const wchar_t* WorkingDirectory() const;
```

### <a name="return-value"></a>Valore restituito

Percorso assoluto della directory in cui è stato richiamato lo strumento.

::: moniker-end
