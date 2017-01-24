---
title: "Errore del compilatore C2007 | Microsoft Docs"
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
  - "C2007"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2007"
ms.assetid: ecd09d99-5036-408b-9e46-bc15488f049e
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2007
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

sintassi \#define  
  
 Non è presente alcun identificatore dopo `#define`.  Per correggere l'errore, utilizzare un identificatore.  
  
 Il seguente codice di esempio genera l'errore C2007:  
  
```  
// C2007.cpp  
#define   // C2007  
```  
  
 Possibile soluzione:  
  
```  
// C2007b.cpp  
// compile with: /c  
#define true 1  
```