---
title: "auto_handle::release | Microsoft Docs"
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
  - "msclr::auto_handle::release"
  - "auto_handle.release"
  - "msclr.auto_handle.release"
  - "auto_handle::release"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_handle::release"
ms.assetid: d4848150-859e-4c61-a946-09d24d3d6577
caps.latest.revision: 10
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# auto_handle::release
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rilascia l'oggetto da gestione di `auto_handle`.  
  
## Sintassi  
  
```  
_element_type ^ release();  
```  
  
## Valore restituito  
 L'oggetto trascinato.  
  
## Esempio  
  
```  
// msl_auto_handle_release.cpp  
// compile with: /clr  
#include <msclr\auto_handle.h>  
  
using namespace System;  
using namespace msclr;  
  
ref class ClassA {  
   String^ m_s;  
public:  
   ClassA( String^ s ) : m_s( s ) {  
      Console::WriteLine( "ClassA constructor: " + m_s );  
   }  
   ~ClassA() {  
      Console::WriteLine( "ClassA destructor: " + m_s );  
   }  
  
   void PrintHello() {  
      Console::WriteLine( "Hello from {0} A!", m_s );     
   }  
};  
  
int main()  
{  
   ClassA^ a;  
  
   // create a new scope:  
   {  
      auto_handle<ClassA> agc1 = gcnew ClassA( "first" );  
      auto_handle<ClassA> agc2 = gcnew ClassA( "second" );  
      a = agc1.release();  
   }  
   // agc1 and agc2 go out of scope here  
  
   a->PrintHello();  
  
   Console::WriteLine( "done" );  
}  
```  
  
  **Costruttore di ClassA: innanzitutto**  
**Costruttore di ClassA: in secondo luogo**  
**Distruttore di ClassA: in secondo luogo**  
**Fare attenzione innanzitutto A\!**  
**done**   
## Requisiti  
 msclr \<\\ auto\_handle.h di**File di intestazione** \>  
  
 msclr di**Spazio dei nomi**  
  
## Vedere anche  
 [Membri auto\_handle](../dotnet/auto-handle-members.md)   
 [auto\_handle::~auto\_handle](../dotnet/auto-handle-tilde-auto-handle.md)   
 [auto\_handle::reset](../dotnet/auto-handle-reset.md)