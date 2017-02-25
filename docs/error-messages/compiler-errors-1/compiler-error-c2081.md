---
title: "Errore del compilatore C2081 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2081"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2081"
ms.assetid: 7db9892d-364d-4178-a49d-f8398ece09a0
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2081
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': nome non valido nell'elenco di parametri formali  
  
 Si è verificato un errore di sintassi causato dall'identificatore.  
  
 Questo errore può essere causato dall'utilizzo del vecchio stile per l'elenco di parametri formali.  È necessario specificare il tipo di parametri formali nell'apposito elenco.  
  
 Il seguente codice di esempio genera l'errore C2081:  
  
```  
// C2081.c  
void func( int i, j ) {}  // C2081, no type specified for j  
```  
  
 Possibile soluzione:  
  
```  
// C2081b.c  
// compile with: /c  
void func( int i, int j ) {}  
```