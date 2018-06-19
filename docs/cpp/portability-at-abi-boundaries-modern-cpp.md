---
title: Portabilità in base ai limiti ABI (C++ moderno) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: abbd405e-3038-427c-8c24-e00598f0936a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c214ed18e5afec51f52514abdd73e0e5b658635a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32419666"
---
# <a name="portability-at-abi-boundaries-modern-c"></a>Portabilità in base ai limiti ABI (C++ moderno)
Utilizzare tipi sufficientemente portabili e le convenzioni dei limiti interfaccia binaria. Un tipo"portatile" è un tipo incorporato C o una struttura che contiene solo i tipi predefiniti di C. Tipi di classe possono essere utilizzati solo quando chiamante e chiamato concordare layout, la chiamata convenzione e così via. Ciò è possibile solo quando entrambi sono state compilate le impostazioni del compilatore e del compilatore stesso.  
  
## <a name="how-to-flatten-a-class-for-c-portability"></a>Come convertire una classe per la portabilità di C  
 Quando i chiamanti possono essere compilati con un altro compilatore o del linguaggio, allora "unire" per un **extern "C"** API con una convenzione di chiamata specifica:  
  
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
 [Bentornato a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Libreria standard C++](../standard-library/cpp-standard-library-reference.md)