---
title: "auto_gcroot::operator bool | Microsoft Docs"
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
  - "auto_gcroot.operator bool"
  - "auto_gcroot::operator bool"
  - "msclr.auto_gcroot.operator bool"
  - "msclr::auto_gcroot::operator bool"
  - "operator bool"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operatore bool"
ms.assetid: 87d38498-4221-4de8-8d02-c2dd2e6274ec
caps.latest.revision: 15
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# auto_gcroot::operator bool
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Operatore per utilizzare `auto_gcroot` in un'espressione condizionale.  
  
## Sintassi  
  
```  
operator bool() const;  
```  
  
## Valore restituito  
 `true` se l'oggetto di cui è stato eseguito il wrapping è valido; `false` in caso contrario.  
  
## Note  
 Questo operatore effettivamente converte in `_detail_class::_safe_bool` che è più sicuro di `bool` perché non può essere convertito in un tipo integrale.  
  
## Esempio  
  
```  
// msl_auto_gcroot_operator_bool.cpp  
// compile with: /clr  
#include <msclr\auto_gcroot.h>  
  
using namespace System;  
using namespace msclr;  
  
int main() {  
   auto_gcroot<String^> s;  
   if ( s ) Console::WriteLine( "s is valid" );  
   if ( !s ) Console::WriteLine( "s is invalid" );  
   s = "something";  
   if ( s ) Console::WriteLine( "now s is valid" );  
   if ( !s ) Console::WriteLine( "now s is invalid" );  
   s.reset();  
   if ( s ) Console::WriteLine( "now s is valid" );  
   if ( !s ) Console::WriteLine( "now s is invalid" );  
}  
```  
  
  **s non è valida**  
**ora s è valida**  
**ora s non è valida**   
## Requisiti  
 msclr \<\\ auto\_gcroot.h di**File di intestazione** \>  
  
 msclr di**Spazio dei nomi**  
  
## Vedere anche  
 [Membri auto\_gcroot](../dotnet/auto-gcroot-members.md)   
 [auto\_gcroot::operator\!](../dotnet/auto-gcroot-operator-logical-not.md)