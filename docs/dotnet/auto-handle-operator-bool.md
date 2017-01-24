---
title: "auto_handle::operator bool | Microsoft Docs"
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
  - "auto_handle.operator bool"
  - "msclr.auto_handle.operator bool"
  - "operator bool"
  - "msclr::auto_handle::operator bool"
  - "auto_handle::operator bool"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_handle::operator bool"
ms.assetid: 2e535e99-cf87-4008-b588-02c587d77453
caps.latest.revision: 12
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# auto_handle::operator bool
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Operatore per utilizzare `auto_handle` in un'espressione condizionale.  
  
## Sintassi  
  
```  
operator bool();  
```  
  
## Valore restituito  
 `true` se è stato eseguito il wrapping dell'oggetto specificato; `false` in caso contrario.  
  
## Note  
 Questo operatore effettivamente converte in `_detail_class::_safe_bool` che è più sicuro di `bool` perché non può essere convertito in un tipo integrale.  
  
## Esempio  
  
```  
// msl_auto_handle_operator_bool.cpp  
// compile with: /clr  
#include <msclr\auto_handle.h>  
  
using namespace System;  
using namespace msclr;  
  
int main() {  
   auto_handle<String> s1;  
   auto_handle<String> s2 = "hi";  
   if ( s1 ) Console::WriteLine( "s1 is valid" );  
   if ( !s1 ) Console::WriteLine( "s1 is invalid" );  
   if ( s2 ) Console::WriteLine( "s2 is valid" );  
   if ( !s2 ) Console::WriteLine( "s2 is invalid" );  
   s2.reset();  
   if ( s2 ) Console::WriteLine( "s2 is now valid" );  
   if ( !s2 ) Console::WriteLine( "s2 is now invalid" );  
}  
```  
  
  **s1 is invalid**  
**s2 is valid**  
**s2 is now invalid**   
## Requisiti  
 **File di intestazione** \<msclr\\auto\_handle.h\>  
  
 **Spazio dei nomi** msclr  
  
## Vedere anche  
 [Membri auto\_handle](../dotnet/auto-handle-members.md)   
 [auto\_handle::operator\!](../dotnet/auto-handle-operator-logical-not.md)