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
ms.openlocfilehash: ec54c560dd408dc3beecbc20eaac69d389c7ec37
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90041559"
---
# <a name="invocation_version_data-structure"></a>Struttura INVOCATION_VERSION_DATA

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

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
