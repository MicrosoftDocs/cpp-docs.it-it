---
title: Errore del compilatore C3389 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3389
dev_langs:
- C++
helpviewer_keywords:
- C3389
ms.assetid: eaaffe17-23f2-413c-b1ad-f7220cfa1334
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6f0f60a1096c070d28be3b7af161bbb924fb20dd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3389"></a>Errore del compilatore C3389
__declspec(Keyword) non può essere utilizzato con /clr: pure o /CLR: safe  
  
 Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
 Oggetto [declspec](../../cpp/declspec.md) modificatore utilizzato implica una per ogni stato del processo.  [/CLR: pure](../../build/reference/clr-common-language-runtime-compilation.md) implica una per ogni [appdomain](../../cpp/appdomain.md) dello stato.  In tal caso, la dichiarazione di una variabile con il `keyword` **declspec** modificatore e la compilazione con **/clr: pure** non è consentito.  
  
 L'esempio seguente genera l'errore C3389:  
  
```  
// C3389.cpp  
// compile with: /clr:pure /c  
__declspec(dllexport) int g2 = 0;   // C3389  
```