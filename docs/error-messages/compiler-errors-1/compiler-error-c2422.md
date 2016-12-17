---
title: "Errore del compilatore C2422 | Microsoft Docs"
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
  - "C2422"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2422"
ms.assetid: ef0ec302-4028-4778-b134-0b8cea4bcad9
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2422
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

override di segmento non valido in 'operando'  
  
 Un operatore di override di segmento \(due punti\) viene utilizzato in modo errato su un operando da parte del codice assembly inline.  Fra le cause possibili vi sono le seguenti:  
  
-   Il registro che precede l'operatore non è un registro di segmento.  
  
-   Il registro che precede l'operatore non è l'unico registro di segmento nell'operando.  
  
-   L'operatore di override del segmento appare in un operatore di riferimento indiretto \(parentesi\).  
  
-   L'espressione che segue l'operatore di override del segmento non è un operando immediato o di memoria.  
  
 Il seguente codice di esempio genera l'errore C2422:  
  
```  
// C2422.cpp  
// processor: x86  
int main() {  
   _asm {  
      mov AX, [BX:ES]   // C2422  
      mov AX, ES   // OK  
   }  
}  
```