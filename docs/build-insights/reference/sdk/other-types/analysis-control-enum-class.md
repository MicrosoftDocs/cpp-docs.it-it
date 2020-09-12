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
ms.openlocfilehash: a7b7fc0ce404f414b3ec07449bdc110d578fa101
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90042017"
---
# <a name="analysiscontrol-enum-class"></a>Classe enum AnalysisControl

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `AnalysisControl` classe enum viene utilizzata per controllare il flusso di una sessione di analisi o di registrazione. Restituisce un `AnalysisControl` codice da una funzione membro [IAnalyzer](ianalyzer-class.md) o [IRelogger](irelogger-class.md) per controllare cosa dovrebbe accadere successivamente.

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `BLOCK` | Impedisce la propagazione dell'evento corrente nel gruppo analizzatore o relogger. |
| `CANCEL` | Annulla la sessione di analisi o di riregistrazione corrente. |
| `CONTINUE` | Continuare la sessione di analisi o di riregistrazione corrente normalmente. Propaga l'evento corrente al membro del gruppo analizzatore o relogger successivo. |
| `FAILURE` | Annullare l'analisi o la sessione di registrazione corrente e segnalare un errore. |

::: moniker-end
