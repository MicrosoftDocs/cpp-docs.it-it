---
title: Portabilità in base ai limiti ABI (C++ moderno)
ms.date: 11/04/2016
ms.topic: conceptual
ms.assetid: abbd405e-3038-427c-8c24-e00598f0936a
ms.openlocfilehash: 3f72bc32e436c2f7a2f76ed6bbb9553b5e5be6b8
ms.sourcegitcommit: a1fad0a266b20b313364a74b16c9ac45d089b1e9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/11/2019
ms.locfileid: "54220309"
---
# <a name="portability-at-abi-boundaries-modern-c"></a>Portabilità in base ai limiti ABI (C++ moderno)

Usare tipi sufficientemente portabili e le convenzioni in corrispondenza dei limiti di interfaccia binaria. Un tipo"portable" è un tipo incorporato C o uno struct che contiene solo i tipi predefiniti di C. Tipi di classe possono essere utilizzati solo quando chiamante e chiamato concordano su layout, la chiamata a convenzione e così via. Ciò è possibile solo quando vengono compilate entrambe con il compilatore stesso e le impostazioni del compilatore.

## <a name="how-to-flatten-a-class-for-c-portability"></a>Come rendere flat una classe per la portabilità di C

Quando i chiamanti potrebbero essere compilati con un altro compilatore/linguaggio e quindi "appiattire" a un **extern "C"** API con una convenzione di chiamata specifica:

```cpp
// class widget {
//   widget();
//   ~widget();
//   double method( int, gadget& );
// };
extern "C" {        // functions using explicit "this"
   struct widget;   // opaque type (forward declaration only)
   widget* STDCALL widget_create();      // constructor creates new "this"
   void STDCALL widget_destroy(widget*); // destructor consumes "this"
   double STDCALL widget_method(widget*, int, gadget*); // method uses "this"
}
```

## <a name="see-also"></a>Vedere anche

[C++ (C++ moderno)](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
