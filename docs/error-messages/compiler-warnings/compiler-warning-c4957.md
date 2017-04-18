---
title: Avviso del compilatore C4957 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4957
dev_langs:
- C++
helpviewer_keywords:
- C4957
ms.assetid: a18c52d4-23e2-44f1-b4b5-f7fa5a7f3987
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 8eb7283942a8a89fc3322983c41c68082b6c5cee
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-c4957"></a>Avviso del compilatore C4957
'cast': cast esplicito da 'cast_from' a 'cast_to' non verificabile  
  
 Un cast genererà un'immagine non verificabile.  
  
 Alcuni cast sono sicuri, ad esempio un `static_cast` che attiva conversioni definite dall'utente e un `const_cast`. Oggetto [safe_cast](../../windows/safe-cast-cpp-component-extensions.md) generano codice verificabile.  
  
 Per ulteriori informazioni, vedere [codice Pure e verificabile (C + + CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
 Questo avviso viene generato come errore e può essere disabilitato tramite il [avviso](../../preprocessor/warning.md) pragma o [/wd](../../build/reference/compiler-option-warning-level.md) l'opzione del compilatore.  
  
 L'esempio seguente genera l'errore C4957:  
  
```  
// C4957.cpp  
// compile with: /clr:safe  
// #pragma warning( disable : 4957 )  
using namespace System;  
int main() {  
   Object ^ o = "Hello, World!";  
   String ^ s = static_cast<String^>(o);   // C4957  
   String ^ s2 = safe_cast<String^>(o);   // OK  
}  
```
