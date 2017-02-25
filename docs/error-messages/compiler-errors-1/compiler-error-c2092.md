---
title: "Errore del compilatore C2092 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2092"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2092"
ms.assetid: 037e44ae-16c8-489a-a512-dcdf7f7795a6
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2092
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

i tipi di elementi matrice 'nome matrice' non possono essere funzioni  
  
 Le matrici di funzioni non sono consentite.  Utilizzare una matrice di puntatori a funzioni.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C2092:  
  
```  
// C2092.cpp  
typedef void (F) ();  
typedef F AT[10];   // C2092  
```  
  
## Esempio  
 Possibile soluzione:  
  
```  
// C2092b.cpp  
// compile with: /c  
typedef void (F) ();  
typedef F * AT[10];  
```