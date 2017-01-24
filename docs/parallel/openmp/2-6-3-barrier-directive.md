---
title: "2.6.3 barrier Directive | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 4485a3d7-533f-4fec-8128-a131bec7fa16
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.6.3 barrier Directive
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**barriera** la direttiva sincronizza tutti i thread in un team.  Una volta rilevato, ogni thread in attende del team finché tutti altre ha raggiunto questo punto.  La sintassi di **barriera** la direttiva è la seguente:  
  
```  
#pragma omp barrier new-line  
```  
  
 Dopo tutti i thread del team hanno rilevato la barriera, ogni thread all'inizio del team eseguendo le istruzioni dopo la direttiva di barriera in parallelo.  Si noti che in quanto **barriera** la direttiva non dispone dell'istruzione in linguaggio c come parte della sintassi, esistono alcune restrizioni relative alla posizione all'interno di un programma.  vedere [Appendice C\#](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md) per la grammatica formale.  Nell'esempio riportato di seguito vengono illustrate le seguenti restrizioni.  
  
```  
/* ERROR - The barrier directive cannot be the immediate  
*          substatement of an if statement  
*/  
if (x!=0)  
   #pragma omp barrier  
...  
  
/* OK - The barrier directive is enclosed in a  
*      compound statement.  
*/  
if (x!=0) {  
   #pragma omp barrier  
}  
```