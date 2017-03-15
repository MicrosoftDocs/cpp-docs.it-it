---
title: "Avviso del compilatore (livello 4) C4295 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4295"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4295"
ms.assetid: 20dbff85-9f62-4ca3-8fe9-079d4512006d
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Avviso del compilatore (livello 4) C4295
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**'**   
 ***matrice* ': matrice troppo piccola per includere un carattere di terminazione null**  
  
 Una matrice è stata inizializzata ma non termina con un carattere null. L'accesso a tale matrice potrebbe pertanto generare risultati imprevisti.  
  
 Il seguente codice di esempio genera l'errore C4295:  
  
```  
// C4295.c  
// compile with: /W4  
  
int main() {  
   char a[3] = "abc";   // C4295  
}  
```