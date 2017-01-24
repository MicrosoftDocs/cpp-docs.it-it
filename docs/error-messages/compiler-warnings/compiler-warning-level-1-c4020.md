---
title: "Avviso del compilatore (livello 1) C4020 | Microsoft Docs"
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
  - "C4020"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4020"
ms.assetid: 8c4cd6be-9371-4c8c-b0ff-a5ad367bbab0
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4020
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': troppi parametri effettivi  
  
 Il numero di parametri effettivi in una chiamata di funzione supera il numero di parametri formali nella definizione o nel prototipo della funzione.  I parametri effettivi supplementari vengono passati in base alla convenzione di chiamata della funzione.  
  
 Il seguente codice di esempio genera l'errore C4020:  
  
```  
// C4020.c  
// compile with: /W1 /c  
void f(int);  
int main() {  
   f(1,2);   // C4020  
}  
```  
  
 Possibile soluzione:  
  
```  
// C4020b.c  
// compile with: /c  
void f(int);  
int main() {  
   f(1);  
}  
```