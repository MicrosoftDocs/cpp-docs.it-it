---
title: Portabilità in base ai limiti ABI
description: Rendere C++ Flat le interfacce alle convenzioni di chiamata C ai limiti dell'interfaccia binaria.
ms.date: 11/19/2019
ms.topic: conceptual
ms.assetid: abbd405e-3038-427c-8c24-e00598f0936a
ms.openlocfilehash: b3b2b217739ff5900c8ef0329ff3e8909a3fe036
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74303316"
---
# <a name="portability-at-abi-boundaries"></a>Portabilità in base ai limiti ABI

Usare i tipi e le convenzioni sufficientemente portabili nei limiti dell'interfaccia binaria. Un "tipo portabile" è un tipo incorporato C o uno struct che contiene solo tipi incorporati C. I tipi di classe possono essere utilizzati solo quando il chiamante e il chiamato accettano il layout, la convenzione di chiamata e così via. Questo è possibile solo quando entrambi sono compilati con le stesse impostazioni del compilatore e del compilatore.

## <a name="how-to-flatten-a-class-for-c-portability"></a>Come rendere flat una classe per la portabilità C

Quando i chiamanti possono essere compilati con un altro compilatore/lingua, quindi "flat" in un'API **extern "C"** con una convenzione di chiamata specifica:

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

[BentornatiC++](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
