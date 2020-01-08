---
title: strupr, wcsupr
ms.date: 12/16/2019
api_name:
- strupr
- wcsupr
api_location:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- strupr
- wcsupr
helpviewer_keywords:
- strupr function
- wcsupr function
ms.assetid: 17dfe1cd-3b09-4702-9f89-2207f44953e6
ms.openlocfilehash: ce51eb4f7eeb80766e19cfdb4a39a3a7dd50d85a
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75300456"
---
# <a name="strupr-wcsupr"></a>strupr, wcsupr

I nomi di funzione specifici di Microsoft `strupr` e `wcsupr` sono alias deprecati per le funzioni [_strupr e _wcsupr](strupr-strupr-l-mbsupr-mbsupr-l-wcsupr-l-wcsupr.md) . Per impostazione predefinita, generano un [Avviso del compilatore (livello 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). I nomi sono deprecati perché non seguono le regole C standard per i nomi specifici dell'implementazione. Tuttavia, le funzioni sono ancora supportate.

Si consiglia di usare [_strupr e _wcsupr](strupr-strupr-l-mbsupr-mbsupr-l-wcsupr-l-wcsupr.md) o le funzioni di [_strupr_s e _wcsupr_s](strupr-s-strupr-s-l-mbsupr-s-mbsupr-s-l-wcsupr-s-wcsupr-s-l.md) con sicurezza avanzata. In alternativa, è possibile continuare a usare questi nomi di funzione e disabilitare l'avviso. Per altre informazioni, vedere [disabilitare i](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) [nomi di funzione](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names)di avviso e POSIX.
