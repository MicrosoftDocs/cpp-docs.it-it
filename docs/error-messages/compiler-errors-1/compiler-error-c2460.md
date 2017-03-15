---
title: "Errore del compilatore C2460 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2460"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2460"
ms.assetid: d969fca9-3ac5-4e4e-88fc-df05510e2093
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2460
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore1': utilizza 'identificatore2', che è in corso di definizione  
  
 Una classe o una struttura \(`identifier2`\) è dichiarata come membro di se stessa \(`identifier1`\).  Non sono consentite definizioni ricorsive di classi e strutture.  
  
 Il seguente codice di esempio genera l'errore C2460:  
  
```  
// C2460.cpp  
class C {  
   C aC;    // C2460  
};  
```  
  
 Utilizzare invece un riferimento a un puntatore nella classe.  
  
```  
// C2460.cpp  
class C {  
   C * aC;    // OK  
};  
```