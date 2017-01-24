---
title: "Avviso del compilatore (livello 1) C4142 | Microsoft Docs"
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
  - "C4142"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4142"
ms.assetid: 1fdfc3dc-60a2-4f00-b133-20e400f9b7a6
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4142
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

ridefinizione di tipo benigna  
  
 Un tipo viene ridefinito senza che ciò abbia effetto sul codice generato.  
  
 Possibili cause:  
  
-   Una funzione membro di una classe derivata ha un tipo restituito diverso dalla funzione membro corrispondente della classe base.  
  
-   Un tipo definito con il comando `typedef` viene ridefinito con una sintassi diversa.  
  
 Il seguente codice di esempio genera l'errore C4142:  
  
```  
// C4142.c  
// compile with: /W1  
float X2;  
X2 = 2.0 + 1.0;   // C4142  
  
int main() {  
   float X2;  
   X2 = 2.0 + 1.0;   // OK  
}  
```