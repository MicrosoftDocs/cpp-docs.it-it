---
title: "auto_gcroot::swap | Microsoft Docs"
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
  - "msclr.auto_gcroot.swap"
  - "msclr::auto_gcroot::swap"
  - "auto_gcroot::swap"
  - "auto_gcroot.swap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_gcroot::swap"
ms.assetid: 4915c629-6a53-432c-8155-3a7511dc70cb
caps.latest.revision: 12
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# auto_gcroot::swap
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Oggetti di scambio con un altro `auto_gcroot`.  
  
## Sintassi  
  
```  
void swap(  
   auto_gcroot<_element_type> & _right  
);  
```  
  
#### Parametri  
 `_right`  
 `auto_gcroot` con cui lo scambio di oggetti.  
  
## Esempio  
  
```  
// msl_auto_gcroot_swap.cpp  
// compile with: /clr  
#include <msclr\auto_gcroot.h>  
  
using namespace System;  
using namespace msclr;  
  
int main() {  
   auto_gcroot<String^> s1 = "string one";  
   auto_gcroot<String^> s2 = "string two";  
  
   Console::WriteLine( "s1 = '{0}', s2 = '{1}'",  
      s1->ToString(), s2->ToString() );  
   s1.swap( s2 );  
   Console::WriteLine( "s1 = '{0}', s2 = '{1}'",  
      s1->ToString(), s2->ToString() );  
}  
```  
  
  **s1 \= stringa "uno", s2 \= "stringa" due**  
**s1 \= "stringa" due, s2 \= stringa "uno"**   
## Requisiti  
 msclr \<\\ auto\_gcroot.h di**File di intestazione** \>  
  
 msclr di**Spazio dei nomi**  
  
## Vedere anche  
 [Membri auto\_gcroot](../dotnet/auto-gcroot-members.md)   
 [Funzione swap \(auto\_gcroot\)](../dotnet/swap-function-auto-gcroot.md)