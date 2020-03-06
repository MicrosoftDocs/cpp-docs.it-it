---
title: Enumerazione CALLBACK_CODE
description: Informazioni C++ di riferimento sull'enum di build Insights SDK CALLBACK_CODE.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- CALLBACK_CODE
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 68eaa9aa04d2f0a55ac12fb7dde14a080188a38d
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332467"
---
# <a name="callback_code-enum"></a>Enumerazione CALLBACK_CODE

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

L'enumerazione `CALLBACK_CODE` viene utilizzata per controllare il flusso di una sessione di analisi o di registrazione. Restituisce un valore CALLBACK_CODE dalle funzioni [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) o [RELOG_CALLBACKS](relog-callbacks-struct.md) per controllare cosa dovrebbe accadere successivamente.

## <a name="members"></a>Members

| Nome | valore | Descrizione |
|--|--|--|
| `CALLBACK_CODE_ANALYSIS_SUCCESS` | 1 (0x00000001) | Continuare la sessione di analisi o di riregistrazione corrente normalmente. |
| `CALLBACK_CODE_ANALYSIS_FAILURE` | 2 (0x00000002) | Annullare l'analisi o la sessione di registrazione corrente e segnalare un errore. |
| `CALLBACK_CODE_ANALYSIS_CANCEL` | 4 (0x00000004) | Annulla la sessione di analisi o di riregistrazione corrente. |

::: moniker-end
