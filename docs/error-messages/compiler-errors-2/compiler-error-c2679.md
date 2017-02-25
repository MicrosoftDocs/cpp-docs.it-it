---
title: "Errore del compilatore C2679 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2679"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2679"
ms.assetid: 1a5f9d00-9190-4aa6-bc72-949f68ec136f
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2679
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operatore' binario: non è stato trovato alcun operatore che accetti un operando destro di tipo 'tipo'. È anche possibile che non vi siano conversioni accettabili  
  
 Per utilizzare l'operatore, è necessario eseguirne l'overload per il tipo specificato o definire una conversione in un tipo per cui l'operatore è definito.  
  
 Il seguente codice di esempio genera l'errore C2679:  
  
```  
// C2679.cpp  
class C {  
public:  
   C();   // no constructor with an int argument  
} c;  
  
class D {  
public:  
   D(int) {}  
   D(){}  
} d;  
  
int main() {  
   c = 10;   // C2679  
   d = 10;   // OK  
}  
```