---
title: Errore del compilatore C3862 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3862
dev_langs:
- C++
helpviewer_keywords:
- C3862
ms.assetid: ba547366-4189-4077-8c00-ab45e08a9533
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 25b0a344eaafedc2f7c0eb60141e3a07fd86c6af
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3862"></a>Errore del compilatore C3862
'function': non è possibile compilare una funzione non gestita con /clr: pure o /CLR: safe  
  
 Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
 Una compilazione con **/clr: pure** o **/CLR: safe** produrrà solo un'immagine MSIL, un'immagine senza codice nativo (non gestito).  Pertanto, è possibile utilizzare il `unmanaged` pragma in un **/clr: pure** o **/CLR: safe** compilazione.  
  
 Per ulteriori informazioni, vedere [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) e [managed, unmanaged](../../preprocessor/managed-unmanaged.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3862:  
  
```  
// C3862.cpp  
// compile with: /clr:pure /c  
#pragma unmanaged  
void f() {}   // C3862  
```