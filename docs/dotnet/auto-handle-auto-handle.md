---
title: "auto_handle::auto_handle | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "auto_handle::auto_handle"
  - "msclr.auto_handle.auto_handle"
  - "auto_handle.auto_handle"
  - "msclr::auto_handle::auto_handle"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_handle (metodo)"
ms.assetid: 0b68ab31-023c-4224-9601-9231412c4e13
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# auto_handle::auto_handle
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruttore `auto_handle`.  
  
## Sintassi  
  
```  
auto_handle();  
auto_handle(  
   _element_type ^ _ptr  
);  
auto_handle(  
   auto_handle<_element_type> % _right  
);  
template<typename _other_type>  
auto_handle(  
   auto_handle<_other_type> % _right  
);  
```  
  
#### Parametri  
 `_ptr`  
 Oggetto da tenere.  
  
 `_right`  
 Classe `auto_handle` esistente.  
  
## Esempio  
  
```  
// msl_auto_handle_auto_handle.cpp  
// compile with: /clr  
#include "msclr\auto_handle.h"  
  
using namespace System;  
using namespace msclr;  
ref class RefClassA {  
protected:  
   String^ m_s;     
public:  
   RefClassA(String^ s) : m_s(s) {  
      Console::WriteLine( "in RefClassA constructor: " + m_s );  
   }  
   ~RefClassA() {  
      Console::WriteLine( "in RefClassA destructor: " + m_s );  
   }  
  
   virtual void PrintHello() {  
      Console::WriteLine( "Hello from {0} A!", m_s );  
   }  
};  
  
ref class RefClassB : RefClassA {  
public:     
   RefClassB( String^ s ) : RefClassA( s ) {}  
   virtual void PrintHello() new {  
      Console::WriteLine( "Hello from {0} B!", m_s );  
   }  
};  
  
int main()  
{  
   {  
      auto_handle<RefClassA> a(gcnew RefClassA( "first" ) );  
      a->PrintHello();  
   }  
  
   {  
      auto_handle<RefClassB> b(gcnew RefClassB( "second" ) );  
      b->PrintHello();  
      auto_handle<RefClassA> a(b); //construct from derived type  
      a->PrintHello();  
      auto_handle<RefClassA> a2(a); //construct from same type  
      a2->PrintHello();  
   }  
  
   Console::WriteLine("done");  
}  
```  
  
  **in RefClassA constructor: first**  
**Hello from first A\!**  
**in RefClassA destructor: first**  
**in RefClassA constructor: second**  
**Hello from second B\!**  
**Hello from second A\!**  
**Hello from second A\!**  
**in RefClassA destructor: second**  
**done**   
## Requisiti  
 **File di intestazione** \<msclr\\auto\_handle.h\>  
  
 **Spazio dei nomi** msclr  
  
## Vedere anche  
 [Membri auto\_handle](../dotnet/auto-handle-members.md)   
 [auto\_handle::operator\=](../dotnet/auto-handle-operator-assign.md)   
 [auto\_handle::~auto\_handle](../dotnet/auto-handle-tilde-auto-handle.md)