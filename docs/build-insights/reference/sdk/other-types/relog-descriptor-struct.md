---
title: struttura RELOG_DESCRIPTOR
description: Informazioni di riferimento sulla struttura di esempio di Sdk di compilazion RELOG_DESCRIPTORe di C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- RELOG_DESCRIPTOR
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: c3aee49fe9f609ca37082693ddcfd5e838cc96a1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328948"
---
# <a name="relog_descriptor-structure"></a>struttura RELOG_DESCRIPTOR

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `RELOG_DESCRIPTOR` struttura viene utilizzata con le funzioni [RelogA](../functions/relog-a.md) e [RelogW.](../functions/relog-w.md) Viene descritto come una traccia ETW (Event Tracing for Windows) deve essere nuovamente registrata.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct RELOG_DESCRIPTOR_TAG
{
    unsigned                NumberOfAnalysisPasses;
    ANALYSIS_CALLBACKS      AnalysisCallbacks;
    RELOG_CALLBACKS         RelogCallbacks;
    unsigned long long      SystemEventsRetentionFlags;
    void*                   AnalysisContext;
    void*                   RelogContext;
} RELOG_DESCRIPTOR;
```

## <a name="members"></a>Membri

|  |  |
|--|--|
| `NumberOfAnalysisPasses` | Numero di passaggi di analisi che devono essere eseguiti sulla traccia ETW durante la fase di analisi della sessione di riregistrazione. |
| `AnalysisCallbacks` | Oggetto [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) che specifica le funzioni da chiamare durante la fase di analisi della sessione di riregistrazione. |
| `RelogCallbacks` | Oggetto [RELOG_CALLBACKS](relog-callbacks-struct.md) oggetto che specifica le funzioni da chiamare durante la fase di riregistrazione della sessione di riregistrazione. |
| `SystemEventsRetentionFlags` | Maschera di bit [RELOG_RETENTION_SYSTEM_EVENT_FLAGS](relog-retention-system-event-flags-constants.md) che specifica gli eventi ETW di sistema da mantenere nella traccia relogged. |
| `AnalysisContext` | Un contesto fornito dall'utente che viene passato come argomento a tutte le funzioni di callback specificate in`AnalysisCallbacks` |
| `RelogContext` | Un contesto fornito dall'utente che viene passato come argomento a tutte le funzioni di callback specificate in`RelogCallbacks` |

## <a name="remarks"></a>Osservazioni

La nuova registrazione degli eventi ETW durante una sessione di nuova `RelogCallbacks`registrazione viene controllata dall'utente tramite le funzioni di callback specificate in . Tuttavia, gli eventi ETW di sistema, ad esempio gli esempi di CPU, non vengono inoltrati a queste funzioni di callback. Utilizzare `SystemEventsRetentionFlags` il campo per controllare la riimpostazione della registrazione degli eventi ETW di sistema.

Le `AnalysisCallbacks` `RelogCallbacks` strutture e accettano solo puntatori a funzioni non membro. È possibile aggirare questa limitazione impostandoli su un puntatore a un oggetto. Questo puntatore a oggetto verrà passato come argomento a tutte le funzioni di callback non membro. Utilizzare questo puntatore per chiamare le funzioni membro dall'interno delle funzioni di callback non membro.

La fase di analisi di una sessione di riregistrazione viene sempre eseguita prima della fase di riscrittura.

::: moniker-end
