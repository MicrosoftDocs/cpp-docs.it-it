---
title: "Errore del compilatore C2218 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2218"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2218"
ms.assetid: b0f55da4-8edb-4b45-b298-1a091981bd7b
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2218
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile utilizzare '\_\_vectorcall' con '\/arch:IA32'  
  
 La convenzione di chiamata `__vectorcall` è supportata solo nel codice nativo su processori x86 e x64 che includono Streaming SIMD Extensions 2 \(SSE2\) e versioni successive.  Per altre informazioni, vedere [\_\_vectorcall](../../cpp/vectorcall.md).  
  
 Per correggere l'errore, impostare le opzioni del compilatore sui set di istruzioni SSE2, AVX o AVX2 di destinazione.  Per altre informazioni, vedere [\/arch \(x86\)](../../build/reference/arch-x86.md).