---
title: Errore del compilatore C3227
ms.date: 11/04/2016
f1_keywords:
- C3227
helpviewer_keywords:
- C3227
ms.assetid: 7939c23a-96c8-43c2-89e9-f217d132d155
ms.openlocfilehash: b175b14af55a9a462e040f064cc6e38d13fffb94
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50632492"
---
# <a name="compiler-error-c3227"></a>Errore del compilatore C3227

'parameter': Impossibile utilizzare 'keyword' per allocare un tipo generico

Per creare un'istanza di un tipo, è necessario un costruttore appropriato. Tuttavia, il compilatore non è in grado di assicurare che sia disponibile un costruttore appropriato.

È possibile usare i modelli anziché i generics per risolvere l'errore oppure è possibile usare uno dei diversi metodi per creare un'istanza del tipo.

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