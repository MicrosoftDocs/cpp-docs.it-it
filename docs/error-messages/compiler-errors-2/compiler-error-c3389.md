---
title: Errore del compilatore C3389 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3389
dev_langs:
- C++
helpviewer_keywords:
- C3389
ms.assetid: eaaffe17-23f2-413c-b1ad-f7220cfa1334
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 561359afcd9cf694369bd1addb4f641a33a3f989
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3389"></a>Errore del compilatore C3389
__declspec(Keyword) non può essere utilizzato con /clr: pure o /CLR: safe  
  
 Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
 Oggetto [declspec](../../cpp/declspec.md) modificatore utilizzato implica una per ogni stato del processo.  [/CLR: pure](../../build/reference/clr-common-language-runtime-compilation.md) implica una per ogni [appdomain](../../cpp/appdomain.md) stato.  In tal caso, la dichiarazione di una variabile con il `keyword` **declspec** modificatore e la compilazione con **/clr: pure** non è consentito.  
  
 L'esempio seguente genera l'errore C3389:  
  
```  
// C3389.cpp  
// compile with: /clr:pure /c  
__declspec(dllexport) int g2 = 0;   // C3389  
```
