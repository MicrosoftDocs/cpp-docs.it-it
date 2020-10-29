---
title: Enumerazione CALLBACK_CODE
description: Informazioni di riferimento sull'enumerazione CALLBACK_CODE per C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- CALLBACK_CODE
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 146d191d0b642ad538f5a314016b41fdbdf26113
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92922598"
---
# <a name="callback_code-enum"></a>Enumerazione CALLBACK_CODE

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

L' `CALLBACK_CODE` enumerazione viene utilizzata per controllare il flusso di una sessione di analisi o di registrazione. Restituisce un valore CALLBACK_CODE dalle funzioni [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) o [RELOG_CALLBACKS](relog-callbacks-struct.md) per controllare cosa dovrebbe accadere successivamente.

## <a name="members"></a>Members

| Nome | valore | Descrizione |
|--|--|--|
| `CALLBACK_CODE_ANALYSIS_SUCCESS` | 1 (0x00000001) | Continuare la sessione di analisi o di riregistrazione corrente normalmente. |
| `CALLBACK_CODE_ANALYSIS_FAILURE` | 2 (0x00000002) | Annullare l'analisi o la sessione di registrazione corrente e segnalare un errore. |
| `CALLBACK_CODE_ANALYSIS_CANCEL` | 4 (0x00000004) | Annulla la sessione di analisi o di riregistrazione corrente. |

::: moniker-end
