---
title: Struttura INVOCATION_VERSION_DATA
description: Il C++ riferimento alla struttura INVOCATION_VERSION_DATA di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- INVOCATION_VERSION_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 040b0f90b14133ec2b25f7a12d35b88d382c4f7a
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333678"
---
# <a name="invocation_version_data-structure"></a>Struttura INVOCATION_VERSION_DATA

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La struttura `INVOCATION_VERSION_DATA` descrive un numero di versione come gruppo di valori integrali.

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

|  |  |
|--|--|
| `VersionMajor` | Numero principale della versione. |
| `VersionMinor` | Numero secondario della versione. |
| `BuildNumberMajor` | Numero principale della compilazione. |
| `BuildNumberMinor` | Numero secondario della compilazione. |

::: moniker-end
