---
title: "Errore del compilatore C3861 | Microsoft Docs"
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
  - "C3861"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3861"
ms.assetid: 0a1eee30-b3db-41b1-b1e5-35949c3924d7
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3861
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': identificatore non trovato  
  
 Il compilatore non è riuscito a risolvere un riferimento a un identificatore, nemmeno usando la ricerca dipendente dall'argomento.  
  
 Per correggere l'errore, controllare l'ortografia e i caratteri maiuscoli\/minuscoli della dichiarazione dell'identificatore.  Verificare che gli [operatori di risoluzione ambito](../../cpp/scope-resolution-operator.md) e le [direttive using](../../misc/using-directive-cpp.md) dello spazio dei nomi siano usati correttamente.  Se l'identificatore è dichiarato in un file di intestazione, verificare che l'intestazione venga inclusa prima che vi si faccia riferimento.  Controllare anche che l'identificatore non venga escluso da [direttive di compilazione condizionale](../../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3861.  
  
```  
// C3861.cpp  
void f2(){}  
int main() {  
   f();   // C3861  
   f2();   // OK  
}  
```  
  
## Esempio  
 Le classi di eccezioni nella libreria standard C\+\+ ora sono nello spazio dei nomi `std`.  
  
```  
// C3861_b.cpp  
// compile with: /EHsc  
#include <iostream>  
int main() {  
   try {  
      throw exception("Exception");   // C3861  
      // try the following line instead  
      // throw std::exception("Exception");  
   }  
   catch (...) {  
      std::cout << "caught an exception" << std::endl;  
   }  
}  
```