---
title: Errore del compilatore C3901 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3901
dev_langs:
- C++
helpviewer_keywords:
- C3901
ms.assetid: 19af4141-39ad-4c16-a68f-3ae76f648186
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 778bb3336d33c52ce0efcefe96d4da304c1502cf
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3901"></a>Errore del compilatore C3901
'funzione_funzione di accesso': deve avere il tipo restituito 'type'  
  
 Tipo restituito del metodo almeno get deve corrispondere al tipo di proprietà. Per altre informazioni, vedere [property](../../windows/property-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C3901:  
  
```  
// C3901.cpp  
// compile with: /clr /c  
using namespace System;  
ref class X {  
   property String^ Name {  
      void get();   // C3901  
      // try the following line instead  
      // String^ get();  
   };  
};  
  
ref class Y {  
   property double values[int, int] {  
      int get(int, int);   // C3901  
      // try the following line instead  
      // double get(int, int);  
   };  
};  
```
