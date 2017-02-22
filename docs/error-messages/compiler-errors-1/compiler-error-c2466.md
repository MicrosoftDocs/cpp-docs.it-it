---
title: "Errore del compilatore C2466 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2466"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2466"
ms.assetid: 75b251d1-7d0b-4a86-afca-26adedf74486
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2466
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile allocare una matrice di dimensione costante 0  
  
 Una matrice viene allocata o dichiarata con dimensione zero.  L'espressione costante per la dimensione della matrice deve essere un numero intero maggiore di zero.  La dichiarazione di una matrice con dimensione zero è valida solo per un membro di classe, struttura o unione e solo con le estensioni Microsoft \([\/Ze](../../build/reference/za-ze-disable-language-extensions.md)\).  
  
 Il seguente codice di esempio genera l'errore C2466:  
  
```  
// C2466.cpp  
// compile with: /c  
int i[0];   // C2466  
int j[1];   // OK  
char *p;  
```