---
description: 'Altre informazioni su: stricmp, wcsicmp'
title: stricmp, wcsicmp
ms.date: 12/16/2019
api_name:
- stricmp
- wcsicmp
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
- stricmp
- wcsicmp
helpviewer_keywords:
- stricmp function
- wcsicmp function
ms.assetid: 2e3c6703-2635-4961-a253-e2c4c5029ed8
ms.openlocfilehash: 0004c380dde1835203c891013440867f42d43cc2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338856"
---
# <a name="stricmp-wcsicmp"></a>stricmp, wcsicmp

I nomi di funzione specifici di Microsoft `stricmp` e `wcsicmp` sono alias deprecati per le funzioni [_stricmp e _wcsicmp](stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md) . Per impostazione predefinita, generano un [Avviso del compilatore (livello 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). I nomi sono deprecati perché non seguono le regole C standard per i nomi specifici dell'implementazione. Tuttavia, le funzioni sono ancora supportate.

È consigliabile usare invece [_stricmp o _wcsicmp](stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md) . In alternativa, è possibile continuare a usare questi nomi di funzione e disabilitare l'avviso. Per altre informazioni, vedere [disabilitare i](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) [nomi di funzione](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names)di avviso e POSIX.
