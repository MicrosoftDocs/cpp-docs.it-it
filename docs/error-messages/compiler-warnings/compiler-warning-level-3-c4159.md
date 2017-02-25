---
title: "Avviso del compilatore (livello 3) C4159 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4159"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4159"
ms.assetid: e2cf964e-f4b8-4b2c-9569-1abb94307232
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 3) C4159
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\#pragma pragma\(pop,...\) : ha estratto l'identificatore 'identificatore' precedentemente inserito  
  
 Il codice sorgente contiene un'istruzione **push** con un identificatore per un pragma seguita da un'istruzione **pop** senza identificatore.  Di conseguenza, l'***identificatore*** viene estratto e durante i successivi utilizzi dell'***identificatore*** possono verificarsi comportamenti imprevisti.  
  
 Per evitare la visualizzazione dell'avviso, fornire un identificatore nell'istruzione **pop**.  Di seguito è riportato un esempio.  
  
```  
// C4159.cpp  
// compile with: /W3  
#pragma pack(push, f)  
#pragma pack(pop)   // C4159  
  
// using the identifier resolves the warning  
// #pragma pack(pop, f)  
  
int main()  
{  
}  
```