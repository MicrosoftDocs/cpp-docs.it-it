---
title: Struttura INVOCATION_VERSION_DATA
description: Il riferimento alla struttura INVOCATION_VERSION_DATA di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- INVOCATION_VERSION_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: ebed659ade4610b50ae06f2a32851522073a58d8
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923561"
---
# <a name="invocation_version_data-structure"></a>Struttura INVOCATION_VERSION_DATA

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `INVOCATION_VERSION_DATA` struttura descrive un numero di versione come gruppo di valori integrali.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct INVOCATION_VERSION_DATA_TAG
{
    unsigned short VersionMajor;
    unsigned short VersionMinor;
    unsigned short BuildNumberMajor;
    unsigned short BuildNumberMinor;

} INVOCATION_VERSION_DATA;
```

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `VersionMajor` | Numero principale della versione. |
| `VersionMinor` | Numero secondario della versione. |
| `BuildNumberMajor` | Numero principale della compilazione. |
| `BuildNumberMinor` | Numero secondario della compilazione. |

::: moniker-end
