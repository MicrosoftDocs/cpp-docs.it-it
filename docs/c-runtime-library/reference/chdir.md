---
description: 'Altre informazioni su: chdir'
title: chdir
ms.date: 12/16/2019
api_name:
- chdir
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
- chdir
helpviewer_keywords:
- chdir function
ms.assetid: a65275a1-41e4-46be-83a5-167dfacb62a0
ms.openlocfilehash: 7cca4c58289b5b5c80ae20c51e2120a132cc7161
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275061"
---
# <a name="chdir"></a>chdir

Il nome della funzione POSIX implementato `chdir` da Microsoft è un alias deprecato per la funzione [_chdir](chdir-wchdir.md) . Per impostazione predefinita, viene generato un [Avviso del compilatore (livello 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). Il nome è deprecato perché non segue le regole C standard per i nomi specifici dell'implementazione. Tuttavia, la funzione è ancora supportata.

Si consiglia di usare invece [_chdir](chdir-wchdir.md) . In alternativa, è possibile continuare a usare il nome della funzione e disabilitare l'avviso. Per altre informazioni, vedere [disabilitare i](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) [nomi di funzione](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names)di avviso e POSIX.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).
