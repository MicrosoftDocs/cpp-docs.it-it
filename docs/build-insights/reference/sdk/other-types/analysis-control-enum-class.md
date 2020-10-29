---
title: Classe enum AnalysisControl
description: Riferimento all'enumerazione AnalysisControl per Build Insights SDK di C++.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- AnalysisControl
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 0f4887d626c5e80a0afaa393e255f8ffedbd6b1f
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92922625"
---
# <a name="analysiscontrol-enum-class"></a>Classe enum AnalysisControl

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `AnalysisControl` classe enum viene utilizzata per controllare il flusso di una sessione di analisi o di registrazione. Restituisce un `AnalysisControl` codice da una funzione membro [IAnalyzer](ianalyzer-class.md) o [IRelogger](irelogger-class.md) per controllare cosa dovrebbe accadere successivamente.

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `BLOCK` | Impedisce la propagazione dell'evento corrente nel gruppo analizzatore o relogger. |
| `CANCEL` | Annulla la sessione di analisi o di riregistrazione corrente. |
| `CONTINUE` | Continuare la sessione di analisi o di riregistrazione corrente normalmente. Propaga l'evento corrente al membro del gruppo analizzatore o relogger successivo. |
| `FAILURE` | Annullare l'analisi o la sessione di registrazione corrente e segnalare un errore. |

::: moniker-end
