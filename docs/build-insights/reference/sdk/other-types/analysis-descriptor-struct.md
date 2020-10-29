---
title: Struttura ANALYSIS_DESCRIPTOR
description: Il riferimento alla struttura ANALYSIS_DESCRIPTOR di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- ANALYSIS_DESCRIPTOR
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: ec2d0a76618d6ff2cf0e7fdff7e360a4fd2e0174
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92919852"
---
# <a name="analysis_descriptor-structure"></a>Struttura ANALYSIS_DESCRIPTOR

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `ANALYSIS_DESCRIPTOR` struttura viene utilizzata con le funzioni [Analyze](../functions/analyze-a.md) e [AnalyzeW](../functions/analyze-w.md) . Viene descritto come analizzare una traccia di Event Tracing for Windows (ETW).

## <a name="syntax"></a>Sintassi

```cpp
typedef struct ANALYSIS_DESCRIPTOR_TAG
{
    unsigned                NumberOfPasses;
    ANALYSIS_CALLBACKS      Callbacks;
    void*                   Context;
} ANALYSIS_DESCRIPTOR;
```

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `NumberOfPasses` | Il numero di sessioni di analisi che devono essere eseguite sulla traccia ETW. |
| `Callbacks` | Oggetto [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) che specifica le funzioni da chiamare durante la sessione di analisi. |
| `Context` | Contesto fornito dall'utente passato come argomento a tutte le funzioni di callback specificate in `Callbacks` |

## <a name="remarks"></a>Osservazioni

La `Callbacks` struttura accetta solo puntatori a funzioni non membro. Per aggirare questa limitazione, è possibile impostare `Context` su un puntatore a un oggetto. Il puntatore a questo oggetto verrà passato come argomento a tutte le funzioni di callback non membro. Utilizzare questo puntatore per chiamare le funzioni membro dall'interno delle funzioni di callback non membro.

::: moniker-end
