---
title: "auto_gcroot::get | Microsoft Docs"
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
  - "msclr::auto_gcroot::get"
  - "msclr.auto_gcroot.get"
  - "auto_gcroot::get"
  - "auto_gcroot.get"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_gcroot::get"
ms.assetid: 0e922019-1cf5-4220-b5ab-6c4a2a6b40ec
caps.latest.revision: 13
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# auto_gcroot::get
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene l'oggetto contenuto.  
  
## Sintassi  
  
```  
_element_type get() const;  
```  
  
## Valore restituito  
 L'oggetto contenuto.  
  
## Esempio  
  
```  
// msl_auto_gcroot_get.cpp  
// compile with: /clr  
#include <msclr\auto_gcroot.h>  
  
using namespace System;  
using namespace msclr;  
  
ref class ClassA {  
   String^ m_s;  
public:  
   ClassA( String^ s ) : m_s( s ){  
      Console::WriteLine( "in ClassA constructor:" + m_s );  
   }  
   ~ClassA() {  
      Console::WriteLine( "in ClassA destructor:" + m_s );  
   }  
  
   void PrintHello() {  
      Console::WriteLine( "Hello from {0} A!", m_s );  
   }  
};  
  
void PrintA( ClassA^ a ) {  
   a->PrintHello();  
}  
  
int main() {  
   auto_gcroot<ClassA^> a = gcnew ClassA( "first" );  
   a->PrintHello();  
  
   ClassA^ a2 = a.get();  
   a2->PrintHello();  
  
   PrintA( a.get() );  
}  
```  
  
  **in ClassA constructor:first**  
**Hello from first A\!**  
**Hello from first A\!**  
**Hello from first A\!**  
**in ClassA destructor:first**   
## Requisiti  
 **File di intestazione** \<msclr\\auto\_gcroot.h\>  
  
 **Spazio dei nomi** msclr  
  
## Vedere anche  
 [Membri auto\_gcroot](../dotnet/auto-gcroot-members.md)