---
title: Classe ExecutableImageOutput
description: Riferimento alla classe ExecutableImageOutput di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- ExecutableImageOutput
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: bf6bb9790dabc39d1ed6baa417d5dc3bf72ed5e6
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920723"
---
# <a name="executableimageoutput-class"></a>Classe ExecutableImageOutput

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `ExecutableImageOutput` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [EXECUTABLE_IMAGE_OUTPUT](../event-table.md#executable-image-output) .

## <a name="syntax"></a>Sintassi

```cpp
class ExecutableImageOutput : public FileOutput
{
public:
    ExecutableImageOutput(const RawEvent& event);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe base [FileOutput](file-output.md) , la `ExecutableImageOutput` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[ExecutableImageOutput](#executable-image-output)

## <a name="executableimageoutput"></a><a name="executable-image-output"></a> ExecutableImageOutput

```cpp
ExecutableImageOutput(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [EXECUTABLE_IMAGE_OUTPUT](../event-table.md#executable-image-output) .

::: moniker-end
