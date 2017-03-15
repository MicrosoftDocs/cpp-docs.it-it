---
title: "Errore del compilatore C3071 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3071"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3071"
ms.assetid: 69879e66-a60e-4058-9bbd-d5c5e2d8ee37
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3071
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

operatore 'operator' applicabile solo a un'istanza di una classe di riferimento o un tipo di valore  
  
 Un operatore CLR non può essere usato in un tipo nativo.  L'operatore può essere usato in una classe di riferimento o in un una struct di riferimento \(un tipo di valore\), ma non in un tipo nativo, ad esempio int, o in un alias per un tipo nativo, ad esempio System::Int32.  Questi tipi non possono essere boxed nel codice C\+\+ in modo da fare riferimento alla variabile nativa e quindi l'operatore non può essere usato.  
  
 Per altre informazioni, vedere [Tracking Reference Operator](../../windows/tracking-reference-operator-cpp-component-extensions.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3071.  
  
```  
// C3071.cpp  
// compile with: /clr  
class N {};  
ref struct R {};  
  
int main() {  
   N n;  
   %n;   // C3071  
  
   R r;  
   R ^ r2 = %r;   // OK  
}  
```