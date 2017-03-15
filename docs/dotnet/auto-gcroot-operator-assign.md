---
title: "auto_gcroot::operator= | Microsoft Docs"
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
  - "auto_gcroot.operator="
  - "msclr::auto_gcroot::operator="
  - "msclr.auto_gcroot.operator="
  - "auto_gcroot::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator="
ms.assetid: 99eba5eb-5a2c-4edf-b3d5-c903f818233d
caps.latest.revision: 13
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# auto_gcroot::operator=
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Operatore di assegnazione.  
  
## Sintassi  
  
```  
auto_gcroot<_element_type> & operator=(  
   _element_type _right  
);  
auto_gcroot<_element_type> & operator=(  
   auto_gcroot<_element_type> & _right  
);  
template<typename _other_type>  
auto_gcroot<_element_type> & operator=(  
   auto_gcroot<_other_type> & _right  
);  
```  
  
#### Parametri  
 `_right`  
 L'oggetto o `auto_gcroot` da assegnare a `auto_gcroot`corrente.  
  
## Valore restituito  
 `auto_gcroot`corrente, ora possedente `_right`.  
  
## Esempio  
  
```  
// msl_auto_gcroot_operator_equals.cpp  
// compile with: /clr  
#include <msclr\auto_gcroot.h>  
  
using namespace System;  
using namespace msclr;  
  
ref class ClassA {  
protected:  
   String^ m_s;     
public:  
   ClassA(String^ s) : m_s(s) {  
      Console::WriteLine( "in ClassA constructor: " + m_s );  
   }  
   ~ClassA() {  
      Console::WriteLine( "in ClassA destructor: " + m_s );  
   }  
  
   virtual void PrintHello() {  
      Console::WriteLine( "Hello from {0} A!", m_s );  
   }  
};  
  
ref class ClassB : ClassA {  
public:     
   ClassB( String^ s ) : ClassA( s ) {}  
   virtual void PrintHello() new {  
      Console::WriteLine( "Hello from {0} B!", m_s );  
   }  
};  
  
int main()  
{  
   auto_gcroot<ClassA^> a;  
   auto_gcroot<ClassA^> a2(gcnew ClassA( "first" ) );  
   a = a2; // assign from same type  
   a->PrintHello();  
  
   ClassA^ ha = gcnew ClassA( "second" );  
   a = ha; // assign from raw handle  
  
   auto_gcroot<ClassB^> b(gcnew ClassB( "third" ) );     
   b->PrintHello();  
   a = b; // assign from derived type     
   a->PrintHello();  
  
   Console::WriteLine("done");  
}  
```  
  
  **nel costruttore di ClassA: innanzitutto**  
**Fare attenzione innanzitutto A\!**  
**nel costruttore di ClassA: in secondo luogo**  
**in distruttore di ClassA: innanzitutto**  
**nel costruttore di ClassA: terzo**  
**Hello dalla terza B\!**  
**in distruttore di ClassA: in secondo luogo**  
**Hello da terzo A\!**  
**done**  
**in distruttore di ClassA: terzo**   
## Requisiti  
 msclr \<\\ auto\_gcroot.h di**File di intestazione** \>  
  
 msclr di**Spazio dei nomi**  
  
## Vedere anche  
 [Membri auto\_gcroot](../dotnet/auto-gcroot-members.md)   
 [auto\_gcroot::attach](../dotnet/auto-gcroot-attach.md)