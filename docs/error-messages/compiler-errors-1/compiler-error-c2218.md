---
title: Errore del compilatore C2218 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2218
dev_langs:
- C++
helpviewer_keywords:
- C2218
ms.assetid: b0f55da4-8edb-4b45-b298-1a091981bd7b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 52c449381c6e8a7391706ed6097bc38576bc69fe
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46041285"
---
# <a name="compiler-error-c2218"></a>Errore del compilatore C2218

impossibile utilizzare '__vectorcall' con '/arch:IA32'

La convenzione di chiamata `__vectorcall` è supportata solo nel codice nativo su processori x86 e x64 che includono Streaming SIMD Extensions 2 (SSE2) e versioni successive. Per altre informazioni, vedere [vectorcall](../../cpp/vectorcall.md).

Per correggere l'errore, impostare le opzioni del compilatore sui set di istruzioni SSE2, AVX o AVX2 di destinazione. Per altre informazioni, vedere [/arch (x86)](../../build/reference/arch-x86.md).