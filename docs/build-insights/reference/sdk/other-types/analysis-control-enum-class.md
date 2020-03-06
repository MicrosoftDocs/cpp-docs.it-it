---
title: Classe enum AnalysisControl
description: Riferimento C++ all'enumerazione AnalysisControl di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- AnalysisControl
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: cf162c11e0a7109b8d733dab79df80782398e14d
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332502"
---
# <a name="analysiscontrol-enum-class"></a>Classe enum AnalysisControl

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La classe enum `AnalysisControl` viene utilizzata per controllare il flusso di una sessione di analisi o di registrazione. Restituisce un codice `AnalysisControl` da una funzione membro [IAnalyzer](ianalyzer-class.md) o [IRelogger](irelogger-class.md) per controllare cosa dovrebbe accadere successivamente.

## <a name="members"></a>Members

|  |  |
|--|--|
| `BLOCK` | Impedisce la propagazione dell'evento corrente nel gruppo analizzatore o relogger. |
| `CANCEL` | Annulla la sessione di analisi o di riregistrazione corrente. |
| `CONTINUE` | Continuare la sessione di analisi o di riregistrazione corrente normalmente. Propaga l'evento corrente al membro del gruppo analizzatore o relogger successivo. |
| `FAILURE` | Annullare l'analisi o la sessione di registrazione corrente e segnalare un errore. |

::: moniker-end
