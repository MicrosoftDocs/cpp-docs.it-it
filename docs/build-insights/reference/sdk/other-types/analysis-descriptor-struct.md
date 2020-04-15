---
title: struttura ANALYSIS_DESCRIPTOR
description: Informazioni di riferimento sulla struttura di ANALYSIS_DESCRIPTOR visuale di C.NET Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- ANALYSIS_DESCRIPTOR
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 1de7f2a5bc3f02a327daaecf8c2cebc44687ba43
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323617"
---
# <a name="analysis_descriptor-structure"></a>struttura ANALYSIS_DESCRIPTOR

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `ANALYSIS_DESCRIPTOR` struttura viene utilizzata con le funzioni [AnalyzeA](../functions/analyze-a.md) e [AnalyzeW.](../functions/analyze-w.md) Viene descritto come analizzare una traccia ETW (Event Tracing for Windows).

## <a name="syntax"></a>Sintassi

```cpp
typedef struct ANALYSIS_DESCRIPTOR_TAG
{
    unsigned                NumberOfPasses;
    ANALYSIS_CALLBACKS      Callbacks;
    void*                   Context;
} ANALYSIS_DESCRIPTOR;
```

## <a name="members"></a>Membri

|  |  |
|--|--|
| `NumberOfPasses` | Numero di passaggi di analisi che devono essere eseguiti sulla traccia ETW. |
| `Callbacks` | Oggetto [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) oggetto che specifica le funzioni da chiamare durante la sessione di analisi. |
| `Context` | Un contesto fornito dall'utente che viene passato come argomento a tutte le funzioni di callback specificate in`Callbacks` |

## <a name="remarks"></a>Osservazioni

La `Callbacks` struttura accetta solo puntatori a funzioni non membro. È possibile aggirare questa `Context` limitazione impostando su un puntatore a un oggetto. Questo puntatore a oggetto verrà passato come argomento a tutte le funzioni di callback non membro. Utilizzare questo puntatore per chiamare le funzioni membro dall'interno delle funzioni di callback non membro.

::: moniker-end
