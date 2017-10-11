---
title: Avviso del compilatore C4439 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4439
dev_langs:
- C++
helpviewer_keywords:
- C4439
ms.assetid: 9449958f-f407-4824-829b-9e092f2af97d
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: eec228922a6f5796587243fe2d1f2c6cc1cf6b1c
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-warning-c4439"></a>Avviso del compilatore C4439
'function': definizione di funzione con un tipo gestito nella firma deve avere un clrcall convenzione di chiamata  
  
 Il compilatore ha sostituito in modo implicito una convenzione di chiamata con [clrcall](../../cpp/clrcall.md). Per risolvere questo problema, rimuovere il `__cdecl` o `__stdcall` la convenzione di chiamata.  
  
 C4439 viene sempre generato come errore. È possibile disattivare questo avviso con il `#pragma warning` o **/wd**; vedere [avviso](../../preprocessor/warning.md) o [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /, abbiamo /wo, /WV., /WX (livello avviso)](../../build/reference/compiler-option-warning-level.md)per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4439.  
  
```  
// C4439.cpp  
// compile with: /clr  
void __stdcall f( System::String^ arg ) {}   // C4439  
void __clrcall f2( System::String^ arg ) {}   // OK  
void f3( System::String^ arg ) {}   // OK  
```
