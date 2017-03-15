---
title: "Avviso del compilatore (livello 1) C4717 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4717"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4717"
ms.assetid: 5ef3c6c7-8599-4714-a973-0f5b69cdab3c
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4717
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': funzione ricorsiva su tutti i percorsi di controlli, provocherà un overflow dello stack in fase di esecuzione  
  
 Ogni percorso attraverso una funzione contiene una chiamata alla funzione stessa.  Poiché non è possibile terminare la funzione senza chiamarla in modo ricorsivo, la funzione non terminerà mai.  
  
 Il seguente codice di esempio genera l'errore C4717:  
  
```  
// C4717.cpp  
// compile with: /W1 /c  
// C4717 expected  
int func(int x) {  
   if (x > 1)  
      return func(x - 1); // recursive call  
   else {  
      int y = func(0) + 1; // recursive call  
      return y;  
   }  
}  
  
int main(){  
   func(1);  
}  
```