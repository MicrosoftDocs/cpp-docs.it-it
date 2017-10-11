---
title: Errore del compilatore C3227 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3227
dev_langs:
- C++
helpviewer_keywords:
- C3227
ms.assetid: 7939c23a-96c8-43c2-89e9-f217d132d155
caps.latest.revision: 5
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 2f65791d709b5790144cd919bf06b61fd94da973
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3227"></a>Errore del compilatore C3227
'parameter': Impossibile utilizzare 'keyword' per allocare un tipo generico  
  
 Per creare un'istanza di un tipo, è necessario un costruttore appropriato. Tuttavia, il compilatore non è in grado di verificare che sia disponibile un costruttore appropriato.  
  
 È possibile utilizzare i modelli anziché generics per risolvere l'errore oppure è possibile utilizzare uno dei diversi metodi per creare un'istanza del tipo.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3227.  
  
```  
// C3227.cpp  
// compile with: /clr /c  
generic<class T> interface class ICreate {  
   static T Create();  
};  
  
generic <class T>  
where T : ICreate<T>  
ref class C {  
   void f() {  
      T t = new T;   // C3227  
  
      // OK  
      T t2 = ICreate<T>::Create();  
      T t3 = safe_cast<T>( System::Activator::CreateInstance(T::typeid) );  
   }  
};  
```
