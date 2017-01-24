---
title: "Errore del compilatore C2309 | Microsoft Docs"
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
  - "C2309"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2309"
ms.assetid: 6303d5b5-72cf-42b8-92ce-b1eb48e80d48
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2309
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

prevista una dichiarazione di eccezione tra parentesi per il gestore catch  
  
 Un gestore catch non contiene tipi tra parentesi.  
  
 Il seguente codice di esempio genera l'errore C2309:  
  
```  
// C2309.cpp  
// compile with: /EHsc  
#include <eh.h>  
class C {};  
int main() {  
   try {  
      throw "ooops!";  
   }  
   catch C {}   // C2309  
   // try the following line instead  
   // catch( C ) {}  
}  
```