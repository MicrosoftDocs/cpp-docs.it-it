---
title: Struttura ANALYSIS_DESCRIPTOR
description: Il C++ riferimento alla struttura ANALYSIS_DESCRIPTOR di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- ANALYSIS_DESCRIPTOR
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: fc11ce11e1faaae02edb36aac447c18ea8107e35
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332481"
---
# <a name="analysis_descriptor-structure"></a>Struttura ANALYSIS_DESCRIPTOR

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La struttura `ANALYSIS_DESCRIPTOR` viene utilizzata con le funzioni [Analyze](../functions/analyze-a.md) e [AnalyzeW](../functions/analyze-w.md) . Viene descritto come analizzare una traccia di Event Tracing for Windows (ETW).

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

|  |  |
|--|--|
| `NumberOfPasses` | Il numero di sessioni di analisi che devono essere eseguite sulla traccia ETW. |
| `Callbacks` | Oggetto [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) che specifica le funzioni da chiamare durante la sessione di analisi. |
| `Context` | Contesto fornito dall'utente passato come argomento a tutte le funzioni di callback specificate in `Callbacks` |

## <a name="remarks"></a>Osservazioni

La struttura `Callbacks` accetta solo puntatori a funzioni non membro. Per aggirare questa limitazione, è possibile impostare `Context` su un puntatore a un oggetto. Il puntatore a questo oggetto verrà passato come argomento a tutte le funzioni di callback non membro. Utilizzare questo puntatore per chiamare le funzioni membro dall'interno delle funzioni di callback non membro.

::: moniker-end
