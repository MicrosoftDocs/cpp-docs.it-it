---
title: Errore del compilatore C3227
ms.date: 11/04/2016
f1_keywords:
- C3227
helpviewer_keywords:
- C3227
ms.assetid: 7939c23a-96c8-43c2-89e9-f217d132d155
ms.openlocfilehash: 460000531dba77e42379199f276c9e2e02f43a9b
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74743419"
---
# <a name="compiler-error-c3227"></a>Errore del compilatore C3227

' parameter ': non è possibile usare ' keyword ' per allocare un tipo generico

Per creare un'istanza di un tipo, è necessario un costruttore appropriato. Tuttavia, il compilatore non è in grado di garantire che sia disponibile un costruttore appropriato.

Per risolvere l'errore è possibile utilizzare modelli anziché generics oppure utilizzare uno dei diversi metodi disponibili per creare un'istanza del tipo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3227.

```cpp
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
