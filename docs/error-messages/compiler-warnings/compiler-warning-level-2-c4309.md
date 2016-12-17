---
title: "Avviso del compilatore (livello 2) C4309 | Microsoft Docs"
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
  - "C4309"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4309"
ms.assetid: cb3f41ef-fd8a-4def-baa1-924e751fca68
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 2) C4309
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'conversione': troncamento di valore costante  
  
 A causa della conversione di tipo, una costante ha superato lo spazio a essa allocato.  Potrebbe essere necessario utilizzare un tipo più grande per la costante.  
  
 Il seguente codice di esempio genera l'errore C4309:  
  
```  
// C4309.cpp  
// compile with: /W2  
int main()  
{  
   char c = 128;   // C4309  
}  
```