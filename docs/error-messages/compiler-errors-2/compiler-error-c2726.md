---
title: "Errore del compilatore C2726 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2726"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2726"
ms.assetid: f0191bb7-c175-450b-bf09-a3213db96d09
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Errore del compilatore C2726
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'gcnew' può essere utilizzato solo per creare un oggetto con tipo gestito o WinRT  
  
 Non è possibile creare un'istanza di un tipo nativo nell'heap del Garbage Collector.  
  
 L'esempio seguente genera l'errore C2726 e mostra come risolverlo:  
  
```  
// C2726.cpp  
// compile with: /clr  
using namespace System;  
class U {};  
ref class V {};  
value class W {};  
  
int main() {  
   U* pU = gcnew U;    // C2726  
   U* pU2 = new U;   // OK  
   V^ p2 = gcnew V;   // OK  
   W p3;   // OK  
  
}  
```  
  
 L'esempio seguente genera l'errore C2726 e mostra come risolverlo:  
  
```  
// C2726b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
class U {};  
__gc class V {};  
  
int main() {  
   U* pU = __gc new U;    // C2726  
   U* pU2 = new U;    // OK  
   V* p2 = __gc new V;  
}  
```