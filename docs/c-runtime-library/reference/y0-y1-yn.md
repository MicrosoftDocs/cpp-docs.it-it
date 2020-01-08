---
title: y0, y1, yn
ms.date: 12/16/2019
api_name:
- y1
- yn
- y0
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
- yn
- y1
- y0
helpviewer_keywords:
- y0 function
- y1 function
- yn function
ms.assetid: e14215f3-53d4-4ae8-816e-4c1ec2019316
ms.openlocfilehash: ade2978d9a052b481c8250933257cfa33493860f
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301717"
---
# <a name="y0-y1-yn"></a>y0, y1, yn

I nomi delle funzioni POSIX implementate da Microsoft `y0`, `y1`e `yn` sono alias deprecati per le funzioni [_y0, _y1 e _yn](bessel-functions-j0-j1-jn-y0-y1-yn.md) . Per impostazione predefinita, generano un [Avviso del compilatore (livello 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). I nomi sono deprecati perché non seguono le regole C standard per i nomi specifici dell'implementazione. Tuttavia, le funzioni sono ancora supportate.

È consigliabile usare invece [_y0, _y1 e _yn](bessel-functions-j0-j1-jn-y0-y1-yn.md) . In alternativa, è possibile continuare a usare questi nomi di funzione e disabilitare l'avviso. Per altre informazioni, vedere [disabilitare i](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) [nomi di funzione](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names)di avviso e POSIX.
