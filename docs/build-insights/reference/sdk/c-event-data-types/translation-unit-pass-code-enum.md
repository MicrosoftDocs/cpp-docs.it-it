---
title: Enumerazione TRANSLATION_UNIT_PASS_CODE
description: Informazioni di riferimento sull'enumerazione TRANSLATION_UNIT_PASS_CODE per C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TRANSLATION_UNIT_PASS_CODE
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 31f3e16ce6d9aa8c3c9db6cf9c11069dc3ec22fe
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920918"
---
# <a name="translation_unit_pass_code-enum"></a>Enumerazione TRANSLATION_UNIT_PASS_CODE

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

`TRANSLATION_UNIT_PASS_CODE`Enumerazione.

## <a name="members"></a>Members

| Nome | valore | Descrizione |
|--|--|--|
| `TRANSLATION_UNIT_PASS_CODE_FRONT_END` | 0 (0x00000000) | Il passaggio front-end, responsabile dell'analisi del codice sorgente e della relativa conversione in linguaggio intermedio. |
| `TRANSLATION_UNIT_PASS_CODE_BACK_END` | 1 (0x00000001) | Il passaggio di back-end, responsabile dell'ottimizzazione del linguaggio intermedio e della relativa conversione nel codice del computer. |

## <a name="remarks"></a>Osservazioni

Utilizzato dalle funzioni di C SDK.

::: moniker-end
