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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bd88753553d2bad1cb9253cfe709e7627c4b01ba
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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