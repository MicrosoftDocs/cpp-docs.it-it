---
title: Errore del compilatore C3641 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3641
dev_langs:
- C++
helpviewer_keywords:
- C3641
ms.assetid: e8d3613e-5e8d-46fe-a516-eb7d1de7cd21
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: cc82b83860786ffc3f0aee73ede18ecadef16a7a
ms.openlocfilehash: 1f928242a26ed45a48cc9bc19be231e2d0e09a51
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3641"></a>Errore del compilatore C3641
'funzione': convenzione di chiamata 'convenzione_chiamata' per la funzione compilata con /clr: pure o /CLR: safe  
  
 Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015.  
  
 Solo [clrcall](../../cpp/clrcall.md) la convenzione di chiamata è consentita con [/clr: pure](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 Nell'esempio seguente viene generato l'errore C3641:  
  
```  
// C3641.cpp  
// compile with: /clr:pure /c  
void __cdecl f() {}   // C3641  
```
