---
title: "Avviso del compilatore (livello 4) C4740 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4740"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4740"
ms.assetid: 85528969-966a-44b4-8a2f-971704c64477
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 4) C4740
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il flusso in entrata o in uscita del codice dell'assembly inline impedisce l'ottimizzazione globale  
  
 Quando è presente un flusso in entrata o in uscita da un blocco `asm`, le ottimizzazioni globali vengono disabilitate per la funzione specifica.  
  
 Il seguente codice di esempio genera l'errore C4740:  
  
```  
// C4740.cpp  
// compile with: /O2 /W4  
// processor: x86  
int main() {  
   __asm jmp tester  
   tester:;  
}  
```