---
title: "Avviso del compilatore (livello 1) C4530 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4530"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4530"
ms.assetid: a04dcdb2-84db-459d-9e5e-4e743887465f
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso del compilatore (livello 1) C4530
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzato gestore eccezioni C\+\+, ma la semantica di rimozione non è attivata.Specificare \/EHsc  
  
 È stato utilizzato il sistema di gestione delle eccezioni C\+\+, ma non è stata selezionata l'opzione [\/EHsc](../../build/reference/eh-exception-handling-model.md).  
  
 Quando l'opzione \/EHsc non è attiva, un oggetto con archiviazione automatica nel frame, tra la funzione che esegue la generazione e quella che la intercetta, non viene distrutto.  Un oggetto con archiviazione automatica creato in un blocco **try** o **catch** viene invece distrutto.  
  
 Il seguente codice di esempio genera l'errore C4530:  
  
```  
// C4530.cpp  
// compile with: /W1  
int main() {  
   try{} catch(int*) {}   // C4530  
}  
```  
  
 Per risolvere il problema, compilare il codice di esempio con \/EHsc.