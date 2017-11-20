---
title: Errore del compilatore C2218 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2218
dev_langs: C++
helpviewer_keywords: C2218
ms.assetid: b0f55da4-8edb-4b45-b298-1a091981bd7b
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 3ca2e431fdfeff3c9dc957bee46f84cfd2c04162
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2218"></a>Errore del compilatore C2218
impossibile utilizzare '__vectorcall' con '/arch:IA32'  
  
 La convenzione di chiamata `__vectorcall` è supportata solo nel codice nativo su processori x86 e x64 che includono Streaming SIMD Extensions 2 (SSE2) e versioni successive. Per ulteriori informazioni, vedere [vectorcall](../../cpp/vectorcall.md).  
  
 Per correggere l'errore, impostare le opzioni del compilatore sui set di istruzioni SSE2, AVX o AVX2 di destinazione. Per altre informazioni, vedere [/arch (x86)](../../build/reference/arch-x86.md).