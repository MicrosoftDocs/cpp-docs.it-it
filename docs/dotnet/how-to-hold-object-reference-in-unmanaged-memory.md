---
title: "Procedura: mantenere i riferimenti agli oggetti nella memoria non gestita | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gcroot (parola chiave) [C++], riferimento a oggetti in funzioni native"
  - "riferimenti a oggetti, in funzioni native"
  - "oggetti [C++], riferimento in funzioni native"
  - "riferimenti, a oggetti in funzioni native"
ms.assetid: a61eb8ce-3982-477d-8d3d-2173fd57166d
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Procedura: mantenere i riferimenti agli oggetti nella memoria non gestita
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare gcroot.h, che contiene <xref:System.Runtime.InteropServices.GCHandle>, per mantenere un riferimento agli oggetti CLR nella memoria non gestita.  In alternativa, è possibile utilizzare direttamente `GCHandle`.  
  
## Esempio  
  
```  
// hold_object_reference.cpp  
// compile with: /clr  
#include "gcroot.h"  
using namespace System;  
  
#pragma managed  
class StringWrapper {  
  
private:  
   gcroot<String ^ > x;  
  
public:  
   StringWrapper() {  
      String ^ str = gcnew String("ManagedString");  
      x = str;  
   }  
  
   void PrintString() {  
      String ^ targetStr = x;  
      Console::WriteLine("StringWrapper::x == {0}", targetStr);  
   }  
};  
#pragma unmanaged  
int main() {  
   StringWrapper s;  
   s.PrintString();  
}  
```  
  
  **StringWrapper::x \=\= ManagedString**   
## Esempio  
 `GCHandle` consente di mantenere un riferimento a un oggetto gestito nella memoria non gestita.  È possibile utilizzare il metodo <xref:System.Runtime.InteropServices.GCHandle.Alloc%2A> per creare un handle opaco su un oggetto gestito e il metodo <xref:System.Runtime.InteropServices.GCHandle.Free%2A> per rilasciarlo.  Inoltre, è possibile utilizzare il metodo <xref:System.Runtime.InteropServices.GCHandle.Target%2A> per recuperare il riferimento all'oggetto dall'handle nel codice gestito.  
  
```  
// hold_object_reference_2.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
#pragma managed  
class StringWrapper {  
   IntPtr m_handle;  
public:  
   StringWrapper() {  
      String ^ str = gcnew String("ManagedString");  
      m_handle = static_cast<IntPtr>(GCHandle::Alloc(str));  
   }  
   ~StringWrapper() {  
      static_cast<GCHandle>(m_handle).Free();  
   }  
  
   void PrintString() {  
      String ^ targetStr = safe_cast< String ^ >(static_cast<GCHandle>(m_handle).Target);  
      Console::WriteLine("StringWrapper::m_handle == {0}", targetStr);  
   }  
};  
  
#pragma unmanaged  
int main() {  
   StringWrapper s;   
   s.PrintString();  
}  
```  
  
  **StringWrapper::m\_handle \=\= ManagedString**   
## Vedere anche  
 [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)