---
description: 'Altre informazioni su: scollegare'
title: unlink
ms.date: 12/16/2019
api_name:
- unlink
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
- unlink
helpviewer_keywords:
- unlink function
ms.assetid: 2cd82055-5770-48be-88ee-4b2c70541c46
ms.openlocfilehash: 2ea1c3b05d5e86807d774e07fb1c8ae7e56c6941
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97299371"
---
# <a name="unlink"></a>unlink

Il nome della funzione POSIX implementato `unlink` da Microsoft è un alias deprecato per la funzione [_unlink](unlink-wunlink.md) . Per impostazione predefinita, viene generato un [Avviso del compilatore (livello 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). Il nome è deprecato perché non segue le regole C standard per i nomi specifici dell'implementazione. Tuttavia, la funzione è ancora supportata.

Si consiglia di usare invece [_unlink](unlink-wunlink.md) . In alternativa, è possibile continuare a usare il nome della funzione e disabilitare l'avviso. Per altre informazioni, vedere [disabilitare i](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) [nomi di funzione](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names)di avviso e POSIX.
