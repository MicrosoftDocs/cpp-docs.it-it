---
title: "Avviso del compilatore (livello 2) C4307 | Microsoft Docs"
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
  - "C4307"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4307"
ms.assetid: 7cca11e9-be61-49e4-8b15-88b84f0cbf07
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 2) C4307
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operatore': overflow di costante integrale  
  
 L'operatore viene utilizzato in un'espressione che restituisce una costante integer in overflow rispetto allo spazio a essa allocato.  Potrebbe essere necessario utilizzare un tipo più grande per la costante.  Un tipo **signed int** contiene un valore più piccolo rispetto a un tipo `unsigned int` poiché utilizza un bit per rappresentare il segno.  
  
 Il seguente codice di esempio genera l'errore C4307:  
  
```  
// C4307.cpp  
// compile with: /W2  
int i = 2000000000 + 2000000000;   // C4307  
int j = (unsigned)2000000000 + 2000000000;   // OK  
  
int main()  
{  
}  
```