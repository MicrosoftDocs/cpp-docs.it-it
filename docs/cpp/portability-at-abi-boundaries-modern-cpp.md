---
title: Portabilità in base ai limiti ABI (C++ moderno) | Microsoft Docs
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
ms.openlocfilehash: fb9ce8012db8617afc7af3183bd7439ddeb8fab7
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39402351"
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
 [Bentornati a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Libreria standard C++](../standard-library/cpp-standard-library-reference.md)