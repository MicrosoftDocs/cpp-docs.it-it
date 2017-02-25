---
title: "Errore del compilatore C2705 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2705"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2705"
ms.assetid: 29249ea3-4ea7-4105-944b-bdb83e8d6852
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2705
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'etichetta': salto non valido nell'ambito 'blocco gestore eccezioni'  
  
 L'esecuzione salta a un'etichetta in un blocco `try`\/`catch`, `__try`\/`__except`, `__try`\/`__finally`.  Per ulteriori informazioni, vedere [Gestione delle eccezioni](../../cpp/exception-handling-in-visual-cpp.md).  
  
 Il seguente codice di esempio genera l'errore C2705:  
  
```  
// C2705.cpp  
int main() {  
goto trouble;  
   __try {  
      trouble: ;   // C2705  
   }  
   __finally {}  
  
   // try the following line instead  
   // trouble: ;  
}  
```