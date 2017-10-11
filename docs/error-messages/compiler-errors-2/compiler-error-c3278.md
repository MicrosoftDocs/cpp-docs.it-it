---
title: Errore del compilatore C3278 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3278
dev_langs:
- C++
helpviewer_keywords:
- C3278
ms.assetid: 56f818f5-85a6-4792-843b-54fe16327658
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: ee3c14e1b6d306807735f8d58570089f128a1c19
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3278"></a>Errore del compilatore C3278
la chiamata diretta del metodo di interfaccia o puro 'method' avrà esito negativo in fase di esecuzione  
  
 È stata effettuata una chiamata a un metodo di interfaccia o a un metodo puro, che non è consentita.  
  
 L'esempio seguente genera l'errore C3278:  
  
```  
// C3278_2.cpp  
// compile with: /clr  
using namespace System;  
interface class I  
{  
   void vmf();  
};  
  
public ref class C: public I  
{  
public:  
   void vmf()  
   {  
      Console::WriteLine( "In C::vmf()" );  
      I::vmf(); // C3278  
   }  
  
};  
  
int main()  
{  
   C^ pC = gcnew C;  
   pC->vmf();  
}  
```
