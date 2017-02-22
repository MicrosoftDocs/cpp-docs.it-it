---
title: "Errore del compilatore C3834 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3834"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3834"
ms.assetid: 059e0dc4-300b-4e74-b6c2-41a57831fe2a
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C3834
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

cast esplicito non valido per un puntatore di blocco; utilizzare una variabile locale bloccata  
  
 Non sono consentiti i cast espliciti a un puntatore bloccato.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3834.  
  
```  
// C3834.cpp  
// compile with: /clr  
int main() {  
   int x = 33;  
  
   pin_ptr<int> p = safe_cast<pin_ptr<int> >(&x);   // C3834  
   pin_ptr<int> p2 = &x;   // OK  
}  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3834.  
  
```  
// C3834_b.cpp  
// compile with: /clr:oldSyntax  
using namespace System;  
  
int main() {  
   const __wchar_t * pS = reinterpret_cast<const __wchar_t __pin*>(S"hello");   // C3834  
  
   // OK   
   // declare a pinning variable  
   String __pin* ppin = S"Hello";  
  
   // cast pinning variable to unmanaged type  
   const __wchar_t * pS2 = reinterpret_cast<__wchar_t*>(ppin);     
  
   pS2 += 6;  
}  
```