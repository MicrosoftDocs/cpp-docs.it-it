---
title: "Compiler Error C3498 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3498"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3498"
ms.assetid: 0a5a7817-0872-4119-83bf-980a19113374
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3498
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': impossibile acquisire una variabile con un tipo gestito o WinRT  
  
 Non è possibile acquisire una variabile con un tipo gestito o un tipo Windows Runtime in un'espressione lambda.  
  
### Per correggere l'errore  
  
-   Passare la variabile gestita o Windows Runtime all'elenco di parametri dell'espressione lambda.  
  
## Esempio  
 L'esempio seguente genera l'errore C3498 perché una variabile con un tipo gestito viene visualizzata nell'elenco di acquisizione di un'espressione lambda:  
  
```  
// C3498a.cpp  
// compile with: /clr  
using namespace System;  
  
int main()  
{  
   String ^ s = "Hello";  
   [&s](String ^ r)   
      { return String::Concat(s, r); } (", World!"); // C3498  
}  
```  
  
## Esempio  
 L'esempio seguente risolve l'errore C3498 passando la variabile gestita `s` all'elenco di parametri dell'espressione lambda:  
  
```  
// C3498b.cpp  
// compile with: /clr  
using namespace System;  
  
int main()  
{  
   String ^ s = "Hello";  
   [](String ^ s, String ^ r)   
      { return String::Concat(s, r); } (s, ", World!");  
}  
```  
  
## Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)