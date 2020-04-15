---
title: enum CALLBACK_CODE
description: L'SDK di build Insights CALLBACK_CODE riferimento all'enumerazione.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- CALLBACK_CODE
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: d0d3dcc70040f562cd40755188e545f709a807b5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329184"
---
# <a name="callback_code-enum"></a>enum CALLBACK_CODE

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

L'enum `CALLBACK_CODE` viene utilizzato per controllare il flusso di una sessione di analisi o di riregistrazione. Restituire un valore CALLBACK_CODE dalle funzioni in [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) o [RELOG_CALLBACKS](relog-callbacks-struct.md) per controllare cosa deve accadere successivamente.

## <a name="members"></a>Membri

| Nome | valore | Descrizione |
|--|--|--|
| `CALLBACK_CODE_ANALYSIS_SUCCESS` | 1 (0x00000001) | Continuare normalmente la sessione di analisi o di riregistrazione corrente. |
| `CALLBACK_CODE_ANALYSIS_FAILURE` | 2 (0x00000002) | Annullare l'analisi corrente o la sessione di nuova registrazione e segnalare un errore. |
| `CALLBACK_CODE_ANALYSIS_CANCEL` | 4 (0x00000004) | Annullare l'analisi corrente o la sessione di nuova registrazione. |

::: moniker-end
