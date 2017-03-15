---
title: "Avviso del compilatore (livello 1) C4788 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4788"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4788"
ms.assetid: 47d75bda-f833-4bdd-93a0-a134df0cd303
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore (livello 1) C4788
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': identificatore troncato dopo 'numero' caratteri  
  
 La lunghezza massima consentita per un nome di funzione è limitata.  Quando il compilatore genera funclet per codice EH\/SEH, ne compone il nome anteponendo un testo al nome della funzione, ad esempio "\_\_catch", "\_\_unwind" o un'altra stringa.  
  
 Se il nome della funclet risultante è troppo lungo, viene troncato e viene visualizzato l'avviso C4788.  
  
 Per evitare di visualizzare l'avviso, abbreviare il nome della funzione originale.  Se la funzione è un metodo o una funzione modello C\+\+, utilizzare un typedef per una parte del nome.  Di seguito è riportato un esempio.  
  
```  
C1<x, y, z<T>>::C2<a,b,c>::f  
```  
  
 con  
  
```  
typedef C1<x, y, z<T>>::C2<a,b,c> new_class ;  
new_class::f  
```  
  
 Questo avviso viene visualizzato solo nel compilatore [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)].