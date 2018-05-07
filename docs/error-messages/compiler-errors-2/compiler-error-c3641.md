---
title: Errore del compilatore C3641 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3641
dev_langs:
- C++
helpviewer_keywords:
- C3641
ms.assetid: e8d3613e-5e8d-46fe-a516-eb7d1de7cd21
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 496ff73822dcc1c886fbd2020f8ec6b8a5a9a2f7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3641"></a>Errore del compilatore C3641
'function': convenzione di chiamata 'convenzione_chiamata' per la funzione compilata con /clr: pure o /CLR: safe  
  
 Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
 Solo [clrcall](../../cpp/clrcall.md) la convenzione di chiamata è consentita con [/clr: pure](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 L'esempio seguente genera l'errore C3641:  
  
```  
// C3641.cpp  
// compile with: /clr:pure /c  
void __cdecl f() {}   // C3641  
```