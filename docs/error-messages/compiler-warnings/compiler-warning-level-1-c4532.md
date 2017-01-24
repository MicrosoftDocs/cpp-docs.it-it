---
title: "Avviso del compilatore (livello 1) C4532 | Microsoft Docs"
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
  - "C4532"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4532"
ms.assetid: 4e2a286a-d233-4106-9f65-29be1a94ca02
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4532
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'continuazione': il salto dal blocco \_\_finally genera un comportamento indefinito durante la gestione della terminazione  
  
 È stata rilevata una delle seguenti parole chiave:  
  
-   [continue](../../cpp/continue-statement-cpp.md)  
  
-   [break](../../cpp/break-statement-cpp.md)  
  
-   [goto](../../cpp/goto-statement-cpp.md)  
  
 che provoca l'uscita da un blocco [\_\_finally](../../cpp/try-finally-statement.md) o [finally](../../dotnet/finally.md) durante una terminazione anomala.  
  
 Se viene generata un'eccezione e, mentre lo stack viene svuotato durante l'esecuzione dei gestori di terminazione \(blocchi `__finally` o finally\), viene eseguita l'uscita da un blocco `__finally` prima che il blocco `__finally` termini, il comportamento sarà indefinito.  È possibile che il controllo non torni al codice di svuotamento e che, pertanto, l'eccezione non venga gestita correttamente.  
  
 Se è necessario uscire da un blocco **\_\_finally** , verificare prima la presenza di terminazioni anomale.  
  
 Nell'esempio seguente viene generato l'avviso C4532. Per evitare la visualizzazione degli avvisi, è sufficiente impostare le istruzioni di spostamento come commento.  
  
```  
// C4532.cpp  
// compile with: /W1  
// C4532 expected  
int main() {  
   int i;  
   for (i = 0; i < 10; i++) {  
      __try {  
      } __finally {  
         // Delete the following line to resolve.  
         continue;  
      }  
  
      __try {  
      } __finally {  
         // Delete the following line to resolve.  
         break;  
      }  
   }  
}  
```