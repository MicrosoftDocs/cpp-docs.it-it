---
description: 'Altre informazioni su: umask'
title: umask
ms.date: 12/16/2019
api_name:
- umask
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
- umask
helpviewer_keywords:
- umask function
ms.assetid: d2f697fc-08d5-4b70-9dd5-df3f5bb8b754
ms.openlocfilehash: 619152cd6d07d5bda5bcaf3fa353289fbd04cfc8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97252857"
---
# <a name="umask"></a>umask

Il nome della funzione POSIX implementato `umask` da Microsoft è un alias deprecato per la funzione [_umask](umask.md) . Per impostazione predefinita, viene generato un [Avviso del compilatore (livello 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). Il nome è deprecato perché non segue le regole C standard per i nomi specifici dell'implementazione. Tuttavia, la funzione è ancora supportata.

È consigliabile usare invece [_umask](umask.md) o la funzione [_umask_s](umask-s.md) con sicurezza avanzata. In alternativa, è possibile continuare a usare il nome della funzione e disabilitare l'avviso. Per altre informazioni, vedere [disabilitare i](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) [nomi di funzione](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names)di avviso e POSIX.
