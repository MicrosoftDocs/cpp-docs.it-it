---
title: Avviso del compilatore C4439 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4439
dev_langs:
- C++
helpviewer_keywords:
- C4439
ms.assetid: 9449958f-f407-4824-829b-9e092f2af97d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4767f03d51bf1fcaac51678d17d454949eb30875
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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