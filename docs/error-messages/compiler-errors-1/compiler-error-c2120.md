---
title: "Errore del compilatore C2120 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2120"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2120"
ms.assetid: b0f3f66c-6cd2-4f48-9ea3-c270b53c2b8c
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2120
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'void' non valido con tutti i tipi  
  
 Il tipo `void` è utilizzato in una dichiarazione con un altro tipo.  
  
 Il seguente codice di esempio genera l'errore C2120:  
  
```  
// C2120.cpp  
int main() {  
   void int i;   // C2120  
   int j;   // OK  
}  
```