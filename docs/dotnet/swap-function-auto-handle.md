---
title: "Funzione swap (auto_handle) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "msclr::swap"
  - "msclr.swap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "swap (funzione)"
ms.assetid: 7dd91b5c-f0de-4634-a2e2-642626706e27
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Funzione swap (auto_handle)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Oggetti di scambio tra un `auto_handle` e l'altro.  
  
## Sintassi  
  
```  
template<typename _element_type>  
void swap(  
   auto_handle<_element_type> % _left,  
   auto_handle<_element_type> % _right  
);  
```  
  
#### Parametri  
 `_left`  
 Oggetto `auto_handle`.  
  
 `_right`  
 Altro oggetto `auto_handle`.  
  
## Esempio  
  
```  
// msl_swap_auto_handle.cpp  
// compile with: /clr  
#include <msclr\auto_handle.h>  
  
using namespace System;  
using namespace msclr;  
  
int main() {  
   auto_handle<String> s1 = "string one";  
   auto_handle<String> s2 = "string two";  
  
   Console::WriteLine( "s1 = '{0}', s2 = '{1}'",  
      s1->ToString(), s2->ToString() );  
   swap( s1, s2 );  
   Console::WriteLine( "s1 = '{0}', s2 = '{1}'",  
      s1->ToString(), s2->ToString() );  
}  
```  
  
  **s1 \= stringa "uno", s2 \= "stringa" due**  
**s1 \= "stringa" due, s2 \= stringa "uno"**   
## Requisiti  
 msclr \<\\ auto\_handle.h di**File di intestazione** \>  
  
 msclr di**Spazio dei nomi**  
  
## Vedere anche  
 [auto\_handle](../dotnet/auto-handle.md)   
 [auto\_handle::swap](../dotnet/auto-handle-swap.md)