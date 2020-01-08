---
title: mktemp
ms.date: 12/16/2019
api_name:
- mktemp
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
- mktemp
helpviewer_keywords:
- mktemp function
ms.assetid: b58cba60-034f-4e63-b312-ccbcd489d0a7
ms.openlocfilehash: c9efd79111c000764561ba415db79a13a34c46fe
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301015"
---
# <a name="mktemp"></a>mktemp

Il nome di funzione specifico di Microsoft `mktemp` è un alias deprecato per la funzione di [_mktemp](mktemp-wmktemp.md) . Per impostazione predefinita, viene generato un [Avviso del compilatore (livello 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). Il nome è deprecato perché non segue le regole C standard per i nomi specifici dell'implementazione. Tuttavia, la funzione è ancora supportata.

È consigliabile usare invece [_mktemp](mktemp-wmktemp.md) o la funzione [_mktemp_s](mktemp-s-wmktemp-s.md) con sicurezza avanzata. In alternativa, è possibile continuare a usare il nome della funzione e disabilitare l'avviso. Per altre informazioni, vedere [disabilitare i](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) [nomi di funzione](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names)di avviso e POSIX.
