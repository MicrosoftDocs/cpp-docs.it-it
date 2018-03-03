---
title: 'Procedura: eseguire il wrapping di classe nativa per l''utilizzo da c# | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs:
- C++
helpviewer_keywords:
- native code [C++], Visual C# and
- classes [C++], Visual C# and
ms.assetid: 988819ae-cc6a-4453-8ff5-be369210d962
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: e206fcfe0c8c4d82276e8c477061fd0522fe5722
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-wrap-native-class-for-use-by-c"></a>Procedura: eseguire il wrapping di una classe nativa affinché possa essere utilizzata in C#
Questo esempio viene illustrato come eseguire il wrapping di una classe C++ nativa in modo che possa essere utilizzata da codice creato in c# o altri linguaggi .NET.  
  
## <a name="example"></a>Esempio  
  
```  
// wrap_native_class_for_mgd_consumption.cpp  
// compile with: /clr /LD  
#include <windows.h>  
#include <vcclr.h>  
#using <System.dll>  
  
using namespace System;  
  
class UnmanagedClass {  
public:  
   LPCWSTR GetPropertyA() { return 0; }  
   void MethodB( LPCWSTR ) {}  
};  
  
public ref class ManagedClass {  
public:  
   // Allocate the native object on the C++ Heap via a constructor  
   ManagedClass() : m_Impl( new UnmanagedClass ) {}  
  
   // Deallocate the native object on a destructor  
   ~ManagedClass() {  
      delete m_Impl;  
   }  
  
protected:  
   // Deallocate the native object on the finalizer just in case no destructor is called  
   !ManagedClass() {  
      delete m_Impl;  
   }  
  
public:  
   property String ^  get_PropertyA {  
      String ^ get() {  
         return gcnew String( m_Impl->GetPropertyA());  
      }  
   }  
  
   void MethodB( String ^ theString ) {  
      pin_ptr<const WCHAR> str = PtrToStringChars(theString);  
      m_Impl->MethodB(str);  
   }  
  
private:  
   UnmanagedClass * m_Impl;  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)