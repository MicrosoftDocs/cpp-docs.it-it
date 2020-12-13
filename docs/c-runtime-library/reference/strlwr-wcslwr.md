---
description: 'Altre informazioni su: strlwr, wcslwr'
title: strlwr, wcslwr
ms.date: 12/16/2019
api_name:
- strlwr
- wcslwr
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
- wcslwr
- strlwr
helpviewer_keywords:
- strlwr function
- wcslwr function
ms.assetid: b9274824-4365-4674-b656-823c89653656
ms.openlocfilehash: 522afe9af4da37fdf6f1a22335558edcf24cebee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344796"
---
# <a name="strlwr-wcslwr"></a>strlwr, wcslwr

I nomi di funzione specifici di Microsoft `strlwr` e `wcslwr` sono alias deprecati per le funzioni [_strlwr e _wcslwr](strlwr-wcslwr-mbslwr-strlwr-l-wcslwr-l-mbslwr-l.md) . Per impostazione predefinita, generano un [Avviso del compilatore (livello 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). I nomi sono deprecati perché non seguono le regole C standard per i nomi specifici dell'implementazione. Tuttavia, le funzioni sono ancora supportate.

Si consiglia di utilizzare [_strlwr o _wcslwr](strlwr-wcslwr-mbslwr-strlwr-l-wcslwr-l-mbslwr-l.md) o le funzioni di [_strlwr_s e _wcslwr_s con](strlwr-s-strlwr-s-l-mbslwr-s-mbslwr-s-l-wcslwr-s-wcslwr-s-l.md) sicurezza avanzata. In alternativa, è possibile continuare a usare questi nomi di funzione e disabilitare l'avviso. Per altre informazioni, vedere [disabilitare i](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) [nomi di funzione](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names)di avviso e POSIX.
