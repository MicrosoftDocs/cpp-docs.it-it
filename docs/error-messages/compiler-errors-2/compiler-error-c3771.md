---
title: "Errore del compilatore C3771 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3771"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3771"
ms.assetid: 68c23b25-7f21-4eaa-8f7e-38fda1130a69
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Errore del compilatore C3771
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

"identifier": impossibile trovare la dichiarazione Friend nell'ambito dello spazio dei nomi più vicino  
  
 La dichiarazione di modello di classe per l'*identificatore* del modello specificato non è stato trovato nello spazio dei nomi corrente.  
  
### Per correggere l'errore  
  
-   Verificare che la dichiarazione di modello di classe per l'identificatore del modello sia definita nello spazio dei nomi corrente o che l'identificatore del modello sia un nome completo.  
  
## Esempio  
 Il codice di esempio seguente dichiara una funzione e un modello di classe nello spazio dei nomi `NA` ma tenta di dichiarare un modello di funzione Friend nello spazio dei nomi `NB`.  
  
```  
// C3771.cpp // compile with: /c namespace NA { template<class T> class A { void aFunction(T t) {}; }; } // using namespace NA; namespace NB { class X { template<class T> friend void A<T>::aFunction(T); // C3771 // try the following line instead //      template<class T> friend void NA::A<T>::aFunction(T); // or try "using namespace NA;" instead. }; }  
```  
  
## Vedere anche  
 [Specifiche dei modelli](../Topic/Template%20Specifications.md)