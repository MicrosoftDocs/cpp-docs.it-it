---
title: Errore del compilatore C3904
ms.date: 11/04/2016
f1_keywords:
- C3904
helpviewer_keywords:
- C3904
ms.assetid: 08297605-e4f2-4c6c-b637-011f1fd40631
ms.openlocfilehash: 8c7f4a2861825a35d676328b5e283a5e4087d85b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50519782"
---
# <a name="compiler-error-c3904"></a>Errore del compilatore C3904

'property_accessor': è necessario specificare uno o più parametri numerici

Controllare il numero di parametri in di `get` e `set` metodi in base alle dimensioni della proprietà.

- Il numero di parametri per il `get` metodo deve essere uguale al numero di dimensioni della proprietà oppure zero per proprietà non indicizzata.

- Il numero di parametri del `set` metodo deve essere una maggiore del numero di dimensioni della proprietà.

Per altre informazioni, vedere [property](../../windows/property-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3904.

```
// C3904.cpp
// compile with: /clr /c
ref class X {
   property int P {
      // set
      void set();   // C3904
      // try the following line instead
      // void set(int);

      // get
      int get(int, int);   // C3904
      // try the following line instead
      // int get();
   };
};
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3904.

```
// C3904b.cpp
// compile with: /clr /c
ref struct X {
   property int Q[double, double, float, float, void*, int] {
      // set
      void set(double, void*);   // C3904
      // try the following line instead
      // void set(double, double, float, float, void*, int, int);

      // get
      int get();   // C3904
      // try the following line instead
      // int get(double, double, float, float, void*, int);
   }
};
```