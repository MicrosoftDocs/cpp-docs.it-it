---
title: Classe di chiamata
description: Il riferimento della classe Invocation dell'SDK di Build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Invocation
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: fcb087d46ea445251b0108f811545a44c26f421e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324634"
---
# <a name="invocation-class"></a>Classe di chiamata

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `Invocation` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Utilizzarlo per trovare una corrispondenza con un evento [COMPILER](../event-table.md#compiler) o [LINKER.](../event-table.md#linker)

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

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla relativa `Invocation` classe base [Activity,](activity.md) la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[Chiamata](#invocation)

### <a name="functions"></a>Funzioni

[ToolPath](#tool-path)
[ToolVersion ToolVersion](#tool-version)
[ToolVersionString](#tool-version-string)
[Tipo](#type)
[WorkingDirectory](#working-directory)

## <a name="invocation"></a><a name="invocation"></a>Chiamata

```cpp
Invocation(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un evento [COMPILER](../event-table.md#compiler) o [LINKER.](../event-table.md#linker)

## <a name="toolpath"></a><a name="tool-path"></a>Percorso utensile

```cpp
const wchar_t* ToolPath() const;
```

### <a name="return-value"></a>Valore restituito

Percorso assoluto dello strumento richiamato.

## <a name="toolversion"></a><a name="tool-version"></a>ToolVersion

```cpp
const INVOCATION_VERSION_DATA& ToolVersion() const;
```

### <a name="return-value"></a>Valore restituito

Versione dello strumento richiamata, come riferimento [INVOCATION_VERSION_DATA.](../c-event-data-types/invocation-version-data-struct.md)

## <a name="toolversionstring"></a><a name="tool-version-string"></a>Stringa ToolVersion

```cpp
const char* ToolVersionString() const;
```

### <a name="return-value"></a>Valore restituito

Versione dello strumento richiamata, come stringa ANSI.

## <a name="type"></a>Tipo di <a name="type"></a>

```cpp
Type Type() const;
```

### <a name="return-value"></a>Valore restituito

Codice che indica lo strumento richiamato.

## <a name="workingdirectory"></a><a name="working-directory"></a>Workingdirectory

```cpp
const wchar_t* WorkingDirectory() const;
```

### <a name="return-value"></a>Valore restituito

Percorso assoluto della directory in cui è stato richiamato lo strumento.

::: moniker-end
