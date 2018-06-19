---
title: Errore del compilatore C2218 | Documenti Microsoft
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
ms.openlocfilehash: 1efda7258616862efc464b493b51ada2c6bd7674
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33172211"
---
# <a name="compiler-error-c2218"></a>Errore del compilatore C2218
impossibile utilizzare '__vectorcall' con '/arch:IA32'  
  
 La convenzione di chiamata `__vectorcall` è supportata solo nel codice nativo su processori x86 e x64 che includono Streaming SIMD Extensions 2 (SSE2) e versioni successive. Per ulteriori informazioni, vedere [vectorcall](../../cpp/vectorcall.md).  
  
 Per correggere l'errore, impostare le opzioni del compilatore sui set di istruzioni SSE2, AVX o AVX2 di destinazione. Per altre informazioni, vedere [/arch (x86)](../../build/reference/arch-x86.md).