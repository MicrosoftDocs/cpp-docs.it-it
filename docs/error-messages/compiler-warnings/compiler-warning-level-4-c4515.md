---
title: "Avviso del compilatore (livello 4) C4515 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4515"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4515"
ms.assetid: 167b5177-3f89-418b-b6c8-7de634f6b28f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 4) C4515
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'spazio dei nomi': lo spazio dei nomi utilizza se stesso  
  
 Uno spazio dei nomi viene utilizzato in modo ricorsivo.  
  
 Il seguente codice di esempio genera l'errore C4515:  
  
```  
// C4515.cpp  
// compile with: /W4  
namespace A  
{  
   using namespace A; // C4515  
}  
  
int main()  
{  
}  
```