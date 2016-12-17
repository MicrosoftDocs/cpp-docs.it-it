---
title: "Errore del compilatore C2872 | Microsoft Docs"
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
  - "C2872"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2872"
ms.assetid: c619ef97-6e0e-41d7-867c-f8d28a07d553
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2872
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': simbolo ambiguo  
  
 Impossibile stabilire a quale simbolo si fa riferimento.  
  
 L'errore C2872 può verificarsi se un file di intestazione contiene una [Direttiva using](../../misc/using-directive-cpp.md) e un file di intestazione successivo che viene specificato con `#include` contiene un tipo presente anche nello spazio dei nomi specificato nella direttiva `using`.  Specificare una direttiva `using` solo dopo aver specificato tutti i file di intestazione con `#include`.  
  
 Per ulteriori informazioni riguardo C2872, vedere [http:\/\/support.microsoft.com\/default.aspx?scid\=kb;it\-it;316317](http://support.microsoft.com/default.aspx?scid=kb;en-us;316317).  
  
 Il seguente codice di esempio genera l'errore C2872:  
  
```  
// C2872.cpp  
namespace A {  
   int i;  
}  
  
using namespace A;  
int i;  
int main() {  
   ::i++;   // ok  
   A::i++;   // ok  
   i++;   // C2872 ::i or A::i?  
}  
```