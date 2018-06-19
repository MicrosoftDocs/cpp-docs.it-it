---
title: Errore del compilatore C3904 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3904
dev_langs:
- C++
helpviewer_keywords:
- C3904
ms.assetid: 08297605-e4f2-4c6c-b637-011f1fd40631
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 86a1d0d51f407069cbed2139322ccc92d5cfeeb6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33271879"
---
# <a name="compiler-error-c3904"></a>Errore del compilatore C3904
'property_accessor': specificare il numero parametro/i  
  
 Controllare il numero di parametri del `get` e `set` metodi in base alle dimensioni della proprietà.  
  
-   Il numero di parametri per il `get` (metodo) deve essere uguale al numero di dimensioni della proprietà o essere zero per proprietà non indicizzata.  
  
-   Il numero di parametri del `set` (metodo) deve essere maggiore del numero di dimensioni della proprietà.  
  
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