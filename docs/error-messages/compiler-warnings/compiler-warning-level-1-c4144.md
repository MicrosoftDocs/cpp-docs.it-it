---
title: "Avviso del compilatore (livello 1) C4144 | Microsoft Docs"
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
  - "C4144"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4144"
ms.assetid: a37b445d-dbc6-43b4-8d95-ffd0e4225464
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4144
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'espressione': espressione relazionale come espressione switch  
  
 L'espressione relazionale specificata è stata utilizzata come espressione di controllo di un'istruzione [switch](../../cpp/switch-statement-cpp.md).  Alle istruzioni case associate verranno forniti valori booleani.  Il seguente codice di esempio genera l'errore C4144:  
  
```  
// C4144.cpp  
// compile with: /W1  
int main()  
{  
   int i = 0;  
   switch(!i) {   // C4144, remove the ! to resolve  
      case 1:  
         break;  
      default:  
         break;  
   }  
}  
```