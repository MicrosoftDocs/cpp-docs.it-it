---
description: 'Altre informazioni su: tzset'
title: tzset
ms.date: 12/16/2019
api_name:
- tzset
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
- tzset
helpviewer_keywords:
- tzset function
ms.assetid: c3afa5d0-cb15-4163-9181-fafb962c95aa
ms.openlocfilehash: 8a2528c4accaeb385f1979a87f0000347df40c5f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97252896"
---
# <a name="tzset"></a>tzset

Il nome della funzione POSIX implementato `tzset` da Microsoft è un alias deprecato per la funzione [_tzset](tzset.md) . Per impostazione predefinita, viene generato un [Avviso del compilatore (livello 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). Il nome è deprecato perché non segue le regole C standard per i nomi specifici dell'implementazione. Tuttavia, la funzione è ancora supportata.

Si consiglia di usare invece [_tzset](tzset.md) . In alternativa, è possibile continuare a usare il nome della funzione e disabilitare l'avviso. Per altre informazioni, vedere [disabilitare i](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) [nomi di funzione](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names)di avviso e POSIX.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).
