---
title: Enumerazione TRANSLATION_UNIT_PASS_CODE
description: Informazioni C++ di riferimento sull'enum di build Insights SDK TRANSLATION_UNIT_PASS_CODE.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TRANSLATION_UNIT_PASS_CODE
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 1219eed98fd01e8c91d8750977e2d8ca4498d649
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333580"
---
# <a name="translation_unit_pass_code-enum"></a>Enumerazione TRANSLATION_UNIT_PASS_CODE

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

Enumerazione `TRANSLATION_UNIT_PASS_CODE`.

## <a name="members"></a>Members

| Nome | valore | Descrizione |
|--|--|--|
| `TRANSLATION_UNIT_PASS_CODE_FRONT_END` | 0 (0x00000000) | Il passaggio front-end, responsabile dell'analisi del codice sorgente e della relativa conversione in linguaggio intermedio. |
| `TRANSLATION_UNIT_PASS_CODE_BACK_END` | 1 (0x00000001) | Il passaggio di back-end, responsabile dell'ottimizzazione del linguaggio intermedio e della relativa conversione nel codice del computer. |

## <a name="remarks"></a>Osservazioni

Utilizzato dalle funzioni di C SDK.

::: moniker-end
