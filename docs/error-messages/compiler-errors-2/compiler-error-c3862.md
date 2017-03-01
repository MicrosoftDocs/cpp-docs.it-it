---
title: Errore del compilatore C3862 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3862
dev_langs:
- C++
helpviewer_keywords:
- C3862
ms.assetid: ba547366-4189-4077-8c00-ab45e08a9533
caps.latest.revision: 6
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
ms.openlocfilehash: 48dbae62c367616a437db0607d84fa89e8006021
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3862"></a>Errore del compilatore C3862
'funzione': non è possibile compilare una funzione non gestita con /clr: pure o /CLR: safe  
  
 Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015.  
  
 Una compilazione con **/clr: pure** o **/CLR: safe** genererà solo un'immagine MSIL, un'immagine senza codice nativo (non gestito).  Pertanto, è possibile utilizzare il `unmanaged` pragma in una **/clr: pure** o **/CLR: safe** compilazione.  
  
 Per ulteriori informazioni, vedere [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) e [managed, unmanaged](../../preprocessor/managed-unmanaged.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C3862:  
  
```  
// C3862.cpp  
// compile with: /clr:pure /c  
#pragma unmanaged  
void f() {}   // C3862  
```
