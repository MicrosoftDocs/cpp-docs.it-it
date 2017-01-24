---
title: "Errore del compilatore C2249 | Microsoft Docs"
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
  - "C2249"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2249"
ms.assetid: bdd6697c-e04b-49b9-8e40-d9eb6d74f2b6
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2249
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'membro': nessun percorso per l'accesso a 'membro' dichiarato nella base virtuale 'classe'  
  
 Il `member` è ereditato da una classe base o struttura `virtual` non pubblica.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2249:  
  
```  
// C2249.cpp  
class A {  
private:  
   void privFunc( void ) {};  
public:  
   void pubFunc( void ) {};  
};  
  
class B : virtual public A {} b;  
  
int main() {  
   b.privFunc();    // C2249, private member of A  
   b.pubFunc();    // OK  
}  
```  
  
## Esempio  
 L'errore C2249 può anche verificarsi se si tenta di assegnare un flusso dalla libreria C\+\+ standard a un altro flusso.  Nell'esempio seguente viene generato l'errore C2249:  
  
```  
// C2249_2.cpp  
#include <iostream>  
using namespace std;  
int main() {  
   cout = cerr;   // C2249  
   #define cout cerr;   // OK  
}  
```