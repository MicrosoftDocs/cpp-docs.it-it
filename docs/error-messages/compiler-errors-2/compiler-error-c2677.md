---
title: "Errore del compilatore C2677 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2677"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2677"
ms.assetid: 76bc0b65-f52a-45a6-b6d6-0555f89da9a8
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2677
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operatore' binario: non è stato trovato alcun operatore globale che accetti il tipo 'tipo'. È anche possibile che non vi siano conversioni accettabili  
  
 Per utilizzare l'operatore, è necessario eseguirne l'overload per il tipo specificato o definire una conversione in un tipo per cui l'operatore è definito.  
  
 Il seguente codice di esempio genera l'errore C2677:  
  
```  
// C2677.cpp  
class C {  
public:  
   C(){}  
} c;  
  
class D {  
public:  
   D(){}  
   operator int(){return 0;}  
} d;  
  
int main() {  
   int i = 1 >> c;   // C2677  
   int j = 1 >> d;   // OK operator int() defined  
}  
```