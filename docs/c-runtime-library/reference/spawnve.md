---
title: spawnve
ms.date: 12/16/2019
api_name:
- spawnve
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
- spawnve
helpviewer_keywords:
- spawnve function
ms.assetid: 39507df8-f15f-45fb-b2b6-01359272b147
ms.openlocfilehash: 0b4171a4e10eb390f901c1246d3a2207da2513c4
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75300664"
---
# <a name="spawnve"></a>spawnve

Il nome di funzione specifico di Microsoft `spawnve` è un alias deprecato per la funzione di [_spawnve](spawnve-wspawnve.md) . Per impostazione predefinita, viene generato un [Avviso del compilatore (livello 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). Il nome è deprecato perché non segue le regole C standard per i nomi specifici dell'implementazione. Tuttavia, la funzione è ancora supportata.

Si consiglia di usare invece [_spawnve](spawnve-wspawnve.md) . In alternativa, è possibile continuare a usare il nome della funzione e disabilitare l'avviso. Per altre informazioni, vedere [disabilitare i](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) [nomi di funzione](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names)di avviso e POSIX.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).
