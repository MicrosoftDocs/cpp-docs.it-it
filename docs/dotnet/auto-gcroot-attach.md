---
title: "auto_gcroot::attach | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "auto_gcroot.attach"
  - "auto_gcroot::attach"
  - "msclr::auto_gcroot::attach"
  - "msclr.auto_gcroot.attach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_gcroot::attach"
ms.assetid: 996ede65-bcb5-41f2-bfbf-507f8a578241
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# auto_gcroot::attach
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Connessione `auto_gcroot` a un oggetto.  
  
## Sintassi  
  
```  
auto_gcroot<_element_type> & attach(  
   _element_type _right  
);  
auto_gcroot<_element_type> & attach(  
   auto_gcroot<_element_type> & _right  
);  
template<typename _other_type>  
auto_gcroot<_element_type> & attach(  
   auto_gcroot<_other_type> & _right  
);  
```  
  
#### Parametri  
 `_right`  
 L'oggetto dell'associazione, o `auto_gcroot` contenente l'oggetto su connetti.  
  
## Valore restituito  
 Oggetto `auto_gcroot` corrente.  
  
## Note  
 Se `_right` è `auto_gcroot`, rilascia la proprietà dell'oggetto prima che verrà allegato a `auto_gcroot`corrente.  
  
## Esempio  
  
```  
// msl_auto_gcroot_attach.cpp  
// compile with: /clr  
#include <msclr\auto_gcroot.h>  
  
using namespace System;  
using namespace msclr;  
  
ref class ClassA {  
protected:     
   String^ m_s;  
public:  
   ClassA( String^ s ) : m_s( s ) {  
      Console::WriteLine( "in ClassA constructor:" + m_s );  
   }  
   ~ClassA() {  
      Console::WriteLine( "in ClassA destructor:" + m_s );  
   }  
  
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
   auto_gcroot<ClassA^> a( gcnew ClassA( "first" ) );  
   a->PrintHello();  
   a.attach( gcnew ClassA( "second" ) ); // attach same type  
   a->PrintHello();  
   ClassA^ ha = gcnew ClassA( "third" );  
   a.attach( ha ); // attach raw handle  
   a->PrintHello();  
   auto_gcroot<ClassB^> b( gcnew ClassB("fourth") );  
   b->PrintHello();  
   a.attach( b ); // attach derived type  
   a->PrintHello();  
}  
```  
  
  **in ClassA constructor:first**  
**Fare attenzione innanzitutto A\!**  
**in ClassA constructor:second**  
**in ClassA destructor:first**  
**Hello dal secondo A\!**  
**in ClassA constructor:third**  
**in ClassA destructor:second**  
**Hello da terzo A\!**  
**in ClassA constructor:fourth**  
**Hello dalla quarta B\!**  
**in ClassA destructor:third**  
**Hello da quarto A\!**  
**in ClassA destructor:fourth**   
## Requisiti  
 msclr \<\\ auto\_gcroot.h di**File di intestazione** \>  
  
 msclr di**Spazio dei nomi**  
  
## Vedere anche  
 [Membri auto\_gcroot](../dotnet/auto-gcroot-members.md)   
 [auto\_gcroot::operator\=](../dotnet/auto-gcroot-operator-assign.md)   
 [auto\_gcroot::release](../dotnet/auto-gcroot-release.md)