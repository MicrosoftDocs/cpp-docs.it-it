---
title: "Errore del compilatore C3736 | Microsoft Docs"
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
  - "C3736"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3736"
ms.assetid: 579b773c-41e7-40ea-8382-2e3ce2667f4c
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3736
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'evento': deve essere un metodo o eventualmente, nel caso di eventi gestiti, un membro dati  
  
 Gli eventi nativi e COM devono essere metodi. Gli eventi .NET possono essere anche membri dati.  
  
 Il seguente codice di esempio genera l'errore C3736:  
  
```  
// C3736.cpp  
struct A {  
   __event int e();  
};  
  
struct B {  
   int f;   // C3736  
   // The following line resolves the error.  
   // int f();  
   B(A* a) {  
      __hook(&A::e, a, &B::f);  
   }  
};  
  
int main() {  
}  
```