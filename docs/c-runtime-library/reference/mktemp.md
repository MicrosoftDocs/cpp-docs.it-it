---
description: 'Altre informazioni su: mktemp'
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
ms.openlocfilehash: 8126741883c651b11bbd667591840faba11ef16a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97114156"
---
# <a name="mktemp"></a>mktemp

Il nome della funzione specifica `mktemp` di Microsoft è un alias deprecato per la funzione [_mktemp](mktemp-wmktemp.md) . Per impostazione predefinita, viene generato un [Avviso del compilatore (livello 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). Il nome è deprecato perché non segue le regole C standard per i nomi specifici dell'implementazione. Tuttavia, la funzione è ancora supportata.

È consigliabile usare invece [_mktemp](mktemp-wmktemp.md) o la funzione [_mktemp_s](mktemp-s-wmktemp-s.md) con sicurezza avanzata. In alternativa, è possibile continuare a usare il nome della funzione e disabilitare l'avviso. Per altre informazioni, vedere [disabilitare i](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) [nomi di funzione](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names)di avviso e POSIX.
