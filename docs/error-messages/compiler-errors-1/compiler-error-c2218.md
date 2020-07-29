---
title: Errore del compilatore C2218
ms.date: 11/04/2016
f1_keywords:
- C2218
helpviewer_keywords:
- C2218
ms.assetid: b0f55da4-8edb-4b45-b298-1a091981bd7b
ms.openlocfilehash: 97f3290ef8bcb6a91442effdbf84261c03545ce2
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87209526"
---
# <a name="compiler-error-c2218"></a>Errore del compilatore C2218

> impossibile utilizzare '__vectorcall' con '/arch:IA32'

La **`__vectorcall`** convenzione di chiamata è supportata solo nel codice nativo su processori x86 e x64 che includono Streaming SIMD Extensions 2 (SSE2) e versioni successive. Per altre informazioni, vedere [`__vectorcall`](../../cpp/vectorcall.md).

Per correggere l'errore, impostare le opzioni del compilatore sui set di istruzioni SSE2, AVX o AVX2 di destinazione. Per ulteriori informazioni, vedere [ `/arch` (x86)](../../build/reference/arch-x86.md).
