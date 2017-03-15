---
title: "auto_handle::operator-&gt; | Microsoft Docs"
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
  - "msclr::auto_handle::operator->"
  - "auto_handle.operator->"
  - "auto_handle::operator->"
  - "msclr.auto_handle.operator->"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_handle::operator->"
ms.assetid: c8c7a771-ea15-41fa-981a-065b8d1162b4
caps.latest.revision: 10
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# auto_handle::operator-&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'operatore di accesso ai membri.  
  
## Sintassi  
  
```  
_element_type ^ operator->();  
```  
  
## Valore restituito  
 Oggetto di cui è stato eseguito il wrapping da `auto_handle`.  
  
## Esempio  
  
```  
// msl_auto_handle_op_arrow.cpp  
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
  
   int m_i;  
};  
  
int main() {  
   auto_handle<ClassA> a( gcnew ClassA( "first" ) );  
   a->PrintHello();  
  
   a->m_i = 5;  
   Console::WriteLine( "a->m_i = {0}", a->m_i );  
}  
```  
  
  **Fare attenzione innanzitutto A\!**  
**AM\>\_i \= 5**   
## Requisiti  
 msclr \<\\ auto\_handle.h di**File di intestazione** \>  
  
 msclr di**Spazio dei nomi**  
  
## Vedere anche  
 [Membri auto\_handle](../dotnet/auto-handle-members.md)   
 [auto\_handle::get](../dotnet/auto-handle-get.md)