---
title: "Errore del compilatore C2462 | Microsoft Docs"
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
  - "C2462"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2462"
ms.assetid: a8601bf8-f5ce-41de-9117-e2632bd4996b
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2462
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': impossibile definire un tipo in un'espressione 'new'  
  
 Non è possibile definire un tipo nel campo dell'operando dell'operatore `new`.  Inserire la definizione del tipo in un'istruzione distinta.  
  
 Il seguente codice di esempio genera l'errore C2462:  
  
```  
// C2462.cpp  
int main() {  
   new struct S { int i; };   // C2462  
}  
```