---
title: "Errore del compilatore C2589 | Microsoft Docs"
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
  - "C2589"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2589"
ms.assetid: 1d7942c7-8a81-4bb4-b272-76a0019e8513
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2589
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': token non valido a destra di '::'  
  
 Se a sinistra dell'operatore di risoluzione dell'ambito \(::\) è presente un nome di classe, struttura o unione, il token a destra deve essere un membro di una classe, struttura o unione.  In caso contrario, a destra è possibile utilizzare qualsiasi identificatore globale.  
  
 Non è possibile sottoporre a overload l'operatore di risoluzione dell'ambito.  
  
 Il seguente codice di esempio genera l'errore C2589:  
  
```  
// C2589.cpp  
void Test(){}  
class A {};  
void operator :: ();   // C2589  
  
int main() {  
   ::Test();  
}  
```