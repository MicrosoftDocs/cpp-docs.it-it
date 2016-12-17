---
title: "auto_handle::operator auto_handle | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "msclr.auto_handle.operator auto_handle"
  - "operator auto_handle"
  - "msclr::auto_handle::operator auto_handle"
  - "auto_handle.operator auto_handle"
  - "auto_handle::operator auto_handle"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_handle (operatore)"
ms.assetid: 2f8b35d1-2783-4d91-b6fb-eae551270fb8
caps.latest.revision: 10
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# auto_handle::operator auto_handle
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Operatore di cast di tipo tra `auto_handle` e tipi compatibili.  
  
## Sintassi  
  
```  
template<typename _other_type>  
operator auto_handle<_other_type>();  
```  
  
## Valore restituito  
 `auto_handle` corrente di cui è stato eseguito il cast in `auto_handle<_other_type>`.  
  
## Esempio  
  
```  
// msl_auto_handle_op_auto_handle.cpp  
// compile with: /clr  
#include <msclr\auto_handle.h>  
  
using namespace System;  
using namespace msclr;  
  
ref class ClassA {  
protected:     
   String^ m_s;  
public:  
   ClassA( String^ s ) : m_s( s ) {}  
  
   virtual void PrintHello() {  
      Console::WriteLine( "Hello from {0} A!", m_s );  
   }  
};  
  
ref class ClassB : ClassA {  
public:  
   ClassB( String ^ s) : ClassA( s ) {}  
   virtual void PrintHello() new {  
      Console::WriteLine( "Hello from {0} B!", m_s );  
   }  
};  
  
int main() {  
   auto_handle<ClassB> b = gcnew ClassB("first");  
   b->PrintHello();  
   auto_handle<ClassA> a = (auto_handle<ClassA>)b;  
   a->PrintHello();  
}  
```  
  
  **Hello from first B\!**  
**Hello from first A\!**   
## Requisiti  
 **File di intestazione** \<msclr\\auto\_handle.h\>  
  
 **Spazio dei nomi** msclr  
  
## Vedere anche  
 [Membri auto\_handle](../dotnet/auto-handle-members.md)