---
title: "Compiler Error C2355 | Microsoft Docs"
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
  - "C2355"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2355"
ms.assetid: 0a947881-d61f-4f98-8409-32140f39500b
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2355
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'this': riferimento possibile solo all'interno di funzioni membro non statiche o inizializzatori di membri dati non statici  
  
 Il puntatore `this` è valido solo all'interno di funzioni membro non statiche o in inizializzatori di membri dati non statici.  Questo errore può verificarsi quando l'ambito di classe di una definizione di funzione membro esterna alla dichiarazione di classe non viene qualificato correttamente.  Questo errore può verificarsi anche quando il puntatore `this` viene usato in una funzione non dichiarata nella classe.  
  
 Per risolvere questo problema, verificare che la definizione di funzione membro corrisponda a una dichiarazione di funzione membro nella classe e che non sia dichiarata static.  Per gli inizializzatori di membri dati, assicurarsi che il membro dati non sia dichiarato static.  
  
 L'esempio seguente genera l'errore C2355 e mostra come risolverlo:  
  
```  
// C2355.cpp  
// compile with: /c  
class MyClass {};  
MyClass *p = this;   // C2355  
  
// OK  
class MyClass2 {  
public:  
   void Test() {  
      MyClass2 *p = this;  
   }  
};  
```