---
title: Errore del compilatore C2216 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2216
dev_langs:
- C++
helpviewer_keywords:
- C2216
ms.assetid: 250f6bdc-a5e1-495f-a1e8-6e8e7021ad9d
caps.latest.revision: 8
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
ms.openlocfilehash: 562229262aeef2c5ab58b714e11876c2c012c444
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2216"></a>Errore del compilatore C2216
'keyword1' non può essere usato con ' keyword2'  
  
 Due parole chiave che si escludono reciprocamente sono state usate insieme.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2216.  
  
```  
// C2216.cpp  
// compile with: /clr /c  
ref struct Y1 {  
   literal  
   static int staticConst2 = 10;   // C2216  
};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2216.  
  
```  
// C2216b.cpp  
// compile with: /clr /c  
public ref class X {  
   extern property int i { int get(); }   // C2216 extern not allowed on property  
   typedef property int i2;   // C2216 typedef not allowed on property  
};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2216.  
  
```  
// C2216c.cpp  
// compile with: /clr /c  
public interface struct I {  
   double f();  
   double g();  
   double h();  
};  
  
public ref struct R : I {  
   virtual double f() new override { return 0.0; }   // C2216  
   virtual double g() new { return 0.0; }   // OK  
   virtual double h() override { return 0.0; }   // OK  
};  
```
