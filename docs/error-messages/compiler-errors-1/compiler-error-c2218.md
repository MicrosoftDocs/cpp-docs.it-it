---
title: Errore del compilatore C2218
ms.date: 11/04/2016
f1_keywords:
- C2218
helpviewer_keywords:
- C2218
ms.assetid: b0f55da4-8edb-4b45-b298-1a091981bd7b
ms.openlocfilehash: db14c37992fc1e2dd409c653d622d3419fcae4f3
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80206648"
---
# <a name="compiler-error-c2218"></a>Errore del compilatore C2218

impossibile utilizzare '__vectorcall' con '/arch:IA32'

La convenzione di chiamata `__vectorcall` è supportata solo nel codice nativo su processori x86 e x64 che includono Streaming SIMD Extensions 2 (SSE2) e versioni successive. Per ulteriori informazioni, vedere [__vectorcall](../../cpp/vectorcall.md).

Per correggere l'errore, impostare le opzioni del compilatore sui set di istruzioni SSE2, AVX o AVX2 di destinazione. Per altre informazioni, vedere [/arch (x86)](../../build/reference/arch-x86.md).
