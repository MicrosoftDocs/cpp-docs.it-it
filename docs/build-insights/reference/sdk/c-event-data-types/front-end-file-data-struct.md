---
title: struttura FRONT_END_FILE_DATA
description: L'SDK di windows di compilazione di C'è FRONT_END_FILE_DATA riferimento alla struttura.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FRONT_END_FILE_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 7fb6b6fff4f309a3539a290f279d1e31cb1ed76b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325554"
---
# <a name="front_end_file_data-structure"></a>struttura FRONT_END_FILE_DATA

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `FRONT_END_FILE_DATA` struttura descrive l'elaborazione di un file da parte del front-end del compilatore.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct FRONT_END_FILE_DATA_TAG
{
    const char*         Path;

} FRONT_END_FILE_DATA;
```

## <a name="members"></a>Membri

|  |  |
|--|--|
| `Path` | Percorso assoluto del file, codificato in UTF-8. |

::: moniker-end
