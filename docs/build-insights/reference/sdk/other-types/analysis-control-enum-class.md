---
title: Classe enum AnalysisControl
description: Informazioni di riferimento sull'enumerazione AnalysisControl dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- AnalysisControl
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: e9431f878390127f2cefbe8f0ee42ca509e147de
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323634"
---
# <a name="analysiscontrol-enum-class"></a>Classe enum AnalysisControl

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `AnalysisControl` classe enum viene utilizzata per controllare il flusso di una sessione di analisi o di riregistrazione. Restituire `AnalysisControl` un codice da una funzione membro [IAnalyzer](ianalyzer-class.md) o [IRelogger](irelogger-class.md) per controllare cosa deve accadere successivamente.

## <a name="members"></a>Membri

|  |  |
|--|--|
| `BLOCK` | Impedisce che l'evento corrente si propaga ulteriormente nell'analizzatore o nel gruppo relogger. |
| `CANCEL` | Annullare l'analisi corrente o la sessione di nuova registrazione. |
| `CONTINUE` | Continuare normalmente la sessione di analisi o di riregistrazione corrente. Propagare l'evento corrente all'analizzatore o al membro del gruppo relogger successivo. |
| `FAILURE` | Annullare l'analisi corrente o la sessione di nuova registrazione e segnalare un errore. |

::: moniker-end
