---
title: "Errore del compilatore C2286 | Microsoft Docs"
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
  - "C2286"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2286"
ms.assetid: 078e0201-35cc-42e2-8dbc-6f8cf557b098
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2286
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

rappresentazione di puntatori a membro di 'identificatore' già impostata su 'ereditarietà'. Dichiarazione ignorata  
  
 Esistono due diverse rappresentazioni di puntatore a membro per classe.  
  
 Per ulteriori informazioni, vedere [Parole chiave di ereditarietà](../../cpp/inheritance-keywords.md).  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C2286:  
  
```  
// C2286.cpp  
// compile with: /c  
class __single_inheritance X;  
class __multiple_inheritance X;   // C2286  
class  __multiple_inheritance Y;   // OK  
```