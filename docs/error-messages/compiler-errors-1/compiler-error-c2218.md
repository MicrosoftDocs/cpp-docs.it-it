---
description: 'Altre informazioni su: errore del compilatore C2218'
title: Errore del compilatore C2218
ms.date: 11/04/2016
f1_keywords:
- C2218
helpviewer_keywords:
- C2218
ms.assetid: b0f55da4-8edb-4b45-b298-1a091981bd7b
ms.openlocfilehash: d2761bb822c5a1055974e4a0bcd6011e7f451821
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97245525"
---
# <a name="compiler-error-c2218"></a>Errore del compilatore C2218

> impossibile utilizzare '__vectorcall' con '/arch:IA32'

La **`__vectorcall`** convenzione di chiamata è supportata solo nel codice nativo su processori x86 e x64 che includono Streaming SIMD Extensions 2 (SSE2) e versioni successive. Per altre informazioni, vedere [`__vectorcall`](../../cpp/vectorcall.md).

Per correggere l'errore, impostare le opzioni del compilatore sui set di istruzioni SSE2, AVX o AVX2 di destinazione. Per ulteriori informazioni, vedere [ `/arch` (x86)](../../build/reference/arch-x86.md).
