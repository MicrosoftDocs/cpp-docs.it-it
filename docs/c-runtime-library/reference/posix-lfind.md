---
description: 'Altre informazioni su: lfind'
title: lfind
ms.date: 12/16/2019
api_name:
- lfind
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
- lfind
helpviewer_keywords:
- lfind function
ms.assetid: 2528e787-94b6-4740-8a8d-6efc276d1f42
ms.openlocfilehash: a67a28a1369127785d9c8a6f5f33c51b97aa9271
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97296368"
---
# <a name="lfind"></a>lfind

Il nome della funzione POSIX implementato `lfind` da Microsoft è un alias deprecato per la funzione [_lfind](lfind.md) . Per impostazione predefinita, viene generato un [Avviso del compilatore (livello 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). Il nome è deprecato perché non segue le regole C standard per i nomi specifici dell'implementazione. Tuttavia, la funzione è ancora supportata.

È consigliabile usare invece [_lfind](lfind.md) o la funzione [_lfind_s](lfind-s.md) con sicurezza avanzata. In alternativa, è possibile continuare a usare il nome della funzione e disabilitare l'avviso. Per altre informazioni, vedere [disabilitare i](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) [nomi di funzione](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names)di avviso e POSIX.
